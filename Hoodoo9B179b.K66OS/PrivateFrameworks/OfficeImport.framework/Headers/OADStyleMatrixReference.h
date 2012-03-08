/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADStyleMatrixReference : NSObject <NSCopying> {
@private
	unsigned long mMatrixIndex;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
}
@property(retain) id color;	// G=0x328edc15; S=0x328ed629; converted property
@property(assign) unsigned long matrixIndex;	// G=0x328edbc5; S=0x328ed619; converted property
+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x329dac95
- (id)initWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x3291542d
- (void)applyToEffectsInProperties:(id)properties styleMatrix:(id)matrix;	// 0x329dace1
- (void)applyToFillInProperties:(id)properties styleMatrix:(id)matrix;	// 0x329dadf1
- (void)applyToStrokeInProperties:(id)properties styleMatrix:(id)matrix;	// 0x329daf25
// converted property getter: - (id)color;	// 0x328edc15
- (id)copyWithZone:(NSZone *)zone;	// 0x329028e9
- (void)dealloc;	// 0x328f0155
// converted property getter: - (unsigned long)matrixIndex;	// 0x328edbc5
// converted property setter: - (void)setColor:(id)color;	// 0x328ed629
// converted property setter: - (void)setMatrixIndex:(unsigned long)index;	// 0x328ed619
@end
