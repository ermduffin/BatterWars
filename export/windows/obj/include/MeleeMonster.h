#ifndef INCLUDED_MeleeMonster
#define INCLUDED_MeleeMonster

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(MeleeMonster)
HX_DECLARE_CLASS0(MonsterType)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES MeleeMonster_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef MeleeMonster_obj OBJ_;
		MeleeMonster_obj();

	public:
		enum { _hx_ClassId = 0x2911854a };

		void __construct(Float x,Float y, ::flixel::FlxObject target, ::MonsterType type, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MeleeMonster")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MeleeMonster"); }
		static ::hx::ObjectPtr< MeleeMonster_obj > __new(Float x,Float y, ::flixel::FlxObject target, ::MonsterType type, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs);
		static ::hx::ObjectPtr< MeleeMonster_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y, ::flixel::FlxObject target, ::MonsterType type, ::flixel::group::FlxTypedGroup projectiles, ::flixel::effects::particles::FlxTypedEmitter gibs);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MeleeMonster_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MeleeMonster",26,cb,e5,0d); }

		 ::MonsterType _type;
		Float _damage_per_second;
		Float _armor;
		Float _movement_speed;
		 ::flixel::FlxObject _target;
		Float ATTACK_RANGE;
		Float ATTACK_RANGE_Y;
		 ::flixel::util::FlxTimer _timer;
		 ::flixel::group::FlxTypedGroup _projectiles;
		 ::flixel::_hx_system::FlxSound shootSound;
		 ::flixel::effects::particles::FlxTypedEmitter _gibs;
		void update(Float elapsed);

		void kill();

		void AI( ::flixel::util::FlxTimer timer);
		::Dynamic AI_dyn();

		void shoot();
		::Dynamic shoot_dyn();

		Float getDamagePerSecond();
		::Dynamic getDamagePerSecond_dyn();

};


#endif /* INCLUDED_MeleeMonster */ 
