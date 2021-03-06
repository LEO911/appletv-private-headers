/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableIndexSet;

@interface MPWeighter : NSObject {
	int _totalWeight;	// 4 = 0x4
	NSMutableArray *_weights;	// 8 = 0x8
	NSMutableArray *_items;	// 12 = 0xc
	NSMutableArray *_constraints;	// 16 = 0x10
	NSMutableArray *_usageCount;	// 20 = 0x14
	NSMutableIndexSet *_ignoreIndices;	// 24 = 0x18
	BOOL _evenlyPickByID;	// 28 = 0x1c
}
- (id)init;	// 0x31494e69
- (void)addItem:(id)item withWeight:(int)weight andContraints:(id)contraints;	// 0x31495041
- (id)allConstraints;	// 0x314962ad
- (id)allItems;	// 0x3149629d
- (id)allUsageCounts;	// 0x314962bd
- (void)clearAllItems;	// 0x314962ed
- (int)count;	// 0x314962cd
- (void)dealloc;	// 0x31494f75
- (int)getRandomIndex;	// 0x31495889
- (int)getRandomIndexInSubset:(id)subset;	// 0x31495705
- (int)getRandomIndexMeetingContraints:(id)contraints;	// 0x314950fd
- (id)getRandomItemMeetingNumberOfFaceLandscapes:(int)faceLandscapes facePortraits:(int)portraits imageLandscapes:(int)landscapes imagePortraits:(int)portraits4 movies:(int)movies fitsInExtraWide:(int)extraWide;	// 0x314952b5
- (void)ignoreIndices:(id)indices;	// 0x31496259
- (id)ignoredIndices;	// 0x31496249
- (id)imageCounts;	// 0x31496155
- (void)increaseUsageCountOfObjectAtIndex:(int)index;	// 0x31495e75
- (id)indicesEqualingConstraints:(id)constraints;	// 0x31495f6d
- (id)indicesMeetingConstraints:(id)constraints;	// 0x31495ee9
- (BOOL)itemAtIndex:(int)index meetsContraints:(id)contraints;	// 0x31495b59
- (void)setEvenlyPickByID:(BOOL)anId;	// 0x31496145
@end

