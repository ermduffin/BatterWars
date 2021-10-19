package;

import flixel.util.FlxColor;
import flixel.FlxSprite;

class BossArm extends FlxSprite {
    public function new(x:Float, y:Float) {
        super(x,y);
        // make the hitbox invisible
        makeGraphic(80,80,FlxColor.TRANSPARENT);
        immovable = true;
        // the arm should not exist until the boss performs a slam attack
        exists = false;
    }
}