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
@property(assign, getter=isAdditive) BOOL additive;	// G=0x32a57d71; S=0x32a696e1; 
@property(assign, getter=isCumulative) BOOL cumulative;	// G=0x32a57d89; S=0x32af34f9; 
@property(copy) NSString *keyPath;	// G=0x32a56971; S=0x32a55e09; 
@property(retain) CAValueFunction *valueFunction;	// G=0x32a57da1; S=0x32a69aa1; 
+ (id)animationWithKeyPath:(id)keyPath;	// 0x32a55db5
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x32a56cd1
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x32a577c5
- (BOOL)additive;	// 0x32af3511
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x32af34f1
- (BOOL)cumulative;	// 0x32af3529
// declared property getter: - (BOOL)isAdditive;	// 0x32a57d71
// declared property getter: - (BOOL)isCumulative;	// 0x32a57d89
// declared property getter: - (id)keyPath;	// 0x32a56971
// declared property setter: - (void)setAdditive:(BOOL)additive;	// 0x32a696e1
// declared property setter: - (void)setCumulative:(BOOL)cumulative;	// 0x32af34f9
// declared property setter: - (void)setKeyPath:(id)path;	// 0x32a55e09
// declared property setter: - (void)setValueFunction:(id)function;	// 0x32a69aa1
// declared property getter: - (id)valueFunction;	// 0x32a57da1
@end
