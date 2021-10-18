#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Boss
#include <Boss.h>
#endif
#ifndef INCLUDED_BossArm
#include <BossArm.h>
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
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_11_new,"Boss","new",0x17aabf3f,"Boss.new","Boss.hx",11,0x9d612d11)
static const int _hx_array_data_2bf4b3cd_1[] = {
	(int)0,(int)1,
};
static const int _hx_array_data_2bf4b3cd_2[] = {
	(int)0,(int)1,
};
static const int _hx_array_data_2bf4b3cd_3[] = {
	(int)2,(int)4,(int)6,(int)8,
};
static const int _hx_array_data_2bf4b3cd_4[] = {
	(int)3,(int)5,(int)7,(int)9,
};
static const int _hx_array_data_2bf4b3cd_5[] = {
	(int)8,(int)6,(int)4,(int)2,(int)0,
};
static const int _hx_array_data_2bf4b3cd_6[] = {
	(int)9,(int)7,(int)5,(int)3,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_73_update,"Boss","update",0x0d9dec8a,"Boss.update","Boss.hx",73,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_87_kill,"Boss","kill",0x9bc3f3df,"Boss.kill","Boss.hx",87,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_95_AI,"Boss","AI",0x9d610ae9,"Boss.AI","Boss.hx",95,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_93_AI,"Boss","AI",0x9d610ae9,"Boss.AI","Boss.hx",93,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_100_AI,"Boss","AI",0x9d610ae9,"Boss.AI","Boss.hx",100,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_107_AI,"Boss","AI",0x9d610ae9,"Boss.AI","Boss.hx",107,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_116_AI,"Boss","AI",0x9d610ae9,"Boss.AI","Boss.hx",116,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_123_AI,"Boss","AI",0x9d610ae9,"Boss.AI","Boss.hx",123,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_131_batterRainAttack,"Boss","batterRainAttack",0x0a655449,"Boss.batterRainAttack","Boss.hx",131,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_135_batterRainAttack,"Boss","batterRainAttack",0x0a655449,"Boss.batterRainAttack","Boss.hx",135,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_144_batterWaveAttack,"Boss","batterWaveAttack",0x3d284a6e,"Boss.batterWaveAttack","Boss.hx",144,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_148_batterWaveAttack,"Boss","batterWaveAttack",0x3d284a6e,"Boss.batterWaveAttack","Boss.hx",148,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_153_batterWaveAttack,"Boss","batterWaveAttack",0x3d284a6e,"Boss.batterWaveAttack","Boss.hx",153,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_157_batterWaveAttack,"Boss","batterWaveAttack",0x3d284a6e,"Boss.batterWaveAttack","Boss.hx",157,0x9d612d11)
HX_LOCAL_STACK_FRAME(_hx_pos_68d7b1d33d0ca13d_142_batterWaveAttack,"Boss","batterWaveAttack",0x3d284a6e,"Boss.batterWaveAttack","Boss.hx",142,0x9d612d11)

void Boss_obj::__construct(Float x,Float y, ::flixel::FlxObject target, ::flixel::effects::particles::FlxTypedEmitter gibs){
            	HX_GC_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_11_new)
