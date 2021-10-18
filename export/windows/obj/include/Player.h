#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Player_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();

	public:
		enum { _hx_ClassId = 0x33e526a5 };

		void __construct( ::Dynamic __o_X, ::Dynamic __o_Y, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Player"); }
		static ::hx::ObjectPtr< Player_obj > __new( ::Dynamic __o_X, ::Dynamic __o_Y, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs);
		static ::hx::ObjectPtr< Player_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Player",81,5f,4d,6c); }

		Float SPEED;
		bool flickering;
		 ::flixel::group::FlxTypedGroup _projectiles;
		 ::flixel::_hx_system::FlxSound shootSound;
		 ::flixel::effects::particles::FlxTypedEmitter _gibs;
		bool left;
		bool right;
		::String curAnimName;
		void update(Float elapsed);

		void kill();

		void movement();
		::Dynamic movement_dyn();

		void hurt(Float damage);

		void shoot();
		::Dynamic shoot_dyn();

};


#endif /* INCLUDED_Player */ 
