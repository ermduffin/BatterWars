#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Boss)
HX_DECLARE_CLASS0(BossArm)
HX_DECLARE_CLASS0(MeleeMonster)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Projectile)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x0a05f89d };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		 ::flixel::group::FlxTypedGroup _projectiles;
		 ::flixel::group::FlxTypedGroup _monsters;
		 ::flixel::group::FlxTypedGroup _monsterProjectiles;
		 ::flixel::tile::FlxTilemap _level;
		 ::Player _player;
		 ::Boss _boss;
		 ::flixel::group::FlxTypedGroup _bossArms;
		 ::flixel::group::FlxTypedGroup _bossProjectiles;
		 ::flixel::FlxSprite _bossWave;
		 ::flixel::group::FlxTypedGroup _lives;
		 ::flixel::group::FlxTypedGroup _bossLives;
		 ::flixel::group::FlxTypedGroup _hud;
		 ::flixel::_hx_system::FlxSound _hitSound;
		 ::flixel::effects::particles::FlxTypedEmitter _gibs;
		void create();

		void update(Float elapsed);

		void hit( ::flixel::FlxSprite entity, ::Projectile projectile);
		::Dynamic hit_dyn();

		void meleeHit( ::MeleeMonster monster, ::Player player);
		::Dynamic meleeHit_dyn();

		void stopBounce( ::MeleeMonster monster);
		::Dynamic stopBounce_dyn();

		void loseLife( ::Player player, ::flixel::FlxSprite sprite);
		::Dynamic loseLife_dyn();

		void loseBossLife( ::BossArm bossArm, ::Projectile projectile);
		::Dynamic loseBossLife_dyn();

		void startBossFight();
		::Dynamic startBossFight_dyn();

};


#endif /* INCLUDED_PlayState */ 