HXLINE(  14)		this->ATTACK_RANGE_Y = ((Float)300);
HXLINE(  13)		this->ATTACK_RANGE = ((Float)500);
HXLINE(  27)		super::__construct(x,y,null());
HXLINE(  28)		this->_target = target;
HXLINE(  29)		this->_timer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE(  30)		this->_batterRainTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE(  31)		this->_batterWaveTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE(  32)		this->_projectiles =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  33)		this->_gibs = gibs;
HXLINE(  34)		this->set_immovable(true);
HXLINE(  37)		this->_arms =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  38)		 ::flixel::group::FlxTypedGroup _hx_tmp = this->_arms;
HXDLIN(  38)		_hx_tmp->add( ::BossArm_obj::__alloc( HX_CTX ,( (Float)(1637) ),( (Float)(848) ))).StaticCast<  ::BossArm >();
HXLINE(  39)		 ::flixel::group::FlxTypedGroup _hx_tmp1 = this->_arms;
HXDLIN(  39)		_hx_tmp1->add( ::BossArm_obj::__alloc( HX_CTX ,( (Float)(1919) ),( (Float)(848) ))).StaticCast<  ::BossArm >();
HXLINE(  42)		this->_wave =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  43)		this->_wave->set_immovable(true);
HXLINE(  44)		this->_wave->loadGraphic(HX_("assets/images/batter_wave_spritesheet.png",57,30,97,6a),true,130,73,null(),null());
HXLINE(  45)		this->_wave->animation->add(HX_("moving",8e,f2,af,cc),::Array_obj< int >::fromData( _hx_array_data_2bf4b3cd_1,2),2,null(),null(),null());
HXLINE(  46)		this->_wave->animation->play(HX_("moving",8e,f2,af,cc),null(),null(),null());
HXLINE(  47)		this->_wave->set_width(( (Float)(60) ));
HXLINE(  48)		this->_wave->offset->set_x(( (Float)(70) ));
HXLINE(  49)		this->_wave->velocity->set_x(( (Float)(200) ));
HXLINE(  52)		this->loadGraphic(HX_("assets/images/papa_globby_spritesheet.png",77,f7,f3,7d),true,431,253,null(),null());
HXLINE(  53)		this->animation->add(HX_("idle",14,a7,b3,45),::Array_obj< int >::fromData( _hx_array_data_2bf4b3cd_2,2),2,true,null(),null());
HXLINE(  54)		this->animation->add(HX_("attackright",14,5b,e6,fd),::Array_obj< int >::fromData( _hx_array_data_2bf4b3cd_3,4),4,false,null(),null());
HXLINE(  55)		this->animation->add(HX_("attackleft",cf,87,fd,96),::Array_obj< int >::fromData( _hx_array_data_2bf4b3cd_4,4),4,false,null(),null());
HXLINE(  56)		this->animation->add(HX_("attackrightreverse",8e,28,58,ac),::Array_obj< int >::fromData( _hx_array_data_2bf4b3cd_5,5),4,false,null(),null());
HXLINE(  57)		this->animation->add(HX_("attackleftreverse",33,d9,97,e7),::Array_obj< int >::fromData( _hx_array_data_2bf4b3cd_6,5),4,false,null(),null());
HXLINE(  58)		this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  60)		this->_timer->start(5,this->AI_dyn(),0);
HXLINE(  61)		this->_timer->active = false;
HXLINE(  63)		this->_batterRainTimer->start(15,this->batterRainAttack_dyn(),0);
HXLINE(  64)		this->_batterRainTimer->active = false;
HXLINE(  66)		this->_batterWaveTimer->start(20,this->batterWaveAttack_dyn(),0);
HXLINE(  67)		this->_batterWaveTimer->active = false;
HXLINE(  69)		this->_slamSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/slam.wav",22,bb,86,ba),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  70)		this->_waveSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/wave.wav",16,59,2e,a0),null(),null(),null(),null(),null(),null(),null(),null());
            	}

Dynamic Boss_obj::__CreateEmpty() { return new Boss_obj; }

void *Boss_obj::_hx_vtable = 0;

Dynamic Boss_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Boss_obj > _hx_result = new Boss_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Boss_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x0047a9f1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0047a9f1;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Boss_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_73_update)
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if ((::Math_obj::abs(((this->x + 200) - this->_target->x)) < this->ATTACK_RANGE)) {
HXLINE(  74)			_hx_tmp = (::Math_obj::abs((this->y - this->_target->y)) < this->ATTACK_RANGE_Y);
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  75)			this->_timer->active = true;
HXLINE(  76)			this->_batterRainTimer->active = true;
HXLINE(  77)			this->_batterWaveTimer->active = true;
            		}
            		else {
HXLINE(  80)			this->_timer->active = false;
HXLINE(  81)			this->_batterRainTimer->active = false;
HXLINE(  82)			this->_batterWaveTimer->active = false;
            		}
HXLINE(  84)		this->super::update(elapsed);
            	}


void Boss_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_87_kill)
HXLINE(  88)		this->super::kill();
HXLINE(  89)		this->_gibs->focusOn(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  90)		this->_gibs->start(null(),null(),null());
            	}


void Boss_obj::AI( ::flixel::util::FlxTimer timer){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::BossArm a){
            			HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_95_AI)
