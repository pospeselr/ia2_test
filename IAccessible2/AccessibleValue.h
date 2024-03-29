/*** Autogenerated by WIDL 3.20 from /home/pospeselr/Code/Tor/tor-browser/other-licenses/ia2/AccessibleValue.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __accessiblevalue_h__
#define __accessiblevalue_h__

/* Forward declarations */

#ifndef __IAccessibleValue_FWD_DEFINED__
#define __IAccessibleValue_FWD_DEFINED__
typedef interface IAccessibleValue IAccessibleValue;
#ifdef __cplusplus
interface IAccessibleValue;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oaidl.h>
#include <oleacc.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IAccessibleValue interface
 */
#ifndef __IAccessibleValue_INTERFACE_DEFINED__
#define __IAccessibleValue_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAccessibleValue, 0x35855b5b, 0xc566, 0x4fd0, 0xa7,0xb1, 0xe6,0x54,0x65,0x60,0x03,0x94);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("35855b5b-c566-4fd0-a7b1-e65465600394")
IAccessibleValue : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE get_currentValue(
        VARIANT *currentValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE setCurrentValue(
        VARIANT value) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_maximumValue(
        VARIANT *maximumValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_minimumValue(
        VARIANT *minimumValue) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAccessibleValue, 0x35855b5b, 0xc566, 0x4fd0, 0xa7,0xb1, 0xe6,0x54,0x65,0x60,0x03,0x94)
#endif
#else
typedef struct IAccessibleValueVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessibleValue *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessibleValue *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessibleValue *This);

    /*** IAccessibleValue methods ***/
    HRESULT (STDMETHODCALLTYPE *get_currentValue)(
        IAccessibleValue *This,
        VARIANT *currentValue);

    HRESULT (STDMETHODCALLTYPE *setCurrentValue)(
        IAccessibleValue *This,
        VARIANT value);

    HRESULT (STDMETHODCALLTYPE *get_maximumValue)(
        IAccessibleValue *This,
        VARIANT *maximumValue);

    HRESULT (STDMETHODCALLTYPE *get_minimumValue)(
        IAccessibleValue *This,
        VARIANT *minimumValue);

    END_INTERFACE
} IAccessibleValueVtbl;

interface IAccessibleValue {
    CONST_VTBL IAccessibleValueVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAccessibleValue_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAccessibleValue_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAccessibleValue_Release(This) (This)->lpVtbl->Release(This)
/*** IAccessibleValue methods ***/
#define IAccessibleValue_get_currentValue(This,currentValue) (This)->lpVtbl->get_currentValue(This,currentValue)
#define IAccessibleValue_setCurrentValue(This,value) (This)->lpVtbl->setCurrentValue(This,value)
#define IAccessibleValue_get_maximumValue(This,maximumValue) (This)->lpVtbl->get_maximumValue(This,maximumValue)
#define IAccessibleValue_get_minimumValue(This,minimumValue) (This)->lpVtbl->get_minimumValue(This,minimumValue)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAccessibleValue_QueryInterface(IAccessibleValue* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAccessibleValue_AddRef(IAccessibleValue* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAccessibleValue_Release(IAccessibleValue* This) {
    return This->lpVtbl->Release(This);
}
/*** IAccessibleValue methods ***/
static FORCEINLINE HRESULT IAccessibleValue_get_currentValue(IAccessibleValue* This,VARIANT *currentValue) {
    return This->lpVtbl->get_currentValue(This,currentValue);
}
static FORCEINLINE HRESULT IAccessibleValue_setCurrentValue(IAccessibleValue* This,VARIANT value) {
    return This->lpVtbl->setCurrentValue(This,value);
}
static FORCEINLINE HRESULT IAccessibleValue_get_maximumValue(IAccessibleValue* This,VARIANT *maximumValue) {
    return This->lpVtbl->get_maximumValue(This,maximumValue);
}
static FORCEINLINE HRESULT IAccessibleValue_get_minimumValue(IAccessibleValue* This,VARIANT *minimumValue) {
    return This->lpVtbl->get_minimumValue(This,minimumValue);
}
#endif
#endif

#endif


#endif  /* __IAccessibleValue_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __accessiblevalue_h__ */
