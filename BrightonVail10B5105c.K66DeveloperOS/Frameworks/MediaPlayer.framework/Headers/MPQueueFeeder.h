/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "MPAVPlaylistFeeder.h"

@class NSDictionary, MPAVController;

@interface MPQueueFeeder : NSObject <MPAVPlaylistFeeder> {
	MPAVController *_avController;	// 4 = 0x4
	CFSetRef _itemsWithReferencesToClear;	// 8 = 0x8
	unsigned _repeatType;	// 12 = 0xc
	unsigned _shuffleType;	// 16 = 0x10
	CFDictionaryRef _nextStartTimes;	// 20 = 0x14
	id _representedObject;	// 24 = 0x18
	BOOL _fullScreenPlaybackQueue;	// 28 = 0x1c
	BOOL _isSourceChangeInProgress;	// 29 = 0x1d
	BOOL _deallocating;	// 30 = 0x1e
	unsigned _activeShuffleType;	// 32 = 0x20
}
@property(assign, nonatomic) MPAVController *AVController;	// G=0x34f9589d; S=0x34f958ad; @synthesize=_avController
@property(assign, nonatomic) unsigned activeShuffleType;	// G=0x34f958fd; S=0x34f9590d; @synthesize=_activeShuffleType
@property(assign, nonatomic) BOOL fullScreenPlaybackQueue;	// G=0x34f9593d; S=0x34f9594d; @synthesize=_fullScreenPlaybackQueue
@property(readonly, assign, nonatomic) unsigned initialPlaybackQueueDepth;	// G=0x34f954b9; 
@property(assign, nonatomic) BOOL isSourceChangeInProgress;	// G=0x34f9595d; S=0x34f95101; @synthesize=_isSourceChangeInProgress
@property(readonly, assign, nonatomic) Class itemClass;	// G=0x34f9525d; 
@property(readonly, assign, nonatomic) unsigned itemCount;	// G=0x34f954bd; 
@property(readonly, assign, nonatomic) unsigned nonRepeatingItemCount;	// G=0x34f9588d; 
@property(readonly, assign, nonatomic) NSDictionary *preferredLanguages;	// G=0x34f9527d; 
@property(readonly, assign, nonatomic) unsigned realRepeatType;	// G=0x34f95401; 
@property(readonly, assign, nonatomic) unsigned realShuffleType;	// G=0x34f95411; 
@property(assign, nonatomic) unsigned repeatType;	// G=0x34f958bd; S=0x34f958cd; @synthesize=_repeatType
@property(retain, nonatomic) id<NSObject> representedObject;	// G=0x34f9591d; S=0x34f9592d; @synthesize=_representedObject
@property(assign, nonatomic) unsigned shuffleType;	// G=0x34f958dd; S=0x34f958ed; @synthesize=_shuffleType
@property(readonly, assign, nonatomic) BOOL trackChangesCanEndPlayback;	// G=0x34f95281; 
+ (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver feederClass:(Class)aClass;	// 0x34f956ed
// declared property getter: - (id)AVController;	// 0x34f9589d
- (BOOL)_canPurgeNextStartTimes;	// 0x34f9565d
- (void)_fixNextStartTimesByInsertingRange:(NSRange)range;	// 0x34f94efd
- (void)_fixNextStartTimesByRemovingRange:(NSRange)range;	// 0x34f94fa1
// declared property getter: - (unsigned)activeShuffleType;	// 0x34f958fd
- (void)addReferenceToItem:(id)item;	// 0x34f95285
- (void)archiveAVControllerPlaybackQueue:(id)queue toArchiver:(id)archiver;	// 0x34f95769
- (void)assumeOwnershipOfItems:(id)items;	// 0x34f95421
- (void)beginSourceChange;	// 0x34f9514d
- (BOOL)canSeek;	// 0x34f95251
- (BOOL)canSkipItem:(id)item;	// 0x34f95255
- (BOOL)canSkipToPreviousItem;	// 0x34f95259
- (void)clearReferencesToItem:(id)item;	// 0x34f95321
- (void)commitSourceChangeWithStartQueueIndex:(unsigned)startQueueIndex;	// 0x34f951b5
- (void)contentInvalidated;	// 0x34f955f5
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x34f95589
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x34f95525
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x34f95355
- (void)dealloc;	// 0x34f94e49
- (id)errorResolverForItem:(id)item;	// 0x34f95241
// declared property getter: - (BOOL)fullScreenPlaybackQueue;	// 0x34f9593d
- (BOOL)hasItemForIndex:(unsigned)index;	// 0x34f954a1
- (BOOL)hasValidItemAtIndex:(unsigned)index;	// 0x34f953d5
// declared property getter: - (unsigned)initialPlaybackQueueDepth;	// 0x34f954b9
- (void)invalidateQueueCaches;	// 0x34f950b9
// declared property getter: - (BOOL)isSourceChangeInProgress;	// 0x34f9595d
// declared property getter: - (Class)itemClass;	// 0x34f9525d
// declared property getter: - (unsigned)itemCount;	// 0x34f954bd
- (id)itemForIndex:(unsigned)index;	// 0x34f954c1
- (unsigned)itemTypeForIndex:(unsigned)index;	// 0x34f95279
- (id)localizedPositionInPlaylistString:(id)playlistString;	// 0x34f95795
// declared property getter: - (unsigned)nonRepeatingItemCount;	// 0x34f9588d
- (id)pathAtIndex:(unsigned)index;	// 0x34f9586d
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x34f95661
// declared property getter: - (id)preferredLanguages;	// 0x34f9527d
// declared property getter: - (unsigned)realRepeatType;	// 0x34f95401
// declared property getter: - (unsigned)realShuffleType;	// 0x34f95411
- (BOOL)reloadWithDataSource:(id)dataSource;	// 0x34f950e5
- (BOOL)reloadWithDataSource:(id)dataSource keepPlayingCurrentItemIfPossible:(BOOL)possible;	// 0x34f950fd
// declared property getter: - (unsigned)repeatType;	// 0x34f958bd
// declared property getter: - (id)representedObject;	// 0x34f9591d
- (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver;	// 0x34f95735
// declared property setter: - (void)setAVController:(id)controller;	// 0x34f958ad
// declared property setter: - (void)setActiveShuffleType:(unsigned)type;	// 0x34f9590d
// declared property setter: - (void)setFullScreenPlaybackQueue:(BOOL)queue;	// 0x34f9594d
// declared property setter: - (void)setIsSourceChangeInProgress:(BOOL)progress;	// 0x34f95101
- (void)setNextStartTime:(double)time forIndex:(unsigned)index;	// 0x34f95001
// declared property setter: - (void)setRepeatType:(unsigned)type;	// 0x34f958cd
// declared property setter: - (void)setRepresentedObject:(id)object;	// 0x34f9592d
// declared property setter: - (void)setShuffleType:(unsigned)type;	// 0x34f958ed
- (void)setSubsequenceFocused:(BOOL)focused currentItemIndex:(unsigned)index;	// 0x34f950dd
- (BOOL)shouldBeginPlaybackOfItem:(id)item error:(id *)error;	// 0x34f95245
- (BOOL)shouldReloadForChangeFromNetworkType:(int)networkType toNetworkType:(int)networkType2;	// 0x34f95521
- (void)shuffleItemsWithAnchor:(unsigned *)anchor;	// 0x34f950e1
// declared property getter: - (unsigned)shuffleType;	// 0x34f958dd
// declared property getter: - (BOOL)trackChangesCanEndPlayback;	// 0x34f95281
@end

