/*** Autogenerated by WIDL 3.20 from /home/pospeselr/Code/Tor/tor-browser/other-licenses/ia2/AccessibleDocument.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __accessibledocument_h__
#define __accessibledocument_h__

/* Forward declarations */

#ifndef __IAccessibleDocument_FWD_DEFINED__
#define __IAccessibleDocument_FWD_DEFINED__
typedef interface IAccessibleDocument IAccessibleDocument;
#ifdef __cplusplus
interface IAccessibleDocument;
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
 * IAccessibleDocument interface
 */
#ifndef __IAccessibleDocument_INTERFACE_DEFINED__
#define __IAccessibleDocument_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAccessibleDocument, 0xc48c7fcf, 0x4ab5, 0x4056, 0xaf,0xa6, 0x90,0x2d,0x6e,0x1d,0x11,0x49);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("c48c7fcf-4ab5-4056-afa6-902d6e1d1149")
IAccessibleDocument : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE get_anchorTarget(
        IUnknown **accessible) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAccessibleDocument, 0xc48c7fcf, 0x4ab5, 0x4056, 0xaf,0xa6, 0x90,0x2d,0x6e,0x1d,0x11,0x49)
#endif
#else
typedef struct IAccessibleDocumentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessibleDocument *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessibleDocument *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessibleDocument *This);

    /*** IAccessibleDocument methods ***/
    HRESULT (STDMETHODCALLTYPE *get_anchorTarget)(
        IAccessibleDocument *This,
        IUnknown **accessible);

    END_INTERFACE
} IAccessibleDocumentVtbl;

interface IAccessibleDocument {
    CONST_VTBL IAccessibleDocumentVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAccessibleDocument_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAccessibleDocument_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAccessibleDocument_Release(This) (This)->lpVtbl->Release(This)
/*** IAccessibleDocument methods ***/
#define IAccessibleDocument_get_anchorTarget(This,accessible) (This)->lpVtbl->get_anchorTarget(This,accessible)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAccessibleDocument_QueryInterface(IAccessibleDocument* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAccessibleDocument_AddRef(IAccessibleDocument* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAccessibleDocument_Release(IAccessibleDocument* This) {
    return This->lpVtbl->Release(This);
}
/*** IAccessibleDocument methods ***/
static FORCEINLINE HRESULT IAccessibleDocument_get_anchorTarget(IAccessibleDocument* This,IUnknown **accessible) {
    return This->lpVtbl->get_anchorTarget(This,accessible);
}
#endif
#endif

#endif


#endif  /* __IAccessibleDocument_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __accessibledocument_h__ */
