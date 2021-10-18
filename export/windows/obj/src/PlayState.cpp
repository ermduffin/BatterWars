#include <hxcpp.h>

#ifndef INCLUDED_Boss
#include <Boss.h>
#endif
#ifndef INCLUDED_BossArm
#include <BossArm.h>
#endif
#ifndef INCLUDED_GameOverState
#include <GameOverState.h>
#endif
#ifndef INCLUDED_MeleeMonster
#include <MeleeMonster.h>
#endif
#ifndef INCLUDED_MonsterType
#include <MonsterType.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Projectile
#include <Projectile.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_WinState
#include <WinState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileLayer
#include <flixel/addons/editors/tiled/TiledTileLayer.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#include <flixel/util/helpers/FlxPointRangeBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#include <flixel/util/helpers/FlxRangeBounds.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_22_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",22,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_38_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",38,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_137_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",137,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_140_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",140,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_143_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",143,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_124_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",124,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_168_hit,"PlayState","hit",0xf8bb0cc2,"PlayState.hit","PlayState.hx",168,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_160_hit,"PlayState","hit",0xf8bb0cc2,"PlayState.hit","PlayState.hx",160,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_186_meleeHit,"PlayState","meleeHit",0x0a331270,"PlayState.meleeHit","PlayState.hx",186,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_173_meleeHit,"PlayState","meleeHit",0x0a331270,"PlayState.meleeHit","PlayState.hx",173,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_183_meleeHit,"PlayState","meleeHit",0x0a331270,"PlayState.meleeHit","PlayState.hx",183,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_191_stopBounce,"PlayState","stopBounce",0x1be54c9b,"PlayState.stopBounce","PlayState.hx",191,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_195_loseLife,"PlayState","loseLife",0x2ce97ca2,"PlayState.loseLife","PlayState.hx",195,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_207_loseLife,"PlayState","loseLife",0x2ce97ca2,"PlayState.loseLife","PlayState.hx",207,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_214_loseBossLife,"PlayState","loseBossLife",0x7e95d5ef,"PlayState.loseBossLife","PlayState.hx",214,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_225_loseBossLife,"PlayState","loseBossLife",0x7e95d5ef,"PlayState.loseBossLife","PlayState.hx",225,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_232_startBossFight,"PlayState","startBossFight",0x53b45c12,"PlayState.startBossFight","PlayState.hx",232,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_22_new)
HXDLIN(  22)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_38_create)
HXLINE(  39)		this->super::create();
HXLINE(  40)		{
HXLINE(  40)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN(  40)			_this->x = ( (Float)(0) );
HXDLIN(  40)			_this->y = ( (Float)(0) );
HXDLIN(  40)			_this->width = ( (Float)(3200) );
HXDLIN(  40)			_this->height = ( (Float)(1600) );
            		}
