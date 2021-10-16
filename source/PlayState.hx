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
	private var _monsters:FlxTypedGroup<MeleeMonster>;
	private var _monsterProjectiles:FlxTypedGroup<Projectile>;
	private var _level:FlxTilemap;
	private var _player:Player;
	private var _boss:Boss;
	private var _bossArms:FlxTypedGroup<BossArm>;
	private var _bossProjectiles:FlxTypedGroup<Projectile>;
	private var _bossWave:FlxSprite;
	private var _lives:FlxTypedGroup<FlxSprite>;
	private var _bossLives:FlxTypedGroup<FlxSprite>;
	private var _hud:FlxTypedGroup<FlxTypedGroup<FlxSprite>>;
	private var _hitSound:FlxSound;
	private var _gibs:FlxEmitter;

	override public function create() {
		super.create();
		FlxG.worldBounds.set(0, 0, 3200, 1600);
		var backdrop = new FlxBackdrop(AssetPaths.background__png, 1, 1, false, false);
		add(backdrop);

		_level = new FlxTilemap();
		var tiledMap = new TiledMap("assets/data/tile_map.tmx");
		var layer = cast(tiledMap.getLayer("Tile Layer 1"), TiledTileLayer);
		_level.loadMapFromArray(layer.tileArray, layer.width, layer.height, "assets/images/tile_map.png", 32, 32, FlxTilemapAutoTiling.OFF, 1);

		_gibs = new FlxEmitter();
		_gibs.velocity.set(-150, -200, 150, 0);
		_gibs.angularVelocity.set(-700);
		_gibs.acceleration.set(0, 400);
		_gibs.elasticity.set(0.5);
		_gibs.makeParticles();
		add(_gibs);

		_projectiles = new FlxTypedGroup<Projectile>();

		_player = new Player(192,1410,_projectiles, _gibs);
	//	_player = new Player(2176,256,_projectiles, _gibs);
		FlxG.camera.target = _player;

		_boss = new Boss(1600, 675, _player, _gibs);
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

		_hud = new FlxTypedGroup<FlxTypedGroup<FlxSprite>>();
		_lives = new FlxTypedGroup<FlxSprite>();
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
		_hud.add(_lives);

		// give the boss 40 lives
		for (i in 0...40)
		{
			_bossLives.add(new FlxSprite(300 - i * 3, 20));
			_bossLives.members[i].makeGraphic(3, 10, FlxColor.RED);
			_bossLives.members[i].immovable = true;
			_bossLives.members[i].scrollFactor.set(0,0);
			_bossLives.members[i].camera = FlxG.camera;
		}
		_hud.add(_bossLives);
		_bossLives.visible = false;

		add(_hud);

		_monsters = new FlxTypedGroup<MeleeMonster>();
		_monsterProjectiles = new FlxTypedGroup<Projectile>();
		_monsters.add(new MeleeMonster(600,1402,_player,CHIPPY,null,_gibs));
		_monsters.add(new MeleeMonster(1504,1312,_player,GLOBBY,_monsterProjectiles,_gibs));
		_monsters.add(new MeleeMonster(1664,1402,_player,CHIPPY,null,_gibs));
		_monsters.add(new MeleeMonster(2464,1402,_player,CHIPPY,null,_gibs));
		_monsters.add(new MeleeMonster(2752,1216,_player,GLOBBY,_monsterProjectiles,_gibs));
		_monsters.add(new MeleeMonster(2880,1120,_player,GLOBBY,_monsterProjectiles,_gibs));
		_monsters.add(new MeleeMonster(2336,1024,_player,CHIPPY,null,_gibs));
		_monsters.add(new MeleeMonster(2848,602,_player,CHIPPY,null,_gibs));
		_monsters.add(new MeleeMonster(2240,256,_player,GLOBBY,_monsterProjectiles,_gibs));
		add(_monsters);
		add(_monsterProjectiles);

        FlxG.sound.playMusic(AssetPaths.OrigamiRepetikaSunnyMorningExerciseClub__ogg,0.5,true);
		_hitSound = FlxG.sound.load(AssetPaths.hurt__wav);
	}

	override public function update(elapsed:Float):Void {
		FlxG.collide(_level, _player);
		FlxG.collide(_level, _monsters);
        _player.velocity.x = 0;
		FlxG.collide(_monsters, _player, meleeHit);
		FlxG.collide(_monsters, _projectiles, hit);
		FlxG.collide(_player, _monsterProjectiles, loseLife);
		FlxG.collide(_player, _bossProjectiles, loseLife);
		FlxG.overlap(_player, _bossArms, loseLife);
		FlxG.collide(_player, _bossArms, loseLife);
		FlxG.collide(_player, _bossWave, loseLife);
		FlxG.collide(_bossArms, _projectiles, loseBossLife);
		FlxG.collide(_projectiles, _level, function(projectile:Projectile, level:FlxTilemap){
			projectile.exists = false;
		});
		FlxG.collide(_monsterProjectiles, _level, function(projectile:Projectile, level:FlxTilemap){
			projectile.exists = false;
		});
		FlxG.collide(_bossProjectiles, _level, function(projectile:Projectile, level:FlxTilemap){
			projectile.exists = false;
		});

		if (_player.x > 1920 && _player.x < 2112 && _player.y < 576 && _player.y > 416)
			startBossFight();

		if (FlxG.keys.justPressed.ESCAPE)
			System.exit(0);

		super.update(elapsed);
	}

