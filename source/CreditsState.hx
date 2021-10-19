package;

import flixel.util.FlxColor;
import flixel.util.FlxAxes;
import flixel.FlxG;
import flixel.ui.FlxButton;
import flixel.text.FlxText;
import flixel.FlxState;

// displayed when the credits button in the main menu is pressed
class CreditsState extends FlxState {
    private var name:FlxText;
    private var creatorName:FlxText;
    private var composerName1:FlxText;
    private var composerName2:FlxText;
    private var composerName3:FlxText;
    private var soundDesignerName1:FlxText;
    private var soundDesignerName2:FlxText;
    private var soundDesignerName3:FlxText;
    private var soundDesignerName4:FlxText;
    private var menuButton:FlxButton;

    override public function create() {
        FlxG.mouse.visible = true;
        name = new FlxText(0,0,0,"Credits",50,true);
        name.screenCenter(FlxAxes.X);
        add(name);

        creatorName = new FlxText(0,0,0,"Created by: Emilie Duffin",20,true);
        creatorName.screenCenter();
        creatorName.y -= 120;
        add(creatorName);

        composerName1 = new FlxText(0,0,0,"Music by: Gigakoops",20,true);
        composerName1.screenCenter();
        composerName1.y -= 80;
        add(composerName1);

        composerName2 = new FlxText(0,0,0,"\tOrigami Repetica",20,true);
        composerName2.screenCenter();
        composerName2.y -= 50;
        add(composerName2);

        composerName3 = new FlxText(0,0,0,"\tsawsquarenoise",20,true);
        composerName3.screenCenter();
        composerName3.y -= 20;
        add(composerName3);

        soundDesignerName1 = new FlxText(0,0,0,"Sound by: Morgan Purkis",20,true);
        soundDesignerName1.screenCenter();
        soundDesignerName1.y += 20;
        add(soundDesignerName1);

        soundDesignerName2 = new FlxText(0,0,0,"\tNatty23",20,true);
        soundDesignerName2.screenCenter();
        soundDesignerName2.y += 50;
        add(soundDesignerName2);

        soundDesignerName3 = new FlxText(0,0,0,"\tseveraltimes",20,true);
        soundDesignerName3.screenCenter();
        soundDesignerName3.y += 80;
        add(soundDesignerName3);

        soundDesignerName4 = new FlxText(0,0,0,"\tsharesynth",20,true);
        soundDesignerName4.screenCenter();
        soundDesignerName4.y += 110;
        add(soundDesignerName4);
        
        menuButton = new FlxButton(0,0,"Menu",function(){
            // return to the main menu after menu button is pressed
            FlxG.camera.fade(FlxColor.BLACK, 0.5, false, function(){
                FlxG.switchState(new MenuState());
            });
        });
        menuButton.screenCenter();
        menuButton.y += 160;
        add(menuButton);

        super.create();
    }
}