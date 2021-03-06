/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultUIDelegate : NSObject {
}
+ (id)sharedUIDelegate;	// 0x36487425
- (id)webView:(id)view createWebViewWithRequest:(id)request userGesture:(BOOL)gesture;	// 0x364aec25
- (id)webView:(id)view createWebViewWithRequest:(id)request windowFeatures:(id)features;	// 0x364aec85
- (void)webView:(id)view didDrawRect:(CGRect)rect;	// 0x364aec71
- (void)webView:(id)view didScrollDocumentInFrameView:(id)frameView;	// 0x364aec75
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x364aec79
- (id)webView:(id)view generateReplacementFile:(id)file;	// 0x364aec81
- (void)webView:(id)view makeFirstResponder:(id)responder;	// 0x364aed59
- (void)webView:(id)view mouseDidMoveOverElement:(id)mouse modifierFlags:(unsigned)flags;	// 0x36498601
- (void)webView:(id)view printFrameView:(id)view2;	// 0x364aec6d
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x364aec5d
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x364aec61
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x364aec65
- (void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener;	// 0x364aec69
- (void)webView:(id)view setFrame:(CGRect)frame;	// 0x364aec59
- (void)webView:(id)view setResizable:(BOOL)resizable;	// 0x364aec55
- (void)webView:(id)view setStatusBarVisible:(BOOL)visible;	// 0x364aec4d
- (void)webView:(id)view setStatusText:(id)text;	// 0x364aec39
- (void)webView:(id)view setToolbarsVisible:(BOOL)visible;	// 0x364aec45
- (BOOL)webView:(id)view shouldReplaceUploadFile:(id)file usingGeneratedFilename:(id *)filename;	// 0x364aec7d
- (BOOL)webViewAreToolbarsVisible:(id)visible;	// 0x364aec41
- (void)webViewClose:(id)close;	// 0x364aec2d
- (id)webViewFirstResponder:(id)responder;	// 0x364aeda1
- (void)webViewFocus:(id)focus;	// 0x364aec31
- (CGRect)webViewFrame:(id)frame;	// 0x364aed0d
- (BOOL)webViewIsResizable:(id)resizable;	// 0x364aec51
- (BOOL)webViewIsStatusBarVisible:(id)visible;	// 0x364aec49
- (void)webViewShow:(id)show;	// 0x364aec29
- (id)webViewStatusText:(id)text;	// 0x364aec3d
- (void)webViewUnfocus:(id)unfocus;	// 0x364aec35
@end

