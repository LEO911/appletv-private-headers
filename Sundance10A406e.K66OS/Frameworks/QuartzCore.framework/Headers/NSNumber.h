/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSNumber.h> // Unknown library
#import "QuartzCore-Structs.h"


@interface NSNumber (CARenderValue)
- (Object *)CA_copyRenderValue;	// 0x304acd11
@end

@interface NSNumber (CAAnimatableValue)
- (id)CA_addValue:(id)value multipliedBy:(int)by;	// 0x3054f8bd
- (float)CA_distanceToValue:(id)value;	// 0x3054fa41
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x304b9109
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x3054f92d
@end
