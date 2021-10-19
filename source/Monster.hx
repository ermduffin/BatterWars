package;

import flixel.effects.particles.FlxEmitter;
import flixel.system.FlxSound;
import flixel.FlxG;
import flixel.util.FlxTimer;
import haxe.Timer;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxObject;
import flixel.FlxSprite;
import Projectile;

enum MonsterType {
    CHIPPY;
    GLOBBY;
}

class Monster extends FlxSprite {
    private var _type:MonsterType;
    private var _movement_speed:Float;
    // the target that the monster will attack
    private var _target:FlxObject;
    // x and y axis attack ranges
    private var ATTACK_RANGE:Float = 400;
    private var ATTACK_RANGE_Y:Float = 100;

    // timer for the AI function
    private var _timer:FlxTimer;

    // Globby's projectiles
    public var _projectiles:FlxTypedGroup<Projectile>;
    // sound for Globby's attack
    private var shootSound:FlxSound;

    // gibs that are emitted when the monster dies
    private var _gibs:FlxEmitter;
    
    // constructor
    public function new(x:Float, y:Float, target:FlxObject, type:MonsterType, projectiles:FlxTypedGroup<Projectile>, gibs:FlxEmitter) {
        super(x,y);
        _type = type;
        _target = target;
        _timer = new FlxTimer();
        acceleration.y = 400;
        drag.y = 200;
        _projectiles = projectiles;
        _gibs = gibs;

        switch(_type) {
            case CHIPPY:
                health = 30;
                _movement_speed = 150;
                // load Chippy's animations
                loadGraphic(AssetPaths.chip_spritesheet__png,true,29,34);
                animation.add("idle",[0,1,2,3],2,true);
		        animation.add("walkleft",[4,5,6,7],10,true);
		        animation.add("walkright",[8,9,10,11],10,true);
                // set up the timer to call the AI function every half second
                _timer.start(0.5, AI, 0);
            case GLOBBY:
                health = 20;
                _movement_speed = 0;
                // load Globby's animations
                loadGraphic(AssetPaths.globby_spritesheet__png,true,57,40);
                animation.add("idleleft",[0,1],2,true);
                animation.add("idleright",[0,1],2,true,true);
                animation.add("attackleft",[2,3,4,2],2);
                animation.add("attackright",[2,3,4,2],2,false,true);
                animation.play("idleleft");
                // set up the timer to call the AI function every second
                _timer.start(1, AI, 0);
        }
        _timer.active = false;
        // load the sound for Globby's attack
        shootSound = FlxG.sound.load(AssetPaths.monstershoot__wav);
    }

    override function update(elapsed:Float) {
        // if the target is in range, start the attack timer
        if (Math.abs(x - _target.x) < ATTACK_RANGE && Math.abs(y - _target.y) < ATTACK_RANGE_Y)
            _timer.active = true;
        // stop the timer if the target is out of range
        else {
            _timer.active = false;
        }
        super.update(elapsed);
    }

    // make the monster explode into gibs when he is killed
    override public function kill() {
        super.kill();
        _gibs.focusOn(this);
        _gibs.start();
    }

    // the monster's attack AI
    private function AI(timer:FlxTimer):Void {
        switch (_type) {
            case CHIPPY:
                // make the monster move left towards its target
                if (x - _target.x > 0) {
                    animation.play("walkleft");
                    velocity.x = -_movement_speed;
                }
                // make the monster move right towards its target
                else if (x - _target.x < 0) {
                    animation.play("walkright");
                    velocity.x = _movement_speed;
                }
            case GLOBBY:
                // make the monster shoot left if the target is to his left
                if (x - _target.x > 0) {
                    animation.play("attackleft");
                    facing = LEFT;
                }
                // make the monster shoot right if the target is to his right
                else if (x - _target.x < 0) {
                    animation.play("attackright");
                    facing = RIGHT;
                }
                // sync the creation of a projectile with the animation
                Timer.delay(shoot, 400);
        }
    }

    // batter bullet attack
    private function shoot() {
        if (exists && alive) {
            // shoot the projectile
            _projectiles.add(new Projectile(this, ProjectileType.BATTER));
            // set the animation to the same direction he was facing to shoot
            if (facing == LEFT)
                animation.play("idleleft");
            else if (facing == RIGHT)
                animation.play("idleright");
            shootSound.play();
        }
    }
}