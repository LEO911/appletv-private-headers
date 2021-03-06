/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class _UIPageCurl, UIView, NSDate;

__attribute__((visibility("hidden")))
@interface _UIPageCurlState : NSObject {
@private
	_UIPageCurl *_pageCurl;	// 4 = 0x4
	int _curlType;	// 8 = 0x8
	CGPoint _initialLocation;	// 12 = 0xc
	CGPoint _referenceLocation;	// 20 = 0x14
	int _curlDirection;	// 28 = 0x1c
	UIView *_frontPageView;	// 32 = 0x20
	UIView *_backPageView;	// 36 = 0x24
	UIView *_frontView;	// 40 = 0x28
	UIView *_backView;	// 44 = 0x2c
	int _completionCount;	// 48 = 0x30
	int _curlState;	// 52 = 0x34
	BOOL _finished;	// 56 = 0x38
	BOOL _willComplete;	// 57 = 0x39
	id _completion;	// 60 = 0x3c
	_UIPageCurlState *_previousState;	// 64 = 0x40
	_UIPageCurlState *_nextState;	// 68 = 0x44
	NSDate *_beginDate;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) UIView *backPageView;	// G=0x303b07b9; 
@property(readonly, assign, nonatomic) UIView *backView;	// G=0x303b0f85; @synthesize=_backView
@property(readonly, assign, nonatomic) NSDate *beginDate;	// G=0x303b0fb5; @synthesize=_beginDate
@property(readonly, assign, nonatomic) int curlDirection;	// G=0x303b0f65; @synthesize=_curlDirection
@property(readonly, assign, nonatomic) int curlState;	// G=0x303b0f95; @synthesize=_curlState
@property(readonly, assign, nonatomic) int curlType;	// G=0x303b0f1d; @synthesize=_curlType
@property(readonly, assign, nonatomic) UIView *frontPageView;	// G=0x303b0615; 
@property(readonly, assign, nonatomic) UIView *frontView;	// G=0x303b0f75; @synthesize=_frontView
@property(readonly, assign, nonatomic) CGPoint initialLocation;	// G=0x303b0f2d; @synthesize=_initialLocation
@property(readonly, assign, nonatomic) _UIPageCurl *pageCurl;	// G=0x303b0f0d; @synthesize=_pageCurl
@property(readonly, assign, nonatomic, getter=hasPendingAnimations) BOOL pendingAnimations;	// G=0x303b0d8d; 
@property(readonly, assign, nonatomic) _UIPageCurlState *previousState;	// G=0x303b0fa5; @synthesize=_previousState
@property(readonly, assign, nonatomic) CGPoint referenceLocation;	// G=0x303b0f49; @synthesize=_referenceLocation
- (id)initWithPageCurl:(id)pageCurl andCurlType:(int)type fromLocation:(CGPoint)location withReferenceLocation:(CGPoint)referenceLocation inDirection:(int)direction withView:(id)view revealingView:(id)view7 completion:(id)completion;	// 0x303b034d
- (void)_detach;	// 0x303b0575
- (CGRect)_pageViewFrame;	// 0x303b05c1
- (void)addBackPageContent;	// 0x303b0bcd
- (void)addFrontPageContent;	// 0x303b0af9
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x303b0e51
// declared property getter: - (id)backPageView;	// 0x303b07b9
// declared property getter: - (id)backView;	// 0x303b0f85
// declared property getter: - (id)beginDate;	// 0x303b0fb5
- (void)cleanup;	// 0x303b0e21
- (void)cleanupWithFinishedState:(BOOL)finishedState completedState:(BOOL)state;	// 0x303b0db9
// declared property getter: - (int)curlDirection;	// 0x303b0f65
// declared property getter: - (int)curlState;	// 0x303b0f95
// declared property getter: - (int)curlType;	// 0x303b0f1d
- (void)dealloc;	// 0x303b0491
// declared property getter: - (id)frontPageView;	// 0x303b0615
// declared property getter: - (id)frontView;	// 0x303b0f75
// declared property getter: - (BOOL)hasPendingAnimations;	// 0x303b0d8d
- (void)incrementCompletionCount;	// 0x303b0da5
// declared property getter: - (CGPoint)initialLocation;	// 0x303b0f2d
- (void)markBeginDate;	// 0x303b0ec9
// declared property getter: - (id)pageCurl;	// 0x303b0f0d
// declared property getter: - (id)previousState;	// 0x303b0fa5
// declared property getter: - (CGPoint)referenceLocation;	// 0x303b0f49
- (void)setCurlState:(int)state willComplete:(BOOL)complete;	// 0x303b0ca1
- (void)setNextState:(id)state;	// 0x303b0555
@end

