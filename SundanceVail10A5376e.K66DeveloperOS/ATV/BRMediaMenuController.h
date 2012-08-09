/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"

@class BRTextControl, NSString, BRWaitSpinnerControl, NSTimer, BRControl, BRFocusableImageControl;

__attribute__((visibility("hidden")))
@interface BRMediaMenuController : BRMenuController {
	BRControl *_previewControl;	// 144 = 0x90
	BRControl *_previewContainer;	// 148 = 0x94
	NSString *_previewControlItemHash;	// 152 = 0x98
	BRFocusableImageControl *_actionControl;	// 156 = 0x9c
	BRWaitSpinnerControl *_spinner;	// 160 = 0xa0
	float _controlDelay;	// 164 = 0xa4
	NSTimer *_controlDelayTimer;	// 168 = 0xa8
	BRTextControl *_noContentMessageControl;	// 172 = 0xac
}
@property(retain) id noContentMessage;	// G=0x27f4fd; S=0x27f429; converted property
@property(assign) BOOL showSpinner;	// G=0x27edad; S=0x27ed05; converted property
- (id)init;	// 0x27ea99
- (void)_cleanupControlDelayTimer;	// 0x280061
- (void)_controlDelayTimerHandler:(id)handler;	// 0x280095
- (void)_playstateChanged;	// 0x2800b5
- (void)_scrollSelectionFinalized:(id)finalized;	// 0x27ffad
- (void)_scrollWillStart:(id)_scroll;	// 0x27ff7d
- (void)_setDislaysActionControl:(BOOL)control;	// 0x27fc15
- (void)_updateActionControl;	// 0x27fe1d
- (void)_updateControls;	// 0x27fbe5
- (void)_updateControlsWithDelay;	// 0x27ffbd
- (void)_updatePreview;	// 0x27f995
- (id)accessibilityScreenContent;	// 0x27f875
- (id)actionItemAtIndex:(long)index;	// 0x27f425
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x27f421
- (BOOL)allowUnplayedMark;	// 0x27f3d5
- (BOOL)brEventAction:(id)action;	// 0x27f22d
- (void)clearPreviewController;	// 0x27f371
- (void)controlWasActivated;	// 0x27f629
- (void)controlWasDeactivated;	// 0x27f771
- (void)dealloc;	// 0x27ec25
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x27f141
- (void)layoutSubcontrols;	// 0x27edc5
// converted property getter: - (id)noContentMessage;	// 0x27f4fd
- (id)previewControlForItem:(long)item;	// 0x27f895
- (void)refreshControllerForModelUpdate;	// 0x27f535
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x27f579
- (void)resetPreviewController;	// 0x27f331
// converted property setter: - (void)setNoContentMessage:(id)message;	// 0x27f429
// converted property setter: - (void)setShowSpinner:(BOOL)spinner;	// 0x27ed05
// converted property getter: - (BOOL)showSpinner;	// 0x27edad
- (void)updatePreviewController;	// 0x27f321
@end
