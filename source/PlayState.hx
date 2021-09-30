package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxState;
import flixel.util.FlxColor;
import Player;
import Projectile;

class PlayState extends FlxState {
	var walls:FlxTypedGroup<FlxSprite>;
	private var projectiles:FlxTypedGroup<Projectile>;
	private var monsters:FlxTypedGroup<MeleeMonster>;
	private var monsterProjectiles:FlxTypedGroup<Projectile>;
	var player:Player;

	override public function create() {
		FlxG.cameras.bgColor = 0xFF94CAE6;
		player = new Player(20,150);
		add(player);

		walls = new FlxTypedGroup<FlxSprite>();
		var bottomWall = new FlxSprite(0, 250);
        bottomWall.makeGraphic(400, 10, FlxColor.GREEN);
    	bottomWall.immovable = true;
        bottomWall.solid = true;
        walls.add(bottomWall);
		add(walls);

		projectiles = new FlxTypedGroup<Projectile>();
		add(projectiles);

		monsters = new FlxTypedGroup<MeleeMonster>();
		monsters.add(new MeleeMonster(150,180,player,GLOBBY));
		add(monsters);
	
		monsterProjectiles = MeleeMonster._projectiles;
		add(monsterProjectiles);
		super.create();
	}

	override public function update(elapsed:Float):Void {
		FlxG.collide(player, walls);
        player.velocity.x = 0;
		shoot();
		FlxG.collide(monsters, projectiles, hit);
		FlxG.collide(player, monsterProjectiles, hit);
		super.update(elapsed);
	}

	private function shoot() {
		// mouse click shoots a projectile
		if (FlxG.mouse.justPressed) {
			// create a new projectile with a course between the player and the mouse
			projectiles.add(new Projectile(player, ProjectileType.PANCAKE));
		}
	}

	private function hit(entity:FlxSprite, projectile:Projectile) {
		// remove the projectile once it hits a monster
		projectile.exists = false;
		// the monster takes damage based on the damage dealt by the projectile
		entity.health -= projectile.getDamage();
		// if monster health drops below 0, the monster is killed and the player is
		// awarded 100 points
		if (entity.health <= 0) {
			entity.exists = false;
			entity.x -= 1000;
		}
	}
}
