// Generated by Haxe 4.3.0-rc.1+5f599ba
#ifndef INCLUDED_cornerContourLimeTest__ShaderColor2D_ShaderColor2D_Fields_
#define INCLUDED_cornerContourLimeTest__ShaderColor2D_ShaderColor2D_Fields_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cornerContourLimeTest,_ShaderColor2D,ShaderColor2D_Fields_)

namespace cornerContourLimeTest{
namespace _ShaderColor2D{


class HXCPP_CLASS_ATTRIBUTES ShaderColor2D_Fields__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderColor2D_Fields__obj OBJ_;
		ShaderColor2D_Fields__obj();

	public:
		enum { _hx_ClassId = 0x2f9b5c1a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="cornerContourLimeTest._ShaderColor2D.ShaderColor2D_Fields_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"cornerContourLimeTest._ShaderColor2D.ShaderColor2D_Fields_"); }

		inline static ::hx::ObjectPtr< ShaderColor2D_Fields__obj > __new() {
			::hx::ObjectPtr< ShaderColor2D_Fields__obj > __this = new ShaderColor2D_Fields__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ShaderColor2D_Fields__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ShaderColor2D_Fields__obj *__this = (ShaderColor2D_Fields__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderColor2D_Fields__obj), false, "cornerContourLimeTest._ShaderColor2D.ShaderColor2D_Fields_"));
			*(void **)__this = ShaderColor2D_Fields__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderColor2D_Fields__obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderColor2D_Fields_",57,60,3d,7d); }

		static void __boot();
		static ::String vertexString;
		static ::String fragmentString;
};

} // end namespace cornerContourLimeTest
} // end namespace _ShaderColor2D

#endif /* INCLUDED_cornerContourLimeTest__ShaderColor2D_ShaderColor2D_Fields_ */ 