HXLINE(  95)			a->set_exists(false);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_93_AI)
HXDLIN(  93)		 ::Boss _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  94)		this->_arms->forEach( ::Dynamic(new _hx_Closure_0()),null());
HXLINE(  97)		if ((((this->x + 200) - this->_target->x) > 0)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Boss,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_100_AI)
HXLINE( 100)				if (_gthis->_arms->exists) {
HXLINE( 101)					Dynamic( _gthis->_arms->members->__get(0)).StaticCast<  ::BossArm >()->set_exists(true);
HXLINE( 102)					::flixel::FlxG_obj::camera->shake(((Float)0.005),((Float)0.5),null(),null(),null());
HXLINE( 103)					_gthis->_slamSound->play(null(),null(),null());
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Boss,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_107_AI)
HXLINE( 107)				if (_gthis->_arms->exists) {
HXLINE( 108)					Dynamic( _gthis->_arms->members->__get(0)).StaticCast<  ::BossArm >()->set_exists(false);
HXLINE( 109)					_gthis->animation->play(HX_("attackleftreverse",33,d9,97,e7),null(),null(),null());
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  98)			this->animation->play(HX_("attackleft",cf,87,fd,96),null(),null(),null());
HXLINE(  99)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_1(_gthis)),750);
HXLINE( 106)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_2(_gthis)),3000);
            		}
            		else {
HXLINE( 113)			if ((((this->x + 200) - this->_target->x) < 0)) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::Boss,_gthis) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_116_AI)
HXLINE( 116)					if (_gthis->_arms->exists) {
HXLINE( 117)						Dynamic( _gthis->_arms->members->__get(1)).StaticCast<  ::BossArm >()->set_exists(true);
HXLINE( 118)						::flixel::FlxG_obj::camera->shake(((Float)0.005),((Float)0.5),null(),null(),null());
HXLINE( 119)						_gthis->_slamSound->play(null(),null(),null());
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::Boss,_gthis) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_123_AI)
HXLINE( 123)					if (_gthis->_arms->exists) {
HXLINE( 124)						Dynamic( _gthis->_arms->members->__get(1)).StaticCast<  ::BossArm >()->set_exists(false);
HXLINE( 125)						_gthis->animation->play(HX_("attackrightreverse",8e,28,58,ac),null(),null(),null());
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 114)				this->animation->play(HX_("attackright",14,5b,e6,fd),null(),null(),null());
HXLINE( 115)				::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_3(_gthis)),750);
HXLINE( 122)				::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_4(_gthis)),3000);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Boss_obj,AI,(void))

void Boss_obj::batterRainAttack( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_131_batterRainAttack)
HXDLIN( 131)		 ::Boss _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 132)		int projectilesNum = ::flixel::FlxG_obj::random->_hx_int(10,20,null());
HXLINE( 133)		{
HXLINE( 133)			int _g = 0;
HXDLIN( 133)			int _g1 = projectilesNum;
HXDLIN( 133)			while((_g < _g1)){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Boss,_gthis) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_135_batterRainAttack)
HXLINE( 135)					if (_gthis->_projectiles->exists) {
HXLINE( 136)						 ::flixel::group::FlxTypedGroup _gthis1 = _gthis->_projectiles;
HXDLIN( 136)						_gthis1->add( ::Projectile_obj::__alloc( HX_CTX ,_gthis,::ProjectileType_obj::BATTERBOMB_dyn())).StaticCast<  ::Projectile >();
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 133)				_g = (_g + 1);
HXDLIN( 133)				int i = (_g - 1);
HXLINE( 134)				::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),::flixel::FlxG_obj::random->_hx_int(1000,5000,null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Boss_obj,batterRainAttack,(void))

