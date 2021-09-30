import flixel.FlxSprite;
import flixel.math.FlxPoint;

enum ProjectileType {
    PANCAKE;
    BATTER;
}

class Projectile extends FlxSprite {
    private var _type:ProjectileType;
    private var _damage:Float;
    private var _movementSpeed:Float;

    public function new(shooter:FlxSprite, type:ProjectileType) {
        _type = type;
        // set color of projectile and damage based on type
        switch (_type) {
            case PANCAKE:
                super(shooter.getMidpoint().x, shooter.getMidpoint().y, AssetPaths.pancake_bullet__png);
//                if (shooter.getFacing() == 180)
//                    flipX = true;
                _damage = 10;
                _movementSpeed = 300;
            case BATTER:
                super(shooter.getMidpoint().x, shooter.getMidpoint().y, AssetPaths.batter_bullet__png);
                _damage = 5;
                _movementSpeed = 150;
        }
        // set movement speed
        velocity.set(_movementSpeed, 0);
        velocity.rotate(FlxPoint.weak(0,0), 180);
    }

    // get the projectile type
    public function getType():ProjectileType {
        return _type;
    }

    // get the damage
    public function getDamage():Float {
        return _damage;
    }
}