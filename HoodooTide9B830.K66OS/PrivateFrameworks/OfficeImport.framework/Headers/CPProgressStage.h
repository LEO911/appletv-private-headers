/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CPProgressContext, NSString;

__attribute__((visibility("hidden")))
@interface CPProgressStage : NSObject {
@private
	double m_currentPosition;	// 4 = 0x4
	double m_totalSteps;	// 12 = 0xc
	double m_stepsInParent;	// 20 = 0x14
	NSString *m_name;	// 28 = 0x1c
	CPProgressStage *m_parentStage;	// 32 = 0x20
	CPProgressContext *m_context;	// 36 = 0x24
}
@property(readonly, assign) double currentPosition;	// G=0x313b1451; converted property
@property(readonly, retain) CPProgressStage *parentStage;	// G=0x313b1441; converted property
- (id)initBranchWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name inContext:(id)context;	// 0x313b1655
- (id)initRootStageInContext:(id)context;	// 0x313b1469
- (id)initWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name inContext:(id)context;	// 0x313b173d
- (void)advanceProgress:(double)progress;	// 0x313b153d
// converted property getter: - (double)currentPosition;	// 0x313b1451
- (void)dealloc;	// 0x313b15ed
- (void)end;	// 0x313b14e5
// converted property getter: - (id)parentStage;	// 0x313b1441
- (void)setProgress:(double)progress;	// 0x313b150d
@end

