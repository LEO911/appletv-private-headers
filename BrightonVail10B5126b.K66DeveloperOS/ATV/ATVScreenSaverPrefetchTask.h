/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class NSMutableArray, NSTimer, NSMutableDictionary, NSArray;

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
- (void)_imageLoadFailed:(id)failed;	// 0x245485
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x2453ed
- (void)_prefetch;	// 0x245111
- (void)_reset;	// 0x244cd5
- (void)_screenSaverDataReady:(id)ready;	// 0x244e25
- (void)_startPrefetchForItems:(id)items;	// 0x244f65
- (void)_updateMetadataCacheWithMetadata:(id)metadata;	// 0x245519
- (void)dealloc;	// 0x24498d
- (BOOL)isActive;	// 0x244cb1
- (BOOL)perform:(id)perform;	// 0x244a45
- (void)stop;	// 0x244c59
@end

