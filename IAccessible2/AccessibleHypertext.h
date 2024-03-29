/*** Autogenerated by WIDL 3.20 from /home/pospeselr/Code/Tor/tor-browser/other-licenses/ia2/AccessibleHypertext.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __accessiblehypertext_h__
#define __accessiblehypertext_h__

/* Forward declarations */

#ifndef __IAccessibleHypertext_FWD_DEFINED__
#define __IAccessibleHypertext_FWD_DEFINED__
typedef interface IAccessibleHypertext IAccessibleHypertext;
#ifdef __cplusplus
interface IAccessibleHypertext;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oaidl.h>
#include <oleacc.h>
#include <AccessibleText.h>
#include <AccessibleHyperlink.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IAccessibleHypertext interface
 */
#ifndef __IAccessibleHypertext_INTERFACE_DEFINED__
#define __IAccessibleHypertext_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAccessibleHypertext, 0x6b4f8bbf, 0xf1f2, 0x418a, 0xb3,0x5e, 0xa1,0x95,0xbc,0x41,0x03,0xb9);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("6b4f8bbf-f1f2-418a-b35e-a195bc4103b9")
IAccessibleHypertext : public IAccessibleText
{
    virtual HRESULT STDMETHODCALLTYPE get_nHyperlinks(
        LONG *hyperlinkCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_hyperlink(
        LONG index,
        IAccessibleHyperlink **hyperlink) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_hyperlinkIndex(
        LONG charIndex,
        LONG *hyperlinkIndex) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAccessibleHypertext, 0x6b4f8bbf, 0xf1f2, 0x418a, 0xb3,0x5e, 0xa1,0x95,0xbc,0x41,0x03,0xb9)
#endif
#else
typedef struct IAccessibleHypertextVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessibleHypertext *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessibleHypertext *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessibleHypertext *This);

    /*** IAccessibleText methods ***/
    HRESULT (STDMETHODCALLTYPE *addSelection)(
        IAccessibleHypertext *This,
        LONG startOffset,
        LONG endOffset);

    HRESULT (STDMETHODCALLTYPE *get_attributes)(
        IAccessibleHypertext *This,
        LONG offset,
        LONG *startOffset,
        LONG *endOffset,
        BSTR *textAttributes);

    HRESULT (STDMETHODCALLTYPE *get_caretOffset)(
        IAccessibleHypertext *This,
        LONG *offset);

    HRESULT (STDMETHODCALLTYPE *get_characterExtents)(
        IAccessibleHypertext *This,
        LONG offset,
        enum IA2CoordinateType coordType,
        LONG *x,
        LONG *y,
        LONG *width,
        LONG *height);

    HRESULT (STDMETHODCALLTYPE *get_nSelections)(
        IAccessibleHypertext *This,
        LONG *nSelections);

    HRESULT (STDMETHODCALLTYPE *get_offsetAtPoint)(
        IAccessibleHypertext *This,
        LONG x,
        LONG y,
        enum IA2CoordinateType coordType,
        LONG *offset);

    HRESULT (STDMETHODCALLTYPE *get_selection)(
        IAccessibleHypertext *This,
        LONG selectionIndex,
        LONG *startOffset,
        LONG *endOffset);

    HRESULT (STDMETHODCALLTYPE *get_text)(
        IAccessibleHypertext *This,
        LONG startOffset,
        LONG endOffset,
        BSTR *text);

    HRESULT (STDMETHODCALLTYPE *get_textBeforeOffset)(
        IAccessibleHypertext *This,
        LONG offset,
        enum IA2TextBoundaryType boundaryType,
        LONG *startOffset,
        LONG *endOffset,
        BSTR *text);

    HRESULT (STDMETHODCALLTYPE *get_textAfterOffset)(
        IAccessibleHypertext *This,
        LONG offset,
        enum IA2TextBoundaryType boundaryType,
        LONG *startOffset,
        LONG *endOffset,
        BSTR *text);

    HRESULT (STDMETHODCALLTYPE *get_textAtOffset)(
        IAccessibleHypertext *This,
        LONG offset,
        enum IA2TextBoundaryType boundaryType,
        LONG *startOffset,
        LONG *endOffset,
        BSTR *text);

    HRESULT (STDMETHODCALLTYPE *removeSelection)(
        IAccessibleHypertext *This,
        LONG selectionIndex);

    HRESULT (STDMETHODCALLTYPE *setCaretOffset)(
        IAccessibleHypertext *This,
        LONG offset);

    HRESULT (STDMETHODCALLTYPE *setSelection)(
        IAccessibleHypertext *This,
        LONG selectionIndex,
        LONG startOffset,
        LONG endOffset);

    HRESULT (STDMETHODCALLTYPE *get_nCharacters)(
        IAccessibleHypertext *This,
        LONG *nCharacters);

    HRESULT (STDMETHODCALLTYPE *scrollSubstringTo)(
        IAccessibleHypertext *This,
        LONG startIndex,
        LONG endIndex,
        enum IA2ScrollType scrollType);

    HRESULT (STDMETHODCALLTYPE *scrollSubstringToPoint)(
        IAccessibleHypertext *This,
        LONG startIndex,
        LONG endIndex,
        enum IA2CoordinateType coordinateType,
        LONG x,
        LONG y);

    HRESULT (STDMETHODCALLTYPE *get_newText)(
        IAccessibleHypertext *This,
        IA2TextSegment *newText);

    HRESULT (STDMETHODCALLTYPE *get_oldText)(
        IAccessibleHypertext *This,
        IA2TextSegment *oldText);

    /*** IAccessibleHypertext methods ***/
    HRESULT (STDMETHODCALLTYPE *get_nHyperlinks)(
        IAccessibleHypertext *This,
        LONG *hyperlinkCount);

    HRESULT (STDMETHODCALLTYPE *get_hyperlink)(
        IAccessibleHypertext *This,
        LONG index,
        IAccessibleHyperlink **hyperlink);

    HRESULT (STDMETHODCALLTYPE *get_hyperlinkIndex)(
        IAccessibleHypertext *This,
        LONG charIndex,
        LONG *hyperlinkIndex);

    END_INTERFACE
} IAccessibleHypertextVtbl;

