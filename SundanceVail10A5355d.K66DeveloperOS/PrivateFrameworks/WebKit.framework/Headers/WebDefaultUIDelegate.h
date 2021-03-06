/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebDefaultUIDelegate : NSObject {
}
+ (id)sharedUIDelegate;	// 0x3168378d
- (id)webView:(id)view createWebViewWithRequest:(id)request userGesture:(BOOL)gesture;	// 0x316a882d
- (id)webView:(id)view createWebViewWithRequest:(id)request windowFeatures:(id)features;	// 0x316a87a1
- (void)webView:(id)view didDrawRect:(CGRect)rect;	// 0x316a8969
- (void)webView:(id)view didScrollDocumentInFrameView:(id)frameView;	// 0x316a896d
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x316a8971
- (id)webView:(id)view generateReplacementFile:(id)file;	// 0x316a8979
- (void)webView:(id)view makeFirstResponder:(id)responder;	// 0x316a8899
- (void)webView:(id)view mouseDidMoveOverElement:(id)mouse modifierFlags:(unsigned)flags;	// 0x31692c4d
- (void)webView:(id)view printFrameView:(id)view2;	// 0x316a8965
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x316a8955
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x316a8959
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x316a895d
- (void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener;	// 0x316a8961
- (void)webView:(id)view setFrame:(CGRect)frame;	// 0x316a8901
- (void)webView:(id)view setResizable:(BOOL)resizable;	// 0x316a88fd
- (void)webView:(id)view setStatusBarVisible:(BOOL)visible;	// 0x316a88f5
- (void)webView:(id)view setStatusText:(id)text;	// 0x316a88e1
- (void)webView:(id)view setToolbarsVisible:(BOOL)visible;	// 0x316a88ed
- (BOOL)webView:(id)view shouldReplaceUploadFile:(id)file usingGeneratedFilename:(id *)filename;	// 0x316a8975
- (BOOL)webViewAreToolbarsVisible:(id)visible;	// 0x316a88e9
- (void)webViewClose:(id)close;	// 0x316a8835
- (id)webViewFirstResponder:(id)responder;	// 0x316a8841
- (void)webViewFocus:(id)focus;	// 0x316a8839
- (CGRect)webViewFrame:(id)frame;	// 0x316a8905
- (BOOL)webViewIsResizable:(id)resizable;	// 0x316a88f9
- (BOOL)webViewIsStatusBarVisible:(id)visible;	// 0x316a88f1
- (void)webViewShow:(id)show;	// 0x316a8831
- (id)webViewStatusText:(id)text;	// 0x316a88e5
- (void)webViewSupportedOrientationsUpdated:(id)updated;	// 0x316a897d
- (void)webViewUnfocus:(id)unfocus;	// 0x316a883d
@end

