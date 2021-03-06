/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSUndoManager, UIView;

@interface UIResponder : NSObject {
}
@property(readonly, assign, nonatomic) UIResponder *_editingDelegate;	// G=0x35412171; 
@property(readonly, assign, nonatomic) UIResponder *_responderForEditing;	// G=0x3541214d; 
@property(readonly, assign) UIView *inputAccessoryView;	// G=0x3530b4b9; 
@property(readonly, assign) UIView *inputView;	// G=0x3530b429; 
@property(readonly, assign, nonatomic) NSUndoManager *undoManager;	// G=0x354f860d; 
- (void)_becomeFirstResponder;	// 0x3530ac1d
- (void)_becomeFirstResponderAndMakeVisible;	// 0x354f8791
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x3537b33d
- (void)_beginPinningInputViews;	// 0x3543fd15
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x353a5e71
- (void)_completeForwardingTouches:(id)touches phase:(int)phase event:(id)event;	// 0x35320fc5
- (void)_completeForwardingTouches:(id)touches phase:(int)phase event:(id)event index:(unsigned)index;	// 0x35320fe9
- (BOOL)_containedInAbsoluteResponderChain;	// 0x35364445
- (BOOL)_containsResponder:(id)responder;	// 0x35328bb1
- (void)_controlMouseDown:(GSEventRef)down;	// 0x354f8725
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x354f872d
- (void)_controlMouseUp:(GSEventRef)up;	// 0x354f8729
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x35321f71
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x353232a9
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x3544b651
- (id)_deepestDefaultFirstResponder;	// 0x3533139d
- (id)_deepestDefaultFirstResponderMatching:(id)matching;	// 0x354f87a1
// declared property getter: - (id)_editingDelegate;	// 0x35412171
- (void)_endPinningInputViews;	// 0x353e307d
- (void)_finishResignFirstResponder;	// 0x35328cd1
- (id)_firstResponder;	// 0x353296fd
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x3541f1e9
- (BOOL)_isPinningInputViews;	// 0x353e3021
- (BOOL)_isRootForKeyResponderCycle;	// 0x354f8609
- (BOOL)_isSettingFirstResponder;	// 0x3530aa41
- (BOOL)_isTransitioningFromView:(id)view;	// 0x35423ca1
- (id)_keyboardResponder;	// 0x3530b58d
- (id)_nextFirstResponderIfAllowed;	// 0x35328bf1
- (id)_nextKeyResponder;	// 0x354f8601
- (id)_previousKeyResponder;	// 0x354f8605
- (BOOL)_promoteDeepestDefaultFirstResponder;	// 0x35331245
- (BOOL)_requiresKeyboardResetOnReload;	// 0x3530b27d
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x3530b50d
- (void)_resignFirstResponder;	// 0x35329641
- (id)_responderForBecomeFirstResponder;	// 0x35328bad
// declared property getter: - (id)_responderForEditing;	// 0x3541214d
- (void)_setFirstResponder:(id)responder;	// 0x3530ac31
- (void)_setIsSettingFirstResponder:(BOOL)responder;	// 0x3530ab61
- (BOOL)_shouldUseDefaultFirstResponder;	// 0x35331435
- (BOOL)_shouldUseKeyWindowStack;	// 0x35329725
- (BOOL)_shouldUseNextFirstResponder;	// 0x35328c39
- (id)_targetForAction:(SEL)action withSender:(id)sender;	// 0x354f8731
- (id)_window;	// 0x35386b01
- (void)_windowBecameKey;	// 0x35423c35
- (void)_windowResignedKey;	// 0x35423c31
- (BOOL)becomeFirstResponder;	// 0x3530a7cd
- (BOOL)canBecomeFirstResponder;	// 0x353296f9
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x353e3a15
- (BOOL)canResignFirstResponder;	// 0x35328bed
- (id)defaultFirstResponder;	// 0x35331431
- (id)firstResponder;	// 0x3530aad5
- (void)gestureChanged:(GSEventRef)changed;	// 0x354f85fd
- (void)gestureEnded:(GSEventRef)ended;	// 0x354f85f9
- (void)gestureStarted:(GSEventRef)started;	// 0x354f85f5
// declared property getter: - (id)inputAccessoryView;	// 0x3530b4b9
// declared property getter: - (id)inputView;	// 0x3530b429
- (BOOL)isFirstResponder;	// 0x3530ae5d
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x354f85e1
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x354f85e9
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x354f85e5
- (void)mouseDown:(GSEventRef)down;	// 0x354f858d
- (void)mouseDragged:(GSEventRef)dragged;	// 0x354f85d1
- (void)mouseEntered:(GSEventRef)entered;	// 0x354f85d5
- (void)mouseExited:(GSEventRef)exited;	// 0x354f85d9
- (void)mouseMoved:(GSEventRef)moved;	// 0x354f85dd
- (void)mouseUp:(GSEventRef)up;	// 0x354f85cd
- (id)nextFirstResponder;	// 0x35328c6d
- (id)nextResponder;	// 0x3530b4b5
- (void)reloadInputViews;	// 0x3530adb5
- (void)reloadInputViewsWithoutReset;	// 0x354f8649
- (void)remoteControlReceivedWithEvent:(id)event;	// 0x354f85ed
- (BOOL)resignFirstResponder;	// 0x35308615
- (void)scrollWheel:(GSEventRef)wheel;	// 0x354f85f1
- (id)textInputView;	// 0x355fd7cd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3542f141
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35424fe9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35431699
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x354650fd
// declared property getter: - (id)undoManager;	// 0x354f860d
@end