interface IAccessibleHypertext {
    CONST_VTBL IAccessibleHypertextVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAccessibleHypertext_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAccessibleHypertext_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAccessibleHypertext_Release(This) (This)->lpVtbl->Release(This)
/*** IAccessibleText methods ***/
#define IAccessibleHypertext_addSelection(This,startOffset,endOffset) (This)->lpVtbl->addSelection(This,startOffset,endOffset)
#define IAccessibleHypertext_get_attributes(This,offset,startOffset,endOffset,textAttributes) (This)->lpVtbl->get_attributes(This,offset,startOffset,endOffset,textAttributes)
#define IAccessibleHypertext_get_caretOffset(This,offset) (This)->lpVtbl->get_caretOffset(This,offset)
#define IAccessibleHypertext_get_characterExtents(This,offset,coordType,x,y,width,height) (This)->lpVtbl->get_characterExtents(This,offset,coordType,x,y,width,height)
#define IAccessibleHypertext_get_nSelections(This,nSelections) (This)->lpVtbl->get_nSelections(This,nSelections)
#define IAccessibleHypertext_get_offsetAtPoint(This,x,y,coordType,offset) (This)->lpVtbl->get_offsetAtPoint(This,x,y,coordType,offset)
#define IAccessibleHypertext_get_selection(This,selectionIndex,startOffset,endOffset) (This)->lpVtbl->get_selection(This,selectionIndex,startOffset,endOffset)
#define IAccessibleHypertext_get_text(This,startOffset,endOffset,text) (This)->lpVtbl->get_text(This,startOffset,endOffset,text)
#define IAccessibleHypertext_get_textBeforeOffset(This,offset,boundaryType,startOffset,endOffset,text) (This)->lpVtbl->get_textBeforeOffset(This,offset,boundaryType,startOffset,endOffset,text)
#define IAccessibleHypertext_get_textAfterOffset(This,offset,boundaryType,startOffset,endOffset,text) (This)->lpVtbl->get_textAfterOffset(This,offset,boundaryType,startOffset,endOffset,text)
#define IAccessibleHypertext_get_textAtOffset(This,offset,boundaryType,startOffset,endOffset,text) (This)->lpVtbl->get_textAtOffset(This,offset,boundaryType,startOffset,endOffset,text)
#define IAccessibleHypertext_removeSelection(This,selectionIndex) (This)->lpVtbl->removeSelection(This,selectionIndex)
#define IAccessibleHypertext_setCaretOffset(This,offset) (This)->lpVtbl->setCaretOffset(This,offset)
#define IAccessibleHypertext_setSelection(This,selectionIndex,startOffset,endOffset) (This)->lpVtbl->setSelection(This,selectionIndex,startOffset,endOffset)
#define IAccessibleHypertext_get_nCharacters(This,nCharacters) (This)->lpVtbl->get_nCharacters(This,nCharacters)
#define IAccessibleHypertext_scrollSubstringTo(This,startIndex,endIndex,scrollType) (This)->lpVtbl->scrollSubstringTo(This,startIndex,endIndex,scrollType)
#define IAccessibleHypertext_scrollSubstringToPoint(This,startIndex,endIndex,coordinateType,x,y) (This)->lpVtbl->scrollSubstringToPoint(This,startIndex,endIndex,coordinateType,x,y)
#define IAccessibleHypertext_get_newText(This,newText) (This)->lpVtbl->get_newText(This,newText)
#define IAccessibleHypertext_get_oldText(This,oldText) (This)->lpVtbl->get_oldText(This,oldText)
/*** IAccessibleHypertext methods ***/
#define IAccessibleHypertext_get_nHyperlinks(This,hyperlinkCount) (This)->lpVtbl->get_nHyperlinks(This,hyperlinkCount)
#define IAccessibleHypertext_get_hyperlink(This,index,hyperlink) (This)->lpVtbl->get_hyperlink(This,index,hyperlink)
#define IAccessibleHypertext_get_hyperlinkIndex(This,charIndex,hyperlinkIndex) (This)->lpVtbl->get_hyperlinkIndex(This,charIndex,hyperlinkIndex)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAccessibleHypertext_QueryInterface(IAccessibleHypertext* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAccessibleHypertext_AddRef(IAccessibleHypertext* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAccessibleHypertext_Release(IAccessibleHypertext* This) {
    return This->lpVtbl->Release(This);
}
/*** IAccessibleText methods ***/
static FORCEINLINE HRESULT IAccessibleHypertext_addSelection(IAccessibleHypertext* This,LONG startOffset,LONG endOffset) {
    return This->lpVtbl->addSelection(This,startOffset,endOffset);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_attributes(IAccessibleHypertext* This,LONG offset,LONG *startOffset,LONG *endOffset,BSTR *textAttributes) {
    return This->lpVtbl->get_attributes(This,offset,startOffset,endOffset,textAttributes);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_caretOffset(IAccessibleHypertext* This,LONG *offset) {
    return This->lpVtbl->get_caretOffset(This,offset);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_characterExtents(IAccessibleHypertext* This,LONG offset,enum IA2CoordinateType coordType,LONG *x,LONG *y,LONG *width,LONG *height) {
    return This->lpVtbl->get_characterExtents(This,offset,coordType,x,y,width,height);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_nSelections(IAccessibleHypertext* This,LONG *nSelections) {
    return This->lpVtbl->get_nSelections(This,nSelections);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_offsetAtPoint(IAccessibleHypertext* This,LONG x,LONG y,enum IA2CoordinateType coordType,LONG *offset) {
    return This->lpVtbl->get_offsetAtPoint(This,x,y,coordType,offset);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_selection(IAccessibleHypertext* This,LONG selectionIndex,LONG *startOffset,LONG *endOffset) {
    return This->lpVtbl->get_selection(This,selectionIndex,startOffset,endOffset);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_text(IAccessibleHypertext* This,LONG startOffset,LONG endOffset,BSTR *text) {
    return This->lpVtbl->get_text(This,startOffset,endOffset,text);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_textBeforeOffset(IAccessibleHypertext* This,LONG offset,enum IA2TextBoundaryType boundaryType,LONG *startOffset,LONG *endOffset,BSTR *text) {
    return This->lpVtbl->get_textBeforeOffset(This,offset,boundaryType,startOffset,endOffset,text);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_textAfterOffset(IAccessibleHypertext* This,LONG offset,enum IA2TextBoundaryType boundaryType,LONG *startOffset,LONG *endOffset,BSTR *text) {
    return This->lpVtbl->get_textAfterOffset(This,offset,boundaryType,startOffset,endOffset,text);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_textAtOffset(IAccessibleHypertext* This,LONG offset,enum IA2TextBoundaryType boundaryType,LONG *startOffset,LONG *endOffset,BSTR *text) {
    return This->lpVtbl->get_textAtOffset(This,offset,boundaryType,startOffset,endOffset,text);
}
static FORCEINLINE HRESULT IAccessibleHypertext_removeSelection(IAccessibleHypertext* This,LONG selectionIndex) {
    return This->lpVtbl->removeSelection(This,selectionIndex);
}
static FORCEINLINE HRESULT IAccessibleHypertext_setCaretOffset(IAccessibleHypertext* This,LONG offset) {
    return This->lpVtbl->setCaretOffset(This,offset);
}
static FORCEINLINE HRESULT IAccessibleHypertext_setSelection(IAccessibleHypertext* This,LONG selectionIndex,LONG startOffset,LONG endOffset) {
    return This->lpVtbl->setSelection(This,selectionIndex,startOffset,endOffset);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_nCharacters(IAccessibleHypertext* This,LONG *nCharacters) {
    return This->lpVtbl->get_nCharacters(This,nCharacters);
}
static FORCEINLINE HRESULT IAccessibleHypertext_scrollSubstringTo(IAccessibleHypertext* This,LONG startIndex,LONG endIndex,enum IA2ScrollType scrollType) {
    return This->lpVtbl->scrollSubstringTo(This,startIndex,endIndex,scrollType);
}
static FORCEINLINE HRESULT IAccessibleHypertext_scrollSubstringToPoint(IAccessibleHypertext* This,LONG startIndex,LONG endIndex,enum IA2CoordinateType coordinateType,LONG x,LONG y) {
    return This->lpVtbl->scrollSubstringToPoint(This,startIndex,endIndex,coordinateType,x,y);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_newText(IAccessibleHypertext* This,IA2TextSegment *newText) {
    return This->lpVtbl->get_newText(This,newText);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_oldText(IAccessibleHypertext* This,IA2TextSegment *oldText) {
    return This->lpVtbl->get_oldText(This,oldText);
}
/*** IAccessibleHypertext methods ***/
static FORCEINLINE HRESULT IAccessibleHypertext_get_nHyperlinks(IAccessibleHypertext* This,LONG *hyperlinkCount) {
    return This->lpVtbl->get_nHyperlinks(This,hyperlinkCount);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_hyperlink(IAccessibleHypertext* This,LONG index,IAccessibleHyperlink **hyperlink) {
    return This->lpVtbl->get_hyperlink(This,index,hyperlink);
}
static FORCEINLINE HRESULT IAccessibleHypertext_get_hyperlinkIndex(IAccessibleHypertext* This,LONG charIndex,LONG *hyperlinkIndex) {
    return This->lpVtbl->get_hyperlinkIndex(This,charIndex,hyperlinkIndex);
}
#endif
#endif

#endif


#endif  /* __IAccessibleHypertext_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __accessiblehypertext_h__ */