void Boss_obj::batterWaveAttack( ::flixel::util::FlxTimer timer){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Boss,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_144_batterWaveAttack)
HXLINE( 144)			if (_gthis->_wave->exists) {
HXLINE( 145)				_gthis->_waveSound->play(null(),null(),null());
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Boss,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_148_batterWaveAttack)
HXLINE( 148)			if (_gthis->_wave->exists) {
HXLINE( 149)				_gthis->_wave->setPosition(1100,855);
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Boss,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_153_batterWaveAttack)
HXLINE( 153)			if (_gthis->_wave->exists) {
HXLINE( 154)				_gthis->_wave->set_solid(true);
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::Boss,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_157_batterWaveAttack)
HXLINE( 157)			if (_gthis->_wave->exists) {
HXLINE( 158)				_gthis->_wave->set_solid(false);
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_68d7b1d33d0ca13d_142_batterWaveAttack)
HXDLIN( 142)		 ::Boss _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 143)		::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),2000);
HXLINE( 147)		::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_1(_gthis)),3000);
HXLINE( 152)		::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_2(_gthis)),3250);
HXLINE( 156)		::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_3(_gthis)),13000);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Boss_obj,batterWaveAttack,(void))


::hx::ObjectPtr< Boss_obj > Boss_obj::__new(Float x,Float y, ::flixel::FlxObject target, ::flixel::effects::particles::FlxTypedEmitter gibs) {
	::hx::ObjectPtr< Boss_obj > __this = new Boss_obj();
	__this->__construct(x,y,target,gibs);
	return __this;
}

::hx::ObjectPtr< Boss_obj > Boss_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y, ::flixel::FlxObject target, ::flixel::effects::particles::FlxTypedEmitter gibs) {
	Boss_obj *__this = (Boss_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Boss_obj), true, "Boss"));
	*(void **)__this = Boss_obj::_hx_vtable;
	__this->__construct(x,y,target,gibs);
	return __this;
}

Boss_obj::Boss_obj()
{
}

