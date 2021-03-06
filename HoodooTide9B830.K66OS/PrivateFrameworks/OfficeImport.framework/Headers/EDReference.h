/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface EDReference : NSObject <NSCopying> {
@private
	EDAreaReference mAreaReference;	// 4 = 0x4
}
@property(assign) int firstColumn;	// G=0x311d14fd; S=0x31340029; converted property
@property(assign) int firstRow;	// G=0x311db9b9; S=0x31340015; converted property
@property(assign) int lastColumn;	// G=0x311db9dd; S=0x31340051; converted property
@property(assign) int lastRow;	// G=0x311db9c9; S=0x3134003d; converted property
+ (id)reference;	// 0x31335edd
+ (id)referenceWithAreaReference:(EDAreaReference *)areaReference;	// 0x3128bb51
+ (id)referenceWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x311d1385
- (id)init;	// 0x311f4049
- (id)initWithAreaReference:(EDAreaReference *)areaReference;	// 0x3128bb9d
- (id)initWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x311d13e1
- (EDAreaReference)areaReference;	// 0x31335e49
- (bool)containsRow:(int)row column:(int)column;	// 0x311dcc9d
- (id)copyWithZone:(NSZone *)zone;	// 0x312f2025
- (unsigned)countOfCellsBeingReferenced;	// 0x31256e29
// converted property getter: - (int)firstColumn;	// 0x311d14fd
// converted property getter: - (int)firstRow;	// 0x311db9b9
- (bool)fullyAdjacentToReference:(id)reference;	// 0x311f01e9
- (unsigned)hash;	// 0x312f202d
- (bool)isCellReference;	// 0x31335e6d
- (bool)isColumnReference;	// 0x31335eb9
- (BOOL)isEqual:(id)equal;	// 0x312f2ec9
- (BOOL)isEqualToReference:(id)reference;	// 0x311f0299
- (bool)isRowReference;	// 0x31335e95
- (bool)isValidAreaReference;	// 0x311d9681
- (bool)isValidCellReference;	// 0x31256e7d
// converted property getter: - (int)lastColumn;	// 0x311db9dd
// converted property getter: - (int)lastRow;	// 0x311db9c9
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x31340029
// converted property setter: - (void)setFirstRow:(int)row;	// 0x31340015
// converted property setter: - (void)setLastColumn:(int)column;	// 0x31340051
// converted property setter: - (void)setLastRow:(int)row;	// 0x3134003d
- (void)unionWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x311f40bd
- (void)unionWithReference:(id)reference;	// 0x312b8cdd
- (void)unionWithRow:(int)row column:(int)column;	// 0x311f409d
@end

