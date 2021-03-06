/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSISRowBody.h"
#import "Foundation-Structs.h"


@interface NSISLinearExpression : NSObject <NSCopying, NSISRowBody> {
	float _constant;	// 4 = 0x4
	CFArrayRef _sortedVarPointers;	// 8 = 0x8
	CFArrayRef _sortedVarCoeffs;	// 12 = 0xc
	float _termScalar;	// 16 = 0x10
}
@property(assign) float constant;	// G=0x3564dee5; S=0x3564def9; @synthesize=_constant
- (id)init;	// 0x3564d14d
- (id)initWithSortedVarPointers:(CFArrayRef)sortedVarPointers sortedVarCoefficients:(CFArrayRef)coefficients constant:(float)constant termScalar:(float)scalar;	// 0x3564d051
- (float)_preScaledCoefficientForVariable:(id)variable;	// 0x3564d201
- (void)_setPreScaledCoefficient:(float)coefficient forVariable:(id)variable;	// 0x3564d29d
- (void)addExpression:(id)expression times:(float)times;	// 0x3564d499
- (void)addExpression:(id)expression times:(float)times processVariableNewToReceiver:(id)receiver processVariableDroppedFromReceiver:(id)receiver4;	// 0x3564d561
- (void)addVariable:(id)variable coefficient:(float)coefficient;	// 0x3564d689
- (void)addVariable:(id)variable coefficient:(float)coefficient processVariableNewToReceiver:(id)receiver processVariableDroppedFromReceiver:(id)receiver4;	// 0x3564d725
- (id)allVariables;	// 0x3564de21
- (float)coefficientForVariable:(id)variable;	// 0x3564d3d9
// declared property getter: - (float)constant;	// 0x3564dee5
- (id)copyWithZone:(NSZone *)zone;	// 0x3564d175
- (void)dealloc;	// 0x3564d445
- (id)description;	// 0x3564db39
- (void)enumerateVariables:(id)variables;	// 0x3564dd69
- (void)enumerateVariablesAndCoefficients:(id)coefficients;	// 0x3564dcd5
- (float)incrementConstant:(float)constant;	// 0x3564d855
- (BOOL)isConstant;	// 0x3564d88d
- (void)removeVariable:(id)variable;	// 0x3564d355
- (void)replaceVariable:(id)variable withExpression:(id)expression processVariableNewToReceiver:(id)receiver processVariableDroppedFromReceiver:(id)receiver4;	// 0x3564d93d
- (void)replaceVariable:(id)variable withVariablePlusDelta:(float)variablePlusDelta;	// 0x3564d8b1
- (void)replaceVariable:(id)variable withVariablePlusDelta:(float)variablePlusDelta timesVariable:(id)variable3 processVariableNewToReceiver:(id)receiver processVariableDroppedFromReceiver:(id)receiver5;	// 0x3564d8f1
- (void)scaleBy:(float)by;	// 0x3564de59
- (void)setCoefficient:(float)coefficient forVariable:(id)variable;	// 0x3564d415
// declared property setter: - (void)setConstant:(float)constant;	// 0x3564def9
@end

