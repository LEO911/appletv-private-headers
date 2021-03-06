/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSTextBlock.h"

@class NSTextTable;

__attribute__((visibility("hidden")))
@interface NSTextTableBlock : NSTextBlock {
	NSTextTable *_table;	// 32 = 0x20
	int _rowNum;	// 36 = 0x24
	int _colNum;	// 40 = 0x28
	int _rowSpan;	// 44 = 0x2c
	int _colSpan;	// 48 = 0x30
	void *_tableBlockPrimary;	// 52 = 0x34
	void *_tableBlockSecondary;	// 56 = 0x38
}
@property(readonly, assign) int rowSpan;	// G=0x37585ccd; converted property
@property(readonly, retain) NSTextTable *table;	// G=0x37585cad; converted property
+ (void)initialize;	// 0x37585731
- (id)initWithCoder:(id)coder;	// 0x37585a01
- (id)initWithTable:(id)table startingRow:(int)row rowSpan:(int)span startingColumn:(int)column columnSpan:(int)span5;	// 0x37585771
- (void)_setColumnSpan:(int)span;	// 0x37585d0d
- (void)_setRowSpan:(int)span;	// 0x37585cfd
- (CGRect)boundsRectForContentRect:(CGRect)contentRect inRect:(CGRect)rect textContainer:(id)container characterRange:(NSRange)range;	// 0x37585d91
- (int)columnSpan;	// 0x37585ced
- (id)copyWithZone:(NSZone *)zone;	// 0x37585bfd
- (void)dealloc;	// 0x37585835
- (void)drawBackgroundWithFrame:(CGRect)frame inView:(id)view characterRange:(NSRange)range layoutManager:(id)manager;	// 0x37585e11
- (void)encodeWithCoder:(id)coder;	// 0x37585881
- (CGRect)rectForLayoutAtPoint:(CGPoint)point inRect:(CGRect)rect textContainer:(id)container characterRange:(NSRange)range;	// 0x37585d1d
// converted property getter: - (int)rowSpan;	// 0x37585ccd
- (int)startingColumn;	// 0x37585cdd
- (int)startingRow;	// 0x37585cbd
// converted property getter: - (id)table;	// 0x37585cad
@end

