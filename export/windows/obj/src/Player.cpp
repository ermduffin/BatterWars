#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Projectile
#include <Projectile.h>
#endif
#ifndef INCLUDED_ProjectileType
#include <ProjectileType.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_13_new,"Player","new",0x8d5554f3,"Player.new","Player.hx",13,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_1[] = {
	(int)0,(int)1,
};
static const int _hx_array_data_6c4d5f81_2[] = {
	(int)0,(int)1,
};
static const int _hx_array_data_6c4d5f81_3[] = {
	(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,
};
static const int _hx_array_data_6c4d5f81_4[] = {
	(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,
};
static const int _hx_array_data_6c4d5f81_5[] = {
	(int)8,(int)9,
};
static const int _hx_array_data_6c4d5f81_6[] = {
	(int)8,(int)9,
};
static const int _hx_array_data_6c4d5f81_7[] = {
	(int)10,(int)11,
};
static const int _hx_array_data_6c4d5f81_8[] = {
	(int)10,(int)11,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_23_update,"Player","update",0xf1f8df56,"Player.update","Player.hx",23,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_29_kill,"Player","kill",0x1b5c5bab,"Player.kill","Player.hx",29,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_61_movement,"Player","movement",0x91ad8bbc,"Player.movement","Player.hx",61,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_12[] = {
	(int)65,(int)68,
};
static const int _hx_array_data_6c4d5f81_13[] = {
	(int)65,(int)68,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_173_hurt,"Player","hurt",0x1969d81c,"Player.hurt","Player.hx",173,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_182_shoot,"Player","shoot",0x70019132,"Player.shoot","Player.hx",182,0xa27fc9dd)

void Player_obj::__construct( ::Dynamic __o_X, ::Dynamic __o_Y, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs){
            		 ::Dynamic X = __o_X;
            		if (::hx::IsNull(__o_X)) X = 0;
            		 ::Dynamic Y = __o_Y;
            		if (::hx::IsNull(__o_Y)) Y = 0;
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_13_new)
HXLINE(  15)		this->flickering = false;
HXLINE(  14)		this->SPEED = ((Float)200);
HXLINE(  37)		super::__construct(X,Y,null());
HXLINE(  39)		this->loadGraphic(HX_("assets/images/player_spritesheet.png",82,a6,d4,5e),true,30,42,null(),null());
HXLINE(  40)		this->animation->add(HX_("idleleft",1b,c9,c6,51),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_1,2),2,true,true,null());
HXLINE(  41)		this->animation->add(HX_("idleright",48,3c,36,b3),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_2,2),2,true,null(),null());
HXLINE(  42)		this->animation->add(HX_("walkleft",90,1d,30,6a),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_3,6),10,true,true,null());
HXLINE(  43)		this->animation->add(HX_("walkright",33,ce,f6,f6),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_4,6),10,true,null(),null());
HXLINE(  44)		this->animation->add(HX_("idleshootleft",d2,3b,78,00),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_5,2),8,false,true,null());
HXLINE(  45)		this->animation->add(HX_("idleshootright",b1,29,c9,df),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_6,2),8,false,null(),null());
HXLINE(  46)		this->animation->add(HX_("walkshootleft",3d,9f,7f,8d),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_7,2),8,false,true,null());
HXLINE(  47)		this->animation->add(HX_("walkshootright",e6,c3,38,b9),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_8,2),8,false,null(),null());
HXLINE(  49)		this->acceleration->set_y(( (Float)(500) ));
HXLINE(  50)		this->drag->set_y(( (Float)(200) ));
HXLINE(  51)		this->animation->play(HX_("idleright",48,3c,36,b3),null(),null(),null());
HXLINE(  52)		this->health = ( (Float)(30) );
HXLINE(  54)		this->_projectiles = projectiles;
HXLINE(  55)		this->_gibs = gibs;
HXLINE(  57)		this->shootSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/playershoot.wav",5d,30,85,ff),null(),null(),null(),null(),null(),null(),null(),null());
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33e526a5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x33e526a5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Player_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_23_update)
HXLINE(  24)		this->movement();
HXLINE(  25)		this->shoot();
HXLINE(  26)		this->super::update(elapsed);
            	}