HXLINE(  41)		 ::flixel::addons::display::FlxBackdrop backdrop =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,HX_("assets/images/background.png",14,8d,6b,e2),1,1,false,false,null(),null());
HXLINE(  42)		this->add(backdrop);
HXLINE(  44)		this->_level =  ::flixel::tile::FlxTilemap_obj::__alloc( HX_CTX );
HXLINE(  45)		 ::flixel::addons::editors::tiled::TiledMap tiledMap =  ::flixel::addons::editors::tiled::TiledMap_obj::__alloc( HX_CTX ,HX_("assets/data/tile_map.tmx",35,e3,40,32),null());
HXLINE(  46)		 ::flixel::addons::editors::tiled::TiledTileLayer layer = ::hx::TCast<  ::flixel::addons::editors::tiled::TiledTileLayer >::cast(tiledMap->getLayer(HX_("Tile Layer 1",30,d5,93,fc)));
HXLINE(  47)		 ::flixel::tile::FlxTilemap _hx_tmp = this->_level;
HXDLIN(  47)		::Array< int > _hx_tmp1 = layer->get_tileArray();
HXDLIN(  47)		_hx_tmp->loadMapFromArray(_hx_tmp1,layer->width,layer->height,HX_("assets/images/tile_map.png",b1,54,e6,ef),32,32,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn(),1,null(),null());
HXLINE(  49)		this->_gibs =  ::flixel::effects::particles::FlxTypedEmitter_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  50)		this->_gibs->velocity->set(( (Float)(-150) ),-200,150,0,null(),null(),null(),null());
HXLINE(  51)		this->_gibs->angularVelocity->set(-700,null(),null(),null());
HXLINE(  52)		this->_gibs->acceleration->set(( (Float)(0) ),400,null(),null(),null(),null(),null(),null());
HXLINE(  53)		this->_gibs->elasticity->set(((Float)0.5),null(),null(),null());
HXLINE(  54)		this->_gibs->makeParticles(null(),null(),null(),null());
HXLINE(  55)		this->add(this->_gibs);
HXLINE(  57)		this->_projectiles =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  59)		this->_player =  ::Player_obj::__alloc( HX_CTX ,192,1410,this->_projectiles,this->_gibs);
HXLINE(  61)		::flixel::FlxG_obj::camera->target = this->_player;
HXLINE(  63)		this->_boss =  ::Boss_obj::__alloc( HX_CTX ,( (Float)(1600) ),( (Float)(675) ),this->_player,this->_gibs);
HXLINE(  64)		this->_bossArms = this->_boss->_arms;
HXLINE(  65)		this->_bossProjectiles = this->_boss->_projectiles;
HXLINE(  66)		this->_bossWave = this->_boss->_wave;
HXLINE(  68)		this->add(this->_boss);
HXLINE(  69)		this->add(this->_bossArms);
HXLINE(  70)		this->add(this->_bossProjectiles);
HXLINE(  71)		this->add(this->_bossWave);
HXLINE(  73)		this->add(this->_level);
HXLINE(  75)		this->add(this->_player);
HXLINE(  76)		this->add(this->_projectiles);
HXLINE(  78)		this->_hud =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  79)		this->_lives =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  80)		this->_bossLives =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  82)		{
HXLINE(  83)			{
HXLINE(  84)				 ::flixel::group::FlxTypedGroup _hx_tmp2 = this->_lives;
HXDLIN(  84)				_hx_tmp2->add( ::flixel::FlxSprite_obj::__alloc( HX_CTX ,380,20,null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  85)				Dynamic( this->_lives->members->__get(0)).StaticCast<  ::flixel::FlxSprite >()->makeGraphic(10,10,-1,null(),null());
HXLINE(  86)				Dynamic( this->_lives->members->__get(0)).StaticCast<  ::flixel::FlxSprite >()->set_immovable(true);
HXLINE(  87)				Dynamic( this->_lives->members->__get(0)).StaticCast<  ::flixel::FlxSprite >()->scrollFactor->set(0,0);
HXLINE(  88)				Dynamic( this->_lives->members->__get(0)).StaticCast<  ::flixel::FlxSprite >()->set_camera(::flixel::FlxG_obj::camera);
            			}
HXLINE(  83)			{
HXLINE(  84)				 ::flixel::group::FlxTypedGroup _hx_tmp3 = this->_lives;
HXDLIN(  84)				_hx_tmp3->add( ::flixel::FlxSprite_obj::__alloc( HX_CTX ,360,20,null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  85)				Dynamic( this->_lives->members->__get(1)).StaticCast<  ::flixel::FlxSprite >()->makeGraphic(10,10,-1,null(),null());
HXLINE(  86)				Dynamic( this->_lives->members->__get(1)).StaticCast<  ::flixel::FlxSprite >()->set_immovable(true);
HXLINE(  87)				Dynamic( this->_lives->members->__get(1)).StaticCast<  ::flixel::FlxSprite >()->scrollFactor->set(0,0);
HXLINE(  88)				Dynamic( this->_lives->members->__get(1)).StaticCast<  ::flixel::FlxSprite >()->set_camera(::flixel::FlxG_obj::camera);
            			}
HXLINE(  83)			{
HXLINE(  84)				 ::flixel::group::FlxTypedGroup _hx_tmp4 = this->_lives;
HXDLIN(  84)				_hx_tmp4->add( ::flixel::FlxSprite_obj::__alloc( HX_CTX ,340,20,null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  85)				Dynamic( this->_lives->members->__get(2)).StaticCast<  ::flixel::FlxSprite >()->makeGraphic(10,10,-1,null(),null());
HXLINE(  86)				Dynamic( this->_lives->members->__get(2)).StaticCast<  ::flixel::FlxSprite >()->set_immovable(true);
HXLINE(  87)				Dynamic( this->_lives->members->__get(2)).StaticCast<  ::flixel::FlxSprite >()->scrollFactor->set(0,0);
HXLINE(  88)				Dynamic( this->_lives->members->__get(2)).StaticCast<  ::flixel::FlxSprite >()->set_camera(::flixel::FlxG_obj::camera);
            			}
            		}
HXLINE(  90)		this->_hud->add(this->_lives).StaticCast<  ::flixel::group::FlxTypedGroup >();
HXLINE(  93)		{
HXLINE(  93)			int _g = 0;
HXDLIN(  93)			while((_g < 40)){
HXLINE(  93)				_g = (_g + 1);
HXDLIN(  93)				int i = (_g - 1);
HXLINE(  95)				 ::flixel::group::FlxTypedGroup _hx_tmp = this->_bossLives;
HXDLIN(  95)				_hx_tmp->add( ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(300 - (i * 3)),20,null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  96)				Dynamic( this->_bossLives->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->makeGraphic(3,10,-65536,null(),null());
HXLINE(  97)				Dynamic( this->_bossLives->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->set_immovable(true);
HXLINE(  98)				Dynamic( this->_bossLives->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->scrollFactor->set(0,0);
HXLINE(  99)				Dynamic( this->_bossLives->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->set_camera(::flixel::FlxG_obj::camera);
            			}
            		}
HXLINE( 101)		this->_hud->add(this->_bossLives).StaticCast<  ::flixel::group::FlxTypedGroup >();
HXLINE( 102)		this->_bossLives->set_visible(false);
HXLINE( 104)		this->add(this->_hud);
HXLINE( 106)		this->_monsters =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 107)		this->_monsterProjectiles =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 108)		 ::flixel::group::FlxTypedGroup _hx_tmp5 = this->_monsters;
HXDLIN( 108)		_hx_tmp5->add( ::MeleeMonster_obj::__alloc( HX_CTX ,( (Float)(600) ),( (Float)(1402) ),this->_player,::MonsterType_obj::CHIPPY_dyn(),null(),this->_gibs)).StaticCast<  ::MeleeMonster >();
HXLINE( 109)		 ::flixel::group::FlxTypedGroup _hx_tmp6 = this->_monsters;
HXDLIN( 109)		_hx_tmp6->add( ::MeleeMonster_obj::__alloc( HX_CTX ,( (Float)(1504) ),( (Float)(1312) ),this->_player,::MonsterType_obj::GLOBBY_dyn(),this->_monsterProjectiles,this->_gibs)).StaticCast<  ::MeleeMonster >();
HXLINE( 110)		 ::flixel::group::FlxTypedGroup _hx_tmp7 = this->_monsters;
HXDLIN( 110)		_hx_tmp7->add( ::MeleeMonster_obj::__alloc( HX_CTX ,( (Float)(1664) ),( (Float)(1402) ),this->_player,::MonsterType_obj::CHIPPY_dyn(),null(),this->_gibs)).StaticCast<  ::MeleeMonster >();
HXLINE( 111)		 ::flixel::group::FlxTypedGroup _hx_tmp8 = this->_monsters;
HXDLIN( 111)		_hx_tmp8->add( ::MeleeMonster_obj::__alloc( HX_CTX ,( (Float)(2464) ),( (Float)(1402) ),this->_player,::MonsterType_obj::CHIPPY_dyn(),null(),this->_gibs)).StaticCast<  ::MeleeMonster >();
HXLINE( 112)		 ::flixel::group::FlxTypedGroup _hx_tmp9 = this->_monsters;
HXDLIN( 112)		_hx_tmp9->add( ::MeleeMonster_obj::__alloc( HX_CTX ,( (Float)(2752) ),( (Float)(1216) ),this->_player,::MonsterType_obj::GLOBBY_dyn(),this->_monsterProjectiles,this->_gibs)).StaticCast<  ::MeleeMonster >();
HXLINE( 113)		 ::flixel::group::FlxTypedGroup _hx_tmp10 = this->_monsters;
HXDLIN( 113)		_hx_tmp10->add( ::MeleeMonster_obj::__alloc( HX_CTX ,( (Float)(2880) ),( (Float)(1120) ),this->_player,::MonsterType_obj::GLOBBY_dyn(),this->_monsterProjectiles,this->_gibs)).StaticCast<  ::MeleeMonster >();
HXLINE( 114)		 ::flixel::group::FlxTypedGroup _hx_tmp11 = this->_monsters;
HXDLIN( 114)		_hx_tmp11->add( ::MeleeMonster_obj::__alloc( HX_CTX ,( (Float)(2336) ),( (Float)(1024) ),this->_player,::MonsterType_obj::CHIPPY_dyn(),null(),this->_gibs)).StaticCast<  ::MeleeMonster >();
HXLINE( 115)		 ::flixel::group::FlxTypedGroup _hx_tmp12 = this->_monsters;
HXDLIN( 115)		_hx_tmp12->add( ::MeleeMonster_obj::__alloc( HX_CTX ,( (Float)(2848) ),( (Float)(602) ),this->_player,::MonsterType_obj::CHIPPY_dyn(),null(),this->_gibs)).StaticCast<  ::MeleeMonster >();
HXLINE( 116)		 ::flixel::group::FlxTypedGroup _hx_tmp13 = this->_monsters;
HXDLIN( 116)		_hx_tmp13->add( ::MeleeMonster_obj::__alloc( HX_CTX ,( (Float)(2240) ),( (Float)(256) ),this->_player,::MonsterType_obj::GLOBBY_dyn(),this->_monsterProjectiles,this->_gibs)).StaticCast<  ::MeleeMonster >();
HXLINE( 117)		this->add(this->_monsters);
HXLINE( 118)		this->add(this->_monsterProjectiles);
HXLINE( 120)		::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/OrigamiRepetikaSunnyMorningExerciseClub.ogg",55,a4,6f,7e),((Float)0.5),true,null());
HXLINE( 121)		this->_hitSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/hurt.wav",6c,32,7c,8f),null(),null(),null(),null(),null(),null(),null(),null());
            	}


void PlayState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		void _hx_run( ::Projectile projectile, ::flixel::tile::FlxTilemap level){
            			HX_STACKFRAME(&_hx_pos_af23706db05c7feb_137_update)
HXLINE( 137)			projectile->set_exists(false);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(2)
            		void _hx_run( ::Projectile projectile, ::flixel::tile::FlxTilemap level){
            			HX_STACKFRAME(&_hx_pos_af23706db05c7feb_140_update)
HXLINE( 140)			projectile->set_exists(false);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(2)
            		void _hx_run( ::Projectile projectile, ::flixel::tile::FlxTilemap level){
            			HX_STACKFRAME(&_hx_pos_af23706db05c7feb_143_update)
HXLINE( 143)			projectile->set_exists(false);
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_124_update)
HXLINE( 125)		{
HXLINE( 125)			 ::Dynamic NotifyCallback = null();
HXDLIN( 125)			::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_level) ),( ( ::flixel::FlxBasic)(this->_player) ),NotifyCallback,::flixel::FlxObject_obj::separate_dyn());
            		}
HXLINE( 126)		{
HXLINE( 126)			 ::Dynamic NotifyCallback1 = null();
HXDLIN( 126)			::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_level) ),( ( ::flixel::FlxBasic)(this->_monsters) ),NotifyCallback1,::flixel::FlxObject_obj::separate_dyn());
            		}
