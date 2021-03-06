/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebView.h"
#import "UIKit-Structs.h"

@class _UIServiceWebViewController;

__attribute__((visibility("hidden")))
@interface _UIServiceWebView : UIWebView {
	_UIServiceWebViewController *_serviceWebViewController;	// 88 = 0x58
	BOOL _shouldDecidePolicyRemotely;	// 92 = 0x5c
}
@property(assign, nonatomic) _UIServiceWebViewController *serviceWebViewController;	// G=0x306441ed; S=0x306441fd; @synthesize=_serviceWebViewController
@property(assign, nonatomic) BOOL shouldDecidePolicyRemotely;	// G=0x3064420d; S=0x3064421d; @synthesize=_shouldDecidePolicyRemotely
- (id)_makeAlertView;	// 0x306441cd
- (void)_webView:(id)view dismissViewControllerAnimated:(BOOL)animated completion:(id)completion;	// 0x30644131
- (BOOL)_webView:(id)view presentViewController:(id)controller animated:(BOOL)animated completion:(id)completion;	// 0x30644029
// declared property getter: - (id)serviceWebViewController;	// 0x306441ed
// declared property setter: - (void)setServiceWebViewController:(id)controller;	// 0x306441fd
// declared property setter: - (void)setShouldDecidePolicyRemotely:(BOOL)decidePolicyRemotely;	// 0x3064421d
// declared property getter: - (BOOL)shouldDecidePolicyRemotely;	// 0x3064420d
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x30643e31
@end

