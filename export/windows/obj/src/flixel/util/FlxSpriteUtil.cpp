#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_56_alphaMask,"flixel.util.FlxSpriteUtil","alphaMask",0xaad6793b,"flixel.util.FlxSpriteUtil.alphaMask","flixel/util/FlxSpriteUtil.hx",56,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_85_alphaMaskFlxSprite,"flixel.util.FlxSpriteUtil","alphaMaskFlxSprite",0x13c0dd5c,"flixel.util.FlxSpriteUtil.alphaMaskFlxSprite","flixel/util/FlxSpriteUtil.hx",85,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_105_screenWrap,"flixel.util.FlxSpriteUtil","screenWrap",0x74418065,"flixel.util.FlxSpriteUtil.screenWrap","flixel/util/FlxSpriteUtil.hx",105,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_138_bound,"flixel.util.FlxSpriteUtil","bound",0x7d89918f,"flixel.util.FlxSpriteUtil.bound","flixel/util/FlxSpriteUtil.hx",138,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_170_space,"flixel.util.FlxSpriteUtil","space",0x47f36e17,"flixel.util.FlxSpriteUtil.space","flixel/util/FlxSpriteUtil.hx",170,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_272_drawLine,"flixel.util.FlxSpriteUtil","drawLine",0x239cc967,"flixel.util.FlxSpriteUtil.drawLine","flixel/util/FlxSpriteUtil.hx",272,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_299_drawCurve,"flixel.util.FlxSpriteUtil","drawCurve",0xdee9dfdc,"flixel.util.FlxSpriteUtil.drawCurve","flixel/util/FlxSpriteUtil.hx",299,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_323_drawRect,"flixel.util.FlxSpriteUtil","drawRect",0x2790fe97,"flixel.util.FlxSpriteUtil.drawRect","flixel/util/FlxSpriteUtil.hx",323,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_347_drawRoundRect,"flixel.util.FlxSpriteUtil","drawRoundRect",0x00e2de3f,"flixel.util.FlxSpriteUtil.drawRoundRect","flixel/util/FlxSpriteUtil.hx",347,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_375_drawRoundRectComplex,"flixel.util.FlxSpriteUtil","drawRoundRectComplex",0xe28185b1,"flixel.util.FlxSpriteUtil.drawRoundRectComplex","flixel/util/FlxSpriteUtil.hx",375,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_397_drawCircle,"flixel.util.FlxSpriteUtil","drawCircle",0x44dca643,"flixel.util.FlxSpriteUtil.drawCircle","flixel/util/FlxSpriteUtil.hx",397,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_437_drawEllipse,"flixel.util.FlxSpriteUtil","drawEllipse",0x1204b94b,"flixel.util.FlxSpriteUtil.drawEllipse","flixel/util/FlxSpriteUtil.hx",437,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_458_drawTriangle,"flixel.util.FlxSpriteUtil","drawTriangle",0x35f0a5bb,"flixel.util.FlxSpriteUtil.drawTriangle","flixel/util/FlxSpriteUtil.hx",458,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_480_drawPolygon,"flixel.util.FlxSpriteUtil","drawPolygon",0x190f7ae7,"flixel.util.FlxSpriteUtil.drawPolygon","flixel/util/FlxSpriteUtil.hx",480,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_501_beginDraw,"flixel.util.FlxSpriteUtil","beginDraw",0x53d0689e,"flixel.util.FlxSpriteUtil.beginDraw","flixel/util/FlxSpriteUtil.hx",501,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_519_endDraw,"flixel.util.FlxSpriteUtil","endDraw",0x51197d10,"flixel.util.FlxSpriteUtil.endDraw","flixel/util/FlxSpriteUtil.hx",519,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_534_updateSpriteGraphic,"flixel.util.FlxSpriteUtil","updateSpriteGraphic",0x448b866b,"flixel.util.FlxSpriteUtil.updateSpriteGraphic","flixel/util/FlxSpriteUtil.hx",534,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_558_setLineStyle,"flixel.util.FlxSpriteUtil","setLineStyle",0xc19fc36a,"flixel.util.FlxSpriteUtil.setLineStyle","flixel/util/FlxSpriteUtil.hx",558,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_580_getDefaultLineStyle,"flixel.util.FlxSpriteUtil","getDefaultLineStyle",0x36c9a563,"flixel.util.FlxSpriteUtil.getDefaultLineStyle","flixel/util/FlxSpriteUtil.hx",580,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_599_fill,"flixel.util.FlxSpriteUtil","fill",0x7a944252,"flixel.util.FlxSpriteUtil.fill","flixel/util/FlxSpriteUtil.hx",599,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_625_flicker,"flixel.util.FlxSpriteUtil","flicker",0xa3717289,"flixel.util.FlxSpriteUtil.flicker","flixel/util/FlxSpriteUtil.hx",625,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_635_isFlickering,"flixel.util.FlxSpriteUtil","isFlickering",0x05aae043,"flixel.util.FlxSpriteUtil.isFlickering","flixel/util/FlxSpriteUtil.hx",635,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_645_stopFlickering,"flixel.util.FlxSpriteUtil","stopFlickering",0x9d49141b,"flixel.util.FlxSpriteUtil.stopFlickering","flixel/util/FlxSpriteUtil.hx",645,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_663_fadeIn,"flixel.util.FlxSpriteUtil","fadeIn",0xd9639210,"flixel.util.FlxSpriteUtil.fadeIn","flixel/util/FlxSpriteUtil.hx",663,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_658_fadeIn,"flixel.util.FlxSpriteUtil","fadeIn",0xd9639210,"flixel.util.FlxSpriteUtil.fadeIn","flixel/util/FlxSpriteUtil.hx",658,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_676_fadeOut,"flixel.util.FlxSpriteUtil","fadeOut",0x5dc0d003,"flixel.util.FlxSpriteUtil.fadeOut","flixel/util/FlxSpriteUtil.hx",676,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_675_fadeOut,"flixel.util.FlxSpriteUtil","fadeOut",0x5dc0d003,"flixel.util.FlxSpriteUtil.fadeOut","flixel/util/FlxSpriteUtil.hx",675,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_682_alphaTween,"flixel.util.FlxSpriteUtil","alphaTween",0xe721b73c,"flixel.util.FlxSpriteUtil.alphaTween","flixel/util/FlxSpriteUtil.hx",682,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_38_boot,"flixel.util.FlxSpriteUtil","boot",0x77f3f801,"flixel.util.FlxSpriteUtil.boot","flixel/util/FlxSpriteUtil.hx",38,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_40_boot,"flixel.util.FlxSpriteUtil","boot",0x77f3f801,"flixel.util.FlxSpriteUtil.boot","flixel/util/FlxSpriteUtil.hx",40,0xc647097f)
namespace flixel{
namespace util{

void FlxSpriteUtil_obj::__construct() { }

Dynamic FlxSpriteUtil_obj::__CreateEmpty() { return new FlxSpriteUtil_obj; }

void *FlxSpriteUtil_obj::_hx_vtable = 0;

Dynamic FlxSpriteUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSpriteUtil_obj > _hx_result = new FlxSpriteUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSpriteUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a1ec5f3;
}