HXLINE( 127)		this->_player->velocity->set_x(( (Float)(0) ));
HXLINE( 128)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_monsters) ),( ( ::flixel::FlxBasic)(this->_player) ),this->meleeHit_dyn(),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 129)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_monsters) ),( ( ::flixel::FlxBasic)(this->_projectiles) ),this->hit_dyn(),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 130)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_player) ),( ( ::flixel::FlxBasic)(this->_monsterProjectiles) ),this->loseLife_dyn(),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 131)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_player) ),( ( ::flixel::FlxBasic)(this->_bossProjectiles) ),this->loseLife_dyn(),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 132)		::flixel::FlxG_obj::overlap(this->_player,this->_bossArms,this->loseLife_dyn(),null());
HXLINE( 133)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_player) ),( ( ::flixel::FlxBasic)(this->_bossArms) ),this->loseLife_dyn(),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 134)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_player) ),( ( ::flixel::FlxBasic)(this->_bossWave) ),this->loseLife_dyn(),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 135)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_bossArms) ),( ( ::flixel::FlxBasic)(this->_projectiles) ),this->loseBossLife_dyn(),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 136)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_projectiles) ),( ( ::flixel::FlxBasic)(this->_level) ), ::Dynamic(new _hx_Closure_0()),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 139)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_monsterProjectiles) ),( ( ::flixel::FlxBasic)(this->_level) ), ::Dynamic(new _hx_Closure_1()),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 142)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_bossProjectiles) ),( ( ::flixel::FlxBasic)(this->_level) ), ::Dynamic(new _hx_Closure_2()),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 146)		bool _hx_tmp;
HXDLIN( 146)		bool _hx_tmp1;
HXDLIN( 146)		bool _hx_tmp2;
HXDLIN( 146)		if ((this->_player->x > 1920)) {
HXLINE( 146)			_hx_tmp2 = (this->_player->x < 2112);
            		}
            		else {
HXLINE( 146)			_hx_tmp2 = false;
            		}
