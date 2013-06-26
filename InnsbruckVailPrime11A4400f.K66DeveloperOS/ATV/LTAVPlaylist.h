/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataClient, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LTAVPlaylist : XXUnknownSuperclass {
	NSArray *_mediaList;	// 4 = 0x4
	int _sequentialIndex;	// 8 = 0x8
	unsigned _queueLength;	// 12 = 0xc
	BOOL _shuffleEnabled;	// 16 = 0x10
	BOOL _skipExplicit;	// 17 = 0x11
	BOOL _isPlaylistDynamic;	// 18 = 0x12
	int _repeatMode;	// 20 = 0x14
	ATVDataClient *_dataClient;	// 24 = 0x18
	NSString *_playlistName;	// 28 = 0x1c
	NSArray *_sourceTracks;	// 32 = 0x20
	id _changeMediaToken;	// 36 = 0x24
}
@property(retain, nonatomic) id changeMediaToken;	// G=0x44e451; S=0x44e461; @synthesize=_changeMediaToken
@property(assign) BOOL isPlaylistDynamic;	// G=0x44d9ad; S=0x44d99d; converted property
@property(readonly, retain) NSArray *mediaList;	// G=0x44d255; converted property
@property(assign) unsigned queueLength;	// G=0x18aefd; S=0x18aee9; converted property
@property(assign) int repeatMode;	// G=0x44d96d; S=0x44d95d; converted property
@property(assign) BOOL shuffleEnabled;	// G=0x44d94d; S=0x44d605; converted property
@property(assign) BOOL skipExplicit;	// G=0x44d98d; S=0x44d97d; converted property
- (id)initWithIndex:(long)index inMediaList:(id)mediaList;	// 0x44d045
- (id)initWithIndex:(long)index inMediaList:(id)mediaList playlistName:(id)name;	// 0x44cfdd
- (void).cxx_destruct;	// 0x44e475
- (id)_mediaForSequentialIndex:(long)sequentialIndex;	// 0x44e2bd
- (long)_nextSequentialIndexInDirection:(int)direction;	// 0x44e315
- (long)_sequentialIndex;	// 0x44e2ad
- (void)appendMediaList:(id)list;	// 0x44d331
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x44d269
- (id)changeMedia:(int)media;	// 0x44daf1
- (void)changeMedia:(int)media withCompletionHandler:(id)completionHandler;	// 0x44dbf9
// declared property getter: - (id)changeMediaToken;	// 0x44e451
- (void)clearBackToItems;	// 0x18a879
- (void)clearHistory;	// 0x18aad9
- (long)count;	// 0x44d9cd
- (id)currentMedia;	// 0x44d9ed
- (void)dealloc;	// 0x44d1cd
- (void)demoteAssetAtIndex:(unsigned)index;	// 0x18b391
- (void)enqueueItems:(id)items action:(int)action;	// 0x18af11
- (void)insertMedia:(id)media atIndex:(long)index;	// 0x44d411
- (BOOL)isEqual:(id)equal;	// 0x44dfbd
// converted property getter: - (BOOL)isPlaylistDynamic;	// 0x44d9ad
- (BOOL)isQueueEnabled;	// 0x18a3cd
- (BOOL)isQueueEstablishedForDataClient:(id)dataClient;	// 0x44e249
- (BOOL)isValidForDataClient:(id)dataClient;	// 0x18a3b1
- (long)mediaIndex;	// 0x44d9bd
// converted property getter: - (id)mediaList;	// 0x44d255
- (BOOL)moreItemsAvailable:(int)available;	// 0x44da79
- (void)moveObjectAtIndex:(unsigned)index toIndex:(unsigned)index2;	// 0x18b779
- (id)name;	// 0x44d939
- (id)nextMedia;	// 0x44da45
- (void)playExistingAssetAtIndex:(unsigned)index;	// 0x18bcd1
- (id)previouslyPlayedItems;	// 0x18a515
- (void)promoteAssetAtIndex:(unsigned)index;	// 0x18b24d
- (void)pruneHistory;	// 0x18be21
- (void)purge;	// 0x18a629
- (void)purgeTrackList;	// 0x44d569
- (id)queueAssetAtIndex:(int)index;	// 0x18add1
// converted property getter: - (unsigned)queueLength;	// 0x18aefd
- (id)queuedItems;	// 0x18a405
- (void)removeAssetAtIndex:(unsigned)index;	// 0x18ba39
- (void)removeAssetAtIndex:(unsigned)index suppressNotification:(BOOL)notification;	// 0x18ba4d
- (void)removeMedia:(id)media;	// 0x44d4a9
// converted property getter: - (int)repeatMode;	// 0x44d96d
// declared property setter: - (void)setChangeMediaToken:(id)token;	// 0x44e461
// converted property setter: - (void)setIsPlaylistDynamic:(BOOL)dynamic;	// 0x44d99d
// converted property setter: - (void)setQueueLength:(unsigned)length;	// 0x18aee9
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x44d95d
// converted property setter: - (void)setShuffleEnabled:(BOOL)enabled;	// 0x44d605
- (void)setShuffleEnabled:(BOOL)enabled preservingNowPlaying:(BOOL)playing;	// 0x44d619
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x44d97d
// converted property getter: - (BOOL)shuffleEnabled;	// 0x44d94d
// converted property getter: - (BOOL)skipExplicit;	// 0x44d98d
- (BOOL)supportsShufflePlayback;	// 0x44d921
- (void)swapObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x18b509
- (id)upNext:(unsigned *)next;	// 0x18ac6d
@end