void Player_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_29_kill)
HXLINE(  30)		this->super::kill();
HXLINE(  31)		this->_gibs->focusOn(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  32)		this->_gibs->start(null(),null(),null());
            	}


void Player_obj::movement(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_61_movement)
HXLINE(  63)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  63)		this->left = _this->keyManager->checkStatus(65,_this->status);
HXLINE(  64)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  64)		this->right = _this1->keyManager->checkStatus(68,_this1->status);
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		if (this->left) {
HXLINE(  67)			_hx_tmp = this->right;
            		}
            		else {
HXLINE(  67)			_hx_tmp = false;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  68)			this->left = (this->right = false);
            		}
HXLINE(  70)		this->velocity->set_x(( (Float)(0) ));
HXLINE(  73)		if (this->left) {
HXLINE(  74)			this->velocity->set_x(( (Float)(-250) ));
            		}
HXLINE(  75)		if (this->right) {
HXLINE(  76)			this->velocity->set_x(( (Float)(250) ));
            		}
HXLINE(  79)		bool _hx_tmp1;
HXDLIN(  79)		bool _hx_tmp2;
HXDLIN(  79)		int Direction = 4096;
HXDLIN(  79)		bool _hx_tmp3;
HXDLIN(  79)		if (((this->touching & Direction) > 0)) {
HXLINE(  79)			_hx_tmp3 = ((this->wasTouching & Direction) <= 0);
            		}
            		else {
HXLINE(  79)			_hx_tmp3 = false;
            		}
HXDLIN(  79)		if (_hx_tmp3) {
HXLINE(  79)			_hx_tmp2 = !(this->left);
            		}
            		else {
HXLINE(  79)			_hx_tmp2 = false;
            		}
HXDLIN(  79)		if (_hx_tmp2) {
HXLINE(  79)			_hx_tmp1 = !(this->right);
            		}
            		else {
HXLINE(  79)			_hx_tmp1 = false;
            		}
HXDLIN(  79)		if (_hx_tmp1) {
HXLINE(  80)			if ((this->facing == 1)) {
HXLINE(  81)				this->animation->play(HX_("idleleft",1b,c9,c6,51),null(),null(),null());
            			}
            			else {
HXLINE(  82)				if ((this->facing == 16)) {
HXLINE(  83)					this->animation->play(HX_("idleright",48,3c,36,b3),null(),null(),null());
            				}
            			}
            		}
            		else {
HXLINE(  85)			bool _hx_tmp;
HXDLIN(  85)			int Direction = 4096;
HXDLIN(  85)			bool _hx_tmp1;
HXDLIN(  85)			if (((this->touching & Direction) > 0)) {
HXLINE(  85)				_hx_tmp1 = ((this->wasTouching & Direction) <= 0);
            			}
            			else {
HXLINE(  85)				_hx_tmp1 = false;
            			}
HXDLIN(  85)			if (_hx_tmp1) {
HXLINE(  85)				if (!(this->left)) {
HXLINE(  85)					_hx_tmp = this->right;
            				}
            				else {
HXLINE(  85)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  85)				_hx_tmp = false;
            			}
HXDLIN(  85)			if (_hx_tmp) {
HXLINE(  86)				if (this->left) {
HXLINE(  87)					{
HXLINE(  87)						 ::flixel::animation::FlxAnimationController _this = this->animation;
HXDLIN(  87)						if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE(  87)							_this->_curAnim->reset();
            						}
            					}
HXLINE(  88)					this->animation->play(HX_("walkleft",90,1d,30,6a),null(),null(),null());
HXLINE(  89)					this->set_facing(1);
            				}
            				else {
HXLINE(  91)					if (this->right) {
HXLINE(  92)						{
HXLINE(  92)							 ::flixel::animation::FlxAnimationController _this = this->animation;
HXDLIN(  92)							if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE(  92)								_this->_curAnim->reset();
            							}
            						}
HXLINE(  93)						this->animation->play(HX_("walkright",33,ce,f6,f6),null(),null(),null());
HXLINE(  94)						this->set_facing(16);
            					}
            				}
            			}
            		}
