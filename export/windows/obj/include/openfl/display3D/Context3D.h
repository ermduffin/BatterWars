#ifndef INCLUDED_openfl_display3D_Context3D
#define INCLUDED_openfl_display3D_Context3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS3(openfl,display3D,_internal,Context3DState)
HX_DECLARE_CLASS3(openfl,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS3(openfl,display3D,textures,VideoTexture)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES Context3D_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Context3D_obj OBJ_;
		Context3D_obj();

	public:
		enum { _hx_ClassId = 0x2d7459fd };

		void __construct( ::openfl::display::Stage stage, ::openfl::display3D::_internal::Context3DState contextState, ::openfl::display::Stage3D stage3D);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.Context3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display3D.Context3D"); }
		static ::hx::ObjectPtr< Context3D_obj > __new( ::openfl::display::Stage stage, ::openfl::display3D::_internal::Context3DState contextState, ::openfl::display::Stage3D stage3D);
		static ::hx::ObjectPtr< Context3D_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Stage stage, ::openfl::display3D::_internal::Context3DState contextState, ::openfl::display::Stage3D stage3D);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3D",40,3c,cf,b8); }

		static void __boot();
		static bool supportsVideoTexture;
		static ::String _hx___driverInfo;
		static int _hx___glDepthStencil;
		static int _hx___glMaxTextureMaxAnisotropy;
		static int _hx___glMaxViewportDims;
		static int _hx___glMemoryCurrentAvailable;
		static int _hx___glMemoryTotalAvailable;
		static int _hx___glTextureMaxAnisotropy;
		int backBufferHeight;
		int backBufferWidth;
		::String driverInfo;
		int maxBackBufferHeight;
		int maxBackBufferWidth;
		 ::Dynamic profile;
		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl;
		int _hx___backBufferAntiAlias;
		 ::openfl::display3D::textures::RectangleTexture _hx___backBufferTexture;
		bool _hx___backBufferWantsBestResolution;
		bool _hx___backBufferWantsBestResolutionOnBrowserZoom;
		bool _hx___cleared;
		 ::lime::graphics::RenderContext _hx___context;
		 ::openfl::display3D::_internal::Context3DState _hx___contextState;
		 ::openfl::display3D::Program3D _hx___renderStage3DProgram;
		bool _hx___enableErrorChecking;
		 ::lime::utils::ArrayBufferView _hx___fragmentConstants;
		 ::openfl::display3D::textures::RectangleTexture _hx___frontBufferTexture;
		 ::lime::utils::ArrayBufferView _hx___positionScale;
		bool _hx___present;
		 ::haxe::ds::StringMap _hx___programs;
		 ::openfl::display3D::IndexBuffer3D _hx___quadIndexBuffer;
		int _hx___quadIndexBufferCount;
		int _hx___quadIndexBufferElements;
		 ::openfl::display::Stage _hx___stage;
		 ::openfl::display::Stage3D _hx___stage3D;
		 ::openfl::display3D::_internal::Context3DState _hx___state;
		 ::lime::utils::ArrayBufferView _hx___vertexConstants;
		void clear(::hx::Null< Float >  red,::hx::Null< Float >  green,::hx::Null< Float >  blue,::hx::Null< Float >  alpha,::hx::Null< Float >  depth,::hx::Null< int >  stencil,::hx::Null< int >  mask);
		::Dynamic clear_dyn();

		void configureBackBuffer(int width,int height,int antiAlias,::hx::Null< bool >  enableDepthAndStencil,::hx::Null< bool >  wantsBestResolution,::hx::Null< bool >  wantsBestResolutionOnBrowserZoom);
		::Dynamic configureBackBuffer_dyn();

		 ::openfl::display3D::textures::CubeTexture createCubeTexture(int size, ::Dynamic format,bool optimizeForRenderToTexture,::hx::Null< int >  streamingLevels);
		::Dynamic createCubeTexture_dyn();

		 ::openfl::display3D::IndexBuffer3D createIndexBuffer(int numIndices, ::Dynamic bufferUsage);
		::Dynamic createIndexBuffer_dyn();

		 ::openfl::display3D::Program3D createProgram( ::Dynamic format);
		::Dynamic createProgram_dyn();

		 ::openfl::display3D::textures::RectangleTexture createRectangleTexture(int width,int height, ::Dynamic format,bool optimizeForRenderToTexture);
		::Dynamic createRectangleTexture_dyn();

		 ::openfl::display3D::textures::Texture createTexture(int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,::hx::Null< int >  streamingLevels);
		::Dynamic createTexture_dyn();

		 ::openfl::display3D::VertexBuffer3D createVertexBuffer(int numVertices,int data32PerVertex, ::Dynamic bufferUsage);
		::Dynamic createVertexBuffer_dyn();

		 ::openfl::display3D::textures::VideoTexture createVideoTexture();
		::Dynamic createVideoTexture_dyn();

		void dispose(::hx::Null< bool >  recreate);
		::Dynamic dispose_dyn();

		void drawToBitmapData( ::openfl::display::BitmapData destination, ::openfl::geom::Rectangle srcRect, ::openfl::geom::Point destPoint);
		::Dynamic drawToBitmapData_dyn();

		void drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,::hx::Null< int >  firstIndex,::hx::Null< int >  numTriangles);
		::Dynamic drawTriangles_dyn();

		void present();
		::Dynamic present_dyn();

		void setBlendFactors( ::Dynamic sourceFactor, ::Dynamic destinationFactor);
		::Dynamic setBlendFactors_dyn();

		void setBlendFactorsSeparate( ::Dynamic sourceRGBFactor, ::Dynamic destinationRGBFactor, ::Dynamic sourceAlphaFactor, ::Dynamic destinationAlphaFactor);
		::Dynamic setBlendFactorsSeparate_dyn();

		void setColorMask(bool red,bool green,bool blue,bool alpha);
		::Dynamic setColorMask_dyn();

		void setCulling( ::Dynamic triangleFaceToCull);
		::Dynamic setCulling_dyn();

		void setDepthTest(bool depthMask, ::Dynamic passCompareMode);
		::Dynamic setDepthTest_dyn();

		void setProgram( ::openfl::display3D::Program3D program);
		::Dynamic setProgram_dyn();

		void setProgramConstantsFromByteArray( ::Dynamic programType,int firstRegister,int numRegisters, ::openfl::utils::ByteArrayData data,int byteArrayOffset);
		::Dynamic setProgramConstantsFromByteArray_dyn();

		void setProgramConstantsFromMatrix( ::Dynamic programType,int firstRegister, ::openfl::geom::Matrix3D matrix,::hx::Null< bool >  transposedMatrix);
		::Dynamic setProgramConstantsFromMatrix_dyn();

		void setProgramConstantsFromVector( ::Dynamic programType,int firstRegister, ::openfl::_Vector::FloatVector data,::hx::Null< int >  numRegisters);
		::Dynamic setProgramConstantsFromVector_dyn();

		void setRenderToBackBuffer();
		::Dynamic setRenderToBackBuffer_dyn();

		void setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,::hx::Null< bool >  enableDepthAndStencil,::hx::Null< int >  antiAlias,::hx::Null< int >  surfaceSelector);
		::Dynamic setRenderToTexture_dyn();

		void setSamplerStateAt(int sampler, ::Dynamic wrap, ::Dynamic filter, ::Dynamic mipfilter);
		::Dynamic setSamplerStateAt_dyn();

		void setScissorRectangle( ::openfl::geom::Rectangle rectangle);
		::Dynamic setScissorRectangle_dyn();

		void setStencilActions( ::Dynamic triangleFace, ::Dynamic compareMode, ::Dynamic actionOnBothPass, ::Dynamic actionOnDepthFail, ::Dynamic actionOnDepthPassStencilFail);
		::Dynamic setStencilActions_dyn();

		void setStencilReferenceValue(int referenceValue,::hx::Null< int >  readMask,::hx::Null< int >  writeMask);
		::Dynamic setStencilReferenceValue_dyn();

		void setTextureAt(int sampler, ::openfl::display3D::textures::TextureBase texture);
		::Dynamic setTextureAt_dyn();

		void setVertexBufferAt(int index, ::openfl::display3D::VertexBuffer3D buffer,::hx::Null< int >  bufferOffset, ::Dynamic format);
		::Dynamic setVertexBufferAt_dyn();

		void _hx___bindGLArrayBuffer( ::lime::graphics::opengl::GLObject buffer);
		::Dynamic _hx___bindGLArrayBuffer_dyn();

		void _hx___bindGLElementArrayBuffer( ::lime::graphics::opengl::GLObject buffer);
		::Dynamic _hx___bindGLElementArrayBuffer_dyn();

		void _hx___bindGLFramebuffer( ::lime::graphics::opengl::GLObject framebuffer);
		::Dynamic _hx___bindGLFramebuffer_dyn();

		void _hx___bindGLTexture2D( ::lime::graphics::opengl::GLObject texture);
		::Dynamic _hx___bindGLTexture2D_dyn();

		void _hx___bindGLTextureCubeMap( ::lime::graphics::opengl::GLObject texture);
		::Dynamic _hx___bindGLTextureCubeMap_dyn();

		void _hx___dispose();
		::Dynamic _hx___dispose_dyn();

		void _hx___drawTriangles(::hx::Null< int >  firstIndex,int count);
		::Dynamic _hx___drawTriangles_dyn();

		void _hx___flushGL();
		::Dynamic _hx___flushGL_dyn();

		void _hx___flushGLBlend();
		::Dynamic _hx___flushGLBlend_dyn();

		void _hx___flushGLColor();
		::Dynamic _hx___flushGLColor_dyn();

		void _hx___flushGLCulling();
		::Dynamic _hx___flushGLCulling_dyn();

		void _hx___flushGLDepth();
		::Dynamic _hx___flushGLDepth_dyn();

		void _hx___flushGLFramebuffer();
		::Dynamic _hx___flushGLFramebuffer_dyn();

		void _hx___flushGLProgram();
		::Dynamic _hx___flushGLProgram_dyn();

		void _hx___flushGLScissor();
		::Dynamic _hx___flushGLScissor_dyn();

		void _hx___flushGLStencil();
		::Dynamic _hx___flushGLStencil_dyn();

		void _hx___flushGLTextures();
		::Dynamic _hx___flushGLTextures_dyn();

		void _hx___flushGLViewport();
		::Dynamic _hx___flushGLViewport_dyn();

		int _hx___getGLBlend( ::Dynamic blendFactor);
		::Dynamic _hx___getGLBlend_dyn();

		int _hx___getGLCompareMode( ::Dynamic mode);
		::Dynamic _hx___getGLCompareMode_dyn();

		int _hx___getGLStencilAction( ::Dynamic action);
		::Dynamic _hx___getGLStencilAction_dyn();

		int _hx___getGLTriangleFace( ::Dynamic face);
		::Dynamic _hx___getGLTriangleFace_dyn();

		void _hx___renderStage3D( ::openfl::display::Stage3D stage3D);
		::Dynamic _hx___renderStage3D_dyn();

		void _hx___setGLBlend(bool enable);
		::Dynamic _hx___setGLBlend_dyn();

		void _hx___setGLBlendEquation(int value);
		::Dynamic _hx___setGLBlendEquation_dyn();

		void _hx___setGLCullFace(bool enable);
		::Dynamic _hx___setGLCullFace_dyn();

		void _hx___setGLDepthTest(bool enable);
		::Dynamic _hx___setGLDepthTest_dyn();

		void _hx___setGLFrontFace(bool counterClockWise);
		::Dynamic _hx___setGLFrontFace_dyn();

		void _hx___setGLScissorTest(bool enable);
		::Dynamic _hx___setGLScissorTest_dyn();

		void _hx___setGLStencilTest(bool enable);
		::Dynamic _hx___setGLStencilTest_dyn();

		bool get_enableErrorChecking();
		::Dynamic get_enableErrorChecking_dyn();

		bool set_enableErrorChecking(bool value);
		::Dynamic set_enableErrorChecking_dyn();

		int get_totalGPUMemory();
		::Dynamic get_totalGPUMemory_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Context3D */ 