 ::openfl::display::Sprite FlxSpriteUtil_obj::flashGfxSprite;

 ::openfl::display::Graphics FlxSpriteUtil_obj::flashGfx;

 ::flixel::FlxSprite FlxSpriteUtil_obj::alphaMask( ::flixel::FlxSprite output, ::Dynamic source, ::Dynamic mask){
            	HX_GC_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_56_alphaMask)
HXLINE(  57)		 ::openfl::display::BitmapData data = ::flixel::_hx_system::FlxAssets_obj::resolveBitmapData(source);
HXLINE(  58)		 ::openfl::display::BitmapData maskData = ::flixel::_hx_system::FlxAssets_obj::resolveBitmapData(mask);
HXLINE(  60)		bool _hx_tmp;
HXDLIN(  60)		if (::hx::IsNotNull( data )) {
HXLINE(  60)			_hx_tmp = ::hx::IsNull( maskData );
            		}
            		else {
HXLINE(  60)			_hx_tmp = true;
            		}
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  62)			return null();
            		}
HXLINE(  65)		data = data->clone();
HXLINE(  66)		 ::openfl::geom::Rectangle _hx_tmp1 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,data->width,data->height);
HXDLIN(  66)		data->copyChannel(maskData,_hx_tmp1, ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()),8,8);
HXLINE(  67)		output->set_pixels(data);
HXLINE(  68)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMask,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::alphaMaskFlxSprite( ::flixel::FlxSprite sprite, ::flixel::FlxSprite mask, ::flixel::FlxSprite output){
            	HX_GC_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_85_alphaMaskFlxSprite)
HXLINE(  86)		sprite->drawFrame(null());
HXLINE(  87)		 ::openfl::display::BitmapData data = sprite->get_pixels()->clone();
HXLINE(  88)		 ::openfl::display::BitmapData _hx_tmp = mask->get_pixels();
HXDLIN(  88)		Float _hx_tmp1 = sprite->get_width();
HXDLIN(  88)		 ::openfl::geom::Rectangle _hx_tmp2 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,_hx_tmp1,sprite->get_height());
HXDLIN(  88)		data->copyChannel(_hx_tmp,_hx_tmp2, ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()),8,8);
HXLINE(  89)		output->set_pixels(data);
HXLINE(  90)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMaskFlxSprite,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::screenWrap( ::flixel::FlxSprite sprite,::hx::Null< bool >  __o_Left,::hx::Null< bool >  __o_Right,::hx::Null< bool >  __o_Top,::hx::Null< bool >  __o_Bottom){
            		bool Left = __o_Left.Default(true);
            		bool Right = __o_Right.Default(true);
            		bool Top = __o_Top.Default(true);
            		bool Bottom = __o_Bottom.Default(true);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_105_screenWrap)
