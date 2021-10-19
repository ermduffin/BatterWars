package;

import openfl.system.System;
import flixel.util.FlxColor;
import flixel.util.FlxAxes;
import flixel.FlxG;
import flixel.ui.FlxButton;
import flixel.text.FlxText;
import flixel.FlxState;

// displayed when the player kills the boss
class WinState extends FlxState {
    private var name:FlxText;
    private var startButton:FlxButton;
    private var menuButton:FlxButton;
    private var quitButton:FlxButton;

    override public function create() {
        FlxG.mouse.visible = true;
        name = new FlxText(0,0,0,"You Win!",50,true);
        name.screenCenter(FlxAxes.X);
        add(name);

        // return to the play state after play again button is pressed
        startButton = new FlxButton(0,0,"Play Again",function(){
            FlxG.camera.fade(FlxColor.BLACK, 0.5, false, function(){
                FlxG.switchState(new PlayState());
            });
        });
        startButton.screenCenter();
        startButton.y -= 30;
        add(startButton);

        // return to the main menu after menu button is pressed
        menuButton = new FlxButton(0,0,"Menu",function(){
            FlxG.camera.fade(FlxColor.BLACK, 0.5, false, function(){
                FlxG.switchState(new MenuState());
            });
        });
        menuButton.screenCenter();
        add(menuButton);

        // exit the game after quit button is pressed
        quitButton = new FlxButton(0,0,"Quit",function(){
            System.exit(0);
        });
        quitButton.screenCenter();
        quitButton.y += 30;
        add(quitButton);

        FlxG.sound.playMusic(AssetPaths.OrigamiRepetikaKindGentleBeautifulPerson__ogg,0.5,true);

        super.create();
    }
}