/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLITChapterTOC.h"

@class ML3Track;

@interface ML3ChapterTOC : MLITChapterTOC {
	ML3Track *_track;	// 24 = 0x18
}
- (id)initWithChapterDataRef:(ChapterData *)chapterDataRef track:(id)track;	// 0x3407439d
- (void).cxx_destruct;	// 0x34074895
- (id)artworkCacheIDForChapterIndex:(unsigned)chapterIndex;	// 0x340745dd
- (id)artworkCacheIDForTimeInMS:(unsigned)ms;	// 0x34074455
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size artworkChapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x34074629
@end
