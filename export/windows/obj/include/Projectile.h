#ifndef INCLUDED_Projectile
#define INCLUDED_Projectile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Projectile)
HX_DECLARE_CLASS0(ProjectileType)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Projectile_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Projectile_obj OBJ_;
		Projectile_obj();

	public:
		enum { _hx_ClassId = 0x1230b32d };

		void __construct( ::flixel::FlxSprite shooter, ::ProjectileType type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Projectile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Projectile"); }
		static ::hx::ObjectPtr< Projectile_obj > __new( ::flixel::FlxSprite shooter, ::ProjectileType type);
		static ::hx::ObjectPtr< Projectile_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite shooter, ::ProjectileType type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Projectile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Projectile",09,8a,3c,bb); }

		 ::ProjectileType _type;
		Float _damage;
		Float _movementSpeed;
		 ::ProjectileType getType();
		::Dynamic getType_dyn();

		Float getDamage();
		::Dynamic getDamage_dyn();

};


#endif /* INCLUDED_Projectile */ 
