// Generated by Haxe 4.3.0-rc.1+5f599ba
#ifndef INCLUDED_cornerContour_io__Array7_Array7_Impl_
#define INCLUDED_cornerContour_io__Array7_Array7_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(cornerContour,io,_Array7,Array7_Impl_)

namespace cornerContour{
namespace io{
namespace _Array7{


class HXCPP_CLASS_ATTRIBUTES Array7_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Array7_Impl__obj OBJ_;
		Array7_Impl__obj();

	public:
		enum { _hx_ClassId = 0x71d3e730 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="cornerContour.io._Array7.Array7_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"cornerContour.io._Array7.Array7_Impl_"); }

		inline static ::hx::ObjectPtr< Array7_Impl__obj > __new() {
			::hx::ObjectPtr< Array7_Impl__obj > __this = new Array7_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Array7_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Array7_Impl__obj *__this = (Array7_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Array7_Impl__obj), false, "cornerContour.io._Array7.Array7_Impl_"));
			*(void **)__this = Array7_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Array7_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Array7_Impl_",be,73,c6,e7); }

		static Float readItem(::Array< Float > this1,int k);
		static ::Dynamic readItem_dyn();

		static Float writeItem(::Array< Float > this1,int k,Float v);
		static ::Dynamic writeItem_dyn();

		static ::Array< Float > _new();
		static ::Dynamic _new_dyn();

		static int get_index(::Array< Float > this1);
		static ::Dynamic get_index_dyn();

		static int set_index(::Array< Float > this1,int id);
		static ::Dynamic set_index_dyn();

		static bool toEnd(::Array< Float > this1,int id,int len);
		static ::Dynamic toEnd_dyn();

		static bool toStart(::Array< Float > this1,int id,int len);
		static ::Dynamic toStart_dyn();

		static bool swap(::Array< Float > this1,int id0,int id1,int len);
		static ::Dynamic swap_dyn();

};

} // end namespace cornerContour
} // end namespace io
} // end namespace _Array7

#endif /* INCLUDED_cornerContour_io__Array7_Array7_Impl_ */ 
