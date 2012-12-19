/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


@interface EDReference : NSObject <NSCopying> {
	EDAreaReference mAreaReference;	// 4 = 0x4
}
@property(assign) int firstColumn;	// G=0x348a8421; S=0x34a299f5; converted property
@property(assign) int firstRow;	// G=0x348b7149; S=0x34a299e1; converted property
@property(assign) int lastColumn;	// G=0x348b716d; S=0x34a29a1d; converted property
@property(assign) int lastRow;	// G=0x348b7159; S=0x34a29a09; converted property
+ (id)reference;	// 0x34a2b675
+ (id)referenceWithAreaReference:(EDAreaReference *)areaReference;	// 0x3490d841
+ (id)referenceWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x348a81bd
- (id)init;	// 0x348b6a3d
- (id)initWithAreaReference:(EDAreaReference *)areaReference;	// 0x3490d88d
- (id)initWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x348a821d
- (id).cxx_construct;	// 0x348a8219
- (EDAreaReference)areaReference;	// 0x34a2b6bd
- (bool)containsRow:(int)row column:(int)column;	// 0x348b82dd
- (id)copyWithZone:(NSZone *)zone;	// 0x349bc4f9
- (unsigned)countOfCellsBeingReferenced;	// 0x3498146d
// converted property getter: - (int)firstColumn;	// 0x348a8421
// converted property getter: - (int)firstRow;	// 0x348b7149
- (bool)fullyAdjacentToReference:(id)reference;	// 0x349d42a1
- (unsigned)hash;	// 0x349bc4d5
- (bool)isCellReference;	// 0x34a2b6e1
- (bool)isColumnReference;	// 0x34a2b735
- (BOOL)isEqual:(id)equal;	// 0x349bd555
- (BOOL)isEqualToReference:(id)reference;	// 0x349bd5b1
- (bool)isRowReference;	// 0x34a2b709
- (bool)isValidAreaReference;	// 0x348b32dd
- (bool)isValidCellReference;	// 0x349814c9
// converted property getter: - (int)lastColumn;	// 0x348b716d
// converted property getter: - (int)lastRow;	// 0x348b7159
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x34a299f5
// converted property setter: - (void)setFirstRow:(int)row;	// 0x34a299e1
// converted property setter: - (void)setLastColumn:(int)column;	// 0x34a29a1d
// converted property setter: - (void)setLastRow:(int)row;	// 0x34a29a09
- (void)unionWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x348b6aa9
- (void)unionWithReference:(id)reference;	// 0x349d43b9
- (void)unionWithRow:(int)row column:(int)column;	// 0x348b6a85
@end
