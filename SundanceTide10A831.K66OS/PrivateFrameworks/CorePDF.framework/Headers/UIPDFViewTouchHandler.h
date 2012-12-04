/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIGestureRecognizerDelegate.h"
#import <UIResponder.h> // Unknown library

@class UIMenuController, UIPDFViewMagnifyController, UITapGestureRecognizer, UIPDFPageView, UILongPressGestureRecognizer, UIPDFSelectionController;

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {
	UIPDFPageView *_pdfPageView;	// 4 = 0x4
	UITapGestureRecognizer *_doubleTapRecognizer;	// 8 = 0x8
	UITapGestureRecognizer *_singleTapRecognizer;	// 12 = 0xc
	UILongPressGestureRecognizer *_briefPressRecognizer;	// 16 = 0x10
	UILongPressGestureRecognizer *_longPressRecognizer;	// 20 = 0x14
	UITapGestureRecognizer *_twoFingerTapRecognizer;	// 24 = 0x18
	UIMenuController *_menuController;	// 28 = 0x1c
	UIPDFSelectionController *_selectionController;	// 32 = 0x20
	UIPDFViewMagnifyController *_magnifyController;	// 36 = 0x24
	BOOL _trackingSelection;	// 40 = 0x28
	BOOL _showMagnifier;	// 41 = 0x29
@private
	BOOL _showLoupe;	// 42 = 0x2a
@protected
	BOOL _firstTouch;	// 43 = 0x2b
	BOOL _useDelegateForLinks;	// 44 = 0x2c
	BOOL _allowMenu;	// 45 = 0x2d
}
@property(assign) BOOL allowMenu;	// G=0x322672bd; S=0x322672d5; @synthesize=_allowMenu
+ (void)releaseViewManager;	// 0x32265f41
- (id)initWithView:(id)view;	// 0x32265f69
// declared property getter: - (BOOL)allowMenu;	// 0x322672bd
- (void)briefPressRecognized:(id)recognized;	// 0x32266601
- (BOOL)canBecomeFirstResponder;	// 0x32266575
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x32266fd1
- (void)copy:(id)copy;	// 0x32267051
- (void)dealloc;	// 0x322662a1
- (void)disableRecognizers;	// 0x322664d5
- (void)doubleTapRecognized:(id)recognized;	// 0x32266af5
- (void)enableRecognizers;	// 0x32266445
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x32266dc5
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x32266fcd
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x32266e15
- (void)hideMenu;	// 0x322672b9
- (void)longPressRecognized:(id)recognized;	// 0x322668c9
- (id)nextResponder;	// 0x32266565
- (BOOL)resignFirstResponder;	// 0x32266579
- (void)selectAll:(id)all;	// 0x32267099
// declared property setter: - (void)setAllowMenu:(BOOL)menu;	// 0x322672d5
- (void)setFirstTouch;	// 0x322665e1
- (void)showMenu;	// 0x32267141
- (void)singleTapRecognized:(id)recognized;	// 0x32266bad
- (void)twoFingerTapRecognized:(id)recognized;	// 0x32266c99
@end