HXLINE(  98)		if (((this->touching & 4096) > 0)) {
HXLINE(  99)			if (this->animation->_curAnim->finished) {
HXLINE( 100)				if (this->left) {
HXLINE( 101)					this->animation->play(HX_("walkleft",90,1d,30,6a),null(),null(),null());
HXLINE( 102)					this->animation->set_frameIndex(4);
            				}
            				else {
HXLINE( 104)					if (this->right) {
HXLINE( 105)						this->animation->play(HX_("walkright",33,ce,f6,f6),null(),null(),null());
HXLINE( 106)						this->animation->set_frameIndex(4);
            					}
            					else {
HXLINE( 108)						if ((this->facing == 1)) {
HXLINE( 109)							this->animation->play(HX_("idleleft",1b,c9,c6,51),null(),null(),null());
            						}
            						else {
HXLINE( 110)							if ((this->facing == 16)) {
HXLINE( 111)								this->animation->play(HX_("idleright",48,3c,36,b3),null(),null(),null());
            							}
            						}
            					}
            				}
            			}
HXLINE( 115)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_12,2),2)) {
HXLINE( 117)				{
HXLINE( 117)					 ::flixel::animation::FlxAnimationController _this = this->animation;
HXDLIN( 117)					if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 117)						_this->_curAnim->reset();
            					}
            				}
HXLINE( 119)				if (this->left) {
HXLINE( 120)					this->set_facing(1);
HXLINE( 121)					this->animation->play(HX_("walkleft",90,1d,30,6a),null(),null(),null());
            				}
            				else {
HXLINE( 123)					if (this->right) {
HXLINE( 124)						this->set_facing(16);
HXLINE( 125)						this->animation->play(HX_("walkright",33,ce,f6,f6),null(),null(),null());
            					}
            					else {
HXLINE( 128)						if ((this->facing == 1)) {
HXLINE( 129)							this->animation->play(HX_("idleleft",1b,c9,c6,51),null(),null(),null());
            						}
            						else {
HXLINE( 130)							if ((this->facing == 16)) {
HXLINE( 131)								this->animation->play(HX_("idleright",48,3c,36,b3),null(),null(),null());
            							}
            						}
            					}
            				}
            			}
HXLINE( 135)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 135)			if (_this->keyManager->checkStatus(87,_this->status)) {
HXLINE( 136)				{
HXLINE( 136)					 ::flixel::animation::FlxAnimationController _this = this->animation;
HXDLIN( 136)					if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 136)						_this->_curAnim->reset();
            					}
            				}
HXLINE( 138)				if ((this->facing == 1)) {
HXLINE( 139)					this->animation->play(HX_("walkleft",90,1d,30,6a),null(),null(),null());
HXLINE( 140)					{
HXLINE( 140)						 ::flixel::animation::FlxAnimationController _this = this->animation;
HXDLIN( 140)						if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 140)							_this->_curAnim->pause();
            						}
            					}
HXLINE( 141)					this->animation->set_frameIndex(3);
            				}
            				else {
HXLINE( 144)					if ((this->facing == 16)) {
HXLINE( 145)						this->animation->play(HX_("walkright",33,ce,f6,f6),null(),null(),null());
HXLINE( 146)						{
HXLINE( 146)							 ::flixel::animation::FlxAnimationController _this = this->animation;
HXDLIN( 146)							if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 146)								_this->_curAnim->pause();
            							}
            						}
HXLINE( 147)						this->animation->set_frameIndex(3);
            					}
            				}
HXLINE( 149)				this->velocity->set_y(( (Float)(-330) ));
            			}
