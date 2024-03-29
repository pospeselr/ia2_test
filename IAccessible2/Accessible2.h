/*** Autogenerated by WIDL 3.20 from /home/pospeselr/Code/Tor/tor-browser/other-licenses/ia2/Accessible2.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __accessible2_h__
#define __accessible2_h__

/* Forward declarations */

#ifndef __IAccessible2_FWD_DEFINED__
#define __IAccessible2_FWD_DEFINED__
typedef interface IAccessible2 IAccessible2;
#ifdef __cplusplus
interface IAccessible2;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oaidl.h>
#include <oleacc.h>
#include <AccessibleRelation.h>
#include <AccessibleStates.h>
#include <IA2CommonTypes.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IA2Locale {
    BSTR language;
    BSTR country;
    BSTR variant;
} IA2Locale;
/*****************************************************************************
 * IAccessible2 interface
 */
#ifndef __IAccessible2_INTERFACE_DEFINED__
#define __IAccessible2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAccessible2, 0xe89f726e, 0xc4f4, 0x4c19, 0xbb,0x19, 0xb6,0x47,0xd7,0xfa,0x84,0x78);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e89f726e-c4f4-4c19-bb19-b647d7fa8478")
IAccessible2 : public IAccessible
{
    virtual HRESULT STDMETHODCALLTYPE get_nRelations(
        LONG *nRelations) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_relation(
        LONG relationIndex,
        IAccessibleRelation **relation) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_relations(
        LONG maxRelations,
        IAccessibleRelation **relations,
        LONG *nRelations) = 0;

    virtual HRESULT STDMETHODCALLTYPE role(
        LONG *role) = 0;

    virtual HRESULT STDMETHODCALLTYPE scrollTo(
        enum IA2ScrollType scrollType) = 0;

    virtual HRESULT STDMETHODCALLTYPE scrollToPoint(
        enum IA2CoordinateType coordinateType,
        LONG x,
        LONG y) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_groupPosition(
        LONG *groupLevel,
        LONG *similarItemsInGroup,
        LONG *positionInGroup) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_states(
        AccessibleStates *states) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_extendedRole(
        BSTR *extendedRole) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_localizedExtendedRole(
        BSTR *localizedExtendedRole) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_nExtendedStates(
        LONG *nExtendedStates) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_extendedStates(
        LONG maxExtendedStates,
        BSTR **extendedStates,
        LONG *nExtendedStates) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_localizedExtendedStates(
        LONG maxLocalizedExtendedStates,
        BSTR **localizedExtendedStates,
        LONG *nLocalizedExtendedStates) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_uniqueID(
        LONG *uniqueID) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_windowHandle(
        HWND *windowHandle) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_indexInParent(
        LONG *indexInParent) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_locale(
        IA2Locale *locale) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_attributes(
        BSTR *attributes) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAccessible2, 0xe89f726e, 0xc4f4, 0x4c19, 0xbb,0x19, 0xb6,0x47,0xd7,0xfa,0x84,0x78)
