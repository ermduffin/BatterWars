package;

import haxe.rtti.CType.Rights;
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
    private var left:Bool;
    private var right:Bool;
    private var curAnimName:String;
    
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
        animation.add("idleshootleft",[8,9],8,false,true);
        animation.add("idleshootright",[8,9],8,false);
        animation.add("walkshootleft",[10,11],8,false,true);
        animation.add("walkshootright",[10,11],8,false);
        // add drag to the player so he stops when movement keys are released
        acceleration.y = 500;
        drag.y = 200;
        animation.play("idleright");
        health = 30;

        _projectiles = projectiles;
        _gibs = gibs;

        shootSound = FlxG.sound.load(AssetPaths.playershoot__wav);
    }

    // add to check when touching down and not moving
    function movement() {
        // key is pressed
        left = FlxG.keys.pressed.A;
        right = FlxG.keys.pressed.D;

        // if left and right are pressed, don't move
        if (left && right)
            left = right = false;

        velocity.x = 0;

        // handle movement
        if (left)
            velocity.x = -250;
        if (right)
            velocity.x = 250;

        // handle animation when landing
        if(justTouched(FlxObject.DOWN) && !left && !right) {
            if (facing == LEFT)
                animation.play("idleleft");
            else if (facing == RIGHT)
                animation.play("idleright");
        }
        else if (justTouched(FlxObject.DOWN) && (left || right)) {
            if (left) {
                animation.reset();
                animation.play("walkleft");
                facing = LEFT;
            }
            else if (right) {
                animation.reset();
                animation.play("walkright");
                facing = RIGHT;
            }
        }
        
        if (isTouching(FlxObject.DOWN)) {
            if (animation.curAnim.finished){
                if (left) {
                    animation.play("walkleft");
                    animation.frameIndex = 4;
                }
                else if (right) {
                    animation.play("walkright");
                    animation.frameIndex = 4;
                }
                else if (facing == LEFT)
                    animation.play("idleleft");
                else if (facing == RIGHT)
                    animation.play("idleright");
            }
                
            // if movement key pressed, start an animation
            if (FlxG.keys.anyJustPressed([A,D])) {
                // stop the animation in case player is not moving
                animation.reset();
                // if player is moving, play the corresponding animation
                if (left) {
                    facing = LEFT;
                    animation.play("walkleft");
                }
                else if (right) {
                    facing = RIGHT;
                    animation.play("walkright");
                }
                // if not moving play the appropriate idle animation
                else if (facing == LEFT)
                    animation.play("idleleft");
                else if (facing == RIGHT)
                    animation.play("idleright");
            }

            // handle jumping animations
            if (FlxG.keys.justPressed.W) {
                animation.reset();
                // set to jump left frame if facing left
                if (facing == LEFT) {
                    animation.play("walkleft");
                    animation.pause();
                    animation.frameIndex = 3;
                }
                // set to jump right frame if facing right
                else if (facing == RIGHT) {
                    animation.play("walkright");
                    animation.pause();
                    animation.frameIndex = 3;
                }
                velocity.y = -330;
            }

            // if a movement key is released, stop the animation
            if(FlxG.keys.anyJustReleased([A,D])) {
                animation.reset();
                // play an animation if the player is still moving
                if (left) {
                    facing = LEFT;
                    animation.play("walkleft");
                }
                else if (right) {
                    facing = RIGHT;
                    animation.play("walkright");
                }
                // play an idle animation if the player is not moving
                else if (facing == LEFT)
                    animation.play("idleleft");
                else if (facing == RIGHT)
                    animation.play("idleright");
		    }
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
            curAnimName = animation.curAnim.name;
            if (left || facing == LEFT && !isTouching(FlxObject.DOWN))
                animation.play("walkshootleft");
            else if (right || facing == RIGHT && !isTouching(FlxObject.DOWN))
                animation.play("walkshootright");
            else if (facing == LEFT)
                animation.play("idleshootleft");
            else if (facing == RIGHT)
                animation.play("idleshootright");
		}
	}

 //   private function restartPreviousAnim(?name:String) {
 //       animation.play(curAnimName);
 //       animation.frameIndex = 1;
 //   }
}