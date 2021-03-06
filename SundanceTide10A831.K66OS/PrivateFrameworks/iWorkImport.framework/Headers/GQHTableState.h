/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQDTTable;

@interface GQHTableState : NSObject {
	int mPrevRowIndex;	// 4 = 0x4
	int mPrevColumnIndex;	// 8 = 0x8
	GQDTTable *mTable;	// 12 = 0xc
	vector<unsigned short, std::allocator<unsigned short> > *mCellCountInColumns;	// 16 = 0x10
	int mGroupLevel;	// 20 = 0x14
	bool mSplitTable;	// 24 = 0x18
	double mCurrentTablePosition;	// 28 = 0x1c
	double mLastAttachmentPosition;	// 36 = 0x24
	long mSplitTableIndex;	// 44 = 0x2c
	double mOriginalTableHeight;	// 48 = 0x30
}
@property(assign) int groupLevel;	// G=0x35d22e55; S=0x35d22e65; converted property
@property(assign) double lastAttachmentPosition;	// G=0x35d22f25; S=0x35d22f3d; converted property
@property(assign) double originalTableHeight;	// G=0x35d22f51; S=0x35d22f69; converted property
@property(assign) bool splitTable;	// G=0x35d22e75; S=0x35d22e89; converted property
@property(retain) id table;	// G=0x35d22d95; S=0x35d22da5; converted property
- (id)init;	// 0x35d22c99
- (void)addRowHeight:(float)height;	// 0x35d22f01
- (vector<unsigned short, std::allocator<unsigned short> > *)cellCountInColumns;	// 0x35d22e45
- (double)currentTablePosition;	// 0x35d22ee9
- (void)dealloc;	// 0x35d22ce9
// converted property getter: - (int)groupLevel;	// 0x35d22e55
// converted property getter: - (double)lastAttachmentPosition;	// 0x35d22f25
- (long)nextSplitTableIndex;	// 0x35d22ed1
// converted property getter: - (double)originalTableHeight;	// 0x35d22f51
- (int)prevColumnIndex;	// 0x35d22d65
- (int)prevRowIndex;	// 0x35d22d55
// converted property setter: - (void)setGroupLevel:(int)level;	// 0x35d22e65
// converted property setter: - (void)setLastAttachmentPosition:(double)position;	// 0x35d22f3d
// converted property setter: - (void)setOriginalTableHeight:(double)height;	// 0x35d22f69
- (void)setPrevRowIndex:(int)index columnIndex:(int)index2;	// 0x35d22d75
// converted property setter: - (void)setSplitTable:(bool)table;	// 0x35d22e89
- (void)setSplitTableIndex:(long)index;	// 0x35d22ec1
// converted property setter: - (void)setTable:(id)table;	// 0x35d22da5
// converted property getter: - (bool)splitTable;	// 0x35d22e75
// converted property getter: - (id)table;	// 0x35d22d95
@end

