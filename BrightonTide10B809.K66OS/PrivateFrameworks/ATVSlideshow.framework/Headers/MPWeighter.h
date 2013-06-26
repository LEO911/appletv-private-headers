/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableIndexSet, NSMutableArray;

@interface MPWeighter : NSObject {
	int _totalWeight;	// 4 = 0x4
	NSMutableArray *_weights;	// 8 = 0x8
	NSMutableArray *_items;	// 12 = 0xc
	NSMutableArray *_constraints;	// 16 = 0x10
	NSMutableArray *_usageCount;	// 20 = 0x14
	NSMutableIndexSet *_ignoreIndices;	// 24 = 0x18
	BOOL _evenlyPickByID;	// 28 = 0x1c
	BOOL _ignoreBreaks;	// 29 = 0x1d
}
- (id)init;	// 0x33177239
- (void)addIndexToIgnore:(int)ignore;	// 0x331796bd
- (void)addItem:(id)item withWeight:(int)weight andContraints:(id)contraints;	// 0x33177409
- (id)allConstraints;	// 0x331796ed
- (id)allItems;	// 0x331796dd
- (id)allUsageCounts;	// 0x331796fd
- (void)clearAllItems;	// 0x33179799
- (void)clearIgnoreIndices;	// 0x3317969d
- (id)constraintsForItem:(id)item;	// 0x3317970d
- (int)count;	// 0x33179779
- (void)dealloc;	// 0x33177349
- (int)getRandomIndex;	// 0x33178ad1
- (int)getRandomIndexInSubset:(id)subset;	// 0x3317850d
- (int)getRandomIndexInSubset:(id)subset withPreviousTags:(id)previousTags;	// 0x33178699
- (int)getRandomIndexMeetingContraints:(id)contraints;	// 0x331774c5
- (int)getRandomIndexMeetingContraints:(id)contraints oneMatch:(BOOL)match;	// 0x331774d9
- (int)getRandomIndexWithNoBreaksForImageCount:(int)imageCount;	// 0x331776b5
- (id)getRandomItemMeetingNumberOfFaceLandscapes:(int)faceLandscapes facePortraits:(int)portraits imageLandscapes:(int)landscapes imagePortraits:(int)portraits4 vBreaks:(int)breaks hBreaks:(int)breaks6 movies:(int)movies fitsInExtraWide:(int)extraWide aspectRatios:(id)ratios previousTags:(id)tags;	// 0x331778f9
- (void)ignoreIndex:(int)index;	// 0x3317961d
- (void)ignoreIndices:(id)indices;	// 0x3317965d
- (id)ignoredIndices;	// 0x3317960d
- (id)imageCounts;	// 0x33179509
- (void)increaseUsageCountOfObjectAtIndex:(int)index;	// 0x3317914d
- (id)indicesEqualingConstraints:(id)constraints;	// 0x33179251
- (id)indicesMeetingConstraints:(id)constraints;	// 0x331791c1
- (BOOL)itemAtIndex:(int)index meetsContraints:(id)contraints;	// 0x33178e05
- (BOOL)itemAtIndex:(int)index meetsContraints:(id)contraints oneMatch:(BOOL)match;	// 0x33178e29
- (int)numberOfItemsWithImageCount:(int)imageCount;	// 0x33179435
- (void)setEvenlyPickByID:(BOOL)anId;	// 0x33179425
- (void)setIgnoreBreaks:(BOOL)breaks;	// 0x331795fd
@end
