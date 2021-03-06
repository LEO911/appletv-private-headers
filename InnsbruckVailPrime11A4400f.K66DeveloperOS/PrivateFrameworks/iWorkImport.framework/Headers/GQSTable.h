/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import </libobjc.A.h>

@class GQDTTable, GQDTOverlapCell, GQDTCell;

@interface GQSTable : NSObject {
	GQDTTable *mTable;	// 4 = 0x4
	GQDTOverlapCell *mCurrentOverlapCell;	// 8 = 0x8
	GQDTCell *mLastCellRead;	// 12 = 0xc
	BOOL mIsStreaming;	// 16 = 0x10
	BOOL mAlwaysPutReadCellsInArray;	// 17 = 0x11
	long mCellCount;	// 20 = 0x14
	BOOL mIsCounting;	// 24 = 0x18
}
@property(assign) BOOL alwaysPutReadCellsInArray;	// G=0x33ce95fd; S=0x33ce960d; converted property
@property(retain) id currentOverlapCell;	// G=0x33ce9551; S=0x33ce9561; converted property
@property(retain) id lastCellRead;	// G=0x33ce959d; S=0x33ce95ad; converted property
- (id)initWithStreaming:(BOOL)streaming table:(id)table;	// 0x33ce9469
// converted property getter: - (BOOL)alwaysPutReadCellsInArray;	// 0x33ce95fd
- (long)column;	// 0x33ce9635
// converted property getter: - (id)currentOverlapCell;	// 0x33ce9551
- (void)dealloc;	// 0x33ce94ed
- (void)incrementCellPosition;	// 0x33ce9679
- (BOOL)isCounting;	// 0x33ce969d
- (BOOL)isStreaming;	// 0x33ce95dd
// converted property getter: - (id)lastCellRead;	// 0x33ce959d
- (long)row;	// 0x33ce961d
// converted property setter: - (void)setAlwaysPutReadCellsInArray:(BOOL)array;	// 0x33ce960d
// converted property setter: - (void)setCurrentOverlapCell:(id)cell;	// 0x33ce9561
- (void)setIsCountingCount:(BOOL)count;	// 0x33ce968d
// converted property setter: - (void)setLastCellRead:(id)read;	// 0x33ce95ad
- (void)skipCells:(long)cells;	// 0x33ce9651
- (id)table;	// 0x33ce95ed
@end

