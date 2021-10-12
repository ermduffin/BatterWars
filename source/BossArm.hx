package;

import flixel.util.FlxColor;
import flixel.FlxSprite;

class BossArm extends FlxSprite {
    public function new(x:Float, y:Float) {
        super(x,y);
    //    makeGraphic(80,80,FlxColor.GREEN);
        makeGraphic(80,80,FlxColor.TRANSPARENT);
        immovable = true;
        exists = false;
    }
}