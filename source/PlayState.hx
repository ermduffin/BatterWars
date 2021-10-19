package;

import flixel.addons.display.FlxBackdrop;
import flixel.effects.particles.FlxEmitter;
import flixel.system.FlxSound;
import openfl.system.System;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxColor;
import haxe.Timer;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.tile.FlxBaseTilemap;
import flixel.tile.FlxTilemap;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledTileLayer;
import Player;
import Projectile;
import BossArm;

class PlayState extends FlxState {
	private var _projectiles:FlxTypedGroup<Projectile>;
	private var _monsters:FlxTypedGroup<Monster>;
	private var _monsterProjectiles:FlxTypedGroup<Projectile>;
	private var _level:FlxTilemap;
	private var _player:Player;
	private var _boss:Boss;
	private var _bossArms:FlxTypedGroup<BossArm>;
	private var _bossProjectiles:FlxTypedGroup<Projectile>;
	private var _bossWave:FlxSprite;
	private var _lives:FlxTypedGroup<FlxSprite>;
	private var _bossLives:FlxTypedGroup<FlxSprite>;
	private var _hitSound:FlxSound;
	private var _gibs:FlxEmitter;

	override public function create() {
		super.create();
		FlxG.mouse.visible = false;
		FlxG.worldBounds.set(0, 0, 3520, 1920);
		// create the background
		var backdrop = new FlxBackdrop(AssetPaths.background__png, 1, 1, false, false);
		backdrop.x += 160;
		add(backdrop);

		// create the level from the tiled map
		_level = new FlxTilemap();
		var tiledMap = new TiledMap("assets/data/tile_map.tmx");
		var layer = cast(tiledMap.getLayer("Tile Layer 1"), TiledTileLayer);
		_level.loadMapFromArray(layer.tileArray, layer.width, layer.height, "assets/images/tile_map.png", 32, 32, FlxTilemapAutoTiling.OFF, 1);

		// create the gibs
		_gibs = new FlxEmitter();
		_gibs.velocity.set(-150, -200, 150, 0);
		_gibs.angularVelocity.set(-700);
		_gibs.acceleration.set(0, 400);
		_gibs.elasticity.set(0.5);
		_gibs.makeParticles();
		add(_gibs);

		// the player's projectiles
		_projectiles = new FlxTypedGroup<Projectile>();

		// create the player at the start of the level
		_player = new Player(352,1410,_projectiles, _gibs);

		// player position for testing the boss fight
		// _player = new Player(2336,256,_projectiles, _gibs);
		
		// focus the camera on the player
		FlxG.camera.target = _player;

		// create the boss and his attacks
		_boss = new Boss(1760, 675, _player, _gibs);
		_bossArms = _boss._arms;
		_bossProjectiles = _boss._projectiles;
		_bossWave = _boss._wave;

		add(_boss);
		add(_bossArms);
		add(_bossProjectiles);
		add(_bossWave);
		
		add(_level);

		add(_player);
		add(_projectiles);

		// the player's lives
		_lives = new FlxTypedGroup<FlxSprite>();
		// the boss's lives
		_bossLives = new FlxTypedGroup<FlxSprite>();

		// give the player 3 lives
		for (i in 0...3)
		{
			_lives.add(new FlxSprite(380 - i * 20, 20));
			_lives.members[i].makeGraphic(10, 10, FlxColor.WHITE);
			_lives.members[i].immovable = true;
			_lives.members[i].scrollFactor.set(0,0);
			_lives.members[i].camera = FlxG.camera;
		}
		add(_lives);

		// give the boss 30 lives
		for (i in 0...30)
		{
			_bossLives.add(new FlxSprite(300 - i * 3, 20));
			_bossLives.members[i].makeGraphic(3, 10, FlxColor.RED);
			_bossLives.members[i].immovable = true;
			_bossLives.members[i].scrollFactor.set(0,0);
			_bossLives.members[i].camera = FlxG.camera;
		}
		add(_bossLives);
		// hide the boss's lives until the boss fight starts
		_bossLives.visible = false;

		// create all the monsters for the level
		_monsters = new FlxTypedGroup<Monster>();
		_monsterProjectiles = new FlxTypedGroup<Projectile>();
		_monsters.add(new Monster(760,1402,_player,CHIPPY,null,_gibs));
		_monsters.add(new Monster(1664,1312,_player,GLOBBY,_monsterProjectiles,_gibs));
		_monsters.add(new Monster(1824,1402,_player,CHIPPY,null,_gibs));
		_monsters.add(new Monster(2624,1402,_player,CHIPPY,null,_gibs));
		_monsters.add(new Monster(2912,1216,_player,GLOBBY,_monsterProjectiles,_gibs));
		_monsters.add(new Monster(3040,1120,_player,GLOBBY,_monsterProjectiles,_gibs));
		_monsters.add(new Monster(2496,1024,_player,CHIPPY,null,_gibs));
		_monsters.add(new Monster(3008,602,_player,CHIPPY,null,_gibs));
		_monsters.add(new Monster(2400,256,_player,GLOBBY,_monsterProjectiles,_gibs));
		add(_monsters);
		add(_monsterProjectiles);

        FlxG.sound.playMusic(AssetPaths.OrigamiRepetikaSunnyMorningExerciseClub__ogg,0.5,true);
		// load the sound for a character taking damage
		_hitSound = FlxG.sound.load(AssetPaths.hurt__wav);
	}

