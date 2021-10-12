import flixel.effects.particles.FlxEmitter;
import haxe.Timer;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxG;
import flixel.util.FlxTimer;
import flixel.FlxObject;
import flixel.FlxSprite;
import Projectile;

class Boss extends FlxSprite {
    private var _target:FlxObject;
    private var ATTACK_RANGE:Float = 500;
    private var ATTACK_RANGE_Y:Float = 400;
    private var _timer:FlxTimer;
    private var _batterRainTimer:FlxTimer;
    public var _arms:FlxTypedGroup<BossArm>;
    public var _projectiles:FlxTypedGroup<Projectile>;
    private var _gibs:FlxEmitter;

    //constructor
    public function new(x:Float, y:Float, target:FlxObject, gibs:FlxEmitter) {
        super(x,y);
        _target = target;
        _timer = new FlxTimer();
        _batterRainTimer = new FlxTimer();
        _projectiles = new FlxTypedGroup<Projectile>();
        _gibs = gibs;
        immovable = true;

        // add arms to boss, first is left arm, second is right arm
        _arms = new FlxTypedGroup<BossArm>();
        _arms.add(new BossArm(1637, 848));
        _arms.add(new BossArm(1919, 848));
        
        // add the animations to boss
        loadGraphic(AssetPaths.papa_globby_spritesheet__png,true,431,253);
		animation.add("idle",[0,1],2,true);
        animation.add("attackright",[2,4,6,8],4,false);
        animation.add("attackleft",[3,5,7,9],4,false);
        animation.add("attackrightreverse",[8,6,4,2,0],4,false);
        animation.add("attackleftreverse",[9,7,5,3,0],4,false);
        animation.play("idle");

        _timer.start(5, AI, 0);
        _timer.active = false;

        _batterRainTimer.start(15, batterRainAttack, 0);
        _batterRainTimer.active = false;

    }

    override function update(elapsed:Float) {
        if (Math.abs(x + 200 - _target.x ) < ATTACK_RANGE && Math.abs(y - _target.y) < ATTACK_RANGE_Y) {
            _timer.active = true;
            _batterRainTimer.active = true;
        }
        else {
            _timer.active = false;
            _batterRainTimer.active = false;
        }
        super.update(elapsed);
    }

    override public function kill() {
        super.kill();
        _gibs.focusOn(this);
        _gibs.start();
    }

    private function AI(timer:FlxTimer):Void {
        _arms.forEach(function(a:BossArm){
            a.exists = false;
        });
        if (x+200 - _target.x > 0) {
            animation.play("attackleft");
            Timer.delay(function(){
                if (_arms.exists) {
                    _arms.members[0].exists = true;
                    FlxG.camera.shake(0.005, 0.5);
                }
            }, 500);
            Timer.delay(function(){
                if (_arms.exists) {
                    _arms.members[0].exists = false;
                    animation.play("attackleftreverse");
                }
            }, 3000);
        } 
        else if (x+200 - _target.x < 0) {
           animation.play("attackright");
           Timer.delay(function(){
                if (_arms.exists){
                    _arms.members[1].exists = true;
                    FlxG.camera.shake(0.005, 0.5);
                }
            }, 500);
            Timer.delay(function(){
                if (_arms.exists) {
                    _arms.members[1].exists = false;
                    animation.play("attackrightreverse");
                }
            }, 3000);
        }
    }

    private function batterRainAttack(timer:FlxTimer) {
        var projectilesNum = FlxG.random.int(10,20);
        FlxG.camera.shake(0.005, 1);
        for (i in 0...projectilesNum) {
            Timer.delay(function(){
                if(_projectiles.exists)
                    _projectiles.add(new Projectile(this, ProjectileType.BATTERBOMB));
            }, FlxG.random.int(0,5000));
        }
    }
}