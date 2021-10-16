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

class MeleeMonster extends FlxSprite {
    private var _type:MonsterType;
    private var _damage_per_second:Float;
    private var _armor:Float;
    private var _movement_speed:Float;
    private var _target:FlxObject;
    private var ATTACK_RANGE:Float = 400;
    private var ATTACK_RANGE_Y:Float = 100;
    private var _timer:FlxTimer;
    public var _projectiles:FlxTypedGroup<Projectile>;
    private var shootSound:FlxSound;
    private var _gibs:FlxEmitter;
    
    public function new(x:Float, y:Float, target:FlxObject, type:MonsterType, projectiles:FlxTypedGroup<Projectile>, gibs:FlxEmitter) {
        super(x,y);
        _type = type;
        _target = target;
        _timer = new FlxTimer();
        //drag.x = 100;
        acceleration.y = 400;
        drag.y = 200;
        _projectiles = projectiles;
        _gibs = gibs;

        switch(_type) {
            case CHIPPY:
                health = 30;
                _damage_per_second = 5;
                _armor = 10;
                _movement_speed = 150;
                loadGraphic(AssetPaths.chip_spritesheet__png,true,29,34);
                animation.add("idle",[0,1,2,3],2,true);
		        animation.add("walkleft",[4,5,6,7],10,true);
		        animation.add("walkright",[8,9,10,11],10,true);
            case GLOBBY:
                health = 20;
                _damage_per_second = 5;
                _armor = 10;
                _movement_speed = 0;
                loadGraphic(AssetPaths.globby_spritesheet__png,true,57,40);
                animation.add("idle",[0,1],2,true);
                animation.add("attackleft",[2,3,4,2],2);
                animation.add("attackright",[2,3,4,2],2,false,true);
                animation.play("idle");
        }
        _timer.start(1, AI, 0);
        _timer.active = false;
        shootSound = FlxG.sound.load(AssetPaths.monstershoot__wav);
    }

    override function update(elapsed:Float) {
        switch (_type) {
            case CHIPPY:
                if (Math.abs(x - _target.x) < ATTACK_RANGE && Math.abs(y - _target.y) < ATTACK_RANGE_Y)
                    _timer.active = true;
                else {
                    _timer.active = false;
                }  
            case GLOBBY:
                if (Math.abs(x - _target.x) < ATTACK_RANGE && Math.abs(y - _target.y) < ATTACK_RANGE_Y)
                    _timer.active = true;
                else
                    _timer.active = false;
        }
        super.update(elapsed);
    }

    override public function kill() {
        super.kill();
        _gibs.focusOn(this);
        _gibs.start();
    }

    private function AI(timer:FlxTimer):Void {
        switch (_type) {
            case CHIPPY:
                // make the monster move towards its target every frame
                if (x - _target.x > 0) {
                    animation.play("walkleft");
                    velocity.x = -_movement_speed;
                } 
                else if (x - _target.x < 0) {
                    animation.play("walkright");
                    velocity.x = _movement_speed;
                }
            case GLOBBY:
                if (x - _target.x > 0) {
                    animation.play("attackleft");
                    facing = LEFT;
                }
                else if (x - _target.x < 0) {
                    animation.play("attackright");
                    facing = RIGHT;
                }
                if (this.alive)
                    Timer.delay(shoot, 400);
        }
    }

    private function shoot() {
        if (exists) {
            _projectiles.add(new Projectile(this, ProjectileType.BATTER));
            animation.play("idle");
            shootSound.play();
        }
    }
    public function getDamagePerSecond():Float {
        return _damage_per_second;
    }
}