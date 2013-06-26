/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaCollection.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMovieTrailerCollection : BRBaseMediaCollection {
	NSMutableArray *_mediaAssets;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediaAssets;	// G=0x2f6541; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x2f6375
- (void)addObject:(id)object;	// 0x2f64f9
- (id)artist;	// 0x2f6555
- (id)artistForSorting;	// 0x2f6591
- (id)collectionID;	// 0x2f6449
- (id)collectionType;	// 0x2f642d
- (int)count;	// 0x2f6519
- (id)coverArt;	// 0x2f6485
- (void)dealloc;	// 0x2f63e1
- (long)duration;	// 0x2f6645
- (BOOL)hasCoverArt;	// 0x2f64c1
- (BOOL)isCompilation;	// 0x2f6551
- (BOOL)isLocal;	// 0x2f66bd
// converted property getter: - (id)mediaAssets;	// 0x2f6541
- (id)mediaType;	// 0x2f6681
- (id)primaryGenre;	// 0x2f66f5
- (id)title;	// 0x2f65cd
- (id)titleForSorting;	// 0x2f6609
@end
