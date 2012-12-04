/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation {
}
@property(assign, getter=isAdditive) BOOL additive;	// G=0x351bccc9; S=0x351d5c49; 
@property(assign, getter=isCumulative) BOOL cumulative;	// G=0x351bcce1; S=0x3525d1f1; 
@property(copy) NSString *keyPath;	// G=0x351b55e9; S=0x351b4c69; 
@property(retain) CAValueFunction *valueFunction;	// G=0x351bccf9; S=0x351d5f11; 
+ (id)animationWithKeyPath:(id)keyPath;	// 0x351bbbdd
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x351b5621
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x351bc805
- (BOOL)additive;	// 0x3525d209
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x3525d1e9
- (BOOL)cumulative;	// 0x3525d221
// declared property getter: - (BOOL)isAdditive;	// 0x351bccc9
// declared property getter: - (BOOL)isCumulative;	// 0x351bcce1
// declared property getter: - (id)keyPath;	// 0x351b55e9
// declared property setter: - (void)setAdditive:(BOOL)additive;	// 0x351d5c49
// declared property setter: - (void)setCumulative:(BOOL)cumulative;	// 0x3525d1f1
// declared property setter: - (void)setKeyPath:(id)path;	// 0x351b4c69
// declared property setter: - (void)setValueFunction:(id)function;	// 0x351d5f11
// declared property getter: - (id)valueFunction;	// 0x351bccf9
@end
