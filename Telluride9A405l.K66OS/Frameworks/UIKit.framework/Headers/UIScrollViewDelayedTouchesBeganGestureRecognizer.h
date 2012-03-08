/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
@private
	UIDelayedAction *_touchDelay;	// 56 = 0x38
	CGPoint _startScreenLocation;	// 60 = 0x3c
}
- (void)_resetGestureRecognizer;	// 0x32d7e05d
- (void)clearTimer;	// 0x32c9fe21
- (void)dealloc;	// 0x32c9fde1
- (void)sendDelayedTouches;	// 0x32db8531
- (void)sendTouchesShouldBeginForDelayedTouches:(id)sendTouches;	// 0x32d77205
- (void)sendTouchesShouldBeginForTouches:(id)sendTouches withEvent:(id)event;	// 0x32dc998d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32d74a41
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32dd59a5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32d77195
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32d98095
@end
