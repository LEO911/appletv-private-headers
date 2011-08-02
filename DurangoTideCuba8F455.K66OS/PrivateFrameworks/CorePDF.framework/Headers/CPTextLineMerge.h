/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface CPTextLineMerge : NSObject {
	NSMutableArray *avail;	// 4 = 0x4
}
- (void)addInterval:(id)interval to:(id)to;	// 0x30bbd2c1
- (float)averageHeight:(id)height;	// 0x30bbdec1
- (unsigned)countOverlapsOfLineAtIndex:(unsigned)index in:(id)anIn;	// 0x30bbd601
- (void)detachDropCaps:(id)caps to:(id)to;	// 0x30bbcfe1
- (void)dropCaps:(id)caps to:(id)to;	// 0x30bbdce9
- (void)eliminate:(id)eliminate;	// 0x30bbd14d
- (id)findLineFor:(id)aFor in:(id)anIn;	// 0x30bbdc15
- (BOOL)fits:(id)fits into:(id)into;	// 0x30bbd455
- (BOOL)hasOverlappingLines;	// 0x30bbd7d9
- (void)makeOverlappingLinesTo:(id)to;	// 0x30bbd6d5
- (void)mergeByColumn:(id)column;	// 0x30bbda29
- (void)mergeColumn:(id)column;	// 0x30bbd8b5
- (void)mergeLinesIn:(id)anIn;	// 0x30bbce05
- (void)mergeLinesInInterval:(id)interval from:(id)from;	// 0x30bbd1e9
- (void)removeOverlapping:(id)overlapping;	// 0x30bbd0e1
@end
