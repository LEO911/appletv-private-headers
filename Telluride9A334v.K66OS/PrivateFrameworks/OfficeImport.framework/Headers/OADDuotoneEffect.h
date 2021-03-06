/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADBlipEffect.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADDuotoneEffect : OADBlipEffect {
@private
	OADColor *mColor1;	// 8 = 0x8
	OADColor *mColor2;	// 12 = 0xc
	int mTransferMode1;	// 16 = 0x10
	int mTransferMode2;	// 20 = 0x14
}
@property(retain) id color1;	// G=0x3577e7b9; S=0x356b4385; converted property
@property(retain) id color2;	// G=0x3577e7c9; S=0x356b43c5; converted property
@property(assign) int transferMode1;	// G=0x3577e7d9; S=0x3577e7e9; converted property
@property(assign) int transferMode2;	// G=0x3577e7f9; S=0x3577e809; converted property
- (id)init;	// 0x356b4345
// converted property getter: - (id)color1;	// 0x3577e7b9
// converted property getter: - (id)color2;	// 0x3577e7c9
- (id)copyWithZone:(NSZone *)zone;	// 0x356ca3ed
- (void)dealloc;	// 0x356b4405
- (unsigned)hash;	// 0x3577f115
- (BOOL)isEqual:(id)equal;	// 0x3577efd9
// converted property setter: - (void)setColor1:(id)a1;	// 0x356b4385
// converted property setter: - (void)setColor2:(id)a2;	// 0x356b43c5
- (void)setStyleColor:(id)color;	// 0x356ca6c5
// converted property setter: - (void)setTransferMode1:(int)a1;	// 0x3577e7e9
// converted property setter: - (void)setTransferMode2:(int)a2;	// 0x3577e809
// converted property getter: - (int)transferMode1;	// 0x3577e7d9
// converted property getter: - (int)transferMode2;	// 0x3577e7f9
@end

