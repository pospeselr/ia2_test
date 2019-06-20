/*** Autogenerated by WIDL 3.20 from /home/pospeselr/Code/Tor/tor-browser/other-licenses/ia2/AccessibleHypertext2.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __accessiblehypertext2_h__
#define __accessiblehypertext2_h__

/* Forward declarations */

#ifndef __IAccessibleHypertext2_FWD_DEFINED__
#define __IAccessibleHypertext2_FWD_DEFINED__
typedef interface IAccessibleHypertext2 IAccessibleHypertext2;
#ifdef __cplusplus
interface IAccessibleHypertext2;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oaidl.h>
#include <oleacc.h>
#include <AccessibleHypertext.h>
#include <AccessibleHyperlink.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IAccessibleHypertext2 interface
 */
#ifndef __IAccessibleHypertext2_INTERFACE_DEFINED__
#define __IAccessibleHypertext2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAccessibleHypertext2, 0xcf64d89f, 0x8287, 0x4b44, 0x85,0x01, 0xa8,0x27,0x45,0x3a,0x60,0x77);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cf64d89f-8287-4b44-8501-a827453a6077")
IAccessibleHypertext2 : public IAccessibleHypertext
{
    virtual HRESULT STDMETHODCALLTYPE get_hyperlinks(
        IAccessibleHyperlink ***hyperlinks,
        LONG *nHyperlinks) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAccessibleHypertext2, 0xcf64d89f, 0x8287, 0x4b44, 0x85,0x01, 0xa8,0x27,0x45,0x3a,0x60,0x77)
#endif
#else
typedef struct IAccessibleHypertext2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessibleHypertext2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessibleHypertext2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessibleHypertext2 *This);

    /*** IAccessibleText methods ***/
    HRESULT (STDMETHODCALLTYPE *addSelection)(
        IAccessibleHypertext2 *This,
        LONG startOffset,
        LONG endOffset);

    HRESULT (STDMETHODCALLTYPE *get_attributes)(
        IAccessibleHypertext2 *This,
        LONG offset,
        LONG *startOffset,
        LONG *endOffset,
        BSTR *textAttributes);

    HRESULT (STDMETHODCALLTYPE *get_caretOffset)(
        IAccessibleHypertext2 *This,
        LONG *offset);

    HRESULT (STDMETHODCALLTYPE *get_characterExtents)(
        IAccessibleHypertext2 *This,
        LONG offset,
        enum IA2CoordinateType coordType,
        LONG *x,
        LONG *y,
        LONG *width,
        LONG *height);

    HRESULT (STDMETHODCALLTYPE *get_nSelections)(
        IAccessibleHypertext2 *This,
        LONG *nSelections);

    HRESULT (STDMETHODCALLTYPE *get_offsetAtPoint)(
        IAccessibleHypertext2 *This,
        LONG x,
        LONG y,
        enum IA2CoordinateType coordType,
        LONG *offset);

    HRESULT (STDMETHODCALLTYPE *get_selection)(
        IAccessibleHypertext2 *This,
        LONG selectionIndex,
        LONG *startOffset,
        LONG *endOffset);

    HRESULT (STDMETHODCALLTYPE *get_text)(
        IAccessibleHypertext2 *This,
        LONG startOffset,
        LONG endOffset,
        BSTR *text);

    HRESULT (STDMETHODCALLTYPE *get_textBeforeOffset)(
        IAccessibleHypertext2 *This,
        LONG offset,
        enum IA2TextBoundaryType boundaryType,
        LONG *startOffset,
        LONG *endOffset,
        BSTR *text);

    HRESULT (STDMETHODCALLTYPE *get_textAfterOffset)(
        IAccessibleHypertext2 *This,
        LONG offset,
        enum IA2TextBoundaryType boundaryType,
        LONG *startOffset,
        LONG *endOffset,
        BSTR *text);

    HRESULT (STDMETHODCALLTYPE *get_textAtOffset)(
        IAccessibleHypertext2 *This,
        LONG offset,
        enum IA2TextBoundaryType boundaryType,
        LONG *startOffset,
        LONG *endOffset,
        BSTR *text);

    HRESULT (STDMETHODCALLTYPE *removeSelection)(
        IAccessibleHypertext2 *This,
        LONG selectionIndex);

    HRESULT (STDMETHODCALLTYPE *setCaretOffset)(
        IAccessibleHypertext2 *This,
        LONG offset);

    HRESULT (STDMETHODCALLTYPE *setSelection)(
        IAccessibleHypertext2 *This,
        LONG selectionIndex,
        LONG startOffset,
        LONG endOffset);

    HRESULT (STDMETHODCALLTYPE *get_nCharacters)(
        IAccessibleHypertext2 *This,
        LONG *nCharacters);

    HRESULT (STDMETHODCALLTYPE *scrollSubstringTo)(
        IAccessibleHypertext2 *This,
        LONG startIndex,
        LONG endIndex,
        enum IA2ScrollType scrollType);

    HRESULT (STDMETHODCALLTYPE *scrollSubstringToPoint)(
        IAccessibleHypertext2 *This,
        LONG startIndex,
        LONG endIndex,
        enum IA2CoordinateType coordinateType,
        LONG x,
        LONG y);

    HRESULT (STDMETHODCALLTYPE *get_newText)(
        IAccessibleHypertext2 *This,
        IA2TextSegment *newText);

    HRESULT (STDMETHODCALLTYPE *get_oldText)(
        IAccessibleHypertext2 *This,
        IA2TextSegment *oldText);

    /*** IAccessibleHypertext methods ***/
    HRESULT (STDMETHODCALLTYPE *get_nHyperlinks)(
        IAccessibleHypertext2 *This,
        LONG *hyperlinkCount);

    HRESULT (STDMETHODCALLTYPE *get_hyperlink)(
        IAccessibleHypertext2 *This,
        LONG index,
        IAccessibleHyperlink **hyperlink);

    HRESULT (STDMETHODCALLTYPE *get_hyperlinkIndex)(
        IAccessibleHypertext2 *This,
        LONG charIndex,
        LONG *hyperlinkIndex);

    /*** IAccessibleHypertext2 methods ***/
    HRESULT (STDMETHODCALLTYPE *get_hyperlinks)(
        IAccessibleHypertext2 *This,
        IAccessibleHyperlink ***hyperlinks,
        LONG *nHyperlinks);

    END_INTERFACE
} IAccessibleHypertext2Vtbl;

