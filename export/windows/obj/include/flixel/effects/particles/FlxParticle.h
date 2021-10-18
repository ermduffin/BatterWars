#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#define INCLUDED_flixel_effects_particles_FlxParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxParticle)
HX_DECLARE_CLASS3(flixel,effects,particles,IFlxParticle)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxRange)

namespace flixel{
namespace effects{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES FlxParticle_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxParticle_obj OBJ_;
		FlxParticle_obj();

	public:
		enum { _hx_ClassId = 0x478dc7ad };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.effects.particles.FlxParticle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.effects.particles.FlxParticle"); }
		static ::hx::ObjectPtr< FlxParticle_obj > __new();
		static ::hx::ObjectPtr< FlxParticle_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxParticle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxParticle",b8,18,a8,83); }

		Float lifespan;
		Float age;
		Float percent;
		bool autoUpdateHitbox;
		 ::flixel::util::helpers::FlxRange velocityRange;
		 ::flixel::util::helpers::FlxRange angularVelocityRange;
		 ::flixel::util::helpers::FlxRange scaleRange;
		 ::flixel::util::helpers::FlxRange alphaRange;
		 ::flixel::util::helpers::FlxRange colorRange;
		 ::flixel::util::helpers::FlxRange dragRange;
		 ::flixel::util::helpers::FlxRange accelerationRange;
		 ::flixel::util::helpers::FlxRange elasticityRange;
		Float _delta;
		void destroy();

		void update(Float elapsed);

		void reset(Float X,Float Y);

		void onEmit();
		::Dynamic onEmit_dyn();

};

} // end namespace flixel
} // end namespace effects
} // end namespace particles

#endif /* INCLUDED_flixel_effects_particles_FlxParticle */ 
