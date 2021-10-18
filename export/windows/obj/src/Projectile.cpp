#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0dd1e6b45fb5ac5e_16_new,"Projectile","new",0xa2a0637b,"Projectile.new","Projectile.hx",16,0x2fcbe455)
HX_LOCAL_STACK_FRAME(_hx_pos_0dd1e6b45fb5ac5e_49_getType,"Projectile","getType",0x4aef5f0b,"Projectile.getType","Projectile.hx",49,0x2fcbe455)
HX_LOCAL_STACK_FRAME(_hx_pos_0dd1e6b45fb5ac5e_54_getDamage,"Projectile","getDamage",0x337b7300,"Projectile.getDamage","Projectile.hx",54,0x2fcbe455)

void Projectile_obj::__construct( ::flixel::FlxSprite shooter, ::ProjectileType type){
            	HX_STACKFRAME(&_hx_pos_0dd1e6b45fb5ac5e_16_new)
HXLINE(  17)		this->_type = type;
HXLINE(  19)		switch((int)(this->_type->_hx_getIndex())){
            			case (int)0: {
HXLINE(  21)				super::__construct(shooter->x,shooter->y,HX_("assets/images/pancake_bullet.png",92,36,a3,f7));
HXLINE(  22)				this->_movementSpeed = ( (Float)(-500) );
HXLINE(  23)				if ((shooter->facing == 1)) {
HXLINE(  24)					this->set_flipX(true);
HXLINE(  25)					 ::Projectile _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  25)					_hx_tmp->_movementSpeed = (_hx_tmp->_movementSpeed * ( (Float)(-1) ));
            				}
HXLINE(  27)				this->_damage = ( (Float)(10) );
HXLINE(  28)				this->velocity->set(this->_movementSpeed,0);
            			}
            			break;
            			case (int)1: {
HXLINE(  30)				super::__construct(shooter->x,shooter->y,HX_("assets/images/batter_bullet.png",e5,b5,24,da));
HXLINE(  31)				this->_damage = ( (Float)(5) );
HXLINE(  32)				this->_movementSpeed = ( (Float)(300) );
HXLINE(  33)				if ((shooter->facing == 16)) {
HXLINE(  34)					this->set_flipX(true);
HXLINE(  35)					 ::Projectile _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  35)					_hx_tmp->_movementSpeed = (_hx_tmp->_movementSpeed * ( (Float)(-1) ));
            				}
HXLINE(  37)				this->velocity->set(this->_movementSpeed,0);
            			}
            			break;
            			case (int)2: {
HXLINE(  39)				super::__construct(::flixel::FlxG_obj::random->_hx_int(1440,2080,null()),608,HX_("assets/images/batter_bullet.png",e5,b5,24,da));
HXLINE(  40)				this->set_angle(( (Float)(-90) ));
HXLINE(  41)				this->_movementSpeed = ( (Float)(-300) );
HXLINE(  42)				this->velocity->set(0,this->_movementSpeed);
            			}
            			break;
            		}
HXLINE(  44)		 ::flixel::math::FlxPoint _hx_tmp = this->velocity;
HXDLIN(  44)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN(  44)		point->_inPool = false;
HXDLIN(  44)		 ::flixel::math::FlxPoint point1 = point;
HXDLIN(  44)		point1->_weak = true;
HXDLIN(  44)		_hx_tmp->rotate(point1,( (Float)(180) ));
            	}

Dynamic Projectile_obj::__CreateEmpty() { return new Projectile_obj; }

void *Projectile_obj::_hx_vtable = 0;

Dynamic Projectile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Projectile_obj > _hx_result = new Projectile_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Projectile_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x1230b32d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1230b32d;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

 ::ProjectileType Projectile_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_0dd1e6b45fb5ac5e_49_getType)
HXDLIN(  49)		return this->_type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Projectile_obj,getType,return )

Float Projectile_obj::getDamage(){
            	HX_STACKFRAME(&_hx_pos_0dd1e6b45fb5ac5e_54_getDamage)
HXDLIN(  54)		return this->_damage;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Projectile_obj,getDamage,return )


::hx::ObjectPtr< Projectile_obj > Projectile_obj::__new( ::flixel::FlxSprite shooter, ::ProjectileType type) {
	::hx::ObjectPtr< Projectile_obj > __this = new Projectile_obj();
	__this->__construct(shooter,type);
	return __this;
}

::hx::ObjectPtr< Projectile_obj > Projectile_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite shooter, ::ProjectileType type) {
	Projectile_obj *__this = (Projectile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Projectile_obj), true, "Projectile"));
	*(void **)__this = Projectile_obj::_hx_vtable;
	__this->__construct(shooter,type);
	return __this;
}

Projectile_obj::Projectile_obj()
{
}

void Projectile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Projectile);
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_damage,"_damage");
	HX_MARK_MEMBER_NAME(_movementSpeed,"_movementSpeed");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Projectile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_damage,"_damage");
	HX_VISIT_MEMBER_NAME(_movementSpeed,"_movementSpeed");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Projectile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { return ::hx::Val( _type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_damage") ) { return ::hx::Val( _damage ); }
		if (HX_FIELD_EQ(inName,"getType") ) { return ::hx::Val( getType_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDamage") ) { return ::hx::Val( getDamage_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_movementSpeed") ) { return ::hx::Val( _movementSpeed ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Projectile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast<  ::ProjectileType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_damage") ) { _damage=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_movementSpeed") ) { _movementSpeed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Projectile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_type",99,0e,1a,00));
	outFields->push(HX_("_damage",0e,a2,5b,8c));
	outFields->push(HX_("_movementSpeed",19,48,15,6d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Projectile_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::ProjectileType */ ,(int)offsetof(Projectile_obj,_type),HX_("_type",99,0e,1a,00)},
	{::hx::fsFloat,(int)offsetof(Projectile_obj,_damage),HX_("_damage",0e,a2,5b,8c)},
	{::hx::fsFloat,(int)offsetof(Projectile_obj,_movementSpeed),HX_("_movementSpeed",19,48,15,6d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Projectile_obj_sStaticStorageInfo = 0;
#endif

static ::String Projectile_obj_sMemberFields[] = {
	HX_("_type",99,0e,1a,00),
	HX_("_damage",0e,a2,5b,8c),
	HX_("_movementSpeed",19,48,15,6d),
	HX_("getType",70,a2,8b,1f),
	HX_("getDamage",a5,19,3b,9a),
	::String(null()) };

::hx::Class Projectile_obj::__mClass;

void Projectile_obj::__register()
{
	Projectile_obj _hx_dummy;
	Projectile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Projectile",09,8a,3c,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Projectile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Projectile_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Projectile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Projectile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