interface IAccessibleHypertext2 {
    CONST_VTBL IAccessibleHypertext2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAccessibleHypertext2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAccessibleHypertext2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAccessibleHypertext2_Release(This) (This)->lpVtbl->Release(This)
/*** IAccessibleText methods ***/
#define IAccessibleHypertext2_addSelection(This,startOffset,endOffset) (This)->lpVtbl->addSelection(This,startOffset,endOffset)
#define IAccessibleHypertext2_get_attributes(This,offset,startOffset,endOffset,textAttributes) (This)->lpVtbl->get_attributes(This,offset,startOffset,endOffset,textAttributes)
#define IAccessibleHypertext2_get_caretOffset(This,offset) (This)->lpVtbl->get_caretOffset(This,offset)
#define IAccessibleHypertext2_get_characterExtents(This,offset,coordType,x,y,width,height) (This)->lpVtbl->get_characterExtents(This,offset,coordType,x,y,width,height)
#define IAccessibleHypertext2_get_nSelections(This,nSelections) (This)->lpVtbl->get_nSelections(This,nSelections)
#define IAccessibleHypertext2_get_offsetAtPoint(This,x,y,coordType,offset) (This)->lpVtbl->get_offsetAtPoint(This,x,y,coordType,offset)
#define IAccessibleHypertext2_get_selection(This,selectionIndex,startOffset,endOffset) (This)->lpVtbl->get_selection(This,selectionIndex,startOffset,endOffset)
#define IAccessibleHypertext2_get_text(This,startOffset,endOffset,text) (This)->lpVtbl->get_text(This,startOffset,endOffset,text)
#define IAccessibleHypertext2_get_textBeforeOffset(This,offset,boundaryType,startOffset,endOffset,text) (This)->lpVtbl->get_textBeforeOffset(This,offset,boundaryType,startOffset,endOffset,text)
#define IAccessibleHypertext2_get_textAfterOffset(This,offset,boundaryType,startOffset,endOffset,text) (This)->lpVtbl->get_textAfterOffset(This,offset,boundaryType,startOffset,endOffset,text)
#define IAccessibleHypertext2_get_textAtOffset(This,offset,boundaryType,startOffset,endOffset,text) (This)->lpVtbl->get_textAtOffset(This,offset,boundaryType,startOffset,endOffset,text)
#define IAccessibleHypertext2_removeSelection(This,selectionIndex) (This)->lpVtbl->removeSelection(This,selectionIndex)
#define IAccessibleHypertext2_setCaretOffset(This,offset) (This)->lpVtbl->setCaretOffset(This,offset)
#define IAccessibleHypertext2_setSelection(This,selectionIndex,startOffset,endOffset) (This)->lpVtbl->setSelection(This,selectionIndex,startOffset,endOffset)
#define IAccessibleHypertext2_get_nCharacters(This,nCharacters) (This)->lpVtbl->get_nCharacters(This,nCharacters)
#define IAccessibleHypertext2_scrollSubstringTo(This,startIndex,endIndex,scrollType) (This)->lpVtbl->scrollSubstringTo(This,startIndex,endIndex,scrollType)
#define IAccessibleHypertext2_scrollSubstringToPoint(This,startIndex,endIndex,coordinateType,x,y) (This)->lpVtbl->scrollSubstringToPoint(This,startIndex,endIndex,coordinateType,x,y)
#define IAccessibleHypertext2_get_newText(This,newText) (This)->lpVtbl->get_newText(This,newText)
#define IAccessibleHypertext2_get_oldText(This,oldText) (This)->lpVtbl->get_oldText(This,oldText)
/*** IAccessibleHypertext methods ***/
#define IAccessibleHypertext2_get_nHyperlinks(This,hyperlinkCount) (This)->lpVtbl->get_nHyperlinks(This,hyperlinkCount)
#define IAccessibleHypertext2_get_hyperlink(This,index,hyperlink) (This)->lpVtbl->get_hyperlink(This,index,hyperlink)
#define IAccessibleHypertext2_get_hyperlinkIndex(This,charIndex,hyperlinkIndex) (This)->lpVtbl->get_hyperlinkIndex(This,charIndex,hyperlinkIndex)
/*** IAccessibleHypertext2 methods ***/
#define IAccessibleHypertext2_get_hyperlinks(This,hyperlinks,nHyperlinks) (This)->lpVtbl->get_hyperlinks(This,hyperlinks,nHyperlinks)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAccessibleHypertext2_QueryInterface(IAccessibleHypertext2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAccessibleHypertext2_AddRef(IAccessibleHypertext2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAccessibleHypertext2_Release(IAccessibleHypertext2* This) {
    return This->lpVtbl->Release(This);
}
/*** IAccessibleText methods ***/
static FORCEINLINE HRESULT IAccessibleHypertext2_addSelection(IAccessibleHypertext2* This,LONG startOffset,LONG endOffset) {
    return This->lpVtbl->addSelection(This,startOffset,endOffset);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_attributes(IAccessibleHypertext2* This,LONG offset,LONG *startOffset,LONG *endOffset,BSTR *textAttributes) {
    return This->lpVtbl->get_attributes(This,offset,startOffset,endOffset,textAttributes);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_caretOffset(IAccessibleHypertext2* This,LONG *offset) {
    return This->lpVtbl->get_caretOffset(This,offset);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_characterExtents(IAccessibleHypertext2* This,LONG offset,enum IA2CoordinateType coordType,LONG *x,LONG *y,LONG *width,LONG *height) {
    return This->lpVtbl->get_characterExtents(This,offset,coordType,x,y,width,height);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_nSelections(IAccessibleHypertext2* This,LONG *nSelections) {
    return This->lpVtbl->get_nSelections(This,nSelections);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_offsetAtPoint(IAccessibleHypertext2* This,LONG x,LONG y,enum IA2CoordinateType coordType,LONG *offset) {
    return This->lpVtbl->get_offsetAtPoint(This,x,y,coordType,offset);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_selection(IAccessibleHypertext2* This,LONG selectionIndex,LONG *startOffset,LONG *endOffset) {
    return This->lpVtbl->get_selection(This,selectionIndex,startOffset,endOffset);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_text(IAccessibleHypertext2* This,LONG startOffset,LONG endOffset,BSTR *text) {
    return This->lpVtbl->get_text(This,startOffset,endOffset,text);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_textBeforeOffset(IAccessibleHypertext2* This,LONG offset,enum IA2TextBoundaryType boundaryType,LONG *startOffset,LONG *endOffset,BSTR *text) {
    return This->lpVtbl->get_textBeforeOffset(This,offset,boundaryType,startOffset,endOffset,text);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_textAfterOffset(IAccessibleHypertext2* This,LONG offset,enum IA2TextBoundaryType boundaryType,LONG *startOffset,LONG *endOffset,BSTR *text) {
    return This->lpVtbl->get_textAfterOffset(This,offset,boundaryType,startOffset,endOffset,text);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_textAtOffset(IAccessibleHypertext2* This,LONG offset,enum IA2TextBoundaryType boundaryType,LONG *startOffset,LONG *endOffset,BSTR *text) {
    return This->lpVtbl->get_textAtOffset(This,offset,boundaryType,startOffset,endOffset,text);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_removeSelection(IAccessibleHypertext2* This,LONG selectionIndex) {
    return This->lpVtbl->removeSelection(This,selectionIndex);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_setCaretOffset(IAccessibleHypertext2* This,LONG offset) {
    return This->lpVtbl->setCaretOffset(This,offset);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_setSelection(IAccessibleHypertext2* This,LONG selectionIndex,LONG startOffset,LONG endOffset) {
    return This->lpVtbl->setSelection(This,selectionIndex,startOffset,endOffset);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_nCharacters(IAccessibleHypertext2* This,LONG *nCharacters) {
    return This->lpVtbl->get_nCharacters(This,nCharacters);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_scrollSubstringTo(IAccessibleHypertext2* This,LONG startIndex,LONG endIndex,enum IA2ScrollType scrollType) {
    return This->lpVtbl->scrollSubstringTo(This,startIndex,endIndex,scrollType);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_scrollSubstringToPoint(IAccessibleHypertext2* This,LONG startIndex,LONG endIndex,enum IA2CoordinateType coordinateType,LONG x,LONG y) {
    return This->lpVtbl->scrollSubstringToPoint(This,startIndex,endIndex,coordinateType,x,y);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_newText(IAccessibleHypertext2* This,IA2TextSegment *newText) {
    return This->lpVtbl->get_newText(This,newText);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_oldText(IAccessibleHypertext2* This,IA2TextSegment *oldText) {
    return This->lpVtbl->get_oldText(This,oldText);
}
/*** IAccessibleHypertext methods ***/
static FORCEINLINE HRESULT IAccessibleHypertext2_get_nHyperlinks(IAccessibleHypertext2* This,LONG *hyperlinkCount) {
    return This->lpVtbl->get_nHyperlinks(This,hyperlinkCount);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_hyperlink(IAccessibleHypertext2* This,LONG index,IAccessibleHyperlink **hyperlink) {
    return This->lpVtbl->get_hyperlink(This,index,hyperlink);
}
static FORCEINLINE HRESULT IAccessibleHypertext2_get_hyperlinkIndex(IAccessibleHypertext2* This,LONG charIndex,LONG *hyperlinkIndex) {
    return This->lpVtbl->get_hyperlinkIndex(This,charIndex,hyperlinkIndex);
}
/*** IAccessibleHypertext2 methods ***/
static FORCEINLINE HRESULT IAccessibleHypertext2_get_hyperlinks(IAccessibleHypertext2* This,IAccessibleHyperlink ***hyperlinks,LONG *nHyperlinks) {
    return This->lpVtbl->get_hyperlinks(This,hyperlinks,nHyperlinks);
}
#endif
#endif

#endif


#endif  /* __IAccessibleHypertext2_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __accessiblehypertext2_h__ */
