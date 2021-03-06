/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDCmdBehavior, PDAnimateColorBehavior, PDParallelTimeNodeGroup, PDSequentialTimeNodeGroup, PDAudioMediaNode, PDVideoMediaNode, NSMutableArray, PDAnimateTimeBehavior, PDAnimateEffectBehavior, PDSetBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior;

@interface PDTimeNode : NSObject {
	PDAnimateTimeBehavior *mTimeBehavior;	// 4 = 0x4
	PDAnimateEffectBehavior *mEffectBehavior;	// 8 = 0x8
	PDAnimateMotionBehavior *mMotionBehavior;	// 12 = 0xc
	PDAnimateRotateBehavior *mRotateBehavior;	// 16 = 0x10
	PDAnimateScaleBehavior *mScaleBehavior;	// 20 = 0x14
	PDAnimateColorBehavior *mColorBehavior;	// 24 = 0x18
	PDAudioMediaNode *mAudio;	// 28 = 0x1c
	PDVideoMediaNode *mVideo;	// 32 = 0x20
	PDParallelTimeNodeGroup *mParallelTimeNodeGroup;	// 36 = 0x24
	PDSequentialTimeNodeGroup *mSequentialTimeNodeGroup;	// 40 = 0x28
	NSMutableArray *mTimeConditionList;	// 44 = 0x2c
	PDSetBehavior *mSetBehavior;	// 48 = 0x30
	PDCmdBehavior *mCmdBehavior;	// 52 = 0x34
}
@property(retain) id audio;	// G=0x37b285b9; S=0x37a65719; converted property
@property(retain) id behavior;	// G=0x37b28645; S=0x37a2ea09; converted property
@property(retain) id cmdBehavior;	// G=0x37b28655; S=0x37a5e025; converted property
@property(retain) id colorBehavior;	// G=0x37b2856d; S=0x37b2857d; converted property
@property(retain) id effectBehavior;	// G=0x37b2852d; S=0x37a2ec5d; converted property
@property(retain) id motionBehavior;	// G=0x37b2853d; S=0x379e7471; converted property
@property(retain) id parallel;	// G=0x37b285d9; S=0x379e74e9; converted property
@property(retain) id rotateBehavior;	// G=0x37b2854d; S=0x37a66c09; converted property
@property(retain) id scaleBehavior;	// G=0x37b2855d; S=0x37a5a9b9; converted property
@property(retain) id sequential;	// G=0x37b285e9; S=0x379e7525; converted property
@property(retain) id timeBehavior;	// G=0x37b2851d; S=0x37a35d31; converted property
@property(retain) id timeConditions;	// G=0x37b285f9; S=0x37b28609; converted property
@property(retain) id video;	// G=0x37b285c9; S=0x37a706c9; converted property
- (id)init;	// 0x379e64f9
// converted property getter: - (id)audio;	// 0x37b285b9
// converted property getter: - (id)behavior;	// 0x37b28645
// converted property getter: - (id)cmdBehavior;	// 0x37b28655
// converted property getter: - (id)colorBehavior;	// 0x37b2856d
- (id)commonBehavior;	// 0x37b284ad
- (void)dealloc;	// 0x379e7fad
// converted property getter: - (id)effectBehavior;	// 0x37b2852d
// converted property getter: - (id)motionBehavior;	// 0x37b2853d
// converted property getter: - (id)parallel;	// 0x37b285d9
// converted property getter: - (id)rotateBehavior;	// 0x37b2854d
// converted property getter: - (id)scaleBehavior;	// 0x37b2855d
// converted property getter: - (id)sequential;	// 0x37b285e9
// converted property setter: - (void)setAudio:(id)audio;	// 0x37a65719
// converted property setter: - (void)setBehavior:(id)behavior;	// 0x37a2ea09
// converted property setter: - (void)setCmdBehavior:(id)behavior;	// 0x37a5e025
// converted property setter: - (void)setColorBehavior:(id)behavior;	// 0x37b2857d
// converted property setter: - (void)setEffectBehavior:(id)behavior;	// 0x37a2ec5d
// converted property setter: - (void)setMotionBehavior:(id)behavior;	// 0x379e7471
// converted property setter: - (void)setParallel:(id)parallel;	// 0x379e74e9
// converted property setter: - (void)setRotateBehavior:(id)behavior;	// 0x37a66c09
// converted property setter: - (void)setScaleBehavior:(id)behavior;	// 0x37a5a9b9
// converted property setter: - (void)setSequential:(id)sequential;	// 0x379e7525
// converted property setter: - (void)setTimeBehavior:(id)behavior;	// 0x37a35d31
// converted property setter: - (void)setTimeConditions:(id)conditions;	// 0x37b28609
// converted property setter: - (void)setVideo:(id)video;	// 0x37a706c9
// converted property getter: - (id)timeBehavior;	// 0x37b2851d
// converted property getter: - (id)timeConditions;	// 0x37b285f9
// converted property getter: - (id)video;	// 0x37b285c9
@end

