/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardLayoutProtocol.h"

@class NSMutableArray, UITouch;

@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol> {
	NSMutableArray *_uncommittedTouches;	// 44 = 0x2c
	UITouch *_activeTouch;	// 48 = 0x30
	UITouch *_shiftKeyTouch;	// 52 = 0x34
	UITouch *_swipeTouch;	// 56 = 0x38
	int _orientation;	// 60 = 0x3c
	int m_orientation;	// 64 = 0x40
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x3016b01d; S=0x3015fe5d; @synthesize=_activeTouch
@property(assign) int orientation;	// G=0x30238ff5; S=0x3008b05d; @synthesize=m_orientation
@property(retain, nonatomic) UITouch *shiftKeyTouch;	// G=0x30239015; S=0x300844b9; @synthesize=_shiftKeyTouch
@property(retain, nonatomic) UITouch *swipeTouch;	// G=0x30239005; S=0x30239301; @synthesize=_swipeTouch
- (id)initWithFrame:(CGRect)frame;	// 0x30158335
- (id)activationIndicatorView;	// 0x30238fb5
// declared property getter: - (id)activeTouch;	// 0x3016b01d
- (void)addSwipeRecognizer;	// 0x30239069
- (id)baseKeyForString:(id)string;	// 0x30238fd9
- (BOOL)canProduceString:(id)string;	// 0x30238fbd
- (id)candidateList;	// 0x30238f99
- (void)changeToKeyplane:(id)keyplane;	// 0x30238fe1
- (void)commitTouchesBeforeTouch:(id)touch;	// 0x3015df55
- (void)deactivateActiveKeys;	// 0x30238f71
- (void)dealloc;	// 0x30239119
- (void)didClearInput;	// 0x3016d85d
- (BOOL)doesKeyCharging;	// 0x30238f8d
- (float)flickDistance;	// 0x30239025
- (float)hitBuffer;	// 0x30238fd5
- (BOOL)isShiftKeyBeingHeld;	// 0x30238f85
- (BOOL)isShiftKeyPlaneChooser;	// 0x30238f89
- (id)keyplaneForKey:(id)key;	// 0x30238fdd
- (void)longPressAction;	// 0x30238f91
// declared property getter: - (int)orientation;	// 0x30238ff5
- (BOOL)performReturnAction;	// 0x30238f95
- (void)phraseBoundaryDidChange;	// 0x30238fd1
- (void)restoreDefaultsForAllKeys;	// 0x30238fb1
- (void)restoreDefaultsForKey:(id)key;	// 0x30238fad
- (void)setAction:(SEL)action forKey:(id)key;	// 0x30238fa5
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x3015fe5d
- (void)setAutoshift:(BOOL)autoshift;	// 0x30238f81
- (void)setLabel:(id)label forKey:(id)key;	// 0x30238f9d
- (void)setLongPressAction:(SEL)action forKey:(id)key;	// 0x30238fa9
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x3008b05d
- (void)setShift:(BOOL)shift;	// 0x30238f7d
// declared property setter: - (void)setShiftKeyTouch:(id)touch;	// 0x300844b9
// declared property setter: - (void)setSwipeTouch:(id)touch;	// 0x30239301
- (void)setTarget:(id)target forKey:(id)key;	// 0x30238fa1
- (BOOL)shiftKeyRequiresImmediateUpdate;	// 0x301c34a5
// declared property getter: - (id)shiftKeyTouch;	// 0x30239015
- (BOOL)shouldShowIndicator;	// 0x30238fb9
- (void)showKeyboardType:(int)type withAppearance:(int)appearance;	// 0x30238f6d
- (id)simulateTouchForCharacter:(id)character errorVector:(CGPoint)vector shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x30238fe5
- (void)swipeGestureRecognized:(id)recognized;	// 0x302390d9
// declared property getter: - (id)swipeTouch;	// 0x30239005
- (void)touchCancelled:(id)cancelled;	// 0x30238fcd
- (void)touchDown:(id)down;	// 0x30238fc1
- (void)touchDragged:(id)dragged;	// 0x30238fc5
- (void)touchUp:(id)up;	// 0x30238fc9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3015de0d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30239195
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30165799
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x301b5a8d
- (void)updateLocalizedKeys;	// 0x30085541
- (void)updateReturnKey;	// 0x30238f75
- (BOOL)usesAutoShift;	// 0x30238f79
@end