HXDLIN( 146)		if (_hx_tmp2) {
HXLINE( 146)			_hx_tmp1 = (this->_player->y < 576);
            		}
            		else {
HXLINE( 146)			_hx_tmp1 = false;
            		}
HXDLIN( 146)		if (_hx_tmp1) {
HXLINE( 146)			_hx_tmp = (this->_player->y > 416);
            		}
            		else {
HXLINE( 146)			_hx_tmp = false;
            		}
HXDLIN( 146)		if (_hx_tmp) {
HXLINE( 147)			this->startBossFight();
            		}
HXLINE( 149)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 149)		if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE( 150)			::openfl::_hx_system::System_obj::exit(0);
            		}
HXLINE( 152)		this->super::update(elapsed);
            	}


void PlayState_obj::hit( ::flixel::FlxSprite entity, ::Projectile projectile){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,entity) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_af23706db05c7feb_168_hit)
HXLINE( 168)			entity->velocity->set_x(( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_160_hit)
HXLINE( 162)		projectile->set_exists(false);
HXLINE( 164)		 ::flixel::FlxSprite entity1 = entity;
HXDLIN( 164)		entity1->hurt(projectile->getDamage());
HXLINE( 166)		entity->velocity->set_x((( (Float)(4) ) * entity->velocity->x));
HXLINE( 167)		::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(entity)),100);
HXLINE( 170)		this->_hitSound->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,hit,(void))

