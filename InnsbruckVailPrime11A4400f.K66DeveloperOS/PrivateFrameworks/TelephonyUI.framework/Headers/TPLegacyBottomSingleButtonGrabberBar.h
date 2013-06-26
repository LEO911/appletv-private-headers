/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPLegacyBottomSingleButtonBar.h"
#import "TPLegacyBottomGrabberBar.h"

@class NSArray, UIImage;

@interface TPLegacyBottomSingleButtonGrabberBar : TPLegacyBottomSingleButtonBar <TPLegacyBottomGrabberBar> {
	UIView *_grabberView;	// 132 = 0x84
	UIImage *_grabberImage;	// 136 = 0x88
	NSArray *_grabberGestureRecognizers;	// 140 = 0x8c
	BOOL _isAnimatingOutGrabber;	// 144 = 0x90
}
@property(retain, nonatomic) NSArray *grabberGestureRecognizers;	// G=0x329ae7f9; S=0x329ae695; @synthesize=_grabberGestureRecognizers
@property(retain, nonatomic) UIImage *grabberImage;	// G=0x329ae7d5; S=0x329ae63d; @synthesize=_grabberImage
@property(readonly, assign) UIView *grabberView;	// G=0x329ae7e5; @synthesize=_grabberView
+ (id)answerButtonImage;	// 0x329adce9
- (id)initForIncomingCallWaitingWithFrame:(CGRect)frame;	// 0x329add21
- (void)_updateButtonAndWellWidths;	// 0x329adeb1
- (void)animateGrabberOutWithCompletion:(id)completion;	// 0x329ae361
- (float)buttonWidth;	// 0x329ade41
- (void)dealloc;	// 0x329add89
// declared property getter: - (id)grabberGestureRecognizers;	// 0x329ae7f9
// declared property getter: - (id)grabberImage;	// 0x329ae7d5
// declared property getter: - (id)grabberView;	// 0x329ae7e5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x329ae585
- (void)layoutSubviews;	// 0x329ae0a5
- (void)setButton:(id)button andStyle:(BOOL)style;	// 0x329ade01
// declared property setter: - (void)setGrabberGestureRecognizers:(id)recognizers;	// 0x329ae695
// declared property setter: - (void)setGrabberImage:(id)image;	// 0x329ae63d
@end