#endif
#else
typedef struct IAccessible2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessible2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessible2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessible2 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IAccessible2 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IAccessible2 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IAccessible2 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IAccessible2 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IAccessible methods ***/
    HRESULT (STDMETHODCALLTYPE *get_accParent)(
        IAccessible2 *This,
        IDispatch **ppdispParent);

    HRESULT (STDMETHODCALLTYPE *get_accChildCount)(
        IAccessible2 *This,
        LONG *pcountChildren);

    HRESULT (STDMETHODCALLTYPE *get_accChild)(
        IAccessible2 *This,
        VARIANT varChildID,
        IDispatch **ppdispChild);

    HRESULT (STDMETHODCALLTYPE *get_accName)(
        IAccessible2 *This,
        VARIANT varID,
        BSTR *pszName);

    HRESULT (STDMETHODCALLTYPE *get_accValue)(
        IAccessible2 *This,
        VARIANT varID,
        BSTR *pszValue);

    HRESULT (STDMETHODCALLTYPE *get_accDescription)(
        IAccessible2 *This,
        VARIANT varID,
        BSTR *pszDescription);

    HRESULT (STDMETHODCALLTYPE *get_accRole)(
        IAccessible2 *This,
        VARIANT varID,
        VARIANT *pvarRole);

    HRESULT (STDMETHODCALLTYPE *get_accState)(
        IAccessible2 *This,
        VARIANT varID,
        VARIANT *pvarState);

    HRESULT (STDMETHODCALLTYPE *get_accHelp)(
        IAccessible2 *This,
        VARIANT varID,
        BSTR *pszHelp);

    HRESULT (STDMETHODCALLTYPE *get_accHelpTopic)(
        IAccessible2 *This,
        BSTR *pszHelpFile,
        VARIANT varID,
        LONG *pidTopic);

    HRESULT (STDMETHODCALLTYPE *get_accKeyboardShortcut)(
        IAccessible2 *This,
        VARIANT varID,
        BSTR *pszKeyboardShortcut);

    HRESULT (STDMETHODCALLTYPE *get_accFocus)(
        IAccessible2 *This,
        VARIANT *pvarID);

    HRESULT (STDMETHODCALLTYPE *get_accSelection)(
        IAccessible2 *This,
        VARIANT *pvarID);

    HRESULT (STDMETHODCALLTYPE *get_accDefaultAction)(
        IAccessible2 *This,
        VARIANT varID,
        BSTR *pszDefaultAction);

    HRESULT (STDMETHODCALLTYPE *accSelect)(
        IAccessible2 *This,
        LONG flagsSelect,
        VARIANT varID);

    HRESULT (STDMETHODCALLTYPE *accLocation)(
        IAccessible2 *This,
        LONG *pxLeft,
        LONG *pyTop,
        LONG *pcxWidth,
        LONG *pcyHeight,
        VARIANT varID);

    HRESULT (STDMETHODCALLTYPE *accNavigate)(
        IAccessible2 *This,
        LONG navDir,
        VARIANT varStart,
        VARIANT *pvarEnd);

    HRESULT (STDMETHODCALLTYPE *accHitTest)(
        IAccessible2 *This,
        LONG xLeft,
        LONG yTop,
        VARIANT *pvarID);

    HRESULT (STDMETHODCALLTYPE *accDoDefaultAction)(
        IAccessible2 *This,
        VARIANT varID);

    HRESULT (STDMETHODCALLTYPE *put_accName)(
        IAccessible2 *This,
        VARIANT varID,
        BSTR pszName);

    HRESULT (STDMETHODCALLTYPE *put_accValue)(
        IAccessible2 *This,
        VARIANT varID,
        BSTR pszValue);

    /*** IAccessible2 methods ***/
    HRESULT (STDMETHODCALLTYPE *get_nRelations)(
        IAccessible2 *This,
        LONG *nRelations);

    HRESULT (STDMETHODCALLTYPE *get_relation)(
        IAccessible2 *This,
        LONG relationIndex,
        IAccessibleRelation **relation);

    HRESULT (STDMETHODCALLTYPE *get_relations)(
        IAccessible2 *This,
        LONG maxRelations,
        IAccessibleRelation **relations,
        LONG *nRelations);

    HRESULT (STDMETHODCALLTYPE *role)(
        IAccessible2 *This,
        LONG *role);

    HRESULT (STDMETHODCALLTYPE *scrollTo)(
        IAccessible2 *This,
        enum IA2ScrollType scrollType);

    HRESULT (STDMETHODCALLTYPE *scrollToPoint)(
        IAccessible2 *This,
        enum IA2CoordinateType coordinateType,
        LONG x,
        LONG y);

    HRESULT (STDMETHODCALLTYPE *get_groupPosition)(
        IAccessible2 *This,
        LONG *groupLevel,
        LONG *similarItemsInGroup,
        LONG *positionInGroup);

    HRESULT (STDMETHODCALLTYPE *get_states)(
        IAccessible2 *This,
        AccessibleStates *states);

    HRESULT (STDMETHODCALLTYPE *get_extendedRole)(
        IAccessible2 *This,
        BSTR *extendedRole);

    HRESULT (STDMETHODCALLTYPE *get_localizedExtendedRole)(
        IAccessible2 *This,
        BSTR *localizedExtendedRole);

    HRESULT (STDMETHODCALLTYPE *get_nExtendedStates)(
        IAccessible2 *This,
        LONG *nExtendedStates);

    HRESULT (STDMETHODCALLTYPE *get_extendedStates)(
        IAccessible2 *This,
        LONG maxExtendedStates,
        BSTR **extendedStates,
        LONG *nExtendedStates);

    HRESULT (STDMETHODCALLTYPE *get_localizedExtendedStates)(
        IAccessible2 *This,
        LONG maxLocalizedExtendedStates,
        BSTR **localizedExtendedStates,
        LONG *nLocalizedExtendedStates);

    HRESULT (STDMETHODCALLTYPE *get_uniqueID)(
        IAccessible2 *This,
        LONG *uniqueID);

    HRESULT (STDMETHODCALLTYPE *get_windowHandle)(
        IAccessible2 *This,
        HWND *windowHandle);

    HRESULT (STDMETHODCALLTYPE *get_indexInParent)(
        IAccessible2 *This,
        LONG *indexInParent);

    HRESULT (STDMETHODCALLTYPE *get_locale)(
        IAccessible2 *This,
        IA2Locale *locale);

    HRESULT (STDMETHODCALLTYPE *get_attributes)(
        IAccessible2 *This,
        BSTR *attributes);

    END_INTERFACE
} IAccessible2Vtbl;

