#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_24_moveTowardsObject,"flixel.math.FlxVelocity","moveTowardsObject",0xaf722b77,"flixel.math.FlxVelocity.moveTowardsObject","flixel/math/FlxVelocity.hx",24,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_50_accelerateTowardsObject,"flixel.math.FlxVelocity","accelerateTowardsObject",0x1ebf81eb,"flixel.math.FlxVelocity.accelerateTowardsObject","flixel/math/FlxVelocity.hx",50,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_67_moveTowardsMouse,"flixel.math.FlxVelocity","moveTowardsMouse",0x58da686d,"flixel.math.FlxVelocity.moveTowardsMouse","flixel/math/FlxVelocity.hx",67,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_122_accelerateTowardsMouse,"flixel.math.FlxVelocity","accelerateTowardsMouse",0x2dba9c79,"flixel.math.FlxVelocity.accelerateTowardsMouse","flixel/math/FlxVelocity.hx",122,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_160_moveTowardsPoint,"flixel.math.FlxVelocity","moveTowardsPoint",0x13050698,"flixel.math.FlxVelocity.moveTowardsPoint","flixel/math/FlxVelocity.hx",160,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_188_accelerateTowardsPoint,"flixel.math.FlxVelocity","accelerateTowardsPoint",0xe7e53aa4,"flixel.math.FlxVelocity.accelerateTowardsPoint","flixel/math/FlxVelocity.hx",188,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_204_velocityFromAngle,"flixel.math.FlxVelocity","velocityFromAngle",0x954f2639,"flixel.math.FlxVelocity.velocityFromAngle","flixel/math/FlxVelocity.hx",204,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_218_velocityFromFacing,"flixel.math.FlxVelocity","velocityFromFacing",0x90de75f4,"flixel.math.FlxVelocity.velocityFromFacing","flixel/math/FlxVelocity.hx",218,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_234_computeVelocity,"flixel.math.FlxVelocity","computeVelocity",0xd7550d81,"flixel.math.FlxVelocity.computeVelocity","flixel/math/FlxVelocity.hx",234,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_280_accelerateFromAngle,"flixel.math.FlxVelocity","accelerateFromAngle",0x5b8d48b9,"flixel.math.FlxVelocity.accelerateFromAngle","flixel/math/FlxVelocity.hx",280,0xbea30ec3)
namespace flixel{
namespace math{

void FlxVelocity_obj::__construct() { }

Dynamic FlxVelocity_obj::__CreateEmpty() { return new FlxVelocity_obj; }

void *FlxVelocity_obj::_hx_vtable = 0;

Dynamic FlxVelocity_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxVelocity_obj > _hx_result = new FlxVelocity_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxVelocity_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x083cfec7;
}

void FlxVelocity_obj::moveTowardsObject( ::flixel::FlxSprite Source, ::flixel::FlxSprite Dest,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_MaxTime){
            		Float Speed = __o_Speed.Default(60);
            		int MaxTime = __o_MaxTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_24_moveTowardsObject)
HXLINE(  25)		Float a = ::flixel::math::FlxAngle_obj::angleBetween(Source,Dest,null());
HXLINE(  27)		if ((MaxTime > 0)) {
HXLINE(  29)			Float dx = ((Source->x + Source->origin->x) - (Dest->x + Dest->origin->x));
HXDLIN(  29)			Float dy = ((Source->y + Source->origin->y) - (Dest->y + Dest->origin->y));
HXDLIN(  29)			int d = ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
HXLINE(  32)			Speed = ( (Float)(::Std_obj::_hx_int((( (Float)(d) ) / (( (Float)(MaxTime) ) / ( (Float)(1000) ))))) );
            		}
HXLINE(  35)		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
HXLINE(  36)		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsObject,(void))

