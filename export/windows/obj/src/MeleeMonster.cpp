#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_MeleeMonster
#include <MeleeMonster.h>
#endif
#ifndef INCLUDED_MonsterType
#include <MonsterType.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7aa050414682fec7_16_new,"MeleeMonster","new",0xbc1cf718,"MeleeMonster.new","MeleeMonster.hx",16,0x36cc7358)
static const int _hx_array_data_0de5cb26_1[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_0de5cb26_2[] = {
	(int)4,(int)5,(int)6,(int)7,
};
static const int _hx_array_data_0de5cb26_3[] = {
	(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_0de5cb26_4[] = {
	(int)0,(int)1,
};
static const int _hx_array_data_0de5cb26_5[] = {
	(int)2,(int)3,(int)4,(int)2,
};
static const int _hx_array_data_0de5cb26_6[] = {
	(int)2,(int)3,(int)4,(int)2,
};
HX_LOCAL_STACK_FRAME(_hx_pos_7aa050414682fec7_66_update,"MeleeMonster","update",0x26976251,"MeleeMonster.update","MeleeMonster.hx",66,0x36cc7358)
HX_LOCAL_STACK_FRAME(_hx_pos_7aa050414682fec7_83_kill,"MeleeMonster","kill",0xdb4299e6,"MeleeMonster.kill","MeleeMonster.hx",83,0x36cc7358)
HX_LOCAL_STACK_FRAME(_hx_pos_7aa050414682fec7_90_AI,"MeleeMonster","AI",0x36cc5130,"MeleeMonster.AI","MeleeMonster.hx",90,0x36cc7358)
HX_LOCAL_STACK_FRAME(_hx_pos_7aa050414682fec7_116_shoot,"MeleeMonster","shoot",0x9991c697,"MeleeMonster.shoot","MeleeMonster.hx",116,0x36cc7358)
HX_LOCAL_STACK_FRAME(_hx_pos_7aa050414682fec7_123_getDamagePerSecond,"MeleeMonster","getDamagePerSecond",0xd4eb2e14,"MeleeMonster.getDamagePerSecond","MeleeMonster.hx",123,0x36cc7358)

void MeleeMonster_obj::__construct(Float x,Float y, ::flixel::FlxObject target, ::MonsterType type, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs){
            	HX_GC_STACKFRAME(&_hx_pos_7aa050414682fec7_16_new)
HXLINE(  23)		this->ATTACK_RANGE_Y = ((Float)100);
HXLINE(  22)		this->ATTACK_RANGE = ((Float)400);
HXLINE(  30)		super::__construct(x,y,null());
HXLINE(  31)		this->_type = type;
HXLINE(  32)		this->_target = target;
HXLINE(  33)		this->_timer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE(  35)		this->acceleration->set_y(( (Float)(400) ));
HXLINE(  36)		this->drag->set_y(( (Float)(200) ));
HXLINE(  37)		this->_projectiles = projectiles;
HXLINE(  38)		this->_gibs = gibs;
HXLINE(  40)		switch((int)(this->_type->_hx_getIndex())){
            			case (int)0: {
HXLINE(  42)				this->health = ( (Float)(30) );
HXLINE(  43)				this->_damage_per_second = ( (Float)(5) );
HXLINE(  44)				this->_armor = ( (Float)(10) );
HXLINE(  45)				this->_movement_speed = ( (Float)(150) );
HXLINE(  46)				this->loadGraphic(HX_("assets/images/chip_spritesheet.png",2d,86,69,99),true,29,34,null(),null());
HXLINE(  47)				this->animation->add(HX_("idle",14,a7,b3,45),::Array_obj< int >::fromData( _hx_array_data_0de5cb26_1,4),2,true,null(),null());
HXLINE(  48)				this->animation->add(HX_("walkleft",90,1d,30,6a),::Array_obj< int >::fromData( _hx_array_data_0de5cb26_2,4),10,true,null(),null());
HXLINE(  49)				this->animation->add(HX_("walkright",33,ce,f6,f6),::Array_obj< int >::fromData( _hx_array_data_0de5cb26_3,4),10,true,null(),null());
            			}
            			break;
            			case (int)1: {
HXLINE(  51)				this->health = ( (Float)(20) );
HXLINE(  52)				this->_damage_per_second = ( (Float)(5) );
HXLINE(  53)				this->_armor = ( (Float)(10) );
HXLINE(  54)				this->_movement_speed = ( (Float)(0) );
HXLINE(  55)				this->loadGraphic(HX_("assets/images/globby_spritesheet.png",70,29,e7,7a),true,57,40,null(),null());
HXLINE(  56)				this->animation->add(HX_("idle",14,a7,b3,45),::Array_obj< int >::fromData( _hx_array_data_0de5cb26_4,2),2,true,null(),null());
HXLINE(  57)				this->animation->add(HX_("attackleft",cf,87,fd,96),::Array_obj< int >::fromData( _hx_array_data_0de5cb26_5,4),2,null(),null(),null());
HXLINE(  58)				this->animation->add(HX_("attackright",14,5b,e6,fd),::Array_obj< int >::fromData( _hx_array_data_0de5cb26_6,4),2,false,true,null());
HXLINE(  59)				this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            			break;
            		}
HXLINE(  61)		this->_timer->start(1,this->AI_dyn(),0);
HXLINE(  62)		this->_timer->active = false;
HXLINE(  63)		this->shootSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/monstershoot.wav",e2,8f,65,6b),null(),null(),null(),null(),null(),null(),null(),null());
            	}

Dynamic MeleeMonster_obj::__CreateEmpty() { return new MeleeMonster_obj; }

void *MeleeMonster_obj::_hx_vtable = 0;

Dynamic MeleeMonster_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MeleeMonster_obj > _hx_result = new MeleeMonster_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool MeleeMonster_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x2911854a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2911854a;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void MeleeMonster_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7aa050414682fec7_66_update)
HXLINE(  67)		switch((int)(this->_type->_hx_getIndex())){
            			case (int)0: {
HXLINE(  69)				bool _hx_tmp;
HXDLIN(  69)				if ((::Math_obj::abs((this->x - this->_target->x)) < this->ATTACK_RANGE)) {
HXLINE(  69)					_hx_tmp = (::Math_obj::abs((this->y - this->_target->y)) < this->ATTACK_RANGE_Y);
            				}
            				else {
HXLINE(  69)					_hx_tmp = false;
            				}
HXDLIN(  69)				if (_hx_tmp) {
HXLINE(  70)					this->_timer->active = true;
            				}
            				else {
HXLINE(  72)					this->_timer->active = false;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  75)				bool _hx_tmp;
HXDLIN(  75)				if ((::Math_obj::abs((this->x - this->_target->x)) < this->ATTACK_RANGE)) {
HXLINE(  75)					_hx_tmp = (::Math_obj::abs((this->y - this->_target->y)) < this->ATTACK_RANGE_Y);
            				}
            				else {
HXLINE(  75)					_hx_tmp = false;
            				}
HXDLIN(  75)				if (_hx_tmp) {
HXLINE(  76)					this->_timer->active = true;
            				}
            				else {
HXLINE(  78)					this->_timer->active = false;
            				}
            			}
            			break;
            		}
HXLINE(  80)		this->super::update(elapsed);
            	}


void MeleeMonster_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_7aa050414682fec7_83_kill)
HXLINE(  84)		this->super::kill();
HXLINE(  85)		this->_gibs->focusOn(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  86)		this->_gibs->start(null(),null(),null());
            	}