interface IAccessible2 {
    CONST_VTBL IAccessible2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAccessible2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAccessible2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAccessible2_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define IAccessible2_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IAccessible2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IAccessible2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IAccessible2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** IAccessible methods ***/
#define IAccessible2_get_accParent(This,ppdispParent) (This)->lpVtbl->get_accParent(This,ppdispParent)
#define IAccessible2_get_accChildCount(This,pcountChildren) (This)->lpVtbl->get_accChildCount(This,pcountChildren)
#define IAccessible2_get_accChild(This,varChildID,ppdispChild) (This)->lpVtbl->get_accChild(This,varChildID,ppdispChild)
#define IAccessible2_get_accName(This,varID,pszName) (This)->lpVtbl->get_accName(This,varID,pszName)
#define IAccessible2_get_accValue(This,varID,pszValue) (This)->lpVtbl->get_accValue(This,varID,pszValue)
#define IAccessible2_get_accDescription(This,varID,pszDescription) (This)->lpVtbl->get_accDescription(This,varID,pszDescription)
#define IAccessible2_get_accRole(This,varID,pvarRole) (This)->lpVtbl->get_accRole(This,varID,pvarRole)
#define IAccessible2_get_accState(This,varID,pvarState) (This)->lpVtbl->get_accState(This,varID,pvarState)
#define IAccessible2_get_accHelp(This,varID,pszHelp) (This)->lpVtbl->get_accHelp(This,varID,pszHelp)
#define IAccessible2_get_accHelpTopic(This,pszHelpFile,varID,pidTopic) (This)->lpVtbl->get_accHelpTopic(This,pszHelpFile,varID,pidTopic)
#define IAccessible2_get_accKeyboardShortcut(This,varID,pszKeyboardShortcut) (This)->lpVtbl->get_accKeyboardShortcut(This,varID,pszKeyboardShortcut)
#define IAccessible2_get_accFocus(This,pvarID) (This)->lpVtbl->get_accFocus(This,pvarID)
#define IAccessible2_get_accSelection(This,pvarID) (This)->lpVtbl->get_accSelection(This,pvarID)
#define IAccessible2_get_accDefaultAction(This,varID,pszDefaultAction) (This)->lpVtbl->get_accDefaultAction(This,varID,pszDefaultAction)
#define IAccessible2_accSelect(This,flagsSelect,varID) (This)->lpVtbl->accSelect(This,flagsSelect,varID)
#define IAccessible2_accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varID) (This)->lpVtbl->accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varID)
#define IAccessible2_accNavigate(This,navDir,varStart,pvarEnd) (This)->lpVtbl->accNavigate(This,navDir,varStart,pvarEnd)
#define IAccessible2_accHitTest(This,xLeft,yTop,pvarID) (This)->lpVtbl->accHitTest(This,xLeft,yTop,pvarID)
#define IAccessible2_accDoDefaultAction(This,varID) (This)->lpVtbl->accDoDefaultAction(This,varID)
#define IAccessible2_put_accName(This,varID,pszName) (This)->lpVtbl->put_accName(This,varID,pszName)
#define IAccessible2_put_accValue(This,varID,pszValue) (This)->lpVtbl->put_accValue(This,varID,pszValue)
/*** IAccessible2 methods ***/
#define IAccessible2_get_nRelations(This,nRelations) (This)->lpVtbl->get_nRelations(This,nRelations)
#define IAccessible2_get_relation(This,relationIndex,relation) (This)->lpVtbl->get_relation(This,relationIndex,relation)
#define IAccessible2_get_relations(This,maxRelations,relations,nRelations) (This)->lpVtbl->get_relations(This,maxRelations,relations,nRelations)
#define IAccessible2_role(This,role) (This)->lpVtbl->role(This,role)
#define IAccessible2_scrollTo(This,scrollType) (This)->lpVtbl->scrollTo(This,scrollType)
#define IAccessible2_scrollToPoint(This,coordinateType,x,y) (This)->lpVtbl->scrollToPoint(This,coordinateType,x,y)
#define IAccessible2_get_groupPosition(This,groupLevel,similarItemsInGroup,positionInGroup) (This)->lpVtbl->get_groupPosition(This,groupLevel,similarItemsInGroup,positionInGroup)
#define IAccessible2_get_states(This,states) (This)->lpVtbl->get_states(This,states)
#define IAccessible2_get_extendedRole(This,extendedRole) (This)->lpVtbl->get_extendedRole(This,extendedRole)
#define IAccessible2_get_localizedExtendedRole(This,localizedExtendedRole) (This)->lpVtbl->get_localizedExtendedRole(This,localizedExtendedRole)
#define IAccessible2_get_nExtendedStates(This,nExtendedStates) (This)->lpVtbl->get_nExtendedStates(This,nExtendedStates)
#define IAccessible2_get_extendedStates(This,maxExtendedStates,extendedStates,nExtendedStates) (This)->lpVtbl->get_extendedStates(This,maxExtendedStates,extendedStates,nExtendedStates)
#define IAccessible2_get_localizedExtendedStates(This,maxLocalizedExtendedStates,localizedExtendedStates,nLocalizedExtendedStates) (This)->lpVtbl->get_localizedExtendedStates(This,maxLocalizedExtendedStates,localizedExtendedStates,nLocalizedExtendedStates)
#define IAccessible2_get_uniqueID(This,uniqueID) (This)->lpVtbl->get_uniqueID(This,uniqueID)
#define IAccessible2_get_windowHandle(This,windowHandle) (This)->lpVtbl->get_windowHandle(This,windowHandle)
#define IAccessible2_get_indexInParent(This,indexInParent) (This)->lpVtbl->get_indexInParent(This,indexInParent)
#define IAccessible2_get_locale(This,locale) (This)->lpVtbl->get_locale(This,locale)
#define IAccessible2_get_attributes(This,attributes) (This)->lpVtbl->get_attributes(This,attributes)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAccessible2_QueryInterface(IAccessible2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAccessible2_AddRef(IAccessible2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAccessible2_Release(IAccessible2* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispatch methods ***/
static FORCEINLINE HRESULT IAccessible2_GetTypeInfoCount(IAccessible2* This,UINT *pctinfo) {
    return This->lpVtbl->GetTypeInfoCount(This,pctinfo);
}
static FORCEINLINE HRESULT IAccessible2_GetTypeInfo(IAccessible2* This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo) {
    return This->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo);
}
static FORCEINLINE HRESULT IAccessible2_GetIDsOfNames(IAccessible2* This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId) {
    return This->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId);
}
static FORCEINLINE HRESULT IAccessible2_Invoke(IAccessible2* This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr) {
    return This->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr);
}
/*** IAccessible methods ***/
static FORCEINLINE HRESULT IAccessible2_get_accParent(IAccessible2* This,IDispatch **ppdispParent) {
    return This->lpVtbl->get_accParent(This,ppdispParent);
}
static FORCEINLINE HRESULT IAccessible2_get_accChildCount(IAccessible2* This,LONG *pcountChildren) {
    return This->lpVtbl->get_accChildCount(This,pcountChildren);
}
static FORCEINLINE HRESULT IAccessible2_get_accChild(IAccessible2* This,VARIANT varChildID,IDispatch **ppdispChild) {
    return This->lpVtbl->get_accChild(This,varChildID,ppdispChild);
}
static FORCEINLINE HRESULT IAccessible2_get_accName(IAccessible2* This,VARIANT varID,BSTR *pszName) {
    return This->lpVtbl->get_accName(This,varID,pszName);
}
static FORCEINLINE HRESULT IAccessible2_get_accValue(IAccessible2* This,VARIANT varID,BSTR *pszValue) {
    return This->lpVtbl->get_accValue(This,varID,pszValue);
}
static FORCEINLINE HRESULT IAccessible2_get_accDescription(IAccessible2* This,VARIANT varID,BSTR *pszDescription) {
    return This->lpVtbl->get_accDescription(This,varID,pszDescription);
}
static FORCEINLINE HRESULT IAccessible2_get_accRole(IAccessible2* This,VARIANT varID,VARIANT *pvarRole) {
    return This->lpVtbl->get_accRole(This,varID,pvarRole);
}
static FORCEINLINE HRESULT IAccessible2_get_accState(IAccessible2* This,VARIANT varID,VARIANT *pvarState) {
    return This->lpVtbl->get_accState(This,varID,pvarState);
}
static FORCEINLINE HRESULT IAccessible2_get_accHelp(IAccessible2* This,VARIANT varID,BSTR *pszHelp) {
    return This->lpVtbl->get_accHelp(This,varID,pszHelp);
}
static FORCEINLINE HRESULT IAccessible2_get_accHelpTopic(IAccessible2* This,BSTR *pszHelpFile,VARIANT varID,LONG *pidTopic) {
    return This->lpVtbl->get_accHelpTopic(This,pszHelpFile,varID,pidTopic);
}
static FORCEINLINE HRESULT IAccessible2_get_accKeyboardShortcut(IAccessible2* This,VARIANT varID,BSTR *pszKeyboardShortcut) {
    return This->lpVtbl->get_accKeyboardShortcut(This,varID,pszKeyboardShortcut);
}
static FORCEINLINE HRESULT IAccessible2_get_accFocus(IAccessible2* This,VARIANT *pvarID) {
    return This->lpVtbl->get_accFocus(This,pvarID);
}
static FORCEINLINE HRESULT IAccessible2_get_accSelection(IAccessible2* This,VARIANT *pvarID) {
    return This->lpVtbl->get_accSelection(This,pvarID);
}
static FORCEINLINE HRESULT IAccessible2_get_accDefaultAction(IAccessible2* This,VARIANT varID,BSTR *pszDefaultAction) {
    return This->lpVtbl->get_accDefaultAction(This,varID,pszDefaultAction);
}
static FORCEINLINE HRESULT IAccessible2_accSelect(IAccessible2* This,LONG flagsSelect,VARIANT varID) {
    return This->lpVtbl->accSelect(This,flagsSelect,varID);
}
static FORCEINLINE HRESULT IAccessible2_accLocation(IAccessible2* This,LONG *pxLeft,LONG *pyTop,LONG *pcxWidth,LONG *pcyHeight,VARIANT varID) {
    return This->lpVtbl->accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varID);
}
static FORCEINLINE HRESULT IAccessible2_accNavigate(IAccessible2* This,LONG navDir,VARIANT varStart,VARIANT *pvarEnd) {
    return This->lpVtbl->accNavigate(This,navDir,varStart,pvarEnd);
}
static FORCEINLINE HRESULT IAccessible2_accHitTest(IAccessible2* This,LONG xLeft,LONG yTop,VARIANT *pvarID) {
    return This->lpVtbl->accHitTest(This,xLeft,yTop,pvarID);
}
static FORCEINLINE HRESULT IAccessible2_accDoDefaultAction(IAccessible2* This,VARIANT varID) {
    return This->lpVtbl->accDoDefaultAction(This,varID);
}
static FORCEINLINE HRESULT IAccessible2_put_accName(IAccessible2* This,VARIANT varID,BSTR pszName) {
    return This->lpVtbl->put_accName(This,varID,pszName);
}
static FORCEINLINE HRESULT IAccessible2_put_accValue(IAccessible2* This,VARIANT varID,BSTR pszValue) {
    return This->lpVtbl->put_accValue(This,varID,pszValue);
}
/*** IAccessible2 methods ***/
static FORCEINLINE HRESULT IAccessible2_get_nRelations(IAccessible2* This,LONG *nRelations) {
    return This->lpVtbl->get_nRelations(This,nRelations);
}
static FORCEINLINE HRESULT IAccessible2_get_relation(IAccessible2* This,LONG relationIndex,IAccessibleRelation **relation) {
    return This->lpVtbl->get_relation(This,relationIndex,relation);
}
static FORCEINLINE HRESULT IAccessible2_get_relations(IAccessible2* This,LONG maxRelations,IAccessibleRelation **relations,LONG *nRelations) {
    return This->lpVtbl->get_relations(This,maxRelations,relations,nRelations);
}
static FORCEINLINE HRESULT IAccessible2_role(IAccessible2* This,LONG *role) {
    return This->lpVtbl->role(This,role);
}
static FORCEINLINE HRESULT IAccessible2_scrollTo(IAccessible2* This,enum IA2ScrollType scrollType) {
    return This->lpVtbl->scrollTo(This,scrollType);
}
static FORCEINLINE HRESULT IAccessible2_scrollToPoint(IAccessible2* This,enum IA2CoordinateType coordinateType,LONG x,LONG y) {
    return This->lpVtbl->scrollToPoint(This,coordinateType,x,y);
}
static FORCEINLINE HRESULT IAccessible2_get_groupPosition(IAccessible2* This,LONG *groupLevel,LONG *similarItemsInGroup,LONG *positionInGroup) {
    return This->lpVtbl->get_groupPosition(This,groupLevel,similarItemsInGroup,positionInGroup);
}
static FORCEINLINE HRESULT IAccessible2_get_states(IAccessible2* This,AccessibleStates *states) {
    return This->lpVtbl->get_states(This,states);
}
static FORCEINLINE HRESULT IAccessible2_get_extendedRole(IAccessible2* This,BSTR *extendedRole) {
    return This->lpVtbl->get_extendedRole(This,extendedRole);
}
static FORCEINLINE HRESULT IAccessible2_get_localizedExtendedRole(IAccessible2* This,BSTR *localizedExtendedRole) {
    return This->lpVtbl->get_localizedExtendedRole(This,localizedExtendedRole);
}
static FORCEINLINE HRESULT IAccessible2_get_nExtendedStates(IAccessible2* This,LONG *nExtendedStates) {
    return This->lpVtbl->get_nExtendedStates(This,nExtendedStates);
}
static FORCEINLINE HRESULT IAccessible2_get_extendedStates(IAccessible2* This,LONG maxExtendedStates,BSTR **extendedStates,LONG *nExtendedStates) {
    return This->lpVtbl->get_extendedStates(This,maxExtendedStates,extendedStates,nExtendedStates);
}
static FORCEINLINE HRESULT IAccessible2_get_localizedExtendedStates(IAccessible2* This,LONG maxLocalizedExtendedStates,BSTR **localizedExtendedStates,LONG *nLocalizedExtendedStates) {
    return This->lpVtbl->get_localizedExtendedStates(This,maxLocalizedExtendedStates,localizedExtendedStates,nLocalizedExtendedStates);
}
static FORCEINLINE HRESULT IAccessible2_get_uniqueID(IAccessible2* This,LONG *uniqueID) {
    return This->lpVtbl->get_uniqueID(This,uniqueID);
}
static FORCEINLINE HRESULT IAccessible2_get_windowHandle(IAccessible2* This,HWND *windowHandle) {
    return This->lpVtbl->get_windowHandle(This,windowHandle);
}
static FORCEINLINE HRESULT IAccessible2_get_indexInParent(IAccessible2* This,LONG *indexInParent) {
    return This->lpVtbl->get_indexInParent(This,indexInParent);
}
static FORCEINLINE HRESULT IAccessible2_get_locale(IAccessible2* This,IA2Locale *locale) {
    return This->lpVtbl->get_locale(This,locale);
}
static FORCEINLINE HRESULT IAccessible2_get_attributes(IAccessible2* This,BSTR *attributes) {
    return This->lpVtbl->get_attributes(This,attributes);
}
#endif
#endif

#endif


#endif  /* __IAccessible2_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);
ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __accessible2_h__ */
