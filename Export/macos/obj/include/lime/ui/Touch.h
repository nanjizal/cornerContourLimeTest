// Generated by Haxe 4.3.0-rc.1+5f599ba
#ifndef INCLUDED_lime_ui_Touch
#define INCLUDED_lime_ui_Touch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_25_new)
HX_DECLARE_CLASS2(lime,app,_Event_lime_ui_Touch_Void)
HX_DECLARE_CLASS2(lime,ui,Touch)

namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Touch_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Touch_obj OBJ_;
		Touch_obj();

	public:
		enum { _hx_ClassId = 0x081aca96 };

		void __construct(Float x,Float y,int id,Float dx,Float dy,Float pressure,int device);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.ui.Touch")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.ui.Touch"); }

		inline static ::hx::ObjectPtr< Touch_obj > __new(Float x,Float y,int id,Float dx,Float dy,Float pressure,int device) {
			::hx::ObjectPtr< Touch_obj > __this = new Touch_obj();
			__this->__construct(x,y,id,dx,dy,pressure,device);
			return __this;
		}

		inline static ::hx::ObjectPtr< Touch_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int id,Float dx,Float dy,Float pressure,int device) {
			Touch_obj *__this = (Touch_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Touch_obj), false, "lime.ui.Touch"));
			*(void **)__this = Touch_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_25_new)
HXLINE(  26)		( ( ::lime::ui::Touch)(__this) )->x = x;
HXLINE(  27)		( ( ::lime::ui::Touch)(__this) )->y = y;
HXLINE(  28)		( ( ::lime::ui::Touch)(__this) )->id = id;
HXLINE(  29)		( ( ::lime::ui::Touch)(__this) )->dx = dx;
HXLINE(  30)		( ( ::lime::ui::Touch)(__this) )->dy = dy;
HXLINE(  31)		( ( ::lime::ui::Touch)(__this) )->pressure = pressure;
HXLINE(  32)		( ( ::lime::ui::Touch)(__this) )->device = device;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Touch_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Touch",9f,87,60,a7); }

		static void __boot();
		static  ::lime::app::_Event_lime_ui_Touch_Void onCancel;
		static  ::lime::app::_Event_lime_ui_Touch_Void onEnd;
		static  ::lime::app::_Event_lime_ui_Touch_Void onMove;
		static  ::lime::app::_Event_lime_ui_Touch_Void onStart;
		int device;
		Float dx;
		Float dy;
		int id;
		Float pressure;
		Float x;
		Float y;
};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Touch */ 
