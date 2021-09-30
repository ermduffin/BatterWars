import flixel.util.FlxTimer;
import haxe.Timer;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.math.FlxVelocity;
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
    private var _timer:FlxTimer;
    public static var _projectiles:FlxTypedGroup<Projectile> = new FlxTypedGroup<Projectile>();
    
    public function new(x:Float, y:Float, target:FlxObject, type:MonsterType) {
        super(x,y);
        _type = type;
        _target = target;
        _timer = new FlxTimer();

        switch(_type) {
            case CHIPPY:
                health = 30;
                _damage_per_second = 5;
                _armor = 10;
                _movement_speed = 50;
                loadGraphic(AssetPaths.chip_spritesheet__png,true,64,64);
                animation.add("idle",[0,1,2,3],2,true);
		        animation.add("walkleft",[4,5,6,7],10,true);
		        animation.add("walkright",[8,9,10,11],10,true);
            case GLOBBY:
                health = 20;
                _damage_per_second = 5;
                _armor = 10;
                _movement_speed = 20;
                loadGraphic(AssetPaths.globby_spritesheet__png,true,64,64);
                animation.add("idle",[0,1],2,true);
                animation.add("attackleft",[2,3,4,2],2);
                animation.play("idle");
                _timer.start(1, AI, 0);
                _timer.active = false;
        }
    }

    override function update(elapsed:Float) {
        switch (_type) {
            case CHIPPY:
                AI(_timer);
            case GLOBBY:
                if (x - _target.x < 100)
                    _timer.active = true;
                else if (x - _target.x >= 100)
                    _timer.active = false;
        }
        super.update(elapsed);
    }

    private function AI(timer:FlxTimer):Void {
        switch (_type) {
            case CHIPPY:
                // make the monster move towards its target every frame
                FlxVelocity.moveTowardsPoint(this, new FlxPoint(_target.getMidpoint().x,218), Std.int(_movement_speed));
                if (velocity.x < 10)
                    animation.play("walkleft");
                else if (velocity.x > 0)
                    animation.play("walkright");
                else
                    animation.play("idle");
            case GLOBBY:
                animation.play("attackleft");
                Timer.delay(shoot, 250);
        }
    }

    private function shoot() {
        _projectiles.add(new Projectile(this, ProjectileType.BATTER));
        animation.play("idle");
    }
}