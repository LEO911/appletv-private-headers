/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSArray, MPQueuePlayer, NSMutableArray, MPAVItem, NSMutableSet;
@protocol MPAVQueuePlayerFeederSource;

@interface MPAVQueuePlayerFeeder : NSObject {
	BOOL _forceSynchronousQueueFilling;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	NSMutableSet *_reusableItems;	// 12 = 0xc
	MPQueuePlayer *_player;	// 16 = 0x10
	dispatch_queue_s *_playerQueue;	// 20 = 0x14
	id<MPAVQueuePlayerFeederSource> _playlistItemSource;	// 24 = 0x18
	int _nextFillQueueToken;	// 28 = 0x1c
	BOOL _fillQueueActive;	// 32 = 0x20
@private
	int _desiredQueueDepth;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) MPAVItem *currentItem;	// G=0x33c4a7b5; 
@property(assign, nonatomic) int desiredQueueDepth;	// G=0x33c4b89d; S=0x33c4b8ad; @synthesize=_desiredQueueDepth
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x33c4b8bd; S=0x33c4b8cd; @synthesize=_forceSynchronousQueueFilling
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x33c4a7fd; 
- (id)initWithAVQueuePlayer:(id)avqueuePlayer itemSource:(id)source;	// 0x33c49aa9
- (void)_fillInQueue;	// 0x33c4a76d
- (id)_fillInQueueWithExtraSpace:(int)extraSpace;	// 0x33c4a759
- (id)_fillInQueueWithExtraSpace:(int)extraSpace ignoreExistingItems:(BOOL)items;	// 0x33c4a4b5
- (void)_markIsReusable:(BOOL)reusable item:(id)item;	// 0x33c4a835
- (void)_removeCurrentItem;	// 0x33c49ecd
- (void)_removeInvalidItems:(id)items;	// 0x33c4af21
- (void)_updatePlayerQueueWithRemovedItems:(id)removedItems addedItems:(id)items removeCurrentItem:(BOOL)item;	// 0x33c4b00d
- (void)_updateQueueDepthForRateChange;	// 0x33c4b7fd
- (id)acquireReusableItemsUsingBlock:(id)block;	// 0x33c4a8b1
- (void)advanceToNextItem;	// 0x33c4ae31
- (void)cancelReusableItemsPassingTest:(id)test;	// 0x33c4aaa9
// declared property getter: - (id)currentItem;	// 0x33c4a7b5
- (void)dealloc;	// 0x33c49ccd
- (id)description;	// 0x33c49da5
// declared property getter: - (int)desiredQueueDepth;	// 0x33c4b89d
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x33c4b8bd
- (void)invalidate;	// 0x33c4af0d
// declared property getter: - (id)items;	// 0x33c4a7fd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33c4a00d
- (void)reloadQueueKeepingCurrentItem:(BOOL)item;	// 0x33c4abd9
// declared property setter: - (void)setDesiredQueueDepth:(int)depth;	// 0x33c4b8ad
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x33c4b8cd
@end

