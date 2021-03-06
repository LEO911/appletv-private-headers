/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AXServer.h"
#import "AccessibilityUtilities-Structs.h"

@class NSMutableArray;

@interface AXSpringBoardServer : AXServer {
	id _currentAlertHandler;	// 16 = 0x10
	NSMutableArray *_gestureOverrides;	// 20 = 0x14
	NSMutableArray *_actionHandlers;	// 24 = 0x18
}
+ (id)server;	// 0x326c8009
- (id)init;	// 0x326c8075
- (BOOL)_connectIfNecessary;	// 0x326c88ad
- (void)_connectServerIfNecessary;	// 0x326c8625
- (id)_handleActionResult:(id)result;	// 0x326c83f9
- (id)_handleGestureOverrideResult:(id)result;	// 0x326c8201
- (id)_handleReplyResult:(id)result;	// 0x326c8161
- (id)_serviceName;	// 0x326c8151
- (BOOL)_shouldValidateEntitlements;	// 0x326c8621
- (int)activeApplicationOrientation;	// 0x326ca17d
- (void)cleanupAlertHandler;	// 0x326c9041
- (void)dealloc;	// 0x326c8105
- (void)hideAlert;	// 0x326c9071
- (BOOL)isMakingEmergencyCall;	// 0x326c8c35
- (BOOL)isOrientationLocked;	// 0x326c8d29
- (BOOL)isPointInsideAccessibilityInspector:(XXStruct_uk_lJC *)inspector;	// 0x326ca085
- (BOOL)isRingerMuted;	// 0x326c8e61
- (BOOL)isScreenLockedWithPasscode:(BOOL *)passcode;	// 0x326c8e79
- (BOOL)isSideSwitchUsedForOrientation;	// 0x326c8e49
- (BOOL)isSystemSleeping;	// 0x326c8d11
- (BOOL)isVideoPlaying;	// 0x326c8e1d
- (BOOL)isVoiceControlRunning;	// 0x326c8c1d
- (void)openAppSwitcher;	// 0x326c8ab1
- (void)openAssistiveTouchCustomGestureCreation;	// 0x326c8ac5
- (void)openSiri;	// 0x326c8a89
- (void)openVoiceControl;	// 0x326c8a9d
- (int)pid;	// 0x326ca089
- (void)registerOverrideIntentForGesture:(int)gesture withHandler:(id)handler withIdentifierCallback:(id)identifierCallback;	// 0x326c9da1
- (void)registerSpringBoardActionHandler:(id)handler withIdentifierCallback:(id)identifierCallback;	// 0x326c9589
- (void)removeActionHandler:(NSString *)handler;	// 0x326c93d5
- (void)removeOverrideIntent:(NSString *)intent;	// 0x326c9939
- (void)resetDimTimer;	// 0x326c8e35
- (void)setCancelGestureActivation:(int)activation cancelEnabled:(BOOL)enabled;	// 0x326c9bfd
- (void)setSystemGesturesEnabled:(BOOL)enabled;	// 0x326c8d41
- (void)setVolume:(float)volume;	// 0x326c8ad9
- (void)showAlert:(int)alert withHandler:(id)handler;	// 0x326c916d
- (void)showAlert:(int)alert withHandler:(id)handler withData:(id)data;	// 0x326c9191
- (void)takeScreenshot;	// 0x326c8a75
- (void)toggleGuidedAccess;	// 0x326c8b61
- (void)toggleHearingControl;	// 0x326c8add
- (int)topEventPidOverride;	// 0x326c8c4d
- (float)volumeLevel;	// 0x326c8f7d
@end