HXLINE( 153)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_13,2),-1)) {
HXLINE( 154)				{
HXLINE( 154)					 ::flixel::animation::FlxAnimationController _this = this->animation;
HXDLIN( 154)					if (::hx::IsNotNull( _this->_curAnim )) {
HXLINE( 154)						_this->_curAnim->reset();
            					}
            				}
HXLINE( 156)				if (this->left) {
HXLINE( 157)					this->set_facing(1);
HXLINE( 158)					this->animation->play(HX_("walkleft",90,1d,30,6a),null(),null(),null());
            				}
            				else {
HXLINE( 160)					if (this->right) {
HXLINE( 161)						this->set_facing(16);
HXLINE( 162)						this->animation->play(HX_("walkright",33,ce,f6,f6),null(),null(),null());
            					}
            					else {
HXLINE( 165)						if ((this->facing == 1)) {
HXLINE( 166)							this->animation->play(HX_("idleleft",1b,c9,c6,51),null(),null(),null());
            						}
            						else {
HXLINE( 167)							if ((this->facing == 16)) {
HXLINE( 168)								this->animation->play(HX_("idleright",48,3c,36,b3),null(),null(),null());
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,movement,(void))

void Player_obj::hurt(Float damage){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_173_hurt)
HXLINE( 174)		if (::flixel::effects::FlxFlicker_obj::isFlickering(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE( 175)			return;
            		}
HXLINE( 176)		{
HXLINE( 176)			 ::Dynamic CompletionCallback = null();
HXDLIN( 176)			 ::Dynamic ProgressCallback = null();
HXDLIN( 176)			::flixel::effects::FlxFlicker_obj::flicker(::hx::ObjectPtr<OBJ_>(this),1,((Float)0.05),true,true,CompletionCallback,ProgressCallback);
            		}
HXLINE( 177)		this->super::hurt(damage);
            	}


void Player_obj::shoot(){
            	HX_GC_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_182_shoot)
HXDLIN( 182)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 184)			 ::flixel::group::FlxTypedGroup _hx_tmp = this->_projectiles;
HXDLIN( 184)			_hx_tmp->add( ::Projectile_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),::ProjectileType_obj::PANCAKE_dyn())).StaticCast<  ::Projectile >();
HXLINE( 185)			this->shootSound->play(null(),null(),null());
HXLINE( 186)			this->curAnimName = this->animation->_curAnim->name;
HXLINE( 187)			bool _hx_tmp1;
HXDLIN( 187)			if (!(this->left)) {
HXLINE( 187)				if ((this->facing == 1)) {
HXLINE( 187)					_hx_tmp1 = !(((this->touching & 4096) > 0));
            				}
            				else {
HXLINE( 187)					_hx_tmp1 = false;
            				}
            			}
            			else {
HXLINE( 187)				_hx_tmp1 = true;
            			}
HXDLIN( 187)			if (_hx_tmp1) {
HXLINE( 188)				this->animation->play(HX_("walkshootleft",3d,9f,7f,8d),null(),null(),null());
            			}
            			else {
HXLINE( 189)				bool _hx_tmp;
HXDLIN( 189)				if (!(this->right)) {
HXLINE( 189)					if ((this->facing == 16)) {
HXLINE( 189)						_hx_tmp = !(((this->touching & 4096) > 0));
            					}
            					else {
HXLINE( 189)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 189)					_hx_tmp = true;
            				}
HXDLIN( 189)				if (_hx_tmp) {
HXLINE( 190)					this->animation->play(HX_("walkshootright",e6,c3,38,b9),null(),null(),null());
            				}
            				else {
HXLINE( 191)					if ((this->facing == 1)) {
HXLINE( 192)						this->animation->play(HX_("idleshootleft",d2,3b,78,00),null(),null(),null());
            					}
            					else {
HXLINE( 193)						if ((this->facing == 16)) {
HXLINE( 194)							this->animation->play(HX_("idleshootright",b1,29,c9,df),null(),null(),null());
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,shoot,(void))


::hx::ObjectPtr< Player_obj > Player_obj::__new( ::Dynamic __o_X, ::Dynamic __o_Y, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs) {
	::hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(__o_X,__o_Y,projectiles,gibs);
	return __this;
}

::hx::ObjectPtr< Player_obj > Player_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs) {
	Player_obj *__this = (Player_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,projectiles,gibs);
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(SPEED,"SPEED");
	HX_MARK_MEMBER_NAME(flickering,"flickering");
	HX_MARK_MEMBER_NAME(_projectiles,"_projectiles");
	HX_MARK_MEMBER_NAME(shootSound,"shootSound");
	HX_MARK_MEMBER_NAME(_gibs,"_gibs");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(curAnimName,"curAnimName");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(SPEED,"SPEED");
	HX_VISIT_MEMBER_NAME(flickering,"flickering");
	HX_VISIT_MEMBER_NAME(_projectiles,"_projectiles");
	HX_VISIT_MEMBER_NAME(shootSound,"shootSound");
	HX_VISIT_MEMBER_NAME(_gibs,"_gibs");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(curAnimName,"curAnimName");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Player_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return ::hx::Val( hurt_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SPEED") ) { return ::hx::Val( SPEED ); }
		if (HX_FIELD_EQ(inName,"_gibs") ) { return ::hx::Val( _gibs ); }
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right ); }
		if (HX_FIELD_EQ(inName,"shoot") ) { return ::hx::Val( shoot_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"movement") ) { return ::hx::Val( movement_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flickering") ) { return ::hx::Val( flickering ); }
		if (HX_FIELD_EQ(inName,"shootSound") ) { return ::hx::Val( shootSound ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curAnimName") ) { return ::hx::Val( curAnimName ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_projectiles") ) { return ::hx::Val( _projectiles ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Player_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SPEED") ) { SPEED=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gibs") ) { _gibs=inValue.Cast<  ::flixel::effects::particles::FlxTypedEmitter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flickering") ) { flickering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shootSound") ) { shootSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curAnimName") ) { curAnimName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_projectiles") ) { _projectiles=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("SPEED",67,cf,57,ff));
	outFields->push(HX_("flickering",ea,5c,54,61));
	outFields->push(HX_("_projectiles",6b,54,93,9b));
	outFields->push(HX_("shootSound",70,52,94,5d));
	outFields->push(HX_("_gibs",52,18,76,f7));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("curAnimName",9c,c2,93,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Player_obj,SPEED),HX_("SPEED",67,cf,57,ff)},
	{::hx::fsBool,(int)offsetof(Player_obj,flickering),HX_("flickering",ea,5c,54,61)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Player_obj,_projectiles),HX_("_projectiles",6b,54,93,9b)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(Player_obj,shootSound),HX_("shootSound",70,52,94,5d)},
	{::hx::fsObject /*  ::flixel::effects::particles::FlxTypedEmitter */ ,(int)offsetof(Player_obj,_gibs),HX_("_gibs",52,18,76,f7)},
	{::hx::fsBool,(int)offsetof(Player_obj,left),HX_("left",07,08,b0,47)},
	{::hx::fsBool,(int)offsetof(Player_obj,right),HX_("right",dc,0b,64,e9)},
	{::hx::fsString,(int)offsetof(Player_obj,curAnimName),HX_("curAnimName",9c,c2,93,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("SPEED",67,cf,57,ff),
	HX_("flickering",ea,5c,54,61),
	HX_("_projectiles",6b,54,93,9b),
	HX_("shootSound",70,52,94,5d),
	HX_("_gibs",52,18,76,f7),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("curAnimName",9c,c2,93,fd),
	HX_("update",09,86,05,87),
	HX_("kill",9e,df,09,47),
	HX_("movement",2f,85,37,00),
	HX_("hurt",0f,5c,17,45),
	HX_("shoot",df,81,27,7c),
	::String(null()) };

::hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Player",81,5f,4d,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Player_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

