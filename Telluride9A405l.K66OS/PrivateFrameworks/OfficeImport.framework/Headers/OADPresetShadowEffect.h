/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShadowEffect.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADPresetShadowEffect : OADShadowEffect {
@private
	int mPresetShadowType;	// 24 = 0x18
}
@property(assign) int presetShadowType;	// G=0x30dd5149; S=0x30dd5139; converted property
- (id)init;	// 0x30dd5009
- (id)copyWithZone:(NSZone *)zone;	// 0x30e8770d
- (id)equivalentOuterShadowEffect;	// 0x30e87361
- (unsigned)hash;	// 0x30e87325
- (BOOL)isEqual:(id)equal;	// 0x30e87285
// converted property getter: - (int)presetShadowType;	// 0x30dd5149
// converted property setter: - (void)setPresetShadowType:(int)type;	// 0x30dd5139
@end

