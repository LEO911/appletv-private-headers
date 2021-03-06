/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, AVQueue;

@interface AVPlaybackQueue : NSObject {
	id _delegate;	// 4 = 0x4
	AVQueue *_avItemQueue;	// 8 = 0x8
	NSMutableArray *_pbItemQueue;	// 12 = 0xc
	OpaqueFigPlayer *_figPlayer;	// 16 = 0x10
	int _ignoreAVQueueModifications;	// 20 = 0x14
	BOOL _hasBuiltPlaybackQueue;	// 24 = 0x18
	BOOL _waitingToAddFirstItem;	// 25 = 0x19
	int _avQueueTransactionCount;	// 28 = 0x1c
	int _repeatMode;	// 32 = 0x20
}
- (id)initWithDelegate:(id)delegate figPlayer:(OpaqueFigPlayer *)player;	// 0x30e96141
- (void)beginAVQueueTransaction;	// 0x30eb2321
- (void)checkQueueConsistency;	// 0x30e9af55
- (void)clearPBItemQueueFromIndex:(int)index;	// 0x30e96445
- (id)currentPlaybackItem;	// 0x30e96c05
- (void)dealloc;	// 0x30ea6c91
- (void)endAVQueueTransaction;	// 0x30eb2335
- (void)ensurePlaybackQueue;	// 0x30e9cb65
- (void)ensurePlaybackQueueImmed;	// 0x30e9eca1
- (void)fillInPBItemQueue;	// 0x30e96655
- (void)playbackItemInspectionComplete:(id)complete;	// 0x30e9ec25
- (void)playbackItemWasRemovedFromPlayQueue:(id)playQueue;	// 0x30ea1111
- (void)queueItemWasAddedNotification:(id)notification;	// 0x30e9a061
- (void)queueItemWillBeRemovedNotification:(id)queueItem;	// 0x30ea0019
- (void)removeItemsNoLongerInPlayQueue;	// 0x30e9f099
- (void)scheduleRemoveItemsNoLongerInPlayQueue;	// 0x30e9eed5
- (void)setAVItemQueue:(id)queue;	// 0x30e962b5
- (void)setDelegate:(id)delegate;	// 0x30ea6c81
- (void)setRepeatMode:(int)mode;	// 0x30e9c969
- (void)updateBookmarkTimesIncludeFirst:(BOOL)first updateFirst:(BOOL)first2;	// 0x30e9ac61
@end