HXLINE( 106)		bool _hx_tmp;
HXDLIN( 106)		if (Left) {
HXLINE( 106)			_hx_tmp = ((sprite->x + (( (Float)(sprite->frameWidth) ) / ( (Float)(2) ))) <= 0);
            		}
            		else {
HXLINE( 106)			_hx_tmp = false;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 108)			sprite->set_x(( (Float)(::flixel::FlxG_obj::width) ));
            		}
            		else {
HXLINE( 110)			bool _hx_tmp;
HXDLIN( 110)			if (Right) {
HXLINE( 110)				_hx_tmp = (sprite->x >= ::flixel::FlxG_obj::width);
            			}
            			else {
HXLINE( 110)				_hx_tmp = false;
            			}
HXDLIN( 110)			if (_hx_tmp) {
HXLINE( 112)				sprite->set_x(( (Float)(0) ));
            			}
            		}
HXLINE( 115)		bool _hx_tmp1;
HXDLIN( 115)		if (Top) {
HXLINE( 115)			_hx_tmp1 = ((sprite->y + (( (Float)(sprite->frameHeight) ) / ( (Float)(2) ))) <= 0);
            		}
            		else {
HXLINE( 115)			_hx_tmp1 = false;
            		}
HXDLIN( 115)		if (_hx_tmp1) {
HXLINE( 117)			sprite->set_y(( (Float)(::flixel::FlxG_obj::height) ));
            		}
            		else {
HXLINE( 119)			bool _hx_tmp;
HXDLIN( 119)			if (Bottom) {
HXLINE( 119)				_hx_tmp = (sprite->y >= ::flixel::FlxG_obj::height);
            			}
            			else {
HXLINE( 119)				_hx_tmp = false;
            			}
HXDLIN( 119)			if (_hx_tmp) {
HXLINE( 121)				sprite->set_y(( (Float)(0) ));
            			}
            		}
HXLINE( 123)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,screenWrap,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::bound( ::flixel::FlxSprite sprite,::hx::Null< Float >  __o_MinX,::hx::Null< Float >  __o_MaxX,::hx::Null< Float >  __o_MinY,::hx::Null< Float >  __o_MaxY){
            		Float MinX = __o_MinX.Default(0);
            		Float MaxX = __o_MaxX.Default(0);
            		Float MinY = __o_MinY.Default(0);
            		Float MaxY = __o_MaxY.Default(0);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_138_bound)
HXLINE( 139)		if ((MaxX <= 0)) {
HXLINE( 141)			MaxX = ( (Float)(::flixel::FlxG_obj::width) );
            		}
HXLINE( 143)		if ((MaxY <= 0)) {
HXLINE( 145)			MaxY = ( (Float)(::flixel::FlxG_obj::height) );
            		}
HXLINE( 148)		MaxX = (MaxX - ( (Float)(sprite->frameWidth) ));
HXLINE( 149)		MaxY = (MaxY - ( (Float)(sprite->frameHeight) ));
HXLINE( 151)		Float Value = sprite->x;
HXDLIN( 151)		Float lowerBound;
HXDLIN( 151)		bool lowerBound1;
HXDLIN( 151)		if (::hx::IsNotNull( MinX )) {
HXLINE( 151)			lowerBound1 = (Value < MinX);
            		}
            		else {
HXLINE( 151)			lowerBound1 = false;
            		}
HXDLIN( 151)		if (lowerBound1) {
HXLINE( 151)			lowerBound = MinX;
            		}
            		else {
HXLINE( 151)			lowerBound = Value;
            		}
HXDLIN( 151)		Float _hx_tmp;
HXDLIN( 151)		bool _hx_tmp1;
HXDLIN( 151)		if (::hx::IsNotNull( MaxX )) {
HXLINE( 151)			_hx_tmp1 = (lowerBound > MaxX);
            		}
            		else {
HXLINE( 151)			_hx_tmp1 = false;
            		}
HXDLIN( 151)		if (_hx_tmp1) {
HXLINE( 151)			_hx_tmp = MaxX;
            		}
            		else {
HXLINE( 151)			_hx_tmp = lowerBound;
            		}
HXDLIN( 151)		sprite->set_x(_hx_tmp);
HXLINE( 152)		Float Value1 = sprite->y;
HXDLIN( 152)		Float lowerBound2;
HXDLIN( 152)		bool lowerBound3;
HXDLIN( 152)		if (::hx::IsNotNull( MinY )) {
HXLINE( 152)			lowerBound3 = (Value1 < MinY);
            		}
            		else {
HXLINE( 152)			lowerBound3 = false;
            		}
HXDLIN( 152)		if (lowerBound3) {
HXLINE( 152)			lowerBound2 = MinY;
            		}
            		else {
HXLINE( 152)			lowerBound2 = Value1;
            		}
HXDLIN( 152)		Float _hx_tmp2;
HXDLIN( 152)		bool _hx_tmp3;
HXDLIN( 152)		if (::hx::IsNotNull( MaxY )) {
HXLINE( 152)			_hx_tmp3 = (lowerBound2 > MaxY);
            		}
            		else {
HXLINE( 152)			_hx_tmp3 = false;
            		}
