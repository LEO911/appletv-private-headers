/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRDeletable.h"
#import "MEITunesMediaAsset.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MEITunesMediaAsset : XXUnknownSuperclass <BRDeletable> {
	unsigned _objectID;	// 8 = 0x8
	unsigned _trackLocationPrepped : 1;	// 12 = 0xc
	CFDictionaryRef _infoDictionary;	// 16 = 0x10
	NSString *_assetID;	// 20 = 0x14
}
@property(readonly, retain) NSString *assetID;	// G=0x10985; converted property
@property(assign) unsigned bookmarkTimeInMS;	// G=0x10a75; S=0x109f9; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x10811; S=0x10fd1; converted property
@property(readonly, assign) CFDictionaryRef infoDictionary;	// G=0x100d9; converted property
@property(assign) float userStarRating;	// G=0x110a1; S=0xf4ed; converted property
+ (void)initialize;	// 0x10c35
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider withTrackInfo:(TrackInfo *)trackInfo;	// 0x10bf9
+ (id)mediaAssetWithMediaAsset:(id)mediaAsset;	// 0x10b85
- (id)initWithMediaProvider:(id)mediaProvider trackInfo:(TrackInfo *)info;	// 0x10b29
- (id)artist;	// 0x108dd
- (id)artistCollection;	// 0x10241
- (id)artistForSorting;	// 0x108c5
// converted property getter: - (id)assetID;	// 0x10985
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x10a75
- (id)broadcaster;	// 0x10ff1
- (BOOL)canBeDeleted;	// 0x10d75
- (BOOL)canBePlayedInShuffle;	// 0xfe4d
- (id)cast;	// 0x10879
- (BOOL)closedCaptioned;	// 0x110d5
- (id)collections;	// 0x101a1
- (id)composer;	// 0x11381
- (id)composerForSorting;	// 0x113d9
- (id)copyright;	// 0xf4dd
- (id)coverArt;	// 0xf4e1
- (id)coverArtForBookmarkTimeInMS:(unsigned)ms;	// 0xf4e5
- (id)coverArtID;	// 0x108f5
- (id)dateAcquired;	// 0x10699
- (id)dateAcquiredString;	// 0xfe91
- (id)dateCreated;	// 0x1064d
- (id)datePublished;	// 0x105a1
- (id)datePublishedString;	// 0xfe6d
- (void)dealloc;	// 0x10d05
- (void)delete;	// 0x10e7d
- (id)description;	// 0xfeb5
- (id)directors;	// 0x10841
- (BOOL)dolbyDigital;	// 0x11139
- (long)duration;	// 0x10f8d
- (unsigned)episode;	// 0x10349
- (id)episodeNumber;	// 0x11049
- (id)genres;	// 0x10421
- (id)grouping;	// 0x11741
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x10811
- (BOOL)hasCoverArt;	// 0x106e5
- (BOOL)hasVideoContent;	// 0x11431
- (id)imageProxy;	// 0xfc95
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0xfc41
- (void)incrementPerformanceCount;	// 0x107a9
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x10769
// converted property getter: - (CFDictionaryRef)infoDictionary;	// 0x100d9
- (BOOL)isAvailable;	// 0xfd2d
- (BOOL)isCheckedOut;	// 0x11571
- (BOOL)isDisabled;	// 0x10281
- (BOOL)isDownload;	// 0xfc19
- (BOOL)isExplicit;	// 0xfcd5
- (BOOL)isHD;	// 0x102a5
- (BOOL)isLocal;	// 0xfdfd
- (BOOL)isProtectedContent;	// 0x1144d
- (BOOL)isWidescreen;	// 0x11291
- (void)logDescription;	// 0x10e71
- (id)mediaCollections;	// 0xf4e9
- (id)mediaDescription;	// 0x10f35
- (id)mediaSummary;	// 0x10e89
- (id)mediaType;	// 0x1055d
- (id)mediaURL;	// 0x1073d
- (long)parentalControlRatingRank;	// 0x114f9
- (long)parentalControlRatingSystemID;	// 0x11535
- (long)performanceCount;	// 0x107e9
- (int)physicalMediaID;	// 0x103e1
- (id)playbackRightsOwner;	// 0xf4fd
- (PlaylistItem *)playlistItem;	// 0x1146d
- (id)previewURL;	// 0x10711
- (id)primaryCollection;	// 0x10261
- (int)primaryCollectionOrder;	// 0x10401
- (id)primaryCollectionTitle;	// 0x11699
- (id)primaryGenre;	// 0x10499
- (id)primaryGenreAsString;	// 0x1046d
- (id)producers;	// 0x1085d
- (id)publisher;	// 0x11309
- (id)rating;	// 0xf4f1
- (void)resetCachedData;	// 0x115c9
- (id)resolution;	// 0x11191
- (unsigned)season;	// 0x10369
- (id)seriesName;	// 0x103b5
- (id)seriesNameForSorting;	// 0x10389
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x109f9
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x10fd1
// converted property setter: - (void)setUserStarRating:(float)rating;	// 0xf4ed
- (id)sourceID;	// 0x105f1
- (float)starRating;	// 0xf4f5
- (unsigned)startTimeInMS;	// 0x109dd
- (unsigned)stopTimeInMS;	// 0x109b1
- (id)title;	// 0x108ad
- (id)titleForSorting;	// 0x10895
- (TrackData *)trackData;	// 0x10135
- (TrackInfo *)trackInfo;	// 0x11489
- (id)trackInfoValue;	// 0x10105
// converted property getter: - (float)userStarRating;	// 0x110a1
- (void)willBeDeleted;	// 0x10aad
@end

@interface MEITunesMediaAsset (Private)
- (id)_artistForSorting:(BOOL)sorting;	// 0x117d9
- (id)_assetID:(TrackInfo *)anId;	// 0xf881
- (id)_assetInfoDictionary;	// 0xf9d1
- (void)_coverArtOnMainThread:(id)thread;	// 0x119a9
- (id)_coverArtWithBookmarkTimeInMS:(unsigned)ms trackInfo:(TrackInfo *)info;	// 0xf9fd
- (BOOL)_hasBeenPlayed:(TrackInfo *)played;	// 0xf505
- (void)_hasCoverArt:(id)art;	// 0x11a65
- (CFDictionaryRef)_infoDictionary:(TrackInfo *)dictionary;	// 0x11d81
- (id)_infoDictionaryCollectionForKey:(id)key;	// 0xfb55
- (id)_mediaType:(TrackInfo *)type;	// 0xf999
- (id)_mediaURL:(TrackInfo *)url;	// 0xf51d
- (long)_performanceCount:(TrackInfo *)count;	// 0xf511
- (void)_prepareTrackLocation:(TrackInfo *)location;	// 0x11789
- (id)_primaryGenreAsString:(TrackInfo *)string;	// 0x11cfd
- (id)_seriesName:(TrackInfo *)name;	// 0x11cb1
- (id)_seriesNameForSorting:(TrackInfo *)sorting;	// 0x11c65
- (BOOL)_shouldPerformanceRestart:(unsigned)restart trackInfo:(TrackInfo *)info;	// 0xf941
- (id)_titleForSorting:(BOOL)sorting;	// 0x118c5
- (BOOL)_trackInfoHasCoverArt:(TrackInfo *)art;	// 0x11ad1
- (void)skip;	// 0xf501
@end
