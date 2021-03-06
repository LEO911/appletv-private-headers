/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebDefaultEditingDelegate : NSObject {
}
+ (id)sharedEditingDelegate;	// 0x365bb22d
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x365bb2a5
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x365bb2a1
- (id)undoManagerForWebView:(id)webView;	// 0x365bb2bd
- (BOOL)webView:(id)view doCommandBySelector:(SEL)selector;	// 0x365bb29d
- (BOOL)webView:(id)view shouldApplyStyle:(id)style toElementsInDOMRange:(id)domrange;	// 0x365bb291
- (BOOL)webView:(id)view shouldBeginEditingInDOMRange:(id)domrange;	// 0x365bb279
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x365bb28d
- (BOOL)webView:(id)view shouldChangeTypingStyle:(id)style toStyle:(id)style3;	// 0x365bb299
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x365bb289
- (BOOL)webView:(id)view shouldEndEditingInDOMRange:(id)domrange;	// 0x365bb27d
- (BOOL)webView:(id)view shouldInsertNode:(id)node replacingDOMRange:(id)range givenAction:(int)action;	// 0x365bb281
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x365bb285
- (BOOL)webView:(id)view shouldMoveRangeAfterDelete:(id)aDelete replacingRange:(id)range;	// 0x365bb295
- (BOOL)webView:(id)view shouldShowDeleteInterfaceForElement:(id)element;	// 0x365bb275
- (void)webViewDidBeginEditing:(id)webView;	// 0x365bb2a9
- (void)webViewDidChange:(id)webView;	// 0x365bb2ad
- (void)webViewDidChangeSelection:(id)webView;	// 0x365bb2b9
- (void)webViewDidChangeTypingStyle:(id)webView;	// 0x365bb2b5
- (void)webViewDidEndEditing:(id)webView;	// 0x365bb2b1
@end

