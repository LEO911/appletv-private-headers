/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebView, WebInspectorFrontend;

__attribute__((visibility("hidden")))
@interface WebInspector : NSObject {
@private
	WebView *_webView;	// 4 = 0x4
	WebInspectorFrontend *_frontend;	// 8 = 0x8
}
@property(assign, getter=isJavaScriptProfilingEnabled) BOOL javaScriptProfilingEnabled;	// G=0x35064709; S=0x35064731; converted property
@property(assign, getter=isTimelineProfilingEnabled) BOOL timelineProfilingEnabled;	// G=0x35064769; S=0x350647a1; converted property
+ (id)webInspector;	// 0x350649d9
- (id)initWithWebView:(id)webView;	// 0x35064425
- (void)attach:(id)attach;	// 0x350647ed
- (void)close:(id)close;	// 0x350647c5
- (void)dealloc;	// 0x35064469
- (void)detach:(id)detach;	// 0x3506480d
- (void)evaluateInFrontend:(id)frontend callId:(long)anId script:(id)script;	// 0x3506482d
- (BOOL)isDebuggingJavaScript;	// 0x35064541
// converted property getter: - (BOOL)isJavaScriptProfilingEnabled;	// 0x35064709
- (BOOL)isProfilingJavaScript;	// 0x35064629
// converted property getter: - (BOOL)isTimelineProfilingEnabled;	// 0x35064769
- (void)releaseFrontend;	// 0x350649ad
- (void)setFrontend:(id)frontend;	// 0x35064985
// converted property setter: - (void)setJavaScriptProfilingEnabled:(BOOL)enabled;	// 0x35064731
// converted property setter: - (void)setTimelineProfilingEnabled:(BOOL)enabled;	// 0x350647a1
- (void)setWebFrame:(id)frame;	// 0x35064a3d
- (void)show:(id)show;	// 0x350644f1
- (void)showConsole:(id)console;	// 0x35064501
- (void)showTimeline:(id)timeline;	// 0x3506453d
- (void)showWindow;	// 0x350644c9
- (void)showWindow:(id)window;	// 0x35064a89
- (void)startDebuggingJavaScript:(id)script;	// 0x350645d9
- (void)startProfilingJavaScript:(id)script;	// 0x350646c1
- (void)stopDebuggingJavaScript:(id)script;	// 0x35064601
- (void)stopProfilingJavaScript:(id)script;	// 0x350646e5
- (void)toggleDebuggingJavaScript:(id)script;	// 0x35064579
- (void)toggleProfilingJavaScript:(id)script;	// 0x35064661
- (void)webViewClosed;	// 0x350644b5
@end

