/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebScrollView.h"

@class UIWebBrowserView, _UIWebViewScrollViewDelegateForwarder;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollView : UIWebScrollView {
@private
	_UIWebViewScrollViewDelegateForwarder *_forwarder;	// 388 = 0x184
	BOOL _bouncesSetExplicitly;	// 392 = 0x188
	UIWebBrowserView *_browserView;	// 396 = 0x18c
}
@property(assign) id delegate;	// G=0x3025cf71; S=0x301c3015; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x301c0139
- (void)_setWebView:(id)view;	// 0x301c01b1
- (void)_weaklySetBouncesHorizontally:(BOOL)horizontally;	// 0x301c0bb5
- (void)dealloc;	// 0x301c30e9
// converted property getter: - (id)delegate;	// 0x3025cf71
- (void)setBounces:(BOOL)bounces;	// 0x3025ceb1
- (void)setBouncesHorizontally:(BOOL)horizontally;	// 0x3025cf31
- (void)setBouncesVertically:(BOOL)vertically;	// 0x3025cef1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x301c3015
@end