HXDLIN( 152)		if (_hx_tmp3) {
HXLINE( 152)			_hx_tmp2 = MaxY;
            		}
            		else {
HXLINE( 152)			_hx_tmp2 = lowerBound2;
            		}
HXDLIN( 152)		sprite->set_y(_hx_tmp2);
HXLINE( 154)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,bound,return )

void FlxSpriteUtil_obj::space(::Array< ::Dynamic> objects,Float startX,Float startY, ::Dynamic horizontalSpacing, ::Dynamic verticalSpacing,::hx::Null< bool >  __o_spaceFromBounds, ::Dynamic position){
            		bool spaceFromBounds = __o_spaceFromBounds.Default(false);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_170_space)
HXLINE( 171)		Float prevWidth = ( (Float)(0) );
HXLINE( 172)		Float runningX = ( (Float)(0) );
HXLINE( 174)		if (::hx::IsNotNull( horizontalSpacing )) {
HXLINE( 176)			if (spaceFromBounds) {
HXLINE( 178)				prevWidth = objects->__get(0).StaticCast<  ::flixel::FlxObject >()->get_width();
            			}
HXLINE( 180)			runningX = startX;
            		}
            		else {
HXLINE( 184)			runningX = objects->__get(0).StaticCast<  ::flixel::FlxObject >()->x;
            		}
HXLINE( 187)		Float prevHeight = ( (Float)(0) );
HXLINE( 188)		Float runningY = ( (Float)(0) );
HXLINE( 190)		if (::hx::IsNotNull( verticalSpacing )) {
HXLINE( 192)			if (spaceFromBounds) {
HXLINE( 194)				prevHeight = objects->__get(0).StaticCast<  ::flixel::FlxObject >()->get_height();
            			}
HXLINE( 196)			runningY = startY;
            		}
            		else {
HXLINE( 200)			runningY = objects->__get(0).StaticCast<  ::flixel::FlxObject >()->y;
            		}
HXLINE( 203)		if (::hx::IsNotNull( position )) {
HXLINE( 205)			position(objects->__get(0).StaticCast<  ::flixel::FlxObject >(),runningX,runningY);
            		}
            		else {
HXLINE( 209)			objects->__get(0).StaticCast<  ::flixel::FlxObject >()->set_x(runningX);
HXLINE( 210)			objects->__get(0).StaticCast<  ::flixel::FlxObject >()->set_y(runningY);
            		}
HXLINE( 213)		Float curX = ( (Float)(0) );
HXLINE( 214)		Float curY = ( (Float)(0) );
HXLINE( 216)		{
HXLINE( 216)			int _g = 1;
HXDLIN( 216)			int _g1 = objects->length;
HXDLIN( 216)			while((_g < _g1)){
HXLINE( 216)				_g = (_g + 1);
HXDLIN( 216)				int i = (_g - 1);
HXLINE( 218)				 ::flixel::FlxObject object = objects->__get(i).StaticCast<  ::flixel::FlxObject >();
HXLINE( 220)				if (::hx::IsNotNull( horizontalSpacing )) {
HXLINE( 222)					curX = ((runningX + prevWidth) + horizontalSpacing);
HXLINE( 223)					runningX = curX;
            				}
            				else {
HXLINE( 227)					curX = object->x;
            				}
HXLINE( 230)				if (::hx::IsNotNull( verticalSpacing )) {
HXLINE( 232)					curY = ((runningY + prevHeight) + verticalSpacing);
HXLINE( 233)					runningY = curY;
            				}
            				else {
HXLINE( 237)					curY = object->y;
            				}
HXLINE( 240)				if (::hx::IsNotNull( position )) {
HXLINE( 242)					position(object,curX,curY);
            				}
            				else {
HXLINE( 246)					object->set_x(curX);
HXLINE( 247)					object->set_y(curY);
            				}
HXLINE( 250)				if (spaceFromBounds) {
HXLINE( 252)					prevWidth = object->get_width();
HXLINE( 253)					prevHeight = object->get_height();
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,space,(void))

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawLine( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY, ::Dynamic lineStyle, ::Dynamic drawStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_272_drawLine)
HXLINE( 273)		 ::Dynamic lineStyle1 = lineStyle;
HXDLIN( 273)		if (::hx::IsNull( lineStyle1 )) {
HXLINE( 273)			lineStyle1 =  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("color",63,71,5c,4a),-1)
            				->setFixed(1,HX_("thickness",74,f1,66,5a),1));
            		}
HXDLIN( 273)		if (::hx::IsNull( lineStyle1->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 273)			lineStyle1->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            		}
HXDLIN( 273)		if (::hx::IsNull( lineStyle1->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 273)			lineStyle1->__SetField(HX_("color",63,71,5c,4a),-1,::hx::paccDynamic);
            		}