void PlayState_obj::meleeHit( ::MeleeMonster monster, ::Player player){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::MeleeMonster,monster1, ::Dynamic,_g) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_af23706db05c7feb_186_meleeHit)
HXLINE( 186)			_g(monster1);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_173_meleeHit)
HXLINE( 174)		monster->velocity->set_x((( (Float)(-8) ) * monster->velocity->x));
HXLINE( 175)		if (::flixel::effects::FlxFlicker_obj::isFlickering(player)) {
HXLINE( 176)			return;
            		}
HXLINE( 177)		{
HXLINE( 177)			 ::Dynamic CompletionCallback = null();
HXDLIN( 177)			 ::Dynamic ProgressCallback = null();
HXDLIN( 177)			::flixel::effects::FlxFlicker_obj::flicker(player,1,((Float)0.05),true,true,CompletionCallback,ProgressCallback);
            		}
HXLINE( 178)		if (::hx::IsNotNull( this->_lives->getFirstExisting().StaticCast<  ::flixel::FlxSprite >() )) {
HXLINE( 179)			this->_lives->getFirstExisting().StaticCast<  ::flixel::FlxSprite >()->set_exists(false);
            		}
HXLINE( 180)		if (::hx::IsNull( this->_lives->getFirstExisting().StaticCast<  ::flixel::FlxSprite >() )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_183_meleeHit)
HXLINE( 183)				 ::flixel::FlxState nextState =  ::GameOverState_obj::__alloc( HX_CTX ,null());
HXDLIN( 183)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 183)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 181)			player->kill();
HXLINE( 182)			::flixel::FlxG_obj::camera->fade(-16777216,2,false, ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE( 186)		 ::Dynamic _g = this->stopBounce_dyn();
HXDLIN( 186)		 ::MeleeMonster monster1 = monster;
HXDLIN( 186)		::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_1(monster1,_g)),100);
HXLINE( 187)		this->_hitSound->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,meleeHit,(void))

