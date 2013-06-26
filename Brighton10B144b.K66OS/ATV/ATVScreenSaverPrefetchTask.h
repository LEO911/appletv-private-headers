/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class NSArray, NSMutableArray, NSTimer, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverPrefetchTask : BRBackgroundTask {
	int _index;	// 44 = 0x2c
	NSArray *_assets;	// 48 = 0x30
	NSMutableArray *_loadingIDs;	// 52 = 0x34
	NSMutableDictionary *_loadingProxies;	// 56 = 0x38
	NSMutableDictionary *_metadata;	// 60 = 0x3c
	NSTimer *_timer;	// 64 = 0x40
	int _loadAttemptCount;	// 68 = 0x44
}
- (void)_imageLoadFailed:(id)failed;	// 0x249a65
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x2499cd
- (void)_prefetch;	// 0x2496f1
- (void)_reset;	// 0x2492b5
- (void)_screenSaverDataReady:(id)ready;	// 0x249405
- (void)_startPrefetchForItems:(id)items;	// 0x249545
- (void)_updateMetadataCacheWithMetadata:(id)metadata;	// 0x249af9
- (void)dealloc;	// 0x248f6d
- (BOOL)isActive;	// 0x249291
- (BOOL)perform:(id)perform;	// 0x249025
- (void)stop;	// 0x249239
@end
