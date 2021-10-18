#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)



class HXCPP_CLASS_ATTRIBUTES AssetPaths_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();

	public:
		enum { _hx_ClassId = 0x78a931fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="AssetPaths")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"AssetPaths"); }

		inline static ::hx::ObjectPtr< AssetPaths_obj > __new() {
			::hx::ObjectPtr< AssetPaths_obj > __this = new AssetPaths_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AssetPaths_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AssetPaths_obj *__this = (AssetPaths_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetPaths_obj), false, "AssetPaths"));
			*(void **)__this = AssetPaths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetPaths",3e,0f,e6,60); }

		static void __boot();
		static ::String data_goes_here__txt;
		static ::String tiles__tsx;
		static ::String tile_map__tmx;
		static ::String background__png;
		static ::String batter_bullet__png;
		static ::String batter_wave_spritesheet__png;
		static ::String chip_spritesheet__png;
		static ::String globby_spritesheet__png;
		static ::String images_go_here__txt;
		static ::String pancake_bullet__png;
		static ::String papa_globby_spritesheet__png;
		static ::String player_spritesheet__png;
		static ::String tile_map__png;
		static ::String GigakoopsTheClosingofChaos__ogg;
		static ::String music_goes_here__txt;
		static ::String OrigamiRepetikaKindGentleBeautifulPerson__ogg;
		static ::String OrigamiRepetikaSunnyMorningExerciseClub__ogg;
		static ::String sawsquarenoiseBossTheme__ogg;
		static ::String hurt__wav;
		static ::String monstershoot__wav;
		static ::String playershoot__wav;
		static ::String slam__wav;
		static ::String sounds_go_here__txt;
		static ::String wave__wav;
};


#endif /* INCLUDED_AssetPaths */ 
