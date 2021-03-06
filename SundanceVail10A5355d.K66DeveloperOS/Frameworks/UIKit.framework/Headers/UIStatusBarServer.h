/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@protocol UIStatusBarServerClient;

@interface UIStatusBarServer : NSObject {
	id<UIStatusBarServerClient> _statusBar;	// 4 = 0x4
	CFRunLoopSourceRef _source;	// 8 = 0x8
}
@property(retain, nonatomic) id<UIStatusBarServerClient> statusBar;	// G=0x33cf46bd; S=0x33a207c1; @synthesize=_statusBar
+ (unsigned)_publisherPort;	// 0x33b461fd
+ (unsigned)_serverPort;	// 0x339fcb8d
+ (void)addStatusBarItem:(int)item;	// 0x33b4697d
+ (void)addStyleOverrides:(int)overrides;	// 0x33cf43b9
+ (id)getDoubleHeightStatusStringForStyle:(int)style;	// 0x33a23f55
+ (double)getGlowAnimationEndTimeForStyle:(int)style;	// 0x33cf462d
+ (BOOL)getGlowAnimationStateForStyle:(int)style;	// 0x33a24685
+ (XXStruct_dUflDB *)getStatusBarData;	// 0x33a20bc1
+ (XXStruct_ZVOZFA *)getStatusBarOverrideData;	// 0x33cf45ed
+ (int)getStyleOverrides;	// 0x33a20ad5
+ (void)permanentizeStatusBarOverrideData;	// 0x33cf4571
+ (void)postDoubleHeightStatusString:(id)string forStyle:(int)style;	// 0x33cf449d
+ (void)postGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x33cf4461
+ (void)postStatusBarData:(XXStruct_dUflDB *)data withActions:(int)actions;	// 0x339fcb49
+ (void)postStatusBarOverrideData:(XXStruct_ZVOZFA *)data;	// 0x33cf4535
+ (void)removeStatusBarItem:(int)item;	// 0x33b461a9
+ (void)removeStyleOverrides:(int)overrides;	// 0x33cf440d
+ (void)runServer;	// 0x33cf4359
- (id)initWithStatusBar:(id)statusBar;	// 0x33a20775
- (void)_receivedDoubleHeightStatus:(const char *)status forStyle:(int)style;	// 0x33b1fbe5
- (void)_receivedGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x33cf4665
- (void)_receivedStatusBarData:(XXStruct_dUflDB *)data actions:(int)actions;	// 0x33a01251
- (void)_receivedStyleOverrides:(int)overrides;	// 0x33b1fa81
- (void)dealloc;	// 0x33cf45a5
// declared property setter: - (void)setStatusBar:(id)bar;	// 0x33a207c1
// declared property getter: - (id)statusBar;	// 0x33cf46bd
@end