void MeleeMonster_obj::AI( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_7aa050414682fec7_90_AI)
HXDLIN(  90)		switch((int)(this->_type->_hx_getIndex())){
            			case (int)0: {
HXLINE(  93)				if (((this->x - this->_target->x) > 0)) {
HXLINE(  94)					this->animation->play(HX_("walkleft",90,1d,30,6a),null(),null(),null());
HXLINE(  95)					this->velocity->set_x(-(this->_movement_speed));
            				}
            				else {
HXLINE(  97)					if (((this->x - this->_target->x) < 0)) {
HXLINE(  98)						this->animation->play(HX_("walkright",33,ce,f6,f6),null(),null(),null());
HXLINE(  99)						this->velocity->set_x(this->_movement_speed);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 102)				if (((this->x - this->_target->x) > 0)) {
HXLINE( 103)					this->animation->play(HX_("attackleft",cf,87,fd,96),null(),null(),null());
HXLINE( 104)					this->set_facing(1);
            				}
            				else {
HXLINE( 106)					if (((this->x - this->_target->x) < 0)) {
HXLINE( 107)						this->animation->play(HX_("attackright",14,5b,e6,fd),null(),null(),null());
HXLINE( 108)						this->set_facing(16);
            					}
            				}
HXLINE( 110)				if (this->alive) {
HXLINE( 111)					::haxe::Timer_obj::delay(this->shoot_dyn(),400);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeleeMonster_obj,AI,(void))

void MeleeMonster_obj::shoot(){
            	HX_GC_STACKFRAME(&_hx_pos_7aa050414682fec7_116_shoot)
HXDLIN( 116)		if (this->exists) {
HXLINE( 117)			 ::flixel::group::FlxTypedGroup _hx_tmp = this->_projectiles;
HXDLIN( 117)			_hx_tmp->add( ::Projectile_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),::ProjectileType_obj::BATTER_dyn())).StaticCast<  ::Projectile >();
HXLINE( 118)			this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 119)			this->shootSound->play(null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeleeMonster_obj,shoot,(void))

Float MeleeMonster_obj::getDamagePerSecond(){
            	HX_STACKFRAME(&_hx_pos_7aa050414682fec7_123_getDamagePerSecond)
HXDLIN( 123)		return this->_damage_per_second;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeleeMonster_obj,getDamagePerSecond,return )


::hx::ObjectPtr< MeleeMonster_obj > MeleeMonster_obj::__new(Float x,Float y, ::flixel::FlxObject target, ::MonsterType type, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs) {
	::hx::ObjectPtr< MeleeMonster_obj > __this = new MeleeMonster_obj();
	__this->__construct(x,y,target,type,projectiles,gibs);
	return __this;
}

::hx::ObjectPtr< MeleeMonster_obj > MeleeMonster_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y, ::flixel::FlxObject target, ::MonsterType type, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs) {
	MeleeMonster_obj *__this = (MeleeMonster_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MeleeMonster_obj), true, "MeleeMonster"));
	*(void **)__this = MeleeMonster_obj::_hx_vtable;
	__this->__construct(x,y,target,type,projectiles,gibs);
	return __this;
}

