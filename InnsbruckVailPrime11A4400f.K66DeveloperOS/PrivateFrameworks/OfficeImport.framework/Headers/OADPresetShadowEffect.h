/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShadowEffect.h"


@interface OADPresetShadowEffect : OADShadowEffect {
	int mPresetShadowType;	// 24 = 0x18
}
@property(assign) int presetShadowType;	// G=0x31879ec9; S=0x31879eb9; converted property
- (id)init;	// 0x31879d7d
- (id)copyWithZone:(NSZone *)zone;	// 0x318f154d
- (id)equivalentOuterShadowEffect;	// 0x318f15b5
- (unsigned)hash;	// 0x31887a69
- (BOOL)isEqual:(id)equal;	// 0x31887e21
// converted property getter: - (int)presetShadowType;	// 0x31879ec9
// converted property setter: - (void)setPresetShadowType:(int)type;	// 0x31879eb9
@end