void PlayState_obj::stopBounce( ::MeleeMonster monster){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_191_stopBounce)
HXDLIN( 191)		monster->velocity->set_x((-(monster->velocity->x) / ( (Float)(8) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,stopBounce,(void))

void PlayState_obj::loseLife( ::Player player, ::flixel::FlxSprite sprite){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_195_loseLife)
HXLINE( 197)		if (::Std_obj::isOfType(sprite,::hx::ClassOf< ::Projectile >())) {
HXLINE( 198)			sprite->set_exists(false);
            		}
HXLINE( 199)		if (::flixel::effects::FlxFlicker_obj::isFlickering(player)) {
HXLINE( 200)			return;
            		}
HXLINE( 201)		{
HXLINE( 201)			 ::Dynamic CompletionCallback = null();
HXDLIN( 201)			 ::Dynamic ProgressCallback = null();
HXDLIN( 201)			::flixel::effects::FlxFlicker_obj::flicker(player,1,((Float)0.05),true,true,CompletionCallback,ProgressCallback);
            		}
HXLINE( 202)		if (::hx::IsNotNull( this->_lives->getFirstExisting().StaticCast<  ::flixel::FlxSprite >() )) {
HXLINE( 203)			this->_lives->getFirstExisting().StaticCast<  ::flixel::FlxSprite >()->set_exists(false);
            		}
HXLINE( 204)		if (::hx::IsNull( this->_lives->getFirstExisting().StaticCast<  ::flixel::FlxSprite >() )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_207_loseLife)
HXLINE( 207)				 ::flixel::FlxState nextState =  ::GameOverState_obj::__alloc( HX_CTX ,null());
HXDLIN( 207)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 207)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 205)			player->kill();
HXLINE( 206)			::flixel::FlxG_obj::camera->fade(-16777216,2,false, ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE( 210)		this->_hitSound->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,loseLife,(void))

void PlayState_obj::loseBossLife( ::BossArm bossArm, ::Projectile projectile){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_214_loseBossLife)
HXLINE( 216)		projectile->set_exists(false);
HXLINE( 217)		if (::flixel::effects::FlxFlicker_obj::isFlickering(( ( ::flixel::FlxObject)(this->_boss) ))) {
HXLINE( 218)			return;
            		}
HXLINE( 219)		{
HXLINE( 219)			 ::Dynamic CompletionCallback = null();
HXDLIN( 219)			 ::Dynamic ProgressCallback = null();
HXDLIN( 219)			::flixel::effects::FlxFlicker_obj::flicker(( ( ::flixel::FlxObject)(this->_boss) ),1,((Float)0.05),true,true,CompletionCallback,ProgressCallback);
            		}
HXLINE( 220)		if (::hx::IsNotNull( this->_bossLives->getFirstExisting().StaticCast<  ::flixel::FlxSprite >() )) {
HXLINE( 221)			this->_bossLives->getFirstExisting().StaticCast<  ::flixel::FlxSprite >()->set_exists(false);
            		}
