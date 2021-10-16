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
    private var optionsButton:FlxButton;
    private var creditsButton:FlxButton;
    private var quitButton:FlxButton;

    override public function create() {
        FlxG.mouse.visible = true;
        FlxG.cameras.bgColor = 0xFF94CAE6;
        name = new FlxText(0,0,0,"Batter Wars",50,true);
        name.screenCenter(FlxAxes.X);
        add(name);

        startButton = new FlxButton(0,0,"Start",function(){
            FlxG.camera.fade(FlxColor.BLACK, 0.5, false, function(){
                FlxG.switchState(new PlayState());
            });
        });
        startButton.screenCenter();
        startButton.y -= 45;
        add(startButton);

        creditsButton = new FlxButton(0,0,"Credits",function(){
            FlxG.camera.fade(FlxColor.BLACK, 0.5, false, function(){
                FlxG.switchState(new CreditsState());
            });
        });
        creditsButton.screenCenter();
        creditsButton.y -= 15;
        add(creditsButton);

        optionsButton = new FlxButton(0,0,"Options",function(){
            FlxG.camera.fade(FlxColor.BLACK, 0.5, false, function(){
                FlxG.switchState(new OptionsState());
            });
        });
        optionsButton.screenCenter();
        optionsButton.y += 15;
        add(optionsButton);

        quitButton = new FlxButton(0,0,"Quit",function(){
            System.exit(0);
        });
        quitButton.screenCenter();
        quitButton.y += 45;
        add(quitButton);

        if (FlxG.sound.music == null)
            FlxG.sound.playMusic(AssetPaths.OrigamiRepetikaKindGentleBeautifulPerson__ogg,0.5,true);

        super.create();
    }
}