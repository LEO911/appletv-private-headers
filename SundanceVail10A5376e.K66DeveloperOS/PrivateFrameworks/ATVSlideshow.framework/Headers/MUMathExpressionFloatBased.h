/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUMathExpressionBase.h"
#import "ATVSlideshow-Structs.h"


@interface MUMathExpressionFloatBased : MUMathExpressionBase {
	FunctionInterpreter<float> *mInterpreter;	// 12 = 0xc
}
+ (float)evaluateString:(id)string error:(id *)error;	// 0x3632745d
+ (float)invalidResult;	// 0x36327fbd
- (id)init;	// 0x36327709
- (id)initWithString:(id)string error:(id *)error;	// 0x3632771d
- (void)_resetVariableIndicies;	// 0x363279c1
- (void)cleanup;	// 0x363279a5
- (void)dealloc;	// 0x36327925
- (float)evaluate;	// 0x36327e41
- (void)finalize;	// 0x36327965
- (BOOL)isConstant;	// 0x36327fa1
- (BOOL)isValueIllegal:(float)illegal;	// 0x36327fc9
- (void)replaceVariable:(id)variable withValue:(float)value;	// 0x36327c99
- (void)resetAllVariables;	// 0x36327df9
- (void)setValue:(float)value forVariable:(id)variable;	// 0x36327a99
- (void)setVariableValues:(id)values;	// 0x36327b65
- (id)stringValue;	// 0x36327f4d
- (float)valueForVariable:(id)variable;	// 0x36327b01
@end
