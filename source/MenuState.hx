package;

import openfl.system.System;
import flixel.util.FlxColor;
import flixel.util.FlxAxes;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.FlxState;
import flixel.ui.FlxButton;

class MenuState extends FlxState {
    private var name:FlxText;
    private var startButton:FlxButton;
    private var quitButton:FlxButton;

    override public function create() {
        FlxG.mouse.visible = true;
        name = new FlxText(0,0,0,"Batter Wars",50,true);
        name.screenCenter(FlxAxes.X);
        add(name);

        startButton = new FlxButton(0,0,"Start",function(){
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

        if(FlxG.sound.music == null)
            FlxG.sound.playMusic(AssetPaths.OrigamiRepetikaKindGentleBeautifulPerson__ogg,0.5,true);

        super.create();
    }
}