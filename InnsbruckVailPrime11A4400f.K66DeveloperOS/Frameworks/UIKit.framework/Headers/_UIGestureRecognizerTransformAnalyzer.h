/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerTransformAnalyzer : NSObject {
	float _lowPassTranslationMagnitudeDelta;	// 4 = 0x4
	float _lowPassScaleDelta;	// 8 = 0x8
	float _lowPassRotationDelta;	// 12 = 0xc
	float _translationWeight;	// 16 = 0x10
	float _pinchingWeight;	// 20 = 0x14
	float _rotationWeight;	// 24 = 0x18
	int _dominantComponent;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) int dominantComponent;	// G=0x2f53ce51; @synthesize=_dominantComponent
@property(assign, nonatomic) float pinchingWeight;	// G=0x2f71c639; S=0x2f48a6e1; @synthesize=_pinchingWeight
@property(assign, nonatomic) float rotationWeight;	// G=0x2f71c649; S=0x2f48a6f1; @synthesize=_rotationWeight
@property(assign, nonatomic) float translationWeight;	// G=0x2f71c629; S=0x2f48a701; @synthesize=_translationWeight
- (id)init;	// 0x2f48a681
- (void)analyzeTouches:(id)touches;	// 0x2f53c5c1
// declared property getter: - (int)dominantComponent;	// 0x2f53ce51
// declared property getter: - (float)pinchingWeight;	// 0x2f71c639
- (void)reset;	// 0x2f52e295
// declared property getter: - (float)rotationWeight;	// 0x2f71c649
// declared property setter: - (void)setPinchingWeight:(float)weight;	// 0x2f48a6e1
// declared property setter: - (void)setRotationWeight:(float)weight;	// 0x2f48a6f1
// declared property setter: - (void)setTranslationWeight:(float)weight;	// 0x2f48a701
// declared property getter: - (float)translationWeight;	// 0x2f71c629
@end

