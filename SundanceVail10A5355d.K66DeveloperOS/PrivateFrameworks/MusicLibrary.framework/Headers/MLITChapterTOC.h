/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLChapterTOC.h"


@interface MLITChapterTOC : MLChapterTOC {
	unsigned _totalTimeInMS;	// 4 = 0x4
	ChapterData *_chapterDataRef;	// 8 = 0x8
	unsigned *_picCookieIndexMap;	// 12 = 0xc
	unsigned *_urlCookieIndexMap;	// 16 = 0x10
	unsigned *_nameCookieIndexMap;	// 20 = 0x14
}
@property(readonly, assign) ChapterData *chapterDataRef;	// G=0x354985bd; converted property
@property(readonly, assign) unsigned totalTimeInMS;	// G=0x35498969; converted property
+ (unsigned **)_chapterDataCookieIndexMapForProperty:(int)property ofChapterTOC:(id)chapterTOC;	// 0x35498671
+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)flattenedChapterData usingBlock:(id)block;	// 0x35498f41
+ (id)imageCacheKeyForTrackWithPID:(long long)pid startTimeMS:(unsigned)ms;	// 0x35498ee1
- (id)initWithChapterDataRef:(ChapterData *)chapterDataRef totalTimeInMS:(unsigned)ms;	// 0x35498495
- (unsigned *)_cachedCookieIndexMapForProperty:(int)property createIfNecessary:(BOOL)necessary;	// 0x35498761
- (id)bestImageDataForSize:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x35498eb1
// converted property getter: - (ChapterData *)chapterDataRef;	// 0x354985bd
- (unsigned)chapterIndexForGroupIndex:(unsigned)groupIndex groupingProperty:(int)property;	// 0x354988f9
- (unsigned)countOfChapters;	// 0x35498655
- (unsigned)countOfGroupsForProperty:(int)property;	// 0x35498895
- (void)dealloc;	// 0x354985cd
- (unsigned)durationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x35498979
- (id)getImageWithArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x35498df5
- (unsigned)groupIndexAtTimeLocationInMS:(unsigned)ms groupingProperty:(int)property;	// 0x35498a1d
- (unsigned)groupIndexForChapterIndex:(unsigned)chapterIndex groupingProperty:(int)property;	// 0x35498929
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x35498e79
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size artworkChapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x35498d55
- (unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)index;	// 0x35498a81
- (unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x35498a51
- (id)titlePropertyOfChapterAtIndex:(unsigned)index;	// 0x35498a9d
// converted property getter: - (unsigned)totalTimeInMS;	// 0x35498969
- (id)urlPropertyOfChapterAtIndex:(unsigned)index;	// 0x35498c35
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned)index;	// 0x35498b59
- (id)urlTitleTrimmingCharacterSet;	// 0x35498b3d
@end