HXDLIN( 273)		lineStyle = lineStyle1;
HXLINE( 274)		{
HXLINE( 274)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 274)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 274)				 ::Dynamic color;
HXDLIN( 274)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 274)					color = -16777216;
            				}
            				else {
HXLINE( 274)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 274)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 274)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 274)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 274)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 274)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 274)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 274)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 274)			if ((0 != 0)) {
HXLINE( 274)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((0 & 16777215),(( (Float)(((0 >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 275)		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(StartX,StartY);
HXLINE( 276)		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(EndX,EndY);
HXLINE( 277)		{
HXLINE( 277)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 277)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 278)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawLine,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawCurve( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Float ControlX,Float ControlY,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(0);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_299_drawCurve)
HXLINE( 300)		 ::Dynamic lineStyle1 = lineStyle;
HXDLIN( 300)		if (::hx::IsNull( lineStyle1 )) {
HXLINE( 300)			lineStyle1 =  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("color",63,71,5c,4a),-1)
            				->setFixed(1,HX_("thickness",74,f1,66,5a),1));
            		}
HXDLIN( 300)		if (::hx::IsNull( lineStyle1->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 300)			lineStyle1->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            		}
HXDLIN( 300)		if (::hx::IsNull( lineStyle1->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 300)			lineStyle1->__SetField(HX_("color",63,71,5c,4a),-1,::hx::paccDynamic);
            		}
HXDLIN( 300)		lineStyle = lineStyle1;
HXLINE( 301)		{
HXLINE( 301)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 301)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 301)				 ::Dynamic color;
HXDLIN( 301)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 301)					color = -16777216;
            				}
            				else {
HXLINE( 301)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 301)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 301)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 301)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 301)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 301)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 301)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 301)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 301)			if ((FillColor != 0)) {
HXLINE( 301)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 302)		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(StartX,StartY);
HXLINE( 303)		::flixel::util::FlxSpriteUtil_obj::flashGfx->curveTo(EndX,EndY,ControlX,ControlY);
HXLINE( 304)		{
HXLINE( 304)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 304)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 305)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxSpriteUtil_obj,drawCurve,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_323_drawRect)
HXLINE( 324)		{
HXLINE( 324)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 324)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 324)				 ::Dynamic color;
HXDLIN( 324)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 324)					color = -16777216;
            				}
            				else {
HXLINE( 324)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 324)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 324)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 324)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 324)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 324)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 324)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 324)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 324)			if ((FillColor != 0)) {
HXLINE( 324)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 325)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRect(X,Y,Width,Height);
HXLINE( 326)		{
HXLINE( 326)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 326)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 327)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawRect,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawRoundRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float EllipseWidth,Float EllipseHeight,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_347_drawRoundRect)
HXLINE( 348)		{
HXLINE( 348)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 348)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 348)				 ::Dynamic color;
HXDLIN( 348)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 348)					color = -16777216;
            				}
            				else {
HXLINE( 348)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 348)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 348)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 348)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 348)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 348)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 348)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 348)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 348)			if ((FillColor != 0)) {
HXLINE( 348)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 349)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRoundRect(X,Y,Width,Height,EllipseWidth,EllipseHeight);
HXLINE( 350)		{
HXLINE( 350)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 350)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 351)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxSpriteUtil_obj,drawRoundRect,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawRoundRectComplex( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float TopLeftRadius,Float TopRightRadius,Float BottomLeftRadius,Float BottomRightRadius,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_375_drawRoundRectComplex)
HXLINE( 376)		{
HXLINE( 376)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 376)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 376)				 ::Dynamic color;
HXDLIN( 376)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 376)					color = -16777216;
            				}
            				else {
HXLINE( 376)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 376)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 376)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 376)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 376)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 376)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 376)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 376)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 376)			if ((FillColor != 0)) {
HXLINE( 376)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 377)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRoundRectComplex(X,Y,Width,Height,TopLeftRadius,TopRightRadius,BottomLeftRadius,BottomRightRadius);
HXLINE( 378)		{
HXLINE( 378)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 378)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 379)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(FlxSpriteUtil_obj,drawRoundRectComplex,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawCircle( ::flixel::FlxSprite sprite,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Radius,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		Float X = __o_X.Default(-1);
            		Float Y = __o_Y.Default(-1);
            		Float Radius = __o_Radius.Default(-1);
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_397_drawCircle)
HXLINE( 398)		bool _hx_tmp;
HXDLIN( 398)		if ((X != -1)) {
HXLINE( 398)			_hx_tmp = (Y == -1);
            		}
            		else {
HXLINE( 398)			_hx_tmp = true;
            		}
HXDLIN( 398)		if (_hx_tmp) {
HXLINE( 400)			 ::flixel::math::FlxPoint midPoint = sprite->getGraphicMidpoint(null());
HXLINE( 402)			if ((X == -1)) {
HXLINE( 403)				X = (midPoint->x - sprite->x);
            			}
HXLINE( 404)			if ((Y == -1)) {
HXLINE( 405)				Y = (midPoint->y - sprite->y);
            			}
HXLINE( 407)			midPoint->put();
            		}
HXLINE( 410)		if ((Radius < 1)) {
HXLINE( 412)			Float minVal = ::Math_obj::min(( (Float)(sprite->frameWidth) ),( (Float)(sprite->frameHeight) ));
HXLINE( 413)			Radius = (minVal / ( (Float)(2) ));
            		}
HXLINE( 416)		{
HXLINE( 416)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 416)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 416)				 ::Dynamic color;
HXDLIN( 416)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 416)					color = -16777216;
            				}
            				else {
HXLINE( 416)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 416)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 416)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 416)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 416)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 416)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 416)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 416)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 416)			if ((FillColor != 0)) {
HXLINE( 416)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 417)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawCircle(X,Y,Radius);
HXLINE( 418)		{
HXLINE( 418)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 418)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 419)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawCircle,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawEllipse( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_437_drawEllipse)
HXLINE( 438)		{
HXLINE( 438)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 438)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 438)				 ::Dynamic color;
HXDLIN( 438)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 438)					color = -16777216;
            				}
            				else {
HXLINE( 438)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 438)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 438)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 438)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 438)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 438)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 438)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 438)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 438)			if ((FillColor != 0)) {
HXLINE( 438)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 439)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawEllipse(X,Y,Width,Height);
HXLINE( 440)		{
HXLINE( 440)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 440)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 441)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawEllipse,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawTriangle( ::flixel::FlxSprite sprite,Float X,Float Y,Float Height,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_458_drawTriangle)
HXLINE( 459)		{
HXLINE( 459)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 459)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 459)				 ::Dynamic color;
HXDLIN( 459)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 459)					color = -16777216;
            				}
            				else {
HXLINE( 459)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 459)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 459)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 459)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 459)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 459)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 459)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 459)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 459)			if ((FillColor != 0)) {
HXLINE( 459)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 460)		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo((X + (Height / ( (Float)(2) ))),Y);
HXLINE( 461)		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo((X + Height),(Height + Y));
HXLINE( 462)		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(X,(Height + Y));
HXLINE( 463)		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo((X + (Height / ( (Float)(2) ))),Y);
HXLINE( 464)		{
HXLINE( 464)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 464)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 465)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawTriangle,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawPolygon( ::flixel::FlxSprite sprite,::Array< ::Dynamic> Vertices,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_480_drawPolygon)
HXLINE( 481)		{
HXLINE( 481)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 481)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 481)				 ::Dynamic color;
HXDLIN( 481)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 481)					color = -16777216;
            				}
            				else {
HXLINE( 481)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 481)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 481)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 481)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 481)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 481)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 481)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 481)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 481)			if ((FillColor != 0)) {
HXLINE( 481)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 482)		 ::flixel::math::FlxPoint p = Vertices->shift().StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 483)		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(p->x,p->y);
HXLINE( 484)		{
HXLINE( 484)			int _g = 0;
HXDLIN( 484)			while((_g < Vertices->length)){
HXLINE( 484)				 ::flixel::math::FlxPoint p = Vertices->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN( 484)				_g = (_g + 1);
HXLINE( 486)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(p->x,p->y);
            			}
            		}
