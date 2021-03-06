/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EDRowBlock : NSObject {
	CFDataRef mPackedData;	// 4 = 0x4
	CFDataRef mCellOffsets;	// 8 = 0x8
}
@property(assign) unsigned index;	// G=0x34aa02f9; S=0x34a89895; converted property
+ (id)rowBlock;	// 0x34a897c9
- (id)init;	// 0x34a89811
- (EDCellHeader *)addCellWithColumnNumber:(unsigned)columnNumber type:(int)type isFormulaCell:(bool)cell rowInfo:(EDRowInfo **)info rowBlocks:(id)blocks;	// 0x34a89ec5
- (EDRowInfo *)addRowInfoWithRowNumber:(unsigned)rowNumber cellCountHint:(unsigned)hint;	// 0x34a89ae1
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x34c089b9
- (EDCellHeader *)cellAtIndex:(unsigned)index rowInfo:(EDRowInfo *)info;	// 0x34a951f5
- (EDCellHeader *)cellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x34a99c6d
- (void)checkCellOffsetOrThrow:(unsigned long)aThrow;	// 0x34ba2f39
- (void)dealloc;	// 0x34a9d449
- (void)doneWithContent;	// 0x34a9d489
- (unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x34a99d01
- (unsigned)firstRowNumber;	// 0x34a8a5f5
- (void)incrementIndex;	// 0x34c08a1d
// converted property getter: - (unsigned)index;	// 0x34aa02f9
- (unsigned)indexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x34a99cad
- (unsigned)indexOfRowInfoWithRowNumber:(unsigned)rowNumber;	// 0x34a89a59
- (unsigned)lastRowNumber;	// 0x34a95191
- (void)removeCellAtIndex:(unsigned)index rowInfo:(EDRowInfo **)info;	// 0x34ba2de5
- (unsigned)rowCount;	// 0x34aa1a3d
- (EDRowInfo *)rowInfoAtIndex:(unsigned)index;	// 0x34a8a619
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber;	// 0x34a899e9
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber createIfNil:(bool)aNil;	// 0x34a899fd
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x34a89895
- (unsigned long)startOfCellsOrThrow;	// 0x34a8a2ed
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x34c088dd
@end

