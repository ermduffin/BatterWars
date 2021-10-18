#ifndef INCLUDED_Boss
#define INCLUDED_Boss

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Boss)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Boss_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Boss_obj OBJ_;
		Boss_obj();

	public:
		enum { _hx_ClassId = 0x0047a9f1 };

		void __construct(Float x,Float y, ::flixel::FlxObject target, ::flixel::effects::particles::FlxTypedEmitter gibs);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Boss")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Boss"); }
		static ::hx::ObjectPtr< Boss_obj > __new(Float x,Float y, ::flixel::FlxObject target, ::flixel::effects::particles::FlxTypedEmitter gibs);
		static ::hx::ObjectPtr< Boss_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y, ::flixel::FlxObject target, ::flixel::effects::particles::FlxTypedEmitter gibs);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Boss_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Boss",cd,b3,f4,2b); }

		 ::flixel::FlxObject _target;
		Float ATTACK_RANGE;
		Float ATTACK_RANGE_Y;
		 ::flixel::util::FlxTimer _timer;
		 ::flixel::util::FlxTimer _batterRainTimer;
		 ::flixel::util::FlxTimer _batterWaveTimer;
		 ::flixel::group::FlxTypedGroup _arms;
		 ::flixel::FlxSprite _wave;
		 ::flixel::group::FlxTypedGroup _projectiles;
		 ::flixel::effects::particles::FlxTypedEmitter _gibs;
		 ::flixel::_hx_system::FlxSound _slamSound;
		 ::flixel::_hx_system::FlxSound _waveSound;
		void update(Float elapsed);

		void kill();

		void AI( ::flixel::util::FlxTimer timer);
		::Dynamic AI_dyn();

		void batterRainAttack( ::flixel::util::FlxTimer timer);
		::Dynamic batterRainAttack_dyn();

		void batterWaveAttack( ::flixel::util::FlxTimer timer);
		::Dynamic batterWaveAttack_dyn();

};


#endif /* INCLUDED_Boss */ 
