/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardImplGeometryDelegate.h"
#import "UIView.h"
#import "UIKit-Structs.h"

@class UIImage, UITextInputTraits;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
	UIImage *m_snapshot;	// 96 = 0x60
	UITextInputTraits *m_defaultTraits;	// 100 = 0x64
	BOOL m_typingDisabled;	// 104 = 0x68
	BOOL m_minimized;	// 105 = 0x69
	BOOL m_respondingToImplGeometryChange;	// 106 = 0x6a
	int m_orientation;	// 108 = 0x6c
	int m_idiom;	// 112 = 0x70
}
@property(assign, nonatomic) BOOL caretBlinks;	// G=0x2f65bb7d; S=0x2f65bb35; 
@property(assign, nonatomic) BOOL caretVisible;	// G=0x2f65bbf9; S=0x2f65bbb1; 
@property(retain) id defaultTextInputTraits;	// G=0x2f65bcb9; S=0x2f65bd19; converted property
@property(assign, nonatomic) int keyboardIdiom;	// G=0x2f65cc69; S=0x2f65cc79; @synthesize=m_idiom
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x2f4ce0cd; S=0x2f65c6a5; 
@property(assign) BOOL returnKeyEnabled;	// G=0x2f65bc2d; S=0x2f65bc71; converted property
@property(assign, nonatomic) BOOL showsCandidatesInline;	// G=0x2f65cbdd; S=0x2f55ace9; 
@property(assign, nonatomic) BOOL typingEnabled;	// G=0x2f65bee9; S=0x2f65bf01; 
+ (void)initImplementationNow;	// 0x2f65b811
+ (void)_clearActiveKeyboard;	// 0x2f65b801
+ (id)activeKeyboard;	// 0x2f3f0d2d
+ (CGRect)defaultFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x2f65b8dd
+ (CGSize)defaultSize;	// 0x2f65b8ad
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x2f4bcb8d
+ (BOOL)isInHardwareKeyboardMode;	// 0x2f65cc11
+ (BOOL)isOnScreen;	// 0x2f65b9f9
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x2f65bad1
+ (void)removeAllDynamicDictionaries;	// 0x2f65b82d
+ (BOOL)respondsToProxGesture;	// 0x2f65ba3d
+ (BOOL)shouldMinimizeForHardwareKeyboard;	// 0x2f65ba85
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x2f44bd31
+ (BOOL)splitKeyboardEnabled;	// 0x2f65cc45
- (id)initWithDefaultSize;	// 0x2f65b6e9
- (id)initWithFrame:(CGRect)frame;	// 0x2f4bcc89
- (void)_acceptCurrentCandidate;	// 0x2f65d521
- (id)_baseKeyForRepresentedString:(id)representedString;	// 0x2f65d22d
- (void)_changeToKeyplane:(id)keyplane;	// 0x2f65d345
- (id)_getAutocorrection;	// 0x2f65d4ed
- (id)_getCurrentKeyboardName;	// 0x2f65d1c5
- (id)_getCurrentKeyplaneName;	// 0x2f65d191
- (id)_getLocalizedInputMode;	// 0x2f65d1f9
- (BOOL)_hasCandidates;	// 0x2f65d555
- (BOOL)_isAutomaticKeyboard;	// 0x2f7a2fc5
- (id)_keyplaneForKey:(id)key;	// 0x2f65d2b5
- (id)_keyplaneNamed:(id)named;	// 0x2f65d2fd
- (int)_positionInCandidateList:(id)candidateList;	// 0x2f65d5b5
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x2f65d4b5
- (void)_setInputMode:(id)mode;	// 0x2f65d47d
- (void)_setRenderConfig:(id)config;	// 0x2f65c265
- (id)_touchPoint:(CGPoint)point;	// 0x2f65d38d
- (id)_typeCharacter:(id)character withError:(CGPoint)error shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x2f65d3fd
- (void)acceptAutocorrection;	// 0x2f4f5d7d
- (void)activate;	// 0x2f4ceac5
- (void)autoAdjustOrientation;	// 0x2f4c0bd9
- (void)autoAdjustOrientationForSize:(CGSize)size;	// 0x2f4c0985
- (BOOL)canDismiss;	// 0x2f65cbd9
// declared property getter: - (BOOL)caretBlinks;	// 0x2f65bb7d
// declared property getter: - (BOOL)caretVisible;	// 0x2f65bbf9
- (void)clearSnapshot;	// 0x2f65bde5
- (void)deactivate;	// 0x2f65bf1d
- (void)dealloc;	// 0x2f65b75d
// converted property getter: - (id)defaultTextInputTraits;	// 0x2f65bcb9
- (id)delegate;	// 0x2f65bda1
- (void)displayLayer:(id)layer;	// 0x2f4d0845
- (void)geometryChangeDone:(BOOL)done;	// 0x2f4dbbed
- (UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)implHeightDelta;	// 0x2f65c815
- (UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)minimize;	// 0x2f65c045
- (BOOL)hasAutocorrectPrompt;	// 0x2f65bafd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x2f4eb41d
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x2f65ca69
- (int)interfaceOrientation;	// 0x2f4bd7ad
- (BOOL)isActive;	// 0x2f4cdd61
// declared property getter: - (BOOL)isMinimized;	// 0x2f4ce0cd
// declared property getter: - (int)keyboardIdiom;	// 0x2f65cc69
- (void)keyboardMinMaximized:(id)maximized finished:(id)finished context:(id)context;	// 0x2f65c6e5
- (void)manualKeyboardWasOrderedIn;	// 0x2f65d0e9
- (void)manualKeyboardWasOrderedOut;	// 0x2f65d159
- (void)manualKeyboardWillBeOrderedIn;	// 0x2f65d0b1
- (void)manualKeyboardWillBeOrderedOut;	// 0x2f65d121
- (void)maximize;	// 0x2f65c4dd
- (void)minimize;	// 0x2f65c315
- (void)movedFromSuperview:(id)superview;	// 0x2f4ce9b5
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x2f4dd68d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x2f4dd5b1
- (void)prepareForGeometryChange;	// 0x2f4cee39
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x2f65c985
- (void)removeAutocorrectPrompt;	// 0x2f4f648d
- (void)removeFromSuperview;	// 0x2f51d01d
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x2f4f0e95
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x2f65bc2d
// declared property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x2f65bb35
// declared property setter: - (void)setCaretVisible:(BOOL)visible;	// 0x2f65bbb1
- (void)setCorrectionLearningAllowed:(BOOL)allowed;	// 0x2f65c1d9
// converted property setter: - (void)setDefaultTextInputTraits:(id)traits;	// 0x2f65bd19
- (void)setFrame:(CGRect)frame;	// 0x2f4bcdb5
// declared property setter: - (void)setKeyboardIdiom:(int)idiom;	// 0x2f65cc79
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x2f65c6a5
- (void)setNeedsDisplay;	// 0x2f4bcf11
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x2f65bc71
// declared property setter: - (void)setShowsCandidatesInline:(BOOL)anInline;	// 0x2f55ace9
// declared property setter: - (void)setTypingEnabled:(BOOL)enabled;	// 0x2f65bf01
- (BOOL)shouldSaveMinimizationState;	// 0x2f65c041
// declared property getter: - (BOOL)showsCandidatesInline;	// 0x2f65cbdd
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;	// 0x2f4ce655
- (void)takeSnapshot;	// 0x2f65be11
- (id)targetWindow;	// 0x2f65c211
- (int)textEffectsVisibilityLevel;	// 0x2f65c021
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f65c031
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f65c03d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f65c039
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x2f65c035
// declared property getter: - (BOOL)typingEnabled;	// 0x2f65bee9
- (void)updateLayout;	// 0x2f4f6099
@end