void Boss_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Boss);
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(ATTACK_RANGE,"ATTACK_RANGE");
	HX_MARK_MEMBER_NAME(ATTACK_RANGE_Y,"ATTACK_RANGE_Y");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_batterRainTimer,"_batterRainTimer");
	HX_MARK_MEMBER_NAME(_batterWaveTimer,"_batterWaveTimer");
	HX_MARK_MEMBER_NAME(_arms,"_arms");
	HX_MARK_MEMBER_NAME(_wave,"_wave");
	HX_MARK_MEMBER_NAME(_projectiles,"_projectiles");
	HX_MARK_MEMBER_NAME(_gibs,"_gibs");
	HX_MARK_MEMBER_NAME(_slamSound,"_slamSound");
	HX_MARK_MEMBER_NAME(_waveSound,"_waveSound");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Boss_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(ATTACK_RANGE,"ATTACK_RANGE");
	HX_VISIT_MEMBER_NAME(ATTACK_RANGE_Y,"ATTACK_RANGE_Y");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_batterRainTimer,"_batterRainTimer");
	HX_VISIT_MEMBER_NAME(_batterWaveTimer,"_batterWaveTimer");
	HX_VISIT_MEMBER_NAME(_arms,"_arms");
	HX_VISIT_MEMBER_NAME(_wave,"_wave");
	HX_VISIT_MEMBER_NAME(_projectiles,"_projectiles");
	HX_VISIT_MEMBER_NAME(_gibs,"_gibs");
	HX_VISIT_MEMBER_NAME(_slamSound,"_slamSound");
	HX_VISIT_MEMBER_NAME(_waveSound,"_waveSound");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Boss_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"AI") ) { return ::hx::Val( AI_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_arms") ) { return ::hx::Val( _arms ); }
		if (HX_FIELD_EQ(inName,"_wave") ) { return ::hx::Val( _wave ); }
		if (HX_FIELD_EQ(inName,"_gibs") ) { return ::hx::Val( _gibs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { return ::hx::Val( _timer ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_slamSound") ) { return ::hx::Val( _slamSound ); }
		if (HX_FIELD_EQ(inName,"_waveSound") ) { return ::hx::Val( _waveSound ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ATTACK_RANGE") ) { return ::hx::Val( ATTACK_RANGE ); }
		if (HX_FIELD_EQ(inName,"_projectiles") ) { return ::hx::Val( _projectiles ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ATTACK_RANGE_Y") ) { return ::hx::Val( ATTACK_RANGE_Y ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_batterRainTimer") ) { return ::hx::Val( _batterRainTimer ); }
		if (HX_FIELD_EQ(inName,"_batterWaveTimer") ) { return ::hx::Val( _batterWaveTimer ); }
		if (HX_FIELD_EQ(inName,"batterRainAttack") ) { return ::hx::Val( batterRainAttack_dyn() ); }
		if (HX_FIELD_EQ(inName,"batterWaveAttack") ) { return ::hx::Val( batterWaveAttack_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Boss_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_arms") ) { _arms=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wave") ) { _wave=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gibs") ) { _gibs=inValue.Cast<  ::flixel::effects::particles::FlxTypedEmitter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_slamSound") ) { _slamSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waveSound") ) { _waveSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ATTACK_RANGE") ) { ATTACK_RANGE=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_projectiles") ) { _projectiles=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ATTACK_RANGE_Y") ) { ATTACK_RANGE_Y=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_batterRainTimer") ) { _batterRainTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_batterWaveTimer") ) { _batterWaveTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Boss_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("ATTACK_RANGE",a6,d2,43,27));
	outFields->push(HX_("ATTACK_RANGE_Y",40,9b,da,5d));
	outFields->push(HX_("_timer",06,07,1d,0c));
	outFields->push(HX_("_batterRainTimer",86,b3,22,80));
	outFields->push(HX_("_batterWaveTimer",01,89,3a,22));
	outFields->push(HX_("_arms",76,ae,85,f3));
	outFields->push(HX_("_wave",98,81,03,02));
	outFields->push(HX_("_projectiles",6b,54,93,9b));
	outFields->push(HX_("_gibs",52,18,76,f7));
	outFields->push(HX_("_slamSound",8b,1c,df,a9));
	outFields->push(HX_("_waveSound",17,b4,e1,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Boss_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(Boss_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsFloat,(int)offsetof(Boss_obj,ATTACK_RANGE),HX_("ATTACK_RANGE",a6,d2,43,27)},
	{::hx::fsFloat,(int)offsetof(Boss_obj,ATTACK_RANGE_Y),HX_("ATTACK_RANGE_Y",40,9b,da,5d)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(Boss_obj,_timer),HX_("_timer",06,07,1d,0c)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(Boss_obj,_batterRainTimer),HX_("_batterRainTimer",86,b3,22,80)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(Boss_obj,_batterWaveTimer),HX_("_batterWaveTimer",01,89,3a,22)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Boss_obj,_arms),HX_("_arms",76,ae,85,f3)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Boss_obj,_wave),HX_("_wave",98,81,03,02)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Boss_obj,_projectiles),HX_("_projectiles",6b,54,93,9b)},
	{::hx::fsObject /*  ::flixel::effects::particles::FlxTypedEmitter */ ,(int)offsetof(Boss_obj,_gibs),HX_("_gibs",52,18,76,f7)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(Boss_obj,_slamSound),HX_("_slamSound",8b,1c,df,a9)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(Boss_obj,_waveSound),HX_("_waveSound",17,b4,e1,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Boss_obj_sStaticStorageInfo = 0;
#endif

static ::String Boss_obj_sMemberFields[] = {
	HX_("_target",f0,04,64,f5),
	HX_("ATTACK_RANGE",a6,d2,43,27),
	HX_("ATTACK_RANGE_Y",40,9b,da,5d),
	HX_("_timer",06,07,1d,0c),
	HX_("_batterRainTimer",86,b3,22,80),
	HX_("_batterWaveTimer",01,89,3a,22),
	HX_("_arms",76,ae,85,f3),
	HX_("_wave",98,81,03,02),
	HX_("_projectiles",6b,54,93,9b),
	HX_("_gibs",52,18,76,f7),
	HX_("_slamSound",8b,1c,df,a9),
	HX_("_waveSound",17,b4,e1,b6),
	HX_("update",09,86,05,87),
	HX_("kill",9e,df,09,47),
	HX_("AI",e8,38,00,00),
	HX_("batterRainAttack",88,62,fd,c6),
	HX_("batterWaveAttack",ad,58,c0,f9),
	::String(null()) };

::hx::Class Boss_obj::__mClass;

void Boss_obj::__register()
{
	Boss_obj _hx_dummy;
	Boss_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Boss",cd,b3,f4,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Boss_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Boss_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Boss_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Boss_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

