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
    // player movement speed
    public var SPEED:Float = 250;
    public var flickering:Bool = false;

    // player's pancake projectiles
    private var _projectiles:FlxTypedGroup<Projectile>;
    private var shootSound:FlxSound;

    // gibs that are emitted when the player dies
    private var _gibs:FlxEmitter;

    // true if the player is moving left
    private var left:Bool;
    // true if the player is moving left
    private var right:Bool;

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
        // add drag to the player so she is affected by gravity
        acceleration.y = 500;
        drag.y = 200;
        animation.play("idleright");

        _projectiles = projectiles;
        _gibs = gibs;

        // load the sound for shooting a pancake bullet
        shootSound = FlxG.sound.load(AssetPaths.playershoot__wav);
    }

    override public function update(elapsed:Float) {
        movement();
		shoot();
        super.update(elapsed);
    }
    
    // make the player explode into gibs when he is killed
    override public function kill() {
        super.kill();
        _gibs.focusOn(this);
        _gibs.start();
    }

    // for handling player's movement and movement animations
    function movement() {
        left = FlxG.keys.pressed.A;
        right = FlxG.keys.pressed.D;

        // if keys for left and right movement are pressed, don't move
        if (left && right)
            left = right = false;

        velocity.x = 0;

        // move left or right
        if (left)
            velocity.x = -SPEED;
        if (right)
            velocity.x = SPEED;

        // handle animation when landing
        if(justTouched(FlxObject.DOWN)) {
            // if not moving and facing left, idle
            if (facing == LEFT && !left && !right)
                animation.play("idleleft");
            // if not moving and facing right, idle
            else if (facing == RIGHT && !left && !right)
                animation.play("idleright");
            // play left animation if moving left
            else if (left) {
                animation.reset();
                animation.play("walkleft");
                facing = LEFT;
            }
            // play right animation if moving right
            else if (right) {
                animation.reset();
                animation.play("walkright");
                facing = RIGHT;
            }
        }
        
        // handle animations when the player is on the ground
        if (isTouching(FlxObject.DOWN)) {
            // if any of the shooting animations just played, start a new animation
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
                // move  up
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

    // flicker the player if damaged
    override public function hurt(damage:Float) {
        if (FlxSpriteUtil.isFlickering(this))
            return;
        FlxSpriteUtil.flicker(this, 1, 0.05, true, true);
        super.hurt(damage);
    }

    private function shoot() {
		// mouse click shoots a projectile
		if (FlxG.mouse.justPressed) {
			// shoot a projectile 
			_projectiles.add(new Projectile(this, ProjectileType.PANCAKE));
            shootSound.play();

            // handle the shooting animations
            // if shooting while moving or in the air
            if (left || facing == LEFT && !isTouching(FlxObject.DOWN))
                animation.play("walkshootleft");
            else if (right || facing == RIGHT && !isTouching(FlxObject.DOWN))
                animation.play("walkshootright");
            // if shooting while idling
            else if (facing == LEFT)
                animation.play("idleshootleft");
            else if (facing == RIGHT)
                animation.play("idleshootright");
		}
	}
}