/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextSelection, NSArray, NSTimer, UITextInteractionAssistant, UITextRangeView;

__attribute__((visibility("hidden")))
@interface UITextSelectionView : UIView {
	UITextInteractionAssistant *m_interactionAssistant;	// 84 = 0x54
	UITextSelection *m_selection;	// 88 = 0x58
	NSTimer *m_caretTimer;	// 92 = 0x5c
	UIView *m_caretView;	// 96 = 0x60
	UITextRangeView *m_rangeView;	// 100 = 0x64
	BOOL m_caretBlinks;	// 104 = 0x68
	BOOL m_caretShowingNow;	// 105 = 0x69
	BOOL m_visible;	// 106 = 0x6a
	BOOL m_activated;	// 107 = 0x6b
	BOOL m_wasShowingCommands;	// 108 = 0x6c
	BOOL m_delayShowingCommands;	// 109 = 0x6d
	BOOL m_dictationReplacementsMode;	// 110 = 0x6e
	int m_showingCommandsCounter;	// 112 = 0x70
	NSArray *m_replacements;	// 116 = 0x74
	BOOL m_deferSelectionCommands;	// 120 = 0x78
	CFRunLoopObserverRef m_observer;	// 124 = 0x7c
}
@property(assign, nonatomic) BOOL caretBlinks;	// G=0x30ec03c5; S=0x30c920c5; @synthesize=m_caretBlinks
@property(readonly, assign, nonatomic) UIView *caretView;	// G=0x30c37109; @synthesize=m_caretView
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x30ec0c35; @synthesize=m_interactionAssistant
@property(readonly, assign, nonatomic) UITextRangeView *rangeView;	// G=0x30d01b31; 
@property(retain, nonatomic) NSArray *replacements;	// G=0x30d01b1d; S=0x30d01a35; @synthesize=m_replacements
@property(readonly, assign, nonatomic) UITextSelection *selection;	// G=0x30ce8801; 
@property(readonly, assign, nonatomic) BOOL selectionCommandsShowing;	// G=0x30cf6d8d; 
@property(assign, nonatomic) BOOL visible;	// G=0x30c374ad; S=0x30c91ddd; @synthesize=m_visible
- (id)initWithInteractionAssistant:(id)interactionAssistant;	// 0x30ebff61
- (void)activate;	// 0x30ce9c45
- (BOOL)affectedByScrollerNotification:(id)notification;	// 0x30ce6301
- (void)appearOrFadeIfNecessary;	// 0x30c91e01
- (void)calculateAndShowReplacements:(id)replacements;	// 0x30ec04dd
- (void)cancelDelayedCommandRequests;	// 0x30ce87d1
- (void)caretBlinkTimerFired:(id)fired;	// 0x30c36f49
// declared property getter: - (BOOL)caretBlinks;	// 0x30ec03c5
// declared property getter: - (id)caretView;	// 0x30c37109
- (void)clearCaret;	// 0x30cfb199
- (void)clearCaretBlinkTimer;	// 0x30ce9841
- (void)clearRange;	// 0x30ce9efd
- (CGRect)clippedTargetRect:(CGRect)rect;	// 0x30d06d15
- (void)configureForHighlightMode;	// 0x30ec0619
- (void)configureForReplacementMode;	// 0x30ec0645
- (void)configureForSelectionMode;	// 0x30d7655d
- (void)deactivate;	// 0x30d19da9
- (void)dealloc;	// 0x30d389cd
- (void)deferredUpdateSelectionCommands;	// 0x30ec0325
- (void)deferredUpdateSelectionRects;	// 0x30ce8a49
- (void)detach;	// 0x30ce982d
- (void)didRotate:(id)rotate;	// 0x30ec0b59
- (void)doneMagnifying;	// 0x30ec0a31
- (void)hideCaret:(int)caret;	// 0x30c37039
- (void)hideSelectionCommands;	// 0x30ce8789
- (void)hideSelectionCommandsAfterDelay:(double)delay;	// 0x30ec05d1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30cfc6a1
- (void)inputViewDidAnimate;	// 0x30cdfe45
- (void)inputViewDidChange;	// 0x30cfa689
- (void)inputViewDidMove;	// 0x30cdfe1d
- (void)inputViewWillAnimate;	// 0x30cdea79
- (void)inputViewWillChange;	// 0x30cf6c99
- (void)inputViewWillMove;	// 0x30cde9c9
- (void)installIfNecessary;	// 0x30ce9f1d
// declared property getter: - (id)interactionAssistant;	// 0x30ec0c35
- (void)layoutChangedByScrolling:(BOOL)scrolling;	// 0x30ec0965
- (void)prepareForMagnification;	// 0x30ec0995
// declared property getter: - (id)rangeView;	// 0x30d01b31
- (void)removeFromSuperview;	// 0x30ce9731
// declared property getter: - (id)replacements;	// 0x30d01b1d
- (void)scaleDidChange:(id)scale;	// 0x30d75b8d
- (void)scaleWillChange:(id)scale;	// 0x30d75895
- (id)scrollView;	// 0x30d07441
// declared property getter: - (id)selection;	// 0x30ce8801
- (CGRect)selectionBoundingBox;	// 0x30ec06b5
- (void)selectionChanged;	// 0x30c9228d
// declared property getter: - (BOOL)selectionCommandsShowing;	// 0x30cf6d8d
- (void)selectionDidScroll:(id)selection;	// 0x30ce63d9
- (void)selectionWillScroll:(id)selection;	// 0x30ce621d
// declared property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x30c920c5
// declared property setter: - (void)setReplacements:(id)replacements;	// 0x30d01a35
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x30c91ddd
- (BOOL)shouldBeVisible;	// 0x30c91f51
- (void)showCalloutBarAfterDelay:(double)delay;	// 0x30d01a49
- (void)showCaret:(int)caret;	// 0x30c381b9
- (void)showCommandsWithReplacements:(id)replacements;	// 0x30d05945
- (void)showReplacementsWithGenerator:(id)generator forDictation:(BOOL)dictation afterDelay:(double)delay;	// 0x30ec051d
- (void)showSelectionCommands;	// 0x30ec044d
- (void)showSelectionCommandsAfterDelay:(double)delay;	// 0x30d019fd
- (void)startCaretBlinkIfNeeded;	// 0x30ec0689
- (void)textSelectionViewActivated:(id)activated;	// 0x30ce9d2d
- (void)touchCaretBlinkTimer;	// 0x30c92165
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x30ec0be9
- (BOOL)updateCalloutBarRects:(id)rects effectsWindow:(id)window;	// 0x30d06745
- (void)updateSelectionCommands;	// 0x30ec03d5
- (void)updateSelectionDots;	// 0x30ec0345
- (void)updateSelectionRects;	// 0x30ce90d9
- (void)updateSelectionRectsIfNeeded;	// 0x30cfb11d
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x30ec0c0d
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x30ec09e1
- (void)viewAnimate:(id)animate;	// 0x30c37255
// declared property getter: - (BOOL)visible;	// 0x30c374ad
- (void)willRotate:(id)rotate;	// 0x30ec0a7d
- (void)windowDidResignOrBecomeKey;	// 0x30ec02e9
@end
