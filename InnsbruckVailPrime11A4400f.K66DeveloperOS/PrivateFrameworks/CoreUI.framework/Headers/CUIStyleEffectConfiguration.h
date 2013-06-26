/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import "NSCopying.h"
#import "CoreUI-Structs.h"
#import </libobjc.A.h>


@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {
	int _state;	// 4 = 0x4
	int _presentationState;	// 8 = 0x8
	int _value;	// 12 = 0xc
	BOOL _useSimplifiedEffect;	// 16 = 0x10
}
@property(assign, nonatomic) int presentationState;	// G=0x3079b9e9; S=0x3079b9f9; @synthesize=_presentationState
@property(assign, nonatomic) int state;	// G=0x3079b9c9; S=0x3079b9d9; @synthesize=_state
@property(assign, nonatomic) BOOL useSimplifiedEffect;	// G=0x3079ba29; S=0x3079ba39; @synthesize=_useSimplifiedEffect
@property(assign, nonatomic) int value;	// G=0x3079ba09; S=0x3079ba19; @synthesize=_value
- (id)init;	// 0x3079b999
- (id)copyWithZone:(NSZone *)zone;	// 0x3079b911
// declared property getter: - (int)presentationState;	// 0x3079b9e9
// declared property setter: - (void)setPresentationState:(int)state;	// 0x3079b9f9
// declared property setter: - (void)setState:(int)state;	// 0x3079b9d9
// declared property setter: - (void)setUseSimplifiedEffect:(BOOL)effect;	// 0x3079ba39
// declared property setter: - (void)setValue:(int)value;	// 0x3079ba19
- (BOOL)shouldIgnoreForegroundColor;	// 0x3079b9c5
// declared property getter: - (int)state;	// 0x3079b9c9
// declared property getter: - (BOOL)useSimplifiedEffect;	// 0x3079ba29
// declared property getter: - (int)value;	// 0x3079ba09
@end
