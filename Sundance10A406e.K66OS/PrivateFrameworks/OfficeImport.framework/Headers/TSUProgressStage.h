/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class TSUProgressContext;

@interface TSUProgressStage : NSObject {
	double m_currentPosition;	// 4 = 0x4
	double m_totalSteps;	// 12 = 0xc
	double m_stepsInParent;	// 20 = 0x14
	double m_startInParent;	// 28 = 0x1c
	double m_nextSubStageParentSize;	// 36 = 0x24
	TSUProgressStage *m_parentStage;	// 44 = 0x2c
	TSUProgressContext *m_context;	// 48 = 0x30
}
@property(readonly, assign) double currentPosition;	// G=0x35139269; converted property
@property(assign) double nextSubStageParentSize;	// G=0x351392d1; S=0x351392e9; converted property
@property(readonly, retain) TSUProgressStage *parentStage;	// G=0x35139259; converted property
- (id)initRootStageInContext:(id)context;	// 0x35138e51
- (id)initWithSteps:(double)steps takingSteps:(double)steps2 inContext:(id)context;	// 0x35138ee1
- (void)advanceProgress:(double)progress;	// 0x35139049
// converted property getter: - (double)currentPosition;	// 0x35139269
- (void)dealloc;	// 0x35138ff9
- (id)description;	// 0x351392fd
- (void)end;	// 0x35139231
// converted property getter: - (double)nextSubStageParentSize;	// 0x351392d1
- (double)overallProgress;	// 0x35139281
// converted property getter: - (id)parentStage;	// 0x35139259
// converted property setter: - (void)setNextSubStageParentSize:(double)size;	// 0x351392e9
- (void)setProgress:(double)progress;	// 0x35139079
- (void)setProgressPercentage:(double)percentage;	// 0x351391f1
@end

