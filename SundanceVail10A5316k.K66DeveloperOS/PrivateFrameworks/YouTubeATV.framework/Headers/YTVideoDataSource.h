/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSError, NSMutableArray, YTSearchRequest;

@interface YTVideoDataSource : NSObject {
	BOOL _hasLoaded;	// 4 = 0x4
	NSMutableArray *_videos;	// 8 = 0x8
	YTSearchRequest *_searchRequest;	// 12 = 0xc
	unsigned _startIndex;	// 16 = 0x10
	unsigned _videosRemaining;	// 20 = 0x14
	NSError *_lastError;	// 24 = 0x18
}
@property(readonly, assign) BOOL hasLoaded;	// G=0x35e69941; converted property
@property(readonly, retain) NSError *lastError;	// G=0x35e69aad; converted property
@property(readonly, retain) NSMutableArray *videos;	// G=0x35e698c9; converted property
@property(readonly, assign) unsigned videosRemaining;	// G=0x35e69abd; converted property
+ (void)saveDataSources;	// 0x35e6958d
+ (void)setShouldRemoveOldDefaults;	// 0x35e696fd
+ (id)sharedDataSource;	// 0x35e69639
+ (BOOL)shouldRemoveOldDefaults;	// 0x35e6970d
- (id)init;	// 0x35e6971d
- (void)_clearVideos;	// 0x35e69fa9
- (id)_deprecatedVideosDefaultsKey;	// 0x35e69c4d
- (void)_didChange;	// 0x35e69d49
- (void)_saveToDefaults;	// 0x35e69c91
- (void)_searchRequestLoadingStatusDidChange;	// 0x35e69d05
- (void)_setLastError:(id)error;	// 0x35e69d8d
- (void)_setVideos:(id)videos;	// 0x35e69e25
- (void)addVideos:(id)videos toTop:(BOOL)top;	// 0x35e69e7d
- (void)dealloc;	// 0x35e697f5
// converted property getter: - (BOOL)hasLoaded;	// 0x35e69941
- (BOOL)isLoading;	// 0x35e6991d
// converted property getter: - (id)lastError;	// 0x35e69aad
- (void)loadFromDefaults;	// 0x35e69951
- (void)loadMore;	// 0x35e69acd
- (unsigned)maxVideosToSave;	// 0x35e69b51
- (void)reloadData;	// 0x35e698d9
- (void)removeAllVideos;	// 0x35e69c21
- (void)removeVideoAtIndex:(int)index;	// 0x35e69be5
- (void)searchRequest:(id)request didFailWithError:(id)error;	// 0x35e69bd1
- (void)searchRequest:(id)request receivedVideos:(id)videos startIndex:(unsigned)index videosRemaining:(unsigned)remaining;	// 0x35e69b6d
// converted property getter: - (id)videos;	// 0x35e698c9
// converted property getter: - (unsigned)videosRemaining;	// 0x35e69abd
@end

