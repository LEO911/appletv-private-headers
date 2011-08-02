/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADTableRow, OADTable;

__attribute__((visibility("hidden")))
@interface PMTableRowMapper : CMMapper {
@private
	OADTable *mTable;	// 8 = 0x8
	OADTableRow *mRow;	// 12 = 0xc
	unsigned mRowIndex;	// 16 = 0x10
}
- (id)initWithOadTable:(id)oadTable rowIndex:(unsigned)index parent:(id)parent;	// 0x32c17ef1
- (unsigned)cellCount;	// 0x32c189e9
- (float)height;	// 0x32c19085
- (void)mapAt:(id)at withState:(id)state;	// 0x32c17f5d
@end
