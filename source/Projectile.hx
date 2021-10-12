import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;

enum ProjectileType {
    PANCAKE;
    BATTER;
    BATTERBOMB;
}

class Projectile extends FlxSprite {
    private var _type:ProjectileType;
    private var _damage:Float;
    private var _movementSpeed:Float;

    public function new(shooter:FlxSprite, type:ProjectileType) {
        _type = type;
        // set image of projectile and damage based on type
        switch (_type) {
            case PANCAKE:
                super(shooter.x, shooter.y, AssetPaths.pancake_bullet__png);
                _movementSpeed = -500;
                if (shooter.facing == LEFT) {
                    flipX = true;
                    _movementSpeed *= -1;
                }
                _damage = 10;
                velocity.set(_movementSpeed, 0);
            case BATTER:
                super(shooter.x, shooter.y, AssetPaths.batter_bullet__png);
                _damage = 5;
                _movementSpeed = 300;
                if (shooter.facing == RIGHT) {
                    flipX = true;
                    _movementSpeed *= -1;
                }
                velocity.set(_movementSpeed, 0);
            case BATTERBOMB:
                super(FlxG.random.int(1280,2080), 608, AssetPaths.batter_bullet__png);
                angle = -90;
                _movementSpeed = -300;
                velocity.set(0, _movementSpeed);
        }
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