/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, UICollectionView, UICollectionViewLayout;

__attribute__((visibility("hidden")))
@interface UICollectionViewData : NSObject {
	UICollectionView *_collectionView;	// 4 = 0x4
	UICollectionViewLayout *_layout;	// 8 = 0x8
	NSMutableDictionary *_screenPageDict;	// 12 = 0xc
	id *_globalItems;	// 16 = 0x10
	NSMutableDictionary *_supplementaryLayoutAttributes;	// 20 = 0x14
	NSMutableDictionary *_decorationLayoutAttributes;	// 24 = 0x18
	CGRect _validLayoutRect;	// 28 = 0x1c
	int _numItems;	// 44 = 0x2c
	int _numSections;	// 48 = 0x30
	int *_sectionItemCounts;	// 52 = 0x34
	CGSize _contentSize;	// 56 = 0x38
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	} _collectionViewDataFlags;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) BOOL layoutIsPrepared;	// G=0x32005341; 
+ (void)initialize;	// 0x320025a9
- (id)initWithCollectionView:(id)collectionView layout:(id)layout;	// 0x32002629
- (void)_loadEverything;	// 0x32002e19
- (void)_prepareToLoadData;	// 0x32002ad5
- (id)_screenPageForPoint:(CGPoint)point;	// 0x32002bd9
- (void)_setLayoutAttributes:(id)attributes atGlobalItemIndex:(int)globalItemIndex;	// 0x32002cb5
- (void)_setupMutableIndexPath:(id *)path forGlobalItemIndex:(int)globalItemIndex;	// 0x32002b3d
- (void)_updateItemCounts;	// 0x320028ad
- (void)_validateContentSize;	// 0x32002a69
- (void)_validateItemCounts;	// 0x32002a41
- (CGRect)collectionViewContentRect;	// 0x32003f7d
- (void)dealloc;	// 0x32002709
- (id)existingSupplementaryLayoutAttributesInSection:(int)section;	// 0x32004ccd
- (int)globalIndexForItemAtIndexPath:(id)indexPath;	// 0x32003ddd
- (id)indexPathForItemAtGlobalIndex:(int)globalIndex;	// 0x32003e25
- (void)invalidate:(BOOL)invalidate;	// 0x320027f5
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x320051a5
- (id)layoutAttributesForElementsInRect:(CGRect)rect;	// 0x320046d1
- (id)layoutAttributesForElementsInSection:(int)section;	// 0x32004355
- (id)layoutAttributesForGlobalItemIndex:(int)globalItemIndex;	// 0x32004325
- (id)layoutAttributesForItemAtIndexPath:(id)indexPath;	// 0x3200421d
- (id)layoutAttributesForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x32005009
// declared property getter: - (BOOL)layoutIsPrepared;	// 0x32005341
- (int)numberOfItems;	// 0x32003c21
- (int)numberOfItemsBeforeSection:(int)itemsBeforeSection;	// 0x32003d0d
- (int)numberOfItemsInSection:(int)section;	// 0x32003c49
- (int)numberOfSections;	// 0x32003bf9
- (CGRect)rectForDecorationElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x32004119
- (CGRect)rectForGlobalItemIndex:(int)globalItemIndex;	// 0x32003fd1
- (CGRect)rectForItemAtIndexPath:(id)indexPath;	// 0x32003f3d
- (CGRect)rectForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x32004015
- (void)validateLayoutInRect:(CGRect)rect;	// 0x32002f81
@end

