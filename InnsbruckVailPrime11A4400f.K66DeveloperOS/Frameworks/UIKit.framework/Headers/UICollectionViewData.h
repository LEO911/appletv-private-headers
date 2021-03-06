/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, UICollectionView, UICollectionViewLayout, NSMapTable;

__attribute__((visibility("hidden")))
@interface UICollectionViewData : NSObject {
	UICollectionView *_collectionView;	// 4 = 0x4
	UICollectionViewLayout *_layout;	// 8 = 0x8
	NSMapTable *_screenPageMap;	// 12 = 0xc
	id *_globalItems;	// 16 = 0x10
	NSMutableDictionary *_supplementaryLayoutAttributes;	// 20 = 0x14
	NSMutableDictionary *_decorationLayoutAttributes;	// 24 = 0x18
	NSMutableDictionary *_invalidatedSupplementaryViews;	// 28 = 0x1c
	CGRect _validLayoutRect;	// 32 = 0x20
	int _numItems;	// 48 = 0x30
	int _numSections;	// 52 = 0x34
	int *_sectionItemCounts;	// 56 = 0x38
	CGSize _contentSize;	// 60 = 0x3c
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	} _collectionViewDataFlags;	// 68 = 0x44
	NSMutableArray *_clonedLayoutAttributes;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) NSArray *clonedLayoutAttributes;	// G=0x2f8d6c71; @synthesize=_clonedLayoutAttributes
@property(readonly, assign, nonatomic) BOOL layoutIsPrepared;	// G=0x2f8d6c5d; 
+ (void)initialize;	// 0x2f8d3445
- (id)initWithCollectionView:(id)collectionView layout:(id)layout;	// 0x2f8d3501
- (void)_loadEverything;	// 0x2f8d41e5
- (void)_prepareToLoadData;	// 0x2f8d3db1
- (id)_screenPageForPoint:(CGPoint)point;	// 0x2f8d3eb5
- (void)_setLayoutAttributes:(id)attributes atGlobalItemIndex:(int)globalItemIndex;	// 0x2f8d4001
- (void)_setupMutableIndexPath:(id *)path forGlobalItemIndex:(int)globalItemIndex;	// 0x2f8d3e19
- (void)_updateItemCounts;	// 0x2f8d3b81
- (void)_validateContentSize;	// 0x2f8d3d45
- (void)_validateItemCounts;	// 0x2f8d3d1d
// declared property getter: - (id)clonedLayoutAttributes;	// 0x2f8d6c71
- (CGRect)collectionViewContentRect;	// 0x2f8d5475
- (void)dealloc;	// 0x2f8d365d
- (id)existingSupplementaryLayoutAttributes;	// 0x2f8d6659
- (id)existingSupplementaryLayoutAttributesInSection:(int)section;	// 0x2f8d62fd
- (int)globalIndexForItemAtIndexPath:(id)indexPath;	// 0x2f8d52d1
- (id)indexPathForItemAtGlobalIndex:(int)globalIndex;	// 0x2f8d5319
- (void)invalidate:(BOOL)invalidate;	// 0x2f8d3abd
- (void)invalidateSupplementaryViews:(id)views;	// 0x2f8d3771
- (id)knownDecorationElementKinds;	// 0x2f8d68dd
- (id)knownSupplementaryElementKinds;	// 0x2f8d6841
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f8d6ac1
- (id)layoutAttributesForElementsInRect:(CGRect)rect;	// 0x2f8d62d1
- (id)layoutAttributesForElementsInRect:(CGRect)rect validateLayout:(BOOL)layout;	// 0x2f8d5c55
- (id)layoutAttributesForElementsInSection:(int)section;	// 0x2f8d5885
- (id)layoutAttributesForGlobalItemIndex:(int)globalItemIndex;	// 0x2f8d5855
- (id)layoutAttributesForItemAtIndexPath:(id)indexPath;	// 0x2f8d574d
- (id)layoutAttributesForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f8d6925
// declared property getter: - (BOOL)layoutIsPrepared;	// 0x2f8d6c5d
- (int)numberOfItems;	// 0x2f8d5115
- (int)numberOfItemsBeforeSection:(int)itemsBeforeSection;	// 0x2f8d5201
- (int)numberOfItemsInSection:(int)section;	// 0x2f8d513d
- (int)numberOfSections;	// 0x2f8d50ed
- (CGRect)rectForDecorationElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f8d5625
- (CGRect)rectForGlobalItemIndex:(int)globalItemIndex;	// 0x2f8d54bd
- (CGRect)rectForItemAtIndexPath:(id)indexPath;	// 0x2f8d5435
- (CGRect)rectForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f8d54fd
- (void)validateLayoutInRect:(CGRect)rect;	// 0x2f8d4345
- (void)validateSupplementaryViews;	// 0x2f8d38f9
@end

