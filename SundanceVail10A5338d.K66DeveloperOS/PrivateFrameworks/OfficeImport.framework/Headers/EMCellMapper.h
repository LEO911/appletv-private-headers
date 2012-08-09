/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class EDReference;

@interface EMCellMapper : CMMapper {
	EDCellHeader *edCell;	// 8 = 0x8
	EDReference *edMergedCellReference;	// 12 = 0xc
	int rowNumber;	// 16 = 0x10
	int firstColumn;	// 20 = 0x14
	int lastColumn;	// 24 = 0x18
	int columnSpan;	// 28 = 0x1c
	BOOL firstCellFlag;	// 32 = 0x20
	BOOL spreadLeftFlag;	// 33 = 0x21
	double columnWidth;	// 36 = 0x24
}
@property(readonly, assign) int columnSpan;	// G=0x33b39eb5; converted property
@property(readonly, assign) double columnWidth;	// G=0x33b39e8d; converted property
@property(assign) int firstColumn;	// G=0x33b39e6d; S=0x33b39e7d; converted property
@property(assign) int lastColumn;	// G=0x33a0fdb5; S=0x33a10015; converted property
- (id)initWithEDCell:(EDCellHeader *)edcell rowInfo:(EDRowInfo *)info parent:(id)parent state:(id)state;	// 0x33a0fbe1
- (id)initWithParent:(id)parent;	// 0x33a0fce9
- (void)adjustColumnSpanForGrid:(double *)grid columnCount:(unsigned)count nextCell:(EDCellHeader *)cell withState:(id)state;	// 0x33a10029
// converted property getter: - (int)columnSpan;	// 0x33b39eb5
// converted property getter: - (double)columnWidth;	// 0x33b39e8d
// converted property getter: - (int)firstColumn;	// 0x33b39e6d
- (BOOL)isCellEmpty;	// 0x33a0ffe5
- (BOOL)isCellMerged;	// 0x33a0fdc9
- (BOOL)isCellSpreading:(id)spreading;	// 0x33a0fe5d
- (BOOL)isFirstCell;	// 0x33b39ec5
// converted property getter: - (int)lastColumn;	// 0x33a0fdb5
- (void)mapAt:(id)at withState:(id)state;	// 0x33b39ed5
- (void)mapAt:(id)at withState:(id)state height:(double)height;	// 0x33a10131
- (id)mapHyperlinkAt:(id)at;	// 0x33b39f01
- (void)mapRowColSpansAt:(id)at withState:(id)state;	// 0x33a10519
- (void)resetColumnSpan:(int)span;	// 0x33b39ea5
- (void)setFirstCellFlag;	// 0x33a0fda1
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x33b39e7d
// converted property setter: - (void)setLastColumn:(int)column;	// 0x33a10015
@end