// useful if there are pickups for handling both pickup collision and level collision
//	private function onCollisionWithPlayer(object:FlxObject, player:Player) {
//		FlxObject.separate(object,player);
//	}

	private function hit(entity:FlxSprite, projectile:Projectile) {
		// remove the projectile once it hits a monster
		projectile.exists = false;
		// the monster takes damage based on the damage dealt by the projectile
		entity.hurt(projectile.getDamage());
		// entity is pushed back by the projectile
		entity.velocity.x = 4 * entity.velocity.x;
		Timer.delay(function(){
			entity.velocity.x = 0;
		}, 100);
		_hitSound.play();
	}

	private function meleeHit(monster:MeleeMonster, player:Player) {
		monster.velocity.x = -8 * monster.velocity.x;
		if (FlxSpriteUtil.isFlickering(player))
            return;
        FlxSpriteUtil.flicker(player, 1, 0.05, true, true);
		if (_lives.getFirstExisting() != null)
			_lives.getFirstExisting().exists = false;
		if (_lives.getFirstExisting() == null) {
			player.kill();
			FlxG.camera.fade(FlxColor.BLACK, 2, false, function(){
                FlxG.switchState(new GameOverState());
            });
		}
		Timer.delay(stopBounce.bind(monster), 100);
		_hitSound.play();
	}

	private function stopBounce(monster:MeleeMonster) {
		monster.velocity.x = -monster.velocity.x / 8;
	}
	
	private function loseLife(player:Player, sprite:FlxSprite)
	{
		// remove the projectile once it hits the player
		if (Std.isOfType(sprite, Projectile))
			sprite.exists = false;
		if (FlxSpriteUtil.isFlickering(player))
            return;
        FlxSpriteUtil.flicker(player, 1, 0.05, true, true);
		if (_lives.getFirstExisting() != null)
			_lives.getFirstExisting().exists = false;
		if (_lives.getFirstExisting() == null) {
			player.kill();
			FlxG.camera.fade(FlxColor.BLACK, 2, false, function(){
                FlxG.switchState(new GameOverState());
            });
		}
		_hitSound.play();
	}

	private function loseBossLife(bossArm:BossArm, projectile:Projectile)
	{
		// remove the projectile once it hits the boss arm
		projectile.exists = false;
		if (FlxSpriteUtil.isFlickering(_boss))
			return;
		FlxSpriteUtil.flicker(_boss, 1, 0.05, true, true);
		if (_bossLives.getFirstExisting() != null)
			_bossLives.getFirstExisting().exists = false;
		if (_bossLives.getFirstExisting() == null) {
			_boss.kill();
			FlxG.camera.fade(FlxColor.BLACK, 2, false, function(){
                FlxG.switchState(new WinState());
            });
		}
			
		_hitSound.play();
	}
	
	private function startBossFight() {
		FlxG.camera.flash(FlxColor.WHITE, 3);
	//	FlxG.camera.shake(0.01, 3);
		_bossLives.visible = true;
		//_hud add boss health bar: 50 hits?
		FlxG.sound.playMusic(AssetPaths.sawsquarenoiseBossTheme__ogg,0.5,true);
	}
}
