package;

import openfl.system.System;
import flixel.util.FlxColor;
import flixel.util.FlxAxes;
import flixel.FlxG;
import flixel.ui.FlxButton;
import flixel.text.FlxText;
import flixel.FlxState;

class GameOverState extends FlxState {
    private var name:FlxText;
    private var startButton:FlxButton;
    private var quitButton:FlxButton;

    override public function create() {
        FlxG.mouse.visible = true;
        name = new FlxText(0,0,0,"...You Died",50,true);
        name.screenCenter(FlxAxes.X);
        add(name);

        startButton = new FlxButton(0,0,"Play Again",function(){
            FlxG.camera.fade(FlxColor.BLACK, 0.5, false, function(){
                FlxG.switchState(new PlayState());
            });
        });
        startButton.screenCenter();
        add(startButton);

        quitButton = new FlxButton(0,0,"Quit",function(){
            System.exit(0);
        });
        quitButton.screenCenter();
        quitButton.y += 20;
        add(quitButton);

        FlxG.sound.playMusic(AssetPaths.GigakoopsTheClosingofChaos__ogg,0.5,true);

        super.create();
    }
}