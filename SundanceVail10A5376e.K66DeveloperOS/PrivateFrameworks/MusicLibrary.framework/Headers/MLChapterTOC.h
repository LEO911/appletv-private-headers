/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


@interface MLChapterTOC : NSObject {
}
- (id)artworkCacheIDForChapterIndex:(unsigned)chapterIndex;	// 0x34862225
- (id)artworkCacheIDForTimeInMS:(unsigned)ms;	// 0x34862221
- (id)bestImageDataForSize:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x3486222d
- (ChapterData *)chapterDataRef;	// 0x34862231
- (unsigned)chapterIndexAtTimeLocationInMS:(unsigned)ms;	// 0x34862191
- (unsigned)chapterIndexForGroupIndex:(unsigned)groupIndex groupingProperty:(int)property;	// 0x3486217d
- (unsigned)countOfChapters;	// 0x34862159
- (unsigned)countOfGroupsForProperty:(int)property;	// 0x34862179
- (unsigned)durationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x34862185
- (unsigned)groupIndexAtTimeLocationInMS:(unsigned)ms groupingProperty:(int)property;	// 0x34862189
- (unsigned)groupIndexForChapterIndex:(unsigned)chapterIndex groupingProperty:(int)property;	// 0x34862181
- (BOOL)hasDataForProperty:(int)property;	// 0x3486215d
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x34862229
- (unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)index;	// 0x34862211
- (unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x3486218d
- (id)titlePropertyOfChapterAtIndex:(unsigned)index;	// 0x34862215
- (id)urlPropertyOfChapterAtIndex:(unsigned)index;	// 0x3486221d
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned)index;	// 0x34862219
@end

