package;

import flixel.effects.particles.FlxEmitter;
import flixel.system.FlxSound;
import Projectile;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.util.FlxSpriteUtil;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;

class Player extends FlxSprite {
    public var SPEED:Float = 200; // player walkspeed
    public var flickering:Bool = false;
    private var _projectiles:FlxTypedGroup<Projectile>;
    private var shootSound:FlxSound;
    private var _gibs:FlxEmitter;
    
    override public function update(elapsed:Float) {
        movement(); // call movement every frame
		shoot();
        super.update(elapsed);
    }
    
    override public function kill() {
        super.kill();
        _gibs.focusOn(this);
        _gibs.start();
    }
    
    //constructor
    public function new(?X:Float=0, ?Y:Float=0, projectiles:FlxTypedGroup<Projectile>, gibs:FlxEmitter) {
        super(X,Y);
        // add the animations to player
		loadGraphic(AssetPaths.player_spritesheet__png,true,30,42);
        animation.add("idleleft",[0,1],2,true,true);
        animation.add("idleright",[0,1],2,true);
		animation.add("walkleft",[2,3,4,5,6,7],10,true,true);
		animation.add("walkright",[2,3,4,5,6,7],10,true);
        // add drag to the player so he stops when movement keys are released
        acceleration.y = 500;
        drag.y = 200;
        animation.play("idle");
        health = 30;

        _projectiles = projectiles;
        _gibs = gibs;

        shootSound = FlxG.sound.load(AssetPaths.playershoot__wav);
    }

    function movement() {
        // key is pressed
        var up:Bool = FlxG.keys.pressed.W;
        var down:Bool  = FlxG.keys.pressed.S;
        var left:Bool = FlxG.keys.pressed.A;
        var right:Bool = FlxG.keys.pressed.D;

        // if up and down are pressed, don't move
        if (up && down)
            up = down = false;
        // if left and right are pressed, don't move
        if (left && right)
            left = right = false;

        velocity.x = 0;

        if (left)
            velocity.x = -250;
        if (right)
            velocity.x = 250;
        if (FlxG.keys.justPressed.W && isTouching(FlxObject.DOWN)) {
            if (animation.curAnim == animation.getByName("idleleft"))
                animation.play("walkleft");
            else if (animation.curAnim == animation.getByName("idleright"))
                animation.play("walkright");
            velocity.y = -330;
        }

        // if movement key pressed, start an animation
        if (FlxG.keys.anyJustPressed([W,S,A,D])) {
            // stop the animation in case player is not moving
            animation.reset();
            // if player is moving, play the corresponding animation
            if (up)
                animation.play("walkup");
            else if (down)
                animation.play("walkdown");
            else if (left) {
                facing = LEFT;
                animation.play("walkleft");
            }
            else if (right) {
                facing = RIGHT;
                animation.play("walkright");
            }
        }

        if (FlxG.keys.justReleased.W) {
            if (animation.curAnim == animation.getByName("walkleft"))
                animation.play("idleleft");
            else if (animation.curAnim == animation.getByName("walkright"))
                animation.play("idleright");
        }

        // if a movement key is released, stop the animation
        if(FlxG.keys.anyJustReleased([W,S,A,D])) {
            animation.reset();
            // play an animation if the player is still moving
            if(up)
                animation.play("walkup");
            else if(down)
                animation.play("walkdown");
            else if (left) {
                facing = LEFT;
                animation.play("walkleft");
            }
            else if (right) {
                facing = RIGHT;
                animation.play("walkright");
            }
            else if (FlxG.keys.justReleased.A)
                animation.play("idleleft");
            else if (FlxG.keys.justReleased.D)
                animation.play("idleright");
		}
    }

    override public function hurt(damage:Float) {
        if (FlxSpriteUtil.isFlickering(this))
            return;
        FlxSpriteUtil.flicker(this, 1, 0.05, true, true);
        super.hurt(damage);
    }

    private function shoot() {
		// mouse click shoots a projectile
		if (FlxG.mouse.justPressed) {
			// create a new projectile with a course between the player and the mouse
			_projectiles.add(new Projectile(this, ProjectileType.PANCAKE));
            shootSound.play();
		}
	}
}