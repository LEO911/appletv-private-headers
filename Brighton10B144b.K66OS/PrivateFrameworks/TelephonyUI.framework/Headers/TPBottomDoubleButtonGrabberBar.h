/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomDoubleButtonBar.h"
#import "TPBottomGrabberBar.h"

@class UIImage, NSArray;

@interface TPBottomDoubleButtonGrabberBar : TPBottomDoubleButtonBar <TPBottomGrabberBar> {
	UIView *_grabberView;	// 136 = 0x88
	UIImage *_grabberImage;	// 140 = 0x8c
	NSArray *_grabberGestureRecognizers;	// 144 = 0x90
	BOOL _isAnimatingOutGrabber;	// 148 = 0x94
}
@property(retain, nonatomic) NSArray *grabberGestureRecognizers;	// G=0x355e9a71; S=0x355e990d; @synthesize=_grabberGestureRecognizers
@property(retain, nonatomic) UIImage *grabberImage;	// G=0x355e9a4d; S=0x355e98b5; @synthesize=_grabberImage
@property(readonly, assign) UIView *grabberView;	// G=0x355e9a5d; @synthesize=_grabberView
+ (id)answerButtonImage;	// 0x355e8d51
+ (id)declineButtonImage;	// 0x355e8d89
+ (id)videoAnswerButtonImage;	// 0x355e8dc1
+ (id)videoDeclineButtonImage;	// 0x355e8df9
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x355e8e31
- (id)initForVideoChatWithFrame:(CGRect)frame;	// 0x355e8ef1
- (float)_buttonWidth;	// 0x355e9029
- (void)_layoutWells;	// 0x355e9161
- (void)animateGrabberOutWithCompletion:(id)completion;	// 0x355e95c9
- (void)dealloc;	// 0x355e8fb1
// declared property getter: - (id)grabberGestureRecognizers;	// 0x355e9a71
// declared property getter: - (id)grabberImage;	// 0x355e9a4d
// declared property getter: - (id)grabberView;	// 0x355e9a5d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x355e97f9
- (void)layoutSubviews;	// 0x355e9311
// declared property setter: - (void)setGrabberGestureRecognizers:(id)recognizers;	// 0x355e990d
// declared property setter: - (void)setGrabberImage:(id)image;	// 0x355e98b5
@end

