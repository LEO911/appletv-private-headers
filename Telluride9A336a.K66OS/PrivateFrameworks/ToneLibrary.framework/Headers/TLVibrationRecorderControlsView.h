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
	id<TLVibrationRecorderControlsViewDelegate> _delegate;	// 48 = 0x30
	TLVibrationRecorderProgressView *_progressView;	// 52 = 0x34
	id _leftButton;	// 56 = 0x38
	id _rightButton;	// 60 = 0x3c
}
@property(retain, nonatomic, setter=_setLeftButton:) id _leftButton;	// G=0x34f2c17d; S=0x34f2c18d; @synthesize
@property(retain, nonatomic, setter=_setRightButton:) id _rightButton;	// G=0x34f2c1b1; S=0x34f2c1c1; @synthesize
@property(assign, nonatomic) double currentTimeInterval;	// G=0x34f2bf79; S=0x34f2bf99; 
@property(assign, nonatomic) id<TLVibrationRecorderControlsViewDelegate> delegate;	// G=0x34f2c15d; S=0x34f2c16d; @synthesize=_delegate
@property(assign, nonatomic, getter=isLeftButtonEnabled) BOOL leftButtonEnabled;	// G=0x34f2bed1; S=0x34f2bef9; 
@property(assign, nonatomic, getter=isRightButtonEnabled) BOOL rightButtonEnabled;	// G=0x34f2bf25; S=0x34f2bf4d; 
@property(assign, nonatomic) unsigned roundedCornersCompensationDelayMode;	// G=0x34f2bfb9; S=0x34f2bfd9; 
+ (void)_loadImages;	// 0x34f2b119
+ (float)defaultHeight;	// 0x34f2b2c1
- (id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;	// 0x34f2b31d
- (void)_buttonTapped:(id)tapped;	// 0x34f2c0f5
// declared property getter: - (id)_leftButton;	// 0x34f2c17d
// declared property getter: - (id)_rightButton;	// 0x34f2c1b1
// declared property setter: - (void)_setLeftButton:(id)button;	// 0x34f2c18d
// declared property setter: - (void)_setRightButton:(id)button;	// 0x34f2c1c1
- (void)clearAllVibrationComponents;	// 0x34f2c039
// declared property getter: - (double)currentTimeInterval;	// 0x34f2bf79
- (void)dealloc;	// 0x34f2b495
// declared property getter: - (id)delegate;	// 0x34f2c15d
- (void)drawRect:(CGRect)rect;	// 0x34f2c059
// declared property getter: - (BOOL)isLeftButtonEnabled;	// 0x34f2bed1
// declared property getter: - (BOOL)isRightButtonEnabled;	// 0x34f2bf25
// declared property getter: - (unsigned)roundedCornersCompensationDelayMode;	// 0x34f2bfb9
// declared property setter: - (void)setCurrentTimeInterval:(double)interval;	// 0x34f2bf99
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34f2c16d
- (void)setLeftButtonColor:(int)color title:(id)title icon:(id)icon enabled:(BOOL)enabled rightButtonColor:(int)color5 title:(id)title6 icon:(id)icon7 enabled:(BOOL)enabled8 animationDuration:(double)duration completion:(id)completion;	// 0x34f2b509
// declared property setter: - (void)setLeftButtonEnabled:(BOOL)enabled;	// 0x34f2bef9
// declared property setter: - (void)setRightButtonEnabled:(BOOL)enabled;	// 0x34f2bf4d
// declared property setter: - (void)setRoundedCornersCompensationDelayMode:(unsigned)mode;	// 0x34f2bfd9
- (void)vibrationComponentDidEnd;	// 0x34f2c019
- (void)vibrationComponentDidStart;	// 0x34f2bff9
@end
