package;

import flixel.system.FlxSound;
import flixel.effects.particles.FlxEmitter;
import haxe.Timer;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxG;
import flixel.util.FlxTimer;
import flixel.FlxObject;
import flixel.FlxSprite;
import Projectile;

class Boss extends FlxSprite {
    // the target that the boss will attack
    private var _target:FlxObject;
    // x and y axis attack ranges
    private var ATTACK_RANGE:Float = 500;
    private var ATTACK_RANGE_Y:Float = 300;

    // timer for the AI function
    private var _timer:FlxTimer;
    // timer for the batterRainAttack function
    private var _batterRainTimer:FlxTimer;
    // timer for the batterWaveAttack function
    private var _batterWaveTimer:FlxTimer;

    // the boss's arms, used in the slam attack
    public var _arms:FlxTypedGroup<BossArm>;
    // the wave for the batter wave
    public var _wave:FlxSprite;
    // the projectiles for batter rain
    public var _projectiles:FlxTypedGroup<Projectile>;

    // gibs that are emitted when the boss dies
    private var _gibs:FlxEmitter;

    // sounds for the slam and wave attacks
    private var _slamSound:FlxSound;
    private var _waveSound:FlxSound;

    //constructor
    public function new(x:Float, y:Float, target:FlxObject, gibs:FlxEmitter) {
        super(x,y);
        _target = target;
        _timer = new FlxTimer();
        _batterRainTimer = new FlxTimer();
        _batterWaveTimer = new FlxTimer();
        _projectiles = new FlxTypedGroup<Projectile>();
        _gibs = gibs;
        immovable = true;

        // add arm hitboxes to boss, first is left arm, second is right arm
        _arms = new FlxTypedGroup<BossArm>();
        _arms.add(new BossArm(1797, 848));
        _arms.add(new BossArm(2079, 848));

        // add wave attack
        _wave = new FlxSprite(0,0);
        _wave.immovable = true;
        _wave.loadGraphic(AssetPaths.batter_wave_spritesheet__png, true, 130, 73);
        _wave.animation.add("moving",[0,1],2);
        _wave.animation.play("moving");
        // change the wave hitbox so that only the front of the wave can hit the player
        _wave.width = 60;
        _wave.offset.x = 70;
        _wave.velocity.x = 200;
        
        // add the animations to boss
        loadGraphic(AssetPaths.papa_globby_spritesheet__png,true,431,253);
		animation.add("idle",[0,1],2,true);
        animation.add("attackright",[2,4,6,8],4,false);
        animation.add("attackleft",[3,5,7,9],4,false);
        animation.add("attackrightreverse",[8,6,4,2,0],4,false);
        animation.add("attackleftreverse",[9,7,5,3,0],4,false);
        animation.play("idle");

        // set up 5 second timer for slam attacks
        _timer.start(5, AI, 0);
        _timer.active = false;

        // set up 15 second timer for batter rain
        _batterRainTimer.start(15, batterRainAttack, 0);
        _batterRainTimer.active = false;

        // set up 20 second timer for batter wave
        _batterWaveTimer.start(20, batterWaveAttack, 0);
        _batterWaveTimer.active = false;

        // load sounds
        _slamSound = FlxG.sound.load(AssetPaths.slam__wav);
        _waveSound = FlxG.sound.load(AssetPaths.wave__wav);
    }

    override function update(elapsed:Float) {
        // check if target is within attack range
        if (Math.abs(x + 200 - _target.x ) < ATTACK_RANGE && Math.abs(y - _target.y) < ATTACK_RANGE_Y) {
            // start attack timers if target is in range
            _timer.active = true;
            _batterRainTimer.active = true;
            _batterWaveTimer.active = true;
        }
        else {
            // stop timers if target is out of range
            _timer.active = false;
            _batterRainTimer.active = false;
            _batterWaveTimer.active = false;
        }
        super.update(elapsed);
    }

    // make the boss explode into gibs when he is killed
    override public function kill() {
        super.kill();
        _gibs.focusOn(this);
        _gibs.start();
    }

    // AI for the slam attack
    private function AI(timer:FlxTimer):Void {
        // remove the arms so the boss cannot be attacked when not attacking
        _arms.forEach(function(a:BossArm){
            a.exists = false;
        });
        // if the target is on the boss's left, attack left
        if (x+200 - _target.x > 0) {
            animation.play("attackleft");
            // sync the creation of the hitbox with the animation
            Timer.delay(function(){
                if (_arms.exists) {
                    _arms.members[0].exists = true;
                    FlxG.camera.shake(0.005, 0.5);
                    _slamSound.play();
                }
            }, 750);
            // remove the hitbox 3 seconds after the attack starts
            Timer.delay(function(){
                if (_arms.exists) {
                    _arms.members[0].exists = false;
                    animation.play("attackleftreverse");
                }
            }, 3000);
        } 
        // if the target is on the boss's right, attack right
        else if (x+200 - _target.x < 0) {
           animation.play("attackright");
           // sync the creation of the hitbox with the animation
           Timer.delay(function(){
                if (_arms.exists){
                    _arms.members[1].exists = true;
                    FlxG.camera.shake(0.005, 0.5);
                    _slamSound.play();
                }
            }, 750);
            // remove the hitbox 3 seconds after the attack starts
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
        // create between 10 and 20 projectiles
        for (i in 0...projectilesNum) {
            // create each projectile 1 second after the attack starts, to sync with the boss's fist hitting the ground in the slam attack
            Timer.delay(function(){
                if(_projectiles.exists)
                    _projectiles.add(new Projectile(this, ProjectileType.BATTERBOMB));
            }, FlxG.random.int(1000,5000));
        }
    }

    private function batterWaveAttack(timer:FlxTimer) {
        Timer.delay(function(){
            if(_wave.exists)
                _waveSound.play();
        }, 2000);
        // start the wave attack one second after the wave sound plays
        Timer.delay(function(){
            if(_wave.exists)
                _wave.visible = true;
                // start the wave to the left of the boss fight area
                _wave.setPosition(1260,855);
        }, 3000);
        // wait to make the wave solid to avoid collision bugs when resetting the wave position
        Timer.delay(function(){
            if(_wave.exists)
                _wave.solid = true;
        }, 3250);
        // make the wave intangible after it leaves the boss fight area
        Timer.delay(function(){
            if(_wave.exists)
                _wave.visible = false;
                _wave.solid = false;
        }, 8500);
    }
}