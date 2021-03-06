/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class GEOUsageCollectionRequest, NSTimer, GEORequester;

@interface GEOUsageManager : NSObject {
	GEORequester *_requester;	// 4 = 0x4
	GEOUsageCollectionRequest *_request;	// 8 = 0x8
	NSTimer *_updateTimer;	// 12 = 0xc
	BOOL _isAppActive;	// 16 = 0x10
}
+ (void)setUsePersistentConnection:(BOOL)connection;	// 0x379daf19
+ (id)sharedManager;	// 0x379e07b1
- (id)init;	// 0x379e0889
- (void)_applicationActivating;	// 0x37a5a639
- (void)_applicationDeactivating;	// 0x379e47e5
- (void)_cleanupRequester;	// 0x37a5a48d
- (void)_cleanupTimer;	// 0x379e4919
- (void)_scheduleUpdateTimer;	// 0x379fdac1
- (void)_sendUsageToServer;	// 0x379e4825
- (void)_updateTimerFired:(id)fired;	// 0x37a5a651
- (id)_usageURL;	// 0x37a5a681
- (void)captureDirectionsFeedbackCollection:(id)collection;	// 0x37a5a511
- (void)captureSearchFeedbackCollection:(id)collection;	// 0x37a00979
- (void)captureTransitAppLaunchFeedbackCollection:(id)collection;	// 0x37a5a5a5
- (void)captureUsageDataForRequest:(id)request service:(int)service;	// 0x379fd809
- (void)captureUsageDataForTiles:(id)tiles;	// 0x379e35b9
- (void)dealloc;	// 0x37a5a3ed
@end

