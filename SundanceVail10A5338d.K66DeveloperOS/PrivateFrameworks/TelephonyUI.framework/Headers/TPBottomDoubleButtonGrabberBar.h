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
@property(retain, nonatomic) NSArray *grabberGestureRecognizers;	// G=0x32ae6609; S=0x32ae64a5; @synthesize=_grabberGestureRecognizers
@property(retain, nonatomic) UIImage *grabberImage;	// G=0x32ae65e5; S=0x32ae644d; @synthesize=_grabberImage
@property(readonly, assign) UIView *grabberView;	// G=0x32ae65f5; @synthesize=_grabberView
+ (id)answerButtonImage;	// 0x32ae58e9
+ (id)declineButtonImage;	// 0x32ae5921
+ (id)videoAnswerButtonImage;	// 0x32ae5959
+ (id)videoDeclineButtonImage;	// 0x32ae5991
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x32ae59c9
- (id)initForVideoChatWithFrame:(CGRect)frame;	// 0x32ae5a89
- (float)_buttonWidth;	// 0x32ae5bc1
- (void)_layoutWells;	// 0x32ae5cf9
- (void)animateGrabberOutWithCompletion:(id)completion;	// 0x32ae6161
- (void)dealloc;	// 0x32ae5b49
// declared property getter: - (id)grabberGestureRecognizers;	// 0x32ae6609
// declared property getter: - (id)grabberImage;	// 0x32ae65e5
// declared property getter: - (id)grabberView;	// 0x32ae65f5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32ae6391
- (void)layoutSubviews;	// 0x32ae5ea9
// declared property setter: - (void)setGrabberGestureRecognizers:(id)recognizers;	// 0x32ae64a5
// declared property setter: - (void)setGrabberImage:(id)image;	// 0x32ae644d
@end

