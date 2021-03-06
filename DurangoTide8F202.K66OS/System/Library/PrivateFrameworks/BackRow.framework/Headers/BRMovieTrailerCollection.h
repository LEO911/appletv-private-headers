/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRBaseMediaCollection.h"

@class NSMutableArray;

@interface BRMovieTrailerCollection : BRBaseMediaCollection {
@private
	NSMutableArray *_mediaAssets;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediaAssets;	// G=0x328df3d9; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x328df6d5
- (void)addObject:(id)object;	// 0x328df5b1
- (id)artist;	// 0x328df559
- (id)artistForSorting;	// 0x328df525
- (id)collectionID;	// 0x328df639
- (id)collectionType;	// 0x328df66d
- (int)count;	// 0x328df58d
- (id)coverArt;	// 0x328df605
- (void)dealloc;	// 0x328df68d
- (long)duration;	// 0x328df489
- (BOOL)hasCoverArt;	// 0x328df5d1
- (BOOL)isCompilation;	// 0x328df3e9
- (BOOL)isLocal;	// 0x328df421
// converted property getter: - (id)mediaAssets;	// 0x328df3d9
- (id)mediaType;	// 0x328df455
- (id)primaryGenre;	// 0x328df3ed
- (id)title;	// 0x328df4f1
- (id)titleForSorting;	// 0x328df4bd
@end

