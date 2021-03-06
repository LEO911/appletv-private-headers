/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIImageView.h> // Unknown library
#import "TelephonyUI-Structs.h"

@class UIAlphaAnimation, TPBottomLockBar;

@interface TPLockKnobView : UIImageView {
	TPBottomLockBar *_track;	// 96 = 0x60
	UIAlphaAnimation *_animation;	// 100 = 0x64
	float _centerDelta;	// 104 = 0x68
	BOOL _tracking;	// 108 = 0x6c
}
@property(readonly, assign, getter=isTracking) BOOL tracking;	// G=0x32ad8839; converted property
- (id)initWithImage:(id)image;	// 0x32ad8779
- (void)beginTracking:(id)tracking;	// 0x32ad88f1
- (void)dealloc;	// 0x32ad880d
// converted property getter: - (BOOL)isTracking;	// 0x32ad8839
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32ad87c1
- (void)setLockView:(id)view;	// 0x32ad87fd
- (BOOL)shouldBeginTracking:(id)tracking;	// 0x32ad8849
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32ad8a09
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32ad8e01
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32ad8cf1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32ad8a45
@end

