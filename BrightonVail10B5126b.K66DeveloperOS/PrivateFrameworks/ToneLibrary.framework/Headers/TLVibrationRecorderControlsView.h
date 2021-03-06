/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UIView.h> // Unknown library
#import "ToneLibrary-Structs.h"

@class TLVibrationRecorderProgressView;
@protocol TLVibrationRecorderControlsViewDelegate;

@interface TLVibrationRecorderControlsView : UIView {
	id<TLVibrationRecorderControlsViewDelegate> _delegate;	// 84 = 0x54
	TLVibrationRecorderProgressView *_progressView;	// 88 = 0x58
	id _leftButton;	// 92 = 0x5c
	id _rightButton;	// 96 = 0x60
}
@property(retain, nonatomic, setter=_setLeftButton:) id _leftButton;	// G=0x35a34715; S=0x35a34725; @synthesize
@property(retain, nonatomic, setter=_setRightButton:) id _rightButton;	// G=0x35a34735; S=0x35a34745; @synthesize
@property(assign, nonatomic) double currentTimeInterval;	// G=0x35a34515; S=0x35a34535; 
@property(assign, nonatomic) id<TLVibrationRecorderControlsViewDelegate> delegate;	// G=0x35a346f5; S=0x35a34705; @synthesize=_delegate
@property(assign, nonatomic, getter=isLeftButtonEnabled) BOOL leftButtonEnabled;	// G=0x35a3446d; S=0x35a34495; 
@property(assign, nonatomic, getter=isRightButtonEnabled) BOOL rightButtonEnabled;	// G=0x35a344c1; S=0x35a344e9; 
@property(assign, nonatomic) int roundedCornersCompensationDelayMode;	// G=0x35a34555; S=0x35a34575; 
+ (void)_loadImages;	// 0x35a336b9
+ (float)defaultHeight;	// 0x35a33851
- (id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;	// 0x35a338a1
- (void)_buttonTapped:(id)tapped;	// 0x35a3468d
// declared property getter: - (id)_leftButton;	// 0x35a34715
// declared property getter: - (id)_rightButton;	// 0x35a34735
// declared property setter: - (void)_setLeftButton:(id)button;	// 0x35a34725
// declared property setter: - (void)_setRightButton:(id)button;	// 0x35a34745
- (void)clearAllVibrationComponents;	// 0x35a345d5
// declared property getter: - (double)currentTimeInterval;	// 0x35a34515
- (void)dealloc;	// 0x35a339f5
// declared property getter: - (id)delegate;	// 0x35a346f5
- (void)drawRect:(CGRect)rect;	// 0x35a345f5
// declared property getter: - (BOOL)isLeftButtonEnabled;	// 0x35a3446d
// declared property getter: - (BOOL)isRightButtonEnabled;	// 0x35a344c1
// declared property getter: - (int)roundedCornersCompensationDelayMode;	// 0x35a34555
// declared property setter: - (void)setCurrentTimeInterval:(double)interval;	// 0x35a34535
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35a34705
- (void)setLeftButtonColor:(int)color title:(id)title icon:(id)icon enabled:(BOOL)enabled rightButtonColor:(int)color5 title:(id)title6 icon:(id)icon7 enabled:(BOOL)enabled8 animationDuration:(double)duration completion:(id)completion;	// 0x35a33a71
// declared property setter: - (void)setLeftButtonEnabled:(BOOL)enabled;	// 0x35a34495
// declared property setter: - (void)setRightButtonEnabled:(BOOL)enabled;	// 0x35a344e9
// declared property setter: - (void)setRoundedCornersCompensationDelayMode:(int)mode;	// 0x35a34575
- (void)vibrationComponentDidEnd;	// 0x35a345b5
- (void)vibrationComponentDidStart;	// 0x35a34595
@end

