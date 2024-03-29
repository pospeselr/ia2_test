/*** Autogenerated by WIDL 3.20 from /home/pospeselr/Code/Tor/tor-browser/other-licenses/ia2/AccessibleEventId.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __accessibleeventid_h__
#define __accessibleeventid_h__

/* Forward declarations */

/* Headers for imported files */


#ifdef __cplusplus
extern "C" {
#endif

enum IA2EventID {
    IA2_EVENT_ACTION_CHANGED = 0x101,
    IA2_EVENT_ACTIVE_DECENDENT_CHANGED = 0x102,
    IA2_EVENT_ACTIVE_DESCENDANT_CHANGED = IA2_EVENT_ACTIVE_DECENDENT_CHANGED,
    IA2_EVENT_DOCUMENT_ATTRIBUTE_CHANGED = 259,
    IA2_EVENT_DOCUMENT_CONTENT_CHANGED = 260,
    IA2_EVENT_DOCUMENT_LOAD_COMPLETE = 261,
    IA2_EVENT_DOCUMENT_LOAD_STOPPED = 262,
    IA2_EVENT_DOCUMENT_RELOAD = 263,
    IA2_EVENT_HYPERLINK_END_INDEX_CHANGED = 264,
    IA2_EVENT_HYPERLINK_NUMBER_OF_ANCHORS_CHANGED = 265,
    IA2_EVENT_HYPERLINK_SELECTED_LINK_CHANGED = 266,
    IA2_EVENT_HYPERTEXT_LINK_ACTIVATED = 267,
    IA2_EVENT_HYPERTEXT_LINK_SELECTED = 268,
    IA2_EVENT_HYPERLINK_START_INDEX_CHANGED = 269,
    IA2_EVENT_HYPERTEXT_CHANGED = 270,
    IA2_EVENT_HYPERTEXT_NLINKS_CHANGED = 271,
    IA2_EVENT_OBJECT_ATTRIBUTE_CHANGED = 272,
    IA2_EVENT_PAGE_CHANGED = 273,
    IA2_EVENT_SECTION_CHANGED = 274,
    IA2_EVENT_TABLE_CAPTION_CHANGED = 275,
    IA2_EVENT_TABLE_COLUMN_DESCRIPTION_CHANGED = 276,
    IA2_EVENT_TABLE_COLUMN_HEADER_CHANGED = 277,
    IA2_EVENT_TABLE_MODEL_CHANGED = 278,
    IA2_EVENT_TABLE_ROW_DESCRIPTION_CHANGED = 279,
    IA2_EVENT_TABLE_ROW_HEADER_CHANGED = 280,
    IA2_EVENT_TABLE_SUMMARY_CHANGED = 281,
    IA2_EVENT_TEXT_ATTRIBUTE_CHANGED = 282,
    IA2_EVENT_TEXT_CARET_MOVED = 283,
    IA2_EVENT_TEXT_CHANGED = 284,
    IA2_EVENT_TEXT_COLUMN_CHANGED = 285,
    IA2_EVENT_TEXT_INSERTED = 286,
    IA2_EVENT_TEXT_REMOVED = 287,
    IA2_EVENT_TEXT_UPDATED = 288,
    IA2_EVENT_TEXT_SELECTION_CHANGED = 289,
    IA2_EVENT_VISIBLE_DATA_CHANGED = 290
};
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __accessibleeventid_h__ */
