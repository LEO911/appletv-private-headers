/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTable, WDTableRowProperties, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDTableRow : NSObject {
@private
	int mIndex;	// 4 = 0x4
	WDTable *mTable;	// 8 = 0x8
	WDTableRowProperties *mProperties;	// 12 = 0xc
	NSMutableArray *mCells;	// 16 = 0x10
}
- (id)initWithTable:(id)table at:(int)at;	// 0x35620949
- (id)addCell;	// 0x356213c9
- (id)addCellWithIndex:(int)index;	// 0x3577be31
- (id)cellAt:(int)at;	// 0x35626f35
- (int)cellCount;	// 0x35621611
- (id)cellIterator;	// 0x3577bddd
- (void)dealloc;	// 0x3558400d
- (int)index;	// 0x3577bd89
- (id)newCellIterator;	// 0x3577bd99
- (id)properties;	// 0x35620f1d
- (id)table;	// 0x356213a9
@end