HXLINE( 488)		{
HXLINE( 488)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 488)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 489)		Vertices->unshift(p);
HXLINE( 490)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,drawPolygon,return )

void FlxSpriteUtil_obj::beginDraw(int FillColor, ::Dynamic lineStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_501_beginDraw)
HXLINE( 502)		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXLINE( 503)		if (::hx::IsNotNull( lineStyle )) {
HXLINE( 503)			 ::Dynamic color;
HXDLIN( 503)			if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 503)				color = -16777216;
            			}
            			else {
HXLINE( 503)				color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            			}
HXDLIN( 503)			if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 503)				lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            			}
HXDLIN( 503)			if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 503)				lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            			}
HXDLIN( 503)			if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 503)				lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            			}
HXDLIN( 503)			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            		}
HXLINE( 505)		if ((FillColor != 0)) {
HXLINE( 507)			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,beginDraw,(void))

 ::flixel::FlxSprite FlxSpriteUtil_obj::endDraw( ::flixel::FlxSprite sprite, ::Dynamic drawStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_519_endDraw)
HXLINE( 520)		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXLINE( 521)		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
HXLINE( 522)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,endDraw,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::updateSpriteGraphic( ::flixel::FlxSprite sprite, ::Dynamic drawStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_534_updateSpriteGraphic)
HXLINE( 535)		if (::hx::IsNull( drawStyle )) {
HXLINE( 537)			drawStyle =  ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("smoothing",74,d5,e1,95),false));
            		}
            		else {
HXLINE( 539)			if (::hx::IsNull( drawStyle->__Field(HX_("smoothing",74,d5,e1,95),::hx::paccDynamic) )) {
HXLINE( 541)				drawStyle->__SetField(HX_("smoothing",74,d5,e1,95),false,::hx::paccDynamic);
            			}
            		}
