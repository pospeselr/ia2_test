/*** Autogenerated by WIDL 3.20 from /home/pospeselr/Code/Tor/tor-browser/other-licenses/ia2/AccessibleHyperlink.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __accessiblehyperlink_h__
#define __accessiblehyperlink_h__

/* Forward declarations */

#ifndef __IAccessibleHyperlink_FWD_DEFINED__
#define __IAccessibleHyperlink_FWD_DEFINED__
typedef interface IAccessibleHyperlink IAccessibleHyperlink;
#ifdef __cplusplus
interface IAccessibleHyperlink;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oaidl.h>
#include <oleacc.h>
#include <AccessibleAction.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IAccessibleHyperlink interface
 */
#ifndef __IAccessibleHyperlink_INTERFACE_DEFINED__
#define __IAccessibleHyperlink_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAccessibleHyperlink, 0x01c20f2b, 0x3dd2, 0x400f, 0x94,0x9f, 0xad,0x00,0xbd,0xab,0x1d,0x41);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("01c20f2b-3dd2-400f-949f-ad00bdab1d41")
IAccessibleHyperlink : public IAccessibleAction
{
    virtual HRESULT STDMETHODCALLTYPE get_anchor(
        LONG index,
        VARIANT *anchor) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_anchorTarget(
        LONG index,
        VARIANT *anchorTarget) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_startIndex(
        LONG *index) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_endIndex(
        LONG *index) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_valid(
        boolean *valid) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAccessibleHyperlink, 0x01c20f2b, 0x3dd2, 0x400f, 0x94,0x9f, 0xad,0x00,0xbd,0xab,0x1d,0x41)
#endif
#else
typedef struct IAccessibleHyperlinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessibleHyperlink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessibleHyperlink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessibleHyperlink *This);

    /*** IAccessibleAction methods ***/
    HRESULT (STDMETHODCALLTYPE *nActions)(
        IAccessibleHyperlink *This,
        LONG *nActions);

    HRESULT (STDMETHODCALLTYPE *doAction)(
        IAccessibleHyperlink *This,
        LONG actionIndex);

    HRESULT (STDMETHODCALLTYPE *get_description)(
        IAccessibleHyperlink *This,
        LONG actionIndex,
        BSTR *description);

    HRESULT (STDMETHODCALLTYPE *get_keyBinding)(
        IAccessibleHyperlink *This,
        LONG actionIndex,
        LONG nMaxBindings,
        BSTR **keyBindings,
        LONG *nBindings);

    HRESULT (STDMETHODCALLTYPE *get_name)(
        IAccessibleHyperlink *This,
        LONG actionIndex,
        BSTR *name);

    HRESULT (STDMETHODCALLTYPE *get_localizedName)(
        IAccessibleHyperlink *This,
        LONG actionIndex,
        BSTR *localizedName);

    /*** IAccessibleHyperlink methods ***/
    HRESULT (STDMETHODCALLTYPE *get_anchor)(
        IAccessibleHyperlink *This,
        LONG index,
        VARIANT *anchor);

    HRESULT (STDMETHODCALLTYPE *get_anchorTarget)(
        IAccessibleHyperlink *This,
        LONG index,
        VARIANT *anchorTarget);

    HRESULT (STDMETHODCALLTYPE *get_startIndex)(
        IAccessibleHyperlink *This,
        LONG *index);

    HRESULT (STDMETHODCALLTYPE *get_endIndex)(
        IAccessibleHyperlink *This,
        LONG *index);

    HRESULT (STDMETHODCALLTYPE *get_valid)(
        IAccessibleHyperlink *This,
        boolean *valid);

    END_INTERFACE
} IAccessibleHyperlinkVtbl;

