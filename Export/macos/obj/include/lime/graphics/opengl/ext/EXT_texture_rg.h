// Generated by Haxe 4.3.0-rc.1+5f599ba
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_rg
#define INCLUDED_lime_graphics_opengl_ext_EXT_texture_rg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d8ba4f960147a2e5_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_texture_rg)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_texture_rg_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_texture_rg_obj OBJ_;
		EXT_texture_rg_obj();

	public:
		enum { _hx_ClassId = 0x0557c0a5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_texture_rg")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_texture_rg"); }

		inline static ::hx::ObjectPtr< EXT_texture_rg_obj > __new() {
			::hx::ObjectPtr< EXT_texture_rg_obj > __this = new EXT_texture_rg_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_texture_rg_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_texture_rg_obj *__this = (EXT_texture_rg_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_texture_rg_obj), false, "lime.graphics.opengl.ext.EXT_texture_rg"));
			*(void **)__this = EXT_texture_rg_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d8ba4f960147a2e5_4_new)
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::EXT_texture_rg)(__this) )->RG8_EXT = 33323;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_texture_rg)(__this) )->R8_EXT = 33321;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_texture_rg)(__this) )->RG_EXT = 33319;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_texture_rg)(__this) )->RED_EXT = 6403;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_texture_rg_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_texture_rg",17,ce,12,89); }

		int RED_EXT;
		int RG_EXT;
		int R8_EXT;
		int RG8_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_texture_rg */ 