HXLINE( 544)		sprite->get_pixels()->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,( ( ::openfl::geom::Matrix)(drawStyle->__Field(HX_("matrix",41,36,c8,bb),::hx::paccDynamic)) ),( ( ::openfl::geom::ColorTransform)(drawStyle->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic)) ),drawStyle->__Field(HX_("blendMode",54,e4,37,0c),::hx::paccDynamic),( ( ::openfl::geom::Rectangle)(drawStyle->__Field(HX_("clipRect",14,90,6a,58),::hx::paccDynamic)) ),drawStyle->__Field(HX_("smoothing",74,d5,e1,95),::hx::paccDynamic));
HXLINE( 545)		sprite->dirty = true;
HXLINE( 546)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,updateSpriteGraphic,return )

void FlxSpriteUtil_obj::setLineStyle( ::Dynamic lineStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_558_setLineStyle)
HXDLIN( 558)		if (::hx::IsNotNull( lineStyle )) {
HXLINE( 560)			 ::Dynamic color;
HXDLIN( 560)			if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 560)				color = -16777216;
            			}
            			else {
HXLINE( 560)				color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            			}
HXLINE( 562)			if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 563)				lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            			}
HXLINE( 564)			if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 565)				lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            			}
HXLINE( 566)			if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 567)				lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            			}
HXLINE( 569)			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,setLineStyle,(void))

 ::Dynamic FlxSpriteUtil_obj::getDefaultLineStyle( ::Dynamic lineStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_580_getDefaultLineStyle)
HXLINE( 581)		if (::hx::IsNull( lineStyle )) {
HXLINE( 582)			lineStyle =  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("color",63,71,5c,4a),-1)
            				->setFixed(1,HX_("thickness",74,f1,66,5a),1));
            		}
HXLINE( 583)		if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 584)			lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            		}
HXLINE( 585)		if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 586)			lineStyle->__SetField(HX_("color",63,71,5c,4a),-1,::hx::paccDynamic);
            		}
HXLINE( 588)		return lineStyle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,getDefaultLineStyle,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::fill( ::flixel::FlxSprite sprite,int FillColor){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_599_fill)
HXLINE( 600)		 ::openfl::display::BitmapData _hx_tmp = sprite->get_pixels();
HXDLIN( 600)		_hx_tmp->fillRect(sprite->get_pixels()->rect,FillColor);
HXLINE( 602)		 ::openfl::display::BitmapData _hx_tmp1 = sprite->get_pixels();
HXDLIN( 602)		if (::hx::IsInstanceNotEq( _hx_tmp1,sprite->framePixels )) {
HXLINE( 604)			sprite->dirty = true;
            		}
HXLINE( 607)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,fill,return )

 ::flixel::effects::FlxFlicker FlxSpriteUtil_obj::flicker( ::flixel::FlxObject Object,::hx::Null< Float >  __o_Duration,::hx::Null< Float >  __o_Interval,::hx::Null< bool >  __o_EndVisibility,::hx::Null< bool >  __o_ForceRestart, ::Dynamic CompletionCallback, ::Dynamic ProgressCallback){
            		Float Duration = __o_Duration.Default(1);
            		Float Interval = __o_Interval.Default(((Float)0.04));
            		bool EndVisibility = __o_EndVisibility.Default(true);
            		bool ForceRestart = __o_ForceRestart.Default(true);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_625_flicker)
HXDLIN( 625)		return ::flixel::effects::FlxFlicker_obj::flicker(Object,Duration,Interval,EndVisibility,ForceRestart,CompletionCallback,ProgressCallback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,flicker,return )

bool FlxSpriteUtil_obj::isFlickering( ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_635_isFlickering)
HXDLIN( 635)		return ::flixel::effects::FlxFlicker_obj::isFlickering(Object);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,isFlickering,return )

 ::flixel::FlxObject FlxSpriteUtil_obj::stopFlickering( ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_645_stopFlickering)
HXLINE( 646)		::flixel::effects::FlxFlicker_obj::stopFlickering(Object);
HXLINE( 647)		return Object;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,stopFlickering,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::fadeIn( ::flixel::FlxSprite sprite,::hx::Null< Float >  __o_Duration, ::Dynamic ResetAlpha, ::Dynamic OnComplete){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,sprite1) HXARGC(1)
            		void _hx_run(Float f){
            			HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_663_fadeIn)
HXLINE( 663)			::flixel::util::FlxSpriteUtil_obj::alphaTween(sprite1,f);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		Float Duration = __o_Duration.Default(1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_658_fadeIn)
HXLINE( 659)		if (( (bool)(ResetAlpha) )) {
HXLINE( 661)			sprite->set_alpha(( (Float)(0) ));
            		}
HXLINE( 663)		 ::flixel::FlxSprite sprite1 = sprite;
HXDLIN( 663)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(sprite1));
HXDLIN( 663)		::flixel::tweens::FlxTween_obj::num(sprite->alpha,( (Float)(1) ),Duration, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d),OnComplete)),_hx_tmp);
HXLINE( 664)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxSpriteUtil_obj,fadeIn,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::fadeOut( ::flixel::FlxSprite sprite,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,sprite1) HXARGC(1)
            		void _hx_run(Float f){
            			HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_676_fadeOut)