interface IAccessibleHyperlink {
    CONST_VTBL IAccessibleHyperlinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAccessibleHyperlink_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAccessibleHyperlink_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAccessibleHyperlink_Release(This) (This)->lpVtbl->Release(This)
/*** IAccessibleAction methods ***/
#define IAccessibleHyperlink_nActions(This,nActions) (This)->lpVtbl->nActions(This,nActions)
#define IAccessibleHyperlink_doAction(This,actionIndex) (This)->lpVtbl->doAction(This,actionIndex)
#define IAccessibleHyperlink_get_description(This,actionIndex,description) (This)->lpVtbl->get_description(This,actionIndex,description)
#define IAccessibleHyperlink_get_keyBinding(This,actionIndex,nMaxBindings,keyBindings,nBindings) (This)->lpVtbl->get_keyBinding(This,actionIndex,nMaxBindings,keyBindings,nBindings)
#define IAccessibleHyperlink_get_name(This,actionIndex,name) (This)->lpVtbl->get_name(This,actionIndex,name)
#define IAccessibleHyperlink_get_localizedName(This,actionIndex,localizedName) (This)->lpVtbl->get_localizedName(This,actionIndex,localizedName)
/*** IAccessibleHyperlink methods ***/
#define IAccessibleHyperlink_get_anchor(This,index,anchor) (This)->lpVtbl->get_anchor(This,index,anchor)
#define IAccessibleHyperlink_get_anchorTarget(This,index,anchorTarget) (This)->lpVtbl->get_anchorTarget(This,index,anchorTarget)
#define IAccessibleHyperlink_get_startIndex(This,index) (This)->lpVtbl->get_startIndex(This,index)
#define IAccessibleHyperlink_get_endIndex(This,index) (This)->lpVtbl->get_endIndex(This,index)
#define IAccessibleHyperlink_get_valid(This,valid) (This)->lpVtbl->get_valid(This,valid)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAccessibleHyperlink_QueryInterface(IAccessibleHyperlink* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAccessibleHyperlink_AddRef(IAccessibleHyperlink* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAccessibleHyperlink_Release(IAccessibleHyperlink* This) {
    return This->lpVtbl->Release(This);
}
/*** IAccessibleAction methods ***/
static FORCEINLINE HRESULT IAccessibleHyperlink_nActions(IAccessibleHyperlink* This,LONG *nActions) {
    return This->lpVtbl->nActions(This,nActions);
}
static FORCEINLINE HRESULT IAccessibleHyperlink_doAction(IAccessibleHyperlink* This,LONG actionIndex) {
    return This->lpVtbl->doAction(This,actionIndex);
}
static FORCEINLINE HRESULT IAccessibleHyperlink_get_description(IAccessibleHyperlink* This,LONG actionIndex,BSTR *description) {
    return This->lpVtbl->get_description(This,actionIndex,description);
}
static FORCEINLINE HRESULT IAccessibleHyperlink_get_keyBinding(IAccessibleHyperlink* This,LONG actionIndex,LONG nMaxBindings,BSTR **keyBindings,LONG *nBindings) {
    return This->lpVtbl->get_keyBinding(This,actionIndex,nMaxBindings,keyBindings,nBindings);
}
static FORCEINLINE HRESULT IAccessibleHyperlink_get_name(IAccessibleHyperlink* This,LONG actionIndex,BSTR *name) {
    return This->lpVtbl->get_name(This,actionIndex,name);
}
static FORCEINLINE HRESULT IAccessibleHyperlink_get_localizedName(IAccessibleHyperlink* This,LONG actionIndex,BSTR *localizedName) {
    return This->lpVtbl->get_localizedName(This,actionIndex,localizedName);
}
/*** IAccessibleHyperlink methods ***/
static FORCEINLINE HRESULT IAccessibleHyperlink_get_anchor(IAccessibleHyperlink* This,LONG index,VARIANT *anchor) {
    return This->lpVtbl->get_anchor(This,index,anchor);
}
static FORCEINLINE HRESULT IAccessibleHyperlink_get_anchorTarget(IAccessibleHyperlink* This,LONG index,VARIANT *anchorTarget) {
    return This->lpVtbl->get_anchorTarget(This,index,anchorTarget);
}
static FORCEINLINE HRESULT IAccessibleHyperlink_get_startIndex(IAccessibleHyperlink* This,LONG *index) {
    return This->lpVtbl->get_startIndex(This,index);
}
static FORCEINLINE HRESULT IAccessibleHyperlink_get_endIndex(IAccessibleHyperlink* This,LONG *index) {
    return This->lpVtbl->get_endIndex(This,index);
}
static FORCEINLINE HRESULT IAccessibleHyperlink_get_valid(IAccessibleHyperlink* This,boolean *valid) {
    return This->lpVtbl->get_valid(This,valid);
}
#endif
#endif

#endif


#endif  /* __IAccessibleHyperlink_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __accessiblehyperlink_h__ */