void FlxVelocity_obj::accelerateTowardsObject( ::flixel::FlxSprite Source, ::flixel::FlxSprite Dest,Float Acceleration,Float MaxSpeed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_50_accelerateTowardsObject)
HXLINE(  51)		Float a = ::flixel::math::FlxAngle_obj::angleBetween(Source,Dest,null());
HXLINE(  52)		{
HXLINE(  52)			Float sinA = ::Math_obj::sin(a);
HXDLIN(  52)			Float cosA = ::Math_obj::cos(a);
HXDLIN(  52)			Source->velocity->set(0,0);
HXDLIN(  52)			Source->acceleration->set((cosA * Acceleration),(sinA * Acceleration));
HXDLIN(  52)			Source->maxVelocity->set(::Math_obj::abs((cosA * MaxSpeed)),::Math_obj::abs((sinA * MaxSpeed)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsObject,(void))

void FlxVelocity_obj::moveTowardsMouse( ::flixel::FlxSprite Source,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_MaxTime){
            		Float Speed = __o_Speed.Default(60);
            		int MaxTime = __o_MaxTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_67_moveTowardsMouse)
HXLINE(  68)		Float a = ::flixel::math::FlxAngle_obj::angleBetweenMouse(Source,null());
HXLINE(  70)		if ((MaxTime > 0)) {
HXLINE(  72)			Float dx = ((Source->x + Source->origin->x) - ( (Float)(::flixel::FlxG_obj::mouse->screenX) ));
HXDLIN(  72)			Float dy = ((Source->y + Source->origin->y) - ( (Float)(::flixel::FlxG_obj::mouse->screenY) ));
HXDLIN(  72)			int d = ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
HXLINE(  75)			Speed = ( (Float)(::Std_obj::_hx_int((( (Float)(d) ) / (( (Float)(MaxTime) ) / ( (Float)(1000) ))))) );
            		}
HXLINE(  78)		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
HXLINE(  79)		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,moveTowardsMouse,(void))

void FlxVelocity_obj::accelerateTowardsMouse( ::flixel::FlxSprite Source,Float Acceleration,Float MaxSpeed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_122_accelerateTowardsMouse)
HXLINE( 123)		Float a = ::flixel::math::FlxAngle_obj::angleBetweenMouse(Source,null());
HXLINE( 125)		{
HXLINE( 125)			Float sinA = ::Math_obj::sin(a);
HXDLIN( 125)			Float cosA = ::Math_obj::cos(a);
HXDLIN( 125)			Source->velocity->set(0,0);
HXDLIN( 125)			Source->acceleration->set((cosA * Acceleration),(sinA * Acceleration));
HXDLIN( 125)			Source->maxVelocity->set(::Math_obj::abs((cosA * MaxSpeed)),::Math_obj::abs((sinA * MaxSpeed)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,accelerateTowardsMouse,(void))

void FlxVelocity_obj::moveTowardsPoint( ::flixel::FlxSprite Source, ::flixel::math::FlxPoint Target,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_MaxTime){
            		Float Speed = __o_Speed.Default(60);
            		int MaxTime = __o_MaxTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_160_moveTowardsPoint)
HXLINE( 161)		Float a = ::flixel::math::FlxAngle_obj::angleBetweenPoint(Source,Target,null());
HXLINE( 163)		if ((MaxTime > 0)) {
HXLINE( 165)			Float dx = ((Source->x + Source->origin->x) - Target->x);
HXDLIN( 165)			Float dy = ((Source->y + Source->origin->y) - Target->y);
HXDLIN( 165)			if (Target->_weak) {
HXLINE( 165)				Target->put();
            			}
HXDLIN( 165)			int d = ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
HXLINE( 168)			Speed = ( (Float)(::Std_obj::_hx_int((( (Float)(d) ) / (( (Float)(MaxTime) ) / ( (Float)(1000) ))))) );
            		}
HXLINE( 171)		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
HXLINE( 172)		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
HXLINE( 174)		if (Target->_weak) {
HXLINE( 174)			Target->put();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsPoint,(void))

void FlxVelocity_obj::accelerateTowardsPoint( ::flixel::FlxSprite Source, ::flixel::math::FlxPoint Target,Float Acceleration,Float MaxSpeed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_188_accelerateTowardsPoint)
HXLINE( 189)		Float a = ::flixel::math::FlxAngle_obj::angleBetweenPoint(Source,Target,null());
HXLINE( 191)		{
HXLINE( 191)			Float sinA = ::Math_obj::sin(a);
HXDLIN( 191)			Float cosA = ::Math_obj::cos(a);
HXDLIN( 191)			Source->velocity->set(0,0);
HXDLIN( 191)			Source->acceleration->set((cosA * Acceleration),(sinA * Acceleration));
HXDLIN( 191)			Source->maxVelocity->set(::Math_obj::abs((cosA * MaxSpeed)),::Math_obj::abs((sinA * MaxSpeed)));
            		}
HXLINE( 193)		if (Target->_weak) {
HXLINE( 193)			Target->put();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsPoint,(void))

 ::flixel::math::FlxPoint FlxVelocity_obj::velocityFromAngle(Float Angle,Float Speed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_204_velocityFromAngle)
HXLINE( 205)		Float a = (Angle * (::Math_obj::PI / ( (Float)(180) )));
HXLINE( 207)		Float X = (::Math_obj::cos(a) * Speed);
HXDLIN( 207)		Float Y = (::Math_obj::sin(a) * Speed);
HXDLIN( 207)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 207)		point->_inPool = false;
HXDLIN( 207)		return point;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromAngle,return )

 ::flixel::math::FlxPoint FlxVelocity_obj::velocityFromFacing( ::flixel::FlxSprite Parent,Float Speed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_218_velocityFromFacing)
HXLINE( 219)		Float a = ::flixel::math::FlxAngle_obj::angleFromFacing(Parent->facing,null());
HXLINE( 220)		Float X = (::Math_obj::cos(a) * Speed);
HXDLIN( 220)		Float Y = (::Math_obj::sin(a) * Speed);
HXDLIN( 220)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 220)		point->_inPool = false;
HXDLIN( 220)		return point;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromFacing,return )

