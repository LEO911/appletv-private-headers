/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTMenuController.h"
#import "RUIYTCollectionMenuController.h"

@class NSMutableDictionary;

@interface RUIYTCollectionMenuController : RUIYTMenuController {
	NSMutableDictionary *_assetsInfoCache;	// 152 = 0x98
	int _spinningRow;	// 156 = 0x9c
}
- (id)init;	// 0x1c395
- (BOOL)brEventAction:(id)action;	// 0x1bcdd
- (id)cachedResultsForCollectionItem:(id)collectionItem resultsFound:(BOOL *)found;	// 0x1c279
- (void)clearCachedResultsForCollectionItem:(id)collectionItem;	// 0x1c0c5
- (void)dealloc;	// 0x1c34d
- (long)itemCount;	// 0x1c0a1
- (id)itemForRow:(long)row;	// 0x1beb5
- (void)itemSelected:(long)selected;	// 0x1bf45
- (id)previewControlForItem:(long)item;	// 0x1bd79
- (void)setCachedResults:(id)results forCollectionItem:(id)collectionItem timeInterval:(double)interval;	// 0x1c141
- (id)titleForRow:(long)row;	// 0x1c029
@end

@interface RUIYTCollectionMenuController (Private)
- (id)_collectionItemAtIndex:(int)index;	// 0x1bcad
- (BOOL)_loadResultsForCollectionItem:(id)collectionItem;	// 0x1bbe5
@end

