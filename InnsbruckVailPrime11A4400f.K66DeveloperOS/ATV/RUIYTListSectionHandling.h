/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol RUIYTListSectionHandling <NSObject>
@optional
- (BOOL)isItemPlayableAtIndex:(id)index;
@required
- (id)itemForIndex:(id)index;
@optional
- (float)itemHeightForIndex:(id)index;
- (id)itemIDForIndex:(id)index;
@required
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;
@optional
- (void)moreAssetsAvailable:(id)available forSection:(unsigned)section;
- (BOOL)moreAssetsFailed:(id)failed forSection:(unsigned)section;
- (id)previewForIndex:(id)index defer:(BOOL *)defer;
@end

