/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADTable, CMDrawableStyle, CMTableGridInfo, OADOrientedBounds;

@interface PMTableMapper : CMMapper {
	OADTable *mTable;	// 8 = 0x8
	CMDrawableStyle *mStyle;	// 12 = 0xc
	CMTableGridInfo *mGrid;	// 16 = 0x10
	OADOrientedBounds *mBounds;	// 20 = 0x14
}
- (id)initWithOadTable:(id)oadTable bounds:(id)bounds parent:(id)parent;	// 0x34b6e111
- (id)cellStyle;	// 0x34bc43a5
- (float)columnWidthAtIndex:(int)index state:(id)state;	// 0x34b6e661
- (void)dealloc;	// 0x34b6fab9
- (id)defaultCellFillForRow:(unsigned)row withState:(id)state;	// 0x34b6f70d
- (id)defaultCellFillWithState:(id)state;	// 0x34bc4351
- (id)grid;	// 0x34bc4341
- (void)mapAt:(id)at withState:(id)state;	// 0x34b6e1d9
- (void)mapColumnGridAt:(id)at withState:(id)state;	// 0x34b6e4d1
- (void)mapTablePropertiesWithState:(id)state;	// 0x34b6e381
- (unsigned)rowCount;	// 0x34b6f199
- (id)tableBorderStyle;	// 0x34b6f22d
@end

