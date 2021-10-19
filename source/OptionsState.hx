package;

import flixel.util.FlxColor;
import flixel.util.FlxAxes;
import flixel.FlxG;
import flixel.ui.FlxButton;
import flixel.text.FlxText;
import flixel.FlxState;
import flixel.addons.ui.FlxUICheckBox;

// displayed when the options button in the main menu is pressed
class OptionsState extends FlxState {
    private var name:FlxText;
    private var fullscreenName:FlxText;
    private var fullscreenBox:FlxUICheckBox;
    private var menuButton:FlxButton;

    override public function create() {
        FlxG.mouse.visible = true;
        name = new FlxText(0,0,0,"Options",50,true);
        name.screenCenter(FlxAxes.X);
        add(name);

        fullscreenName = new FlxText(0,0,0,"Fullscreen",20,true);
        fullscreenName.screenCenter();
        fullscreenName.x -= 80;
        fullscreenName.y -= 20;
        add(fullscreenName);

        // create a checkbox for the fullscreen option
        fullscreenBox = new FlxUICheckBox(0,0,null,null,"Fullscreen",100,null,function(){
            // set the game window to fullscreen
            FlxG.fullscreen = fullscreenBox.checked;
            if (FlxG.fullscreen)
                FlxG.resizeWindow(600,450);
        });
        fullscreenBox.checked = FlxG.fullscreen;
        fullscreenBox.screenCenter();
        fullscreenBox.x += 100;
        fullscreenBox.y -= 20;
        add(fullscreenBox);
        
        // return to the main menu after menu button is pressed
        menuButton = new FlxButton(0,0,"Menu",function(){
            FlxG.camera.fade(FlxColor.BLACK, 0.5, false, function(){
                FlxG.switchState(new MenuState());
            });
        });
        menuButton.screenCenter();
        menuButton.y += 50;
        add(menuButton);

        super.create();
    }
}