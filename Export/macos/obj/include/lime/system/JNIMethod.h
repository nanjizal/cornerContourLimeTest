// Generated by Haxe 4.3.0-rc.1+5f599ba
#ifndef INCLUDED_lime_system_JNIMethod
#define INCLUDED_lime_system_JNIMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,JNIMethod)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES JNIMethod_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JNIMethod_obj OBJ_;
		JNIMethod_obj();

	public:
		enum { _hx_ClassId = 0x5c62ce1e };

		void __construct( ::Dynamic method);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.JNIMethod")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system.JNIMethod"); }
		static ::hx::ObjectPtr< JNIMethod_obj > __new( ::Dynamic method);
		static ::hx::ObjectPtr< JNIMethod_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic method);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JNIMethod_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JNIMethod",c6,67,b5,80); }

		 ::Dynamic method;
		 ::Dynamic callMember(::cpp::VirtualArray args);
		::Dynamic callMember_dyn();

		 ::Dynamic callStatic(::cpp::VirtualArray args);
		::Dynamic callStatic_dyn();

		 ::Dynamic getMemberMethod(bool useArray);
		::Dynamic getMemberMethod_dyn();

		 ::Dynamic getStaticMethod(bool useArray);
		::Dynamic getStaticMethod_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_JNIMethod */ 
