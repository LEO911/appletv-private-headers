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
	UIDelayedAction *_touchDelay;	// 56 = 0x38
	CGPoint _startScreenLocation;	// 60 = 0x3c
}
- (void)_resetGestureRecognizer;	// 0x30d0530d
- (void)clearTimer;	// 0x30c352d1
- (void)dealloc;	// 0x30c3528d
- (void)sendDelayedTouches;	// 0x30d3e585
- (void)sendTouchesShouldBeginForDelayedTouches:(id)sendTouches;	// 0x30d0004d
- (void)sendTouchesShouldBeginForTouches:(id)sendTouches withEvent:(id)event;	// 0x30d4f435
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30cfd98d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30d5969d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30cfffc9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30d1ecc1
@end
