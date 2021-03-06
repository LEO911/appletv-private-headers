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
@property(assign, getter=isJavaScriptProfilingEnabled) BOOL javaScriptProfilingEnabled;	// G=0x364d4c99; S=0x364d4c65; converted property
@property(assign, getter=isTimelineProfilingEnabled) BOOL timelineProfilingEnabled;	// G=0x364d4c39; S=0x364d4c05; converted property
+ (id)webInspector;	// 0x364d4f41
- (id)initWithWebView:(id)webView;	// 0x364d4a15
- (void)attach:(id)attach;	// 0x364d4bc1
- (void)close:(id)close;	// 0x364d4be1
- (void)dealloc;	// 0x364d4e69
- (void)detach:(id)detach;	// 0x364d4ba1
- (void)evaluateInFrontend:(id)frontend callId:(long)anId script:(id)script;	// 0x364d4a99
- (BOOL)isDebuggingJavaScript;	// 0x364d4df9
// converted property getter: - (BOOL)isJavaScriptProfilingEnabled;	// 0x364d4c99
- (BOOL)isProfilingJavaScript;	// 0x364d4d49
// converted property getter: - (BOOL)isTimelineProfilingEnabled;	// 0x364d4c39
- (void)setFrontend:(id)frontend;	// 0x364d4a59
// converted property setter: - (void)setJavaScriptProfilingEnabled:(BOOL)enabled;	// 0x364d4c65
// converted property setter: - (void)setTimelineProfilingEnabled:(BOOL)enabled;	// 0x364d4c05
- (void)setWebFrame:(id)frame;	// 0x364d4eb5
- (void)show:(id)show;	// 0x364d4e45
- (void)showConsole:(id)console;	// 0x364d4e21
- (void)showTimeline:(id)timeline;	// 0x364d4a11
- (void)showWindow:(id)window;	// 0x364d4f01
- (void)startDebuggingJavaScript:(id)script;	// 0x364d4d95
- (void)startProfilingJavaScript:(id)script;	// 0x364d4ce5
- (void)stopDebuggingJavaScript:(id)script;	// 0x364d4d71
- (void)stopProfilingJavaScript:(id)script;	// 0x364d4cc1
- (void)toggleDebuggingJavaScript:(id)script;	// 0x364d4db9
- (void)toggleProfilingJavaScript:(id)script;	// 0x364d4d09
- (void)webViewClosed;	// 0x364d49fd
@end

