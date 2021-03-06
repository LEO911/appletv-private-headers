/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <GraphicsServices/NSIndexPath.h>


@interface NSIndexPath (UITableView)
@property(readonly, assign, nonatomic) int row;	// G=0x2f411dcd; 
@property(readonly, assign, nonatomic) int section;	// G=0x2f40c299; 
+ (id)indexPathForRow:(int)row inSection:(int)section;	// 0x2f40c249
// declared property getter: - (int)row;	// 0x2f411dcd
// declared property getter: - (int)section;	// 0x2f40c299
@end

@interface NSIndexPath (UICollectionViewAdditions)
@property(readonly, assign, nonatomic) int item;	// G=0x2f8bf231; 
+ (id)indexPathForItem:(int)item inSection:(int)section;	// 0x2f8bf221
// declared property getter: - (int)item;	// 0x2f8bf231
@end