HXLINE( 676)			::flixel::util::FlxSpriteUtil_obj::alphaTween(sprite1,f);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		Float Duration = __o_Duration.Default(1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_675_fadeOut)
HXLINE( 676)		 ::flixel::FlxSprite sprite1 = sprite;
HXDLIN( 676)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(sprite1));
HXDLIN( 676)		::flixel::tweens::FlxTween_obj::num(sprite->alpha,( (Float)(0) ),Duration, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d),OnComplete)),_hx_tmp);
HXLINE( 677)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,fadeOut,return )

void FlxSpriteUtil_obj::alphaTween( ::flixel::FlxSprite sprite,Float f){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_682_alphaTween)
HXDLIN( 682)		sprite->set_alpha(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,alphaTween,(void))


FlxSpriteUtil_obj::FlxSpriteUtil_obj()
{
}

bool FlxSpriteUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { outValue = fill_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { outValue = bound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"space") ) { outValue = space_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fadeIn") ) { outValue = fadeIn_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endDraw") ) { outValue = endDraw_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"flicker") ) { outValue = flicker_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { outValue = fadeOut_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { outValue = ( flashGfx ); return true; }
		if (HX_FIELD_EQ(inName,"drawLine") ) { outValue = drawLine_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawRect") ) { outValue = drawRect_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { outValue = alphaMask_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawCurve") ) { outValue = drawCurve_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"beginDraw") ) { outValue = beginDraw_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenWrap") ) { outValue = screenWrap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { outValue = drawCircle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"alphaTween") ) { outValue = alphaTween_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { outValue = drawEllipse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { outValue = drawPolygon_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawTriangle") ) { outValue = drawTriangle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setLineStyle") ) { outValue = setLineStyle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isFlickering") ) { outValue = isFlickering_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { outValue = ( flashGfxSprite ); return true; }
		if (HX_FIELD_EQ(inName,"stopFlickering") ) { outValue = stopFlickering_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaMaskFlxSprite") ) { outValue = alphaMaskFlxSprite_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateSpriteGraphic") ) { outValue = updateSpriteGraphic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDefaultLineStyle") ) { outValue = getDefaultLineStyle_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { outValue = drawRoundRectComplex_dyn(); return true; }
	}
	return false;
}

bool FlxSpriteUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { flashGfx=ioValue.Cast<  ::openfl::display::Graphics >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { flashGfxSprite=ioValue.Cast<  ::openfl::display::Sprite >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxSpriteUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxSpriteUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(void *) &FlxSpriteUtil_obj::flashGfxSprite,HX_("flashGfxSprite",8e,26,3f,ab)},
	{::hx::fsObject /*  ::openfl::display::Graphics */ ,(void *) &FlxSpriteUtil_obj::flashGfx,HX_("flashGfx",a9,b1,ce,99)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxSpriteUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSpriteUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#endif

::hx::Class FlxSpriteUtil_obj::__mClass;

static ::String FlxSpriteUtil_obj_sStaticFields[] = {
	HX_("flashGfxSprite",8e,26,3f,ab),
	HX_("flashGfx",a9,b1,ce,99),
	HX_("alphaMask",6a,1b,50,e2),
	HX_("alphaMaskFlxSprite",4d,fd,ae,12),
	HX_("screenWrap",56,c7,35,c7),
	HX_("bound",3e,b0,fc,b6),
	HX_("space",c6,8c,66,81),
	HX_("drawLine",18,c2,1c,5c),
	HX_("drawCurve",0b,82,63,16),
	HX_("drawRect",48,f7,10,60),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("drawRoundRectComplex",e2,43,2c,11),
	HX_("drawCircle",34,ed,d0,97),
	HX_("drawEllipse",3a,85,ce,54),
	HX_("drawTriangle",ec,4a,b9,63),
	HX_("drawPolygon",d6,46,d9,5b),
	HX_("beginDraw",cd,0a,4a,8b),
	HX_("endDraw",7f,e5,94,24),
	HX_("updateSpriteGraphic",5a,59,f9,55),
	HX_("setLineStyle",9b,68,68,ef),
	HX_("getDefaultLineStyle",52,78,37,48),
	HX_("fill",83,ce,bb,43),
	HX_("flicker",f8,da,ec,76),
	HX_("isFlickering",74,85,73,33),
	HX_("stopFlickering",8c,27,6a,4a),
	HX_("fadeIn",81,4c,ab,e4),
	HX_("fadeOut",72,38,3c,31),
	HX_("alphaTween",2d,fe,15,3a),
	::String(null())
};

void FlxSpriteUtil_obj::__register()
{
	FlxSpriteUtil_obj _hx_dummy;
	FlxSpriteUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxSpriteUtil",ff,7e,4e,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSpriteUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSpriteUtil_obj::__SetStatic;
	__mClass->mMarkFunc = FlxSpriteUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxSpriteUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxSpriteUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSpriteUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSpriteUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSpriteUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxSpriteUtil_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_38_boot)
HXDLIN(  38)		flashGfxSprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_40_boot)
HXDLIN(  40)		flashGfx = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite->get_graphics();
            	}
}

} // end namespace flixel
} // end namespace util
