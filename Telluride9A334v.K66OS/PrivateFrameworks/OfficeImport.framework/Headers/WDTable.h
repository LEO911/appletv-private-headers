/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDBlock.h"

@class NSMutableArray, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTable : WDBlock {
@private
	WDTableProperties *mProperties;	// 8 = 0x8
	NSMutableArray *mRows;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x3561fd11
- (id)addRow;	// 0x356208b5
- (int)blockType;	// 0x35626425
- (id)cellIterator;	// 0x35776ba9
- (void)clearProperties;	// 0x35776ccd
- (void)clearRows;	// 0x35776ca1
- (void)dealloc;	// 0x35583e71
- (int)nestingLevel;	// 0x356221fd
- (id)newCellIterator;	// 0x35776b4d
- (id)newRowIterator;	// 0x35776c09
- (id)newRunIterator;	// 0x35776a91
- (id)properties;	// 0x356201a9
- (id)rowAt:(int)at;	// 0x35626f11
- (int)rowCount;	// 0x35620b3d
- (id)rowIterator;	// 0x35776c4d
- (id)runIterator;	// 0x35776aed
@end