HXLINE( 222)		if (::hx::IsNull( this->_bossLives->getFirstExisting().StaticCast<  ::flixel::FlxSprite >() )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_225_loseBossLife)
HXLINE( 225)				 ::flixel::FlxState nextState =  ::WinState_obj::__alloc( HX_CTX ,null());
HXDLIN( 225)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 225)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 223)			this->_boss->kill();
HXLINE( 224)			::flixel::FlxG_obj::camera->fade(-16777216,2,false, ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE( 229)		this->_hitSound->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,loseBossLife,(void))

void PlayState_obj::startBossFight(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_232_startBossFight)
HXLINE( 233)		::flixel::FlxG_obj::camera->flash(-1,3,null(),null());
HXLINE( 235)		this->_bossLives->set_visible(true);
HXLINE( 237)		::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/sawsquarenoiseBossTheme.ogg",93,1d,fa,e8),((Float)0.5),true,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,startBossFight,(void))


::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_projectiles,"_projectiles");
	HX_MARK_MEMBER_NAME(_monsters,"_monsters");
	HX_MARK_MEMBER_NAME(_monsterProjectiles,"_monsterProjectiles");
	HX_MARK_MEMBER_NAME(_level,"_level");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_boss,"_boss");
	HX_MARK_MEMBER_NAME(_bossArms,"_bossArms");
	HX_MARK_MEMBER_NAME(_bossProjectiles,"_bossProjectiles");
	HX_MARK_MEMBER_NAME(_bossWave,"_bossWave");
	HX_MARK_MEMBER_NAME(_lives,"_lives");
	HX_MARK_MEMBER_NAME(_bossLives,"_bossLives");
	HX_MARK_MEMBER_NAME(_hud,"_hud");
	HX_MARK_MEMBER_NAME(_hitSound,"_hitSound");
	HX_MARK_MEMBER_NAME(_gibs,"_gibs");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_projectiles,"_projectiles");
	HX_VISIT_MEMBER_NAME(_monsters,"_monsters");
	HX_VISIT_MEMBER_NAME(_monsterProjectiles,"_monsterProjectiles");
	HX_VISIT_MEMBER_NAME(_level,"_level");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_boss,"_boss");
	HX_VISIT_MEMBER_NAME(_bossArms,"_bossArms");
	HX_VISIT_MEMBER_NAME(_bossProjectiles,"_bossProjectiles");
	HX_VISIT_MEMBER_NAME(_bossWave,"_bossWave");
	HX_VISIT_MEMBER_NAME(_lives,"_lives");
	HX_VISIT_MEMBER_NAME(_bossLives,"_bossLives");
	HX_VISIT_MEMBER_NAME(_hud,"_hud");
	HX_VISIT_MEMBER_NAME(_hitSound,"_hitSound");
	HX_VISIT_MEMBER_NAME(_gibs,"_gibs");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return ::hx::Val( hit_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_hud") ) { return ::hx::Val( _hud ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_boss") ) { return ::hx::Val( _boss ); }
		if (HX_FIELD_EQ(inName,"_gibs") ) { return ::hx::Val( _gibs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { return ::hx::Val( _level ); }
		if (HX_FIELD_EQ(inName,"_lives") ) { return ::hx::Val( _lives ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return ::hx::Val( _player ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"meleeHit") ) { return ::hx::Val( meleeHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"loseLife") ) { return ::hx::Val( loseLife_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_monsters") ) { return ::hx::Val( _monsters ); }
		if (HX_FIELD_EQ(inName,"_bossArms") ) { return ::hx::Val( _bossArms ); }
		if (HX_FIELD_EQ(inName,"_bossWave") ) { return ::hx::Val( _bossWave ); }
		if (HX_FIELD_EQ(inName,"_hitSound") ) { return ::hx::Val( _hitSound ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bossLives") ) { return ::hx::Val( _bossLives ); }
		if (HX_FIELD_EQ(inName,"stopBounce") ) { return ::hx::Val( stopBounce_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_projectiles") ) { return ::hx::Val( _projectiles ); }
		if (HX_FIELD_EQ(inName,"loseBossLife") ) { return ::hx::Val( loseBossLife_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startBossFight") ) { return ::hx::Val( startBossFight_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_bossProjectiles") ) { return ::hx::Val( _bossProjectiles ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_monsterProjectiles") ) { return ::hx::Val( _monsterProjectiles ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_hud") ) { _hud=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_boss") ) { _boss=inValue.Cast<  ::Boss >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gibs") ) { _gibs=inValue.Cast<  ::flixel::effects::particles::FlxTypedEmitter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { _level=inValue.Cast<  ::flixel::tile::FlxTilemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lives") ) { _lives=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast<  ::Player >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_monsters") ) { _monsters=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bossArms") ) { _bossArms=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bossWave") ) { _bossWave=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hitSound") ) { _hitSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bossLives") ) { _bossLives=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_projectiles") ) { _projectiles=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_bossProjectiles") ) { _bossProjectiles=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_monsterProjectiles") ) { _monsterProjectiles=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_projectiles",6b,54,93,9b));
	outFields->push(HX_("_monsters",78,3a,2f,29));
	outFields->push(HX_("_monsterProjectiles",8f,10,50,1c));
	outFields->push(HX_("_level",c5,5c,4a,6e));
	outFields->push(HX_("_player",00,fd,2f,a6));
	outFields->push(HX_("_boss",8c,a3,2c,f4));
	outFields->push(HX_("_bossArms",43,18,21,92));
	outFields->push(HX_("_bossProjectiles",3e,6e,8c,54));
	outFields->push(HX_("_bossWave",65,eb,9e,a0));
	outFields->push(HX_("_lives",48,37,ef,70));
	outFields->push(HX_("_bossLives",db,60,50,9a));
	outFields->push(HX_("_hud",b8,95,1a,3f));
	outFields->push(HX_("_hitSound",db,e0,c1,07));
	outFields->push(HX_("_gibs",52,18,76,f7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_projectiles),HX_("_projectiles",6b,54,93,9b)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_monsters),HX_("_monsters",78,3a,2f,29)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_monsterProjectiles),HX_("_monsterProjectiles",8f,10,50,1c)},
	{::hx::fsObject /*  ::flixel::tile::FlxTilemap */ ,(int)offsetof(PlayState_obj,_level),HX_("_level",c5,5c,4a,6e)},
	{::hx::fsObject /*  ::Player */ ,(int)offsetof(PlayState_obj,_player),HX_("_player",00,fd,2f,a6)},
	{::hx::fsObject /*  ::Boss */ ,(int)offsetof(PlayState_obj,_boss),HX_("_boss",8c,a3,2c,f4)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_bossArms),HX_("_bossArms",43,18,21,92)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_bossProjectiles),HX_("_bossProjectiles",3e,6e,8c,54)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,_bossWave),HX_("_bossWave",65,eb,9e,a0)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_lives),HX_("_lives",48,37,ef,70)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_bossLives),HX_("_bossLives",db,60,50,9a)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_hud),HX_("_hud",b8,95,1a,3f)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,_hitSound),HX_("_hitSound",db,e0,c1,07)},
	{::hx::fsObject /*  ::flixel::effects::particles::FlxTypedEmitter */ ,(int)offsetof(PlayState_obj,_gibs),HX_("_gibs",52,18,76,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("_projectiles",6b,54,93,9b),
	HX_("_monsters",78,3a,2f,29),
	HX_("_monsterProjectiles",8f,10,50,1c),
	HX_("_level",c5,5c,4a,6e),
	HX_("_player",00,fd,2f,a6),
	HX_("_boss",8c,a3,2c,f4),
	HX_("_bossArms",43,18,21,92),
	HX_("_bossProjectiles",3e,6e,8c,54),
	HX_("_bossWave",65,eb,9e,a0),
	HX_("_lives",48,37,ef,70),
	HX_("_bossLives",db,60,50,9a),
	HX_("_hud",b8,95,1a,3f),
	HX_("_hitSound",db,e0,c1,07),
	HX_("_gibs",52,18,76,f7),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("hit",53,46,4f,00),
	HX_("meleeHit",3f,8b,6f,5b),
	HX_("stopBounce",2a,d7,cc,8f),
	HX_("loseLife",71,f5,25,7e),
	HX_("loseBossLife",3e,62,60,63),
	HX_("startBossFight",21,da,75,e9),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

