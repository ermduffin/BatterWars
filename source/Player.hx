package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;

class Player extends FlxSprite {
    public var speed:Float = 200; // player walkspeed
    var _facing:Float = 0; // direction the player is facing
    
    override public function update(elapsed:Float) {
        movement(); // call movement every frame
        super.update(elapsed);
    }

    //constructor
    public function new(?X:Float=0, ?Y:Float=0) {
        super(X,Y);
        // add the animations to player
		loadGraphic(AssetPaths.player_spritesheet__png,true,64,64);
        animation.add("idleleft",[0,1],2,true,true);
        animation.add("idleright",[0,1],2,true);
		animation.add("walkleft",[2,3,4,5,6,7],10,true,true);
		animation.add("walkright",[2,3,4,5,6,7],10,true);
        // add drag to the player so he stops when movement keys are released
        acceleration.y = 500;
        drag.y = 200;
        animation.play("idle");
        health = 30;
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
            velocity.x = -100;
        if (right)
            velocity.x = 100;
        if (FlxG.keys.justPressed.W && isTouching(FlxObject.DOWN)) {
            if (animation.curAnim == animation.getByName("idleleft"))
                animation.play("walkleft");
            else if (animation.curAnim == animation.getByName("idleright"))
                animation.play("walkright");
            velocity.y = -150;
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
                _facing = 180;
                animation.play("walkleft");
            }
            else if (right) {
                _facing = 0;
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
                _facing = 180;
                animation.play("walkleft");
            }
            else if (right) {
                _facing = 0;
                animation.play("walkright");
            }
            else if (FlxG.keys.justReleased.A)
                animation.play("idleleft");
            else if (FlxG.keys.justReleased.D)
                animation.play("idleright");
		}
    }

    // get the direction the player is facing
    public function getFacing():Float {
        return _facing;
    }
}