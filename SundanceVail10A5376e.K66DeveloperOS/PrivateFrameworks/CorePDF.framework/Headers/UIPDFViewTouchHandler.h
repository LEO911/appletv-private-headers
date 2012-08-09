/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIGestureRecognizerDelegate.h"
#import <UIResponder.h> // Unknown library

@class UIPDFViewMagnifyController, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPDFPageView, UIMenuController, UIPDFSelectionController;

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
@property(assign) BOOL allowMenu;	// G=0x357a72bd; S=0x357a72d5; @synthesize=_allowMenu
+ (void)releaseViewManager;	// 0x357a5f41
- (id)initWithView:(id)view;	// 0x357a5f69
// declared property getter: - (BOOL)allowMenu;	// 0x357a72bd
- (void)briefPressRecognized:(id)recognized;	// 0x357a6601
- (BOOL)canBecomeFirstResponder;	// 0x357a6575
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x357a6fd1
- (void)copy:(id)copy;	// 0x357a7051
- (void)dealloc;	// 0x357a62a1
- (void)disableRecognizers;	// 0x357a64d5
- (void)doubleTapRecognized:(id)recognized;	// 0x357a6af5
- (void)enableRecognizers;	// 0x357a6445
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x357a6dc5
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x357a6fcd
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x357a6e15
- (void)hideMenu;	// 0x357a72b9
- (void)longPressRecognized:(id)recognized;	// 0x357a68c9
- (id)nextResponder;	// 0x357a6565
- (BOOL)resignFirstResponder;	// 0x357a6579
- (void)selectAll:(id)all;	// 0x357a7099
// declared property setter: - (void)setAllowMenu:(BOOL)menu;	// 0x357a72d5
- (void)setFirstTouch;	// 0x357a65e1
- (void)showMenu;	// 0x357a7141
- (void)singleTapRecognized:(id)recognized;	// 0x357a6bad
- (void)twoFingerTapRecognized:(id)recognized;	// 0x357a6c99
@end