MeleeMonster_obj::MeleeMonster_obj()
{
}

void MeleeMonster_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeleeMonster);
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_damage_per_second,"_damage_per_second");
	HX_MARK_MEMBER_NAME(_armor,"_armor");
	HX_MARK_MEMBER_NAME(_movement_speed,"_movement_speed");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(ATTACK_RANGE,"ATTACK_RANGE");
	HX_MARK_MEMBER_NAME(ATTACK_RANGE_Y,"ATTACK_RANGE_Y");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_projectiles,"_projectiles");
	HX_MARK_MEMBER_NAME(shootSound,"shootSound");
	HX_MARK_MEMBER_NAME(_gibs,"_gibs");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MeleeMonster_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_damage_per_second,"_damage_per_second");
	HX_VISIT_MEMBER_NAME(_armor,"_armor");
	HX_VISIT_MEMBER_NAME(_movement_speed,"_movement_speed");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(ATTACK_RANGE,"ATTACK_RANGE");
	HX_VISIT_MEMBER_NAME(ATTACK_RANGE_Y,"ATTACK_RANGE_Y");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_projectiles,"_projectiles");
	HX_VISIT_MEMBER_NAME(shootSound,"shootSound");
	HX_VISIT_MEMBER_NAME(_gibs,"_gibs");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MeleeMonster_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"AI") ) { return ::hx::Val( AI_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { return ::hx::Val( _type ); }
		if (HX_FIELD_EQ(inName,"_gibs") ) { return ::hx::Val( _gibs ); }
		if (HX_FIELD_EQ(inName,"shoot") ) { return ::hx::Val( shoot_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_armor") ) { return ::hx::Val( _armor ); }
		if (HX_FIELD_EQ(inName,"_timer") ) { return ::hx::Val( _timer ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shootSound") ) { return ::hx::Val( shootSound ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ATTACK_RANGE") ) { return ::hx::Val( ATTACK_RANGE ); }
		if (HX_FIELD_EQ(inName,"_projectiles") ) { return ::hx::Val( _projectiles ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ATTACK_RANGE_Y") ) { return ::hx::Val( ATTACK_RANGE_Y ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_movement_speed") ) { return ::hx::Val( _movement_speed ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_damage_per_second") ) { return ::hx::Val( _damage_per_second ); }
		if (HX_FIELD_EQ(inName,"getDamagePerSecond") ) { return ::hx::Val( getDamagePerSecond_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MeleeMonster_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast<  ::MonsterType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gibs") ) { _gibs=inValue.Cast<  ::flixel::effects::particles::FlxTypedEmitter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_armor") ) { _armor=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shootSound") ) { shootSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ATTACK_RANGE") ) { ATTACK_RANGE=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_projectiles") ) { _projectiles=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ATTACK_RANGE_Y") ) { ATTACK_RANGE_Y=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_movement_speed") ) { _movement_speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_damage_per_second") ) { _damage_per_second=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeleeMonster_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_type",99,0e,1a,00));
	outFields->push(HX_("_damage_per_second",a7,fb,ed,1e));
	outFields->push(HX_("_armor",c0,f5,72,21));
	outFields->push(HX_("_movement_speed",d6,39,4b,93));
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("ATTACK_RANGE",a6,d2,43,27));
	outFields->push(HX_("ATTACK_RANGE_Y",40,9b,da,5d));
	outFields->push(HX_("_timer",06,07,1d,0c));
	outFields->push(HX_("_projectiles",6b,54,93,9b));
	outFields->push(HX_("shootSound",70,52,94,5d));
	outFields->push(HX_("_gibs",52,18,76,f7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MeleeMonster_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::MonsterType */ ,(int)offsetof(MeleeMonster_obj,_type),HX_("_type",99,0e,1a,00)},
	{::hx::fsFloat,(int)offsetof(MeleeMonster_obj,_damage_per_second),HX_("_damage_per_second",a7,fb,ed,1e)},
	{::hx::fsFloat,(int)offsetof(MeleeMonster_obj,_armor),HX_("_armor",c0,f5,72,21)},
	{::hx::fsFloat,(int)offsetof(MeleeMonster_obj,_movement_speed),HX_("_movement_speed",d6,39,4b,93)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(MeleeMonster_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsFloat,(int)offsetof(MeleeMonster_obj,ATTACK_RANGE),HX_("ATTACK_RANGE",a6,d2,43,27)},
	{::hx::fsFloat,(int)offsetof(MeleeMonster_obj,ATTACK_RANGE_Y),HX_("ATTACK_RANGE_Y",40,9b,da,5d)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(MeleeMonster_obj,_timer),HX_("_timer",06,07,1d,0c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MeleeMonster_obj,_projectiles),HX_("_projectiles",6b,54,93,9b)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(MeleeMonster_obj,shootSound),HX_("shootSound",70,52,94,5d)},
	{::hx::fsObject /*  ::flixel::effects::particles::FlxTypedEmitter */ ,(int)offsetof(MeleeMonster_obj,_gibs),HX_("_gibs",52,18,76,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MeleeMonster_obj_sStaticStorageInfo = 0;
#endif

static ::String MeleeMonster_obj_sMemberFields[] = {
	HX_("_type",99,0e,1a,00),
	HX_("_damage_per_second",a7,fb,ed,1e),
	HX_("_armor",c0,f5,72,21),
	HX_("_movement_speed",d6,39,4b,93),
	HX_("_target",f0,04,64,f5),
	HX_("ATTACK_RANGE",a6,d2,43,27),
	HX_("ATTACK_RANGE_Y",40,9b,da,5d),
	HX_("_timer",06,07,1d,0c),
	HX_("_projectiles",6b,54,93,9b),
	HX_("shootSound",70,52,94,5d),
	HX_("_gibs",52,18,76,f7),
	HX_("update",09,86,05,87),
	HX_("kill",9e,df,09,47),
	HX_("AI",e8,38,00,00),
	HX_("shoot",df,81,27,7c),
	HX_("getDamagePerSecond",cc,05,dc,95),
	::String(null()) };

::hx::Class MeleeMonster_obj::__mClass;

void MeleeMonster_obj::__register()
{
	MeleeMonster_obj _hx_dummy;
	MeleeMonster_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MeleeMonster",26,cb,e5,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MeleeMonster_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MeleeMonster_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MeleeMonster_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MeleeMonster_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