Float FlxVelocity_obj::computeVelocity(Float Velocity,Float Acceleration,Float Drag,Float Max,Float Elapsed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_234_computeVelocity)
HXLINE( 235)		if ((Acceleration != 0)) {
HXLINE( 237)			Velocity = (Velocity + (Acceleration * Elapsed));
            		}
            		else {
HXLINE( 239)			if ((Drag != 0)) {
HXLINE( 241)				Float drag = (Drag * Elapsed);
HXLINE( 242)				if (((Velocity - drag) > 0)) {
HXLINE( 244)					Velocity = (Velocity - drag);
            				}
            				else {
HXLINE( 246)					if (((Velocity + drag) < 0)) {
HXLINE( 248)						Velocity = (Velocity + drag);
            					}
            					else {
HXLINE( 252)						Velocity = ( (Float)(0) );
            					}
            				}
            			}
            		}
HXLINE( 255)		bool _hx_tmp;
HXDLIN( 255)		if ((Velocity != 0)) {
HXLINE( 255)			_hx_tmp = (Max != 0);
            		}
            		else {
HXLINE( 255)			_hx_tmp = false;
            		}
HXDLIN( 255)		if (_hx_tmp) {
HXLINE( 257)			if ((Velocity > Max)) {
HXLINE( 259)				Velocity = Max;
            			}
            			else {
HXLINE( 261)				if ((Velocity < -(Max))) {
HXLINE( 263)					Velocity = -(Max);
            				}
            			}
            		}
HXLINE( 266)		return Velocity;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,computeVelocity,return )

void FlxVelocity_obj::accelerateFromAngle( ::flixel::FlxSprite source,Float radians,Float acceleration,Float maxSpeed,::hx::Null< bool >  __o_resetVelocity){
            		bool resetVelocity = __o_resetVelocity.Default(true);
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_280_accelerateFromAngle)
HXLINE( 281)		Float sinA = ::Math_obj::sin(radians);
HXLINE( 282)		Float cosA = ::Math_obj::cos(radians);
HXLINE( 284)		if (resetVelocity) {
HXLINE( 285)			source->velocity->set(0,0);
            		}
HXLINE( 287)		source->acceleration->set((cosA * acceleration),(sinA * acceleration));
HXLINE( 288)		source->maxVelocity->set(::Math_obj::abs((cosA * maxSpeed)),::Math_obj::abs((sinA * maxSpeed)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateFromAngle,(void))


FlxVelocity_obj::FlxVelocity_obj()
{
}

bool FlxVelocity_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { outValue = computeVelocity_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"moveTowardsMouse") ) { outValue = moveTowardsMouse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"moveTowardsPoint") ) { outValue = moveTowardsPoint_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"moveTowardsObject") ) { outValue = moveTowardsObject_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"velocityFromAngle") ) { outValue = velocityFromAngle_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityFromFacing") ) { outValue = velocityFromFacing_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"accelerateFromAngle") ) { outValue = accelerateFromAngle_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerateTowardsMouse") ) { outValue = accelerateTowardsMouse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"accelerateTowardsPoint") ) { outValue = accelerateTowardsPoint_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accelerateTowardsObject") ) { outValue = accelerateTowardsObject_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxVelocity_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxVelocity_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxVelocity_obj::__mClass;

static ::String FlxVelocity_obj_sStaticFields[] = {
	HX_("moveTowardsObject",6a,65,02,02),
	HX_("accelerateTowardsObject",1e,34,a0,7d),
	HX_("moveTowardsMouse",da,ed,3e,be),
	HX_("accelerateTowardsMouse",a6,71,74,11),
	HX_("moveTowardsPoint",05,8c,69,78),
	HX_("accelerateTowardsPoint",d1,0f,9f,cb),
	HX_("velocityFromAngle",2c,60,df,e7),
	HX_("velocityFromFacing",a1,f0,80,7c),
	HX_("computeVelocity",b4,d4,7e,b6),
	HX_("accelerateFromAngle",6c,25,16,9e),
	::String(null())
};

void FlxVelocity_obj::__register()
{
	FlxVelocity_obj _hx_dummy;
	FlxVelocity_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxVelocity",3b,6f,ef,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxVelocity_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxVelocity_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxVelocity_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxVelocity_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxVelocity_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace math
