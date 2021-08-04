// Generated by Haxe 4.3.0-rc.1+5f599ba
#ifndef INCLUDED_cornerContour_Pen2D
#define INCLUDED_cornerContour_Pen2D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cornerContour_IPen
#include <cornerContour/IPen.h>
#endif
HX_DECLARE_CLASS1(cornerContour,IPen)
HX_DECLARE_CLASS1(cornerContour,Pen2D)

namespace cornerContour{


class HXCPP_CLASS_ATTRIBUTES Pen2D_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Pen2D_obj OBJ_;
		Pen2D_obj();

	public:
		enum { _hx_ClassId = 0x02f9104a };

		void __construct(int col);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cornerContour.Pen2D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"cornerContour.Pen2D"); }
		static ::hx::ObjectPtr< Pen2D_obj > __new(int col);
		static ::hx::ObjectPtr< Pen2D_obj > __alloc(::hx::Ctx *_hx_ctx,int col);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Pen2D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Pen2D",cb,98,24,53); }

		::Array< Float > arr;
		Float get_pos();
		::Dynamic get_pos_dyn();

		Float set_pos(Float val);
		::Dynamic set_pos_dyn();

		int triangle2DFill(Float ax,Float ay,Float bx,Float by,Float cx,Float cy, ::Dynamic color);
		::Dynamic triangle2DFill_dyn();

		int applyFill( ::Dynamic fill2D);
		::Dynamic applyFill_dyn();

		int currentColor;
};

} // end namespace cornerContour

#endif /* INCLUDED_cornerContour_Pen2D */ 
