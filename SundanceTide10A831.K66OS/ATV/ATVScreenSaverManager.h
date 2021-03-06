/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class ATVScreenSaverPrefetchTask, BRWindow, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverManager : BRSingleton {
	NSTimer *_timer;	// 4 = 0x4
	double _interval;	// 8 = 0x8
	BRWindow *_window;	// 16 = 0x10
	long _state;	// 20 = 0x14
	BOOL _enabled;	// 24 = 0x18
	BOOL _screenSaverPosted;	// 25 = 0x19
	BOOL _handlingTimeoutChangeNotification;	// 26 = 0x1a
	ATVScreenSaverPrefetchTask *_prefetchTask;	// 28 = 0x1c
	BOOL _screenSaverAutoFired;	// 32 = 0x20
	BOOL _postTopMenuEventOnDismiss;	// 33 = 0x21
}
@property(assign, nonatomic) BOOL postTopMenuEventOnDismiss;	// G=0x2391d5; S=0x2391e5; @synthesize=_postTopMenuEventOnDismiss
+ (id)screenSaverFaces;	// 0x2388b5
+ (id)screenSaverFacesCachePath;	// 0x238865
+ (void)setSingleton:(id)singleton;	// 0x2389b5
+ (id)singleton;	// 0x2389a5
+ (void)sortThemeTitleKeysIn:(id)anIn;	// 0x2388ed
- (id)init;	// 0x2389c9
- (void)_createTimer;	// 0x2395a1
- (void)_dismissScreenSaver:(id)saver;	// 0x2399e5
- (void)_fadeFinished;	// 0x2391f5
- (void)_prefetchComplete:(id)complete;	// 0x23a221
- (void)_screenSaverArchiveChanged:(id)changed;	// 0x239cc1
- (void)_screenSaverControllerActivate:(id)activate;	// 0x239a61
- (void)_screenSaverControllerDeactivate:(id)deactivate;	// 0x239aa5
- (void)_screenSaverControllerDeactivateWithTopMenuEvent:(id)topMenuEvent;	// 0x239af9
- (void)_screenSaverFired:(id)fired;	// 0x239671
- (void)_screenSaverIntervalChanged:(id)changed;	// 0x239b21
- (id)_screenSaverPlugInControl;	// 0x23973d
- (void)_serverStatusChanged:(id)changed;	// 0x239e7d
- (void)_startOneTimePrefetchTask:(id)task;	// 0x239ff1
- (void)_startRepeatingPrefetchTask;	// 0x23a109
- (void)_stopPrefetchTask;	// 0x23a251
- (void)_updateActivity:(id)activity;	// 0x239971
- (void)dealloc;	// 0x238c01
- (void)enable;	// 0x238cc1
// declared property getter: - (BOOL)postTopMenuEventOnDismiss;	// 0x2391d5
- (BOOL)screenSaverPrefetchActive;	// 0x2391b1
- (BOOL)screenSaverRequiresPrefetch;	// 0x239031
// declared property setter: - (void)setPostTopMenuEventOnDismiss:(BOOL)dismiss;	// 0x2391e5
- (void)showScreenSaver;	// 0x238ce9
@end