	override public function update(elapsed:Float):Void {
		_player.velocity.x = 0;

		// collisions
		FlxG.collide(_level, _player);
		FlxG.collide(_level, _monsters);
		FlxG.collide(_monsters, _projectiles, hit);
		FlxG.collide(_player, _monsters, loseLife);
		FlxG.collide(_player, _monsterProjectiles, loseLife);
		FlxG.collide(_player, _bossProjectiles, loseLife);
		FlxG.overlap(_player, _bossArms, loseLife);
		FlxG.collide(_player, _bossArms, loseLife);
		FlxG.collide(_player, _bossWave, loseLife);
		FlxG.collide(_bossArms, _projectiles, loseBossLife);
		// remove the player's monsters' and boss's projectiles when they hit a wall
		FlxG.collide(_projectiles, _level, function(projectile:Projectile, level:FlxTilemap){
			projectile.exists = false;
		});
		FlxG.collide(_monsterProjectiles, _level, function(projectile:Projectile, level:FlxTilemap){
			projectile.exists = false;
		});
		FlxG.collide(_bossProjectiles, _level, function(projectile:Projectile, level:FlxTilemap){
			projectile.exists = false;
		});

		// start boss fight if the player drops through the passage leading up to the fight
		if (_player.x > 2080 && _player.x < 2272 && _player.y < 576 && _player.y > 416)
			startBossFight();

		// exit the game if escape key is pressed
		if (FlxG.keys.justPressed.ESCAPE)
			System.exit(0);

		super.update(elapsed);
	}

	// when a monster is hit by one of the player's projectiles
	private function hit(entity:FlxSprite, projectile:Projectile) {
		// remove the projectile
		projectile.exists = false;
		// the monster takes damage based on the damage dealt by the projectile
		entity.hurt(projectile.getDamage());
		// monster is pushed back by the projectile
		entity.velocity.x = 4 * entity.velocity.x;
		// stop the entity being pushed back
		Timer.delay(function(){
			entity.velocity.x = 0;
		}, 100);
		_hitSound.play();
	}
	
	// when the player is hit by a monster
	private function loseLife(player:Player, sprite:FlxSprite)
	{
		// if sprite is a projectile, remove the projectile
		if (Std.isOfType(sprite, Projectile))
			sprite.exists = false;
		// if sprite is a monster, bounce the monster backwards
		else if (Std.isOfType(sprite, Monster)) {
			sprite.velocity.x = -8 * sprite.velocity.x;
			// stop the monster's backward bounce
			Timer.delay(function(){
				sprite.velocity.x = -sprite.velocity.x / 8;
			}, 100);
		}

		// if player is flickering she cannot take damage
		if (FlxSpriteUtil.isFlickering(player))
            return;
		// flicker the player for one second
        FlxSpriteUtil.flicker(player, 1, 0.05, true, true);
		if (_lives.getFirstExisting() != null)
			_lives.getFirstExisting().exists = false;
		// if no more lives kill the player and switch to game over state
		if (_lives.getFirstExisting() == null) {
			player.kill();
			FlxG.camera.fade(FlxColor.BLACK, 2, false, function(){
                FlxG.switchState(new GameOverState());
            });
		}
		_hitSound.play();
	}

	// when the boss is hit by one of the player's projectiles
	private function loseBossLife(bossArm:BossArm, projectile:Projectile)
	{
		// remove the projectile
		projectile.exists = false;
		// if boss is flickering he cannot take damage
		if (FlxSpriteUtil.isFlickering(_boss))
			return;
		// flicker the boss for one second
		FlxSpriteUtil.flicker(_boss, 1, 0.05, true, true);
		if (_bossLives.getFirstExisting() != null)
			_bossLives.getFirstExisting().exists = false;
		// if no more lives kill the boss and switch to win state
		if (_bossLives.getFirstExisting() == null) {
			_boss.kill();
			FlxG.camera.fade(FlxColor.BLACK, 2, false, function(){
                FlxG.switchState(new WinState());
            });
		}
		_hitSound.play();
	}
	
	// start the boss fight
	private function startBossFight() {
		FlxG.camera.flash(FlxColor.WHITE, 3);
		_bossLives.visible = true;
		FlxG.sound.playMusic(AssetPaths.sawsquarenoiseBossTheme__ogg,0.5,true);
	}
}
