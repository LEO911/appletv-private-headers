/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIPopoverBackgroundView, UIPopoverController, UIActionSheet, UIImageView;

__attribute__((visibility("hidden")))
@interface _UIPopoverView : UIView {
	UIView *_contentView;	// 84 = 0x54
	UIPopoverBackgroundView *_backgroundView;	// 88 = 0x58
	Class _backgroundViewClass;	// 92 = 0x5c
	UIImageView *_toolbarShine;	// 96 = 0x60
	BOOL _showsBackgroundComponentHighlights;	// 100 = 0x64
	BOOL _showsBackgroundViewHighlight;	// 101 = 0x65
	BOOL _showsContentViewHighlight;	// 102 = 0x66
	UIActionSheet *_presentedActionSheet;	// 104 = 0x68
	UIPopoverController *_popoverController;	// 108 = 0x6c
}
@property(assign, nonatomic) unsigned arrowDirection;	// G=0x31fb8595; S=0x31fb85b5; 
@property(assign, nonatomic) float arrowOffset;	// G=0x31fb8539; S=0x31fb8559; 
@property(assign, nonatomic) int backgroundStyle;	// G=0x31fb8819; S=0x31fb8839; 
@property(readonly, retain) UIPopoverBackgroundView *backgroundView;	// G=0x31fb8335; converted property
@property(readonly, retain) UIView *contentView;	// G=0x31fb82fd; converted property
@property(assign, nonatomic) UIPopoverController *popoverController;	// G=0x31fb9099; S=0x31fb90a9; @synthesize=_popoverController
@property(retain, nonatomic) UIActionSheet *presentedActionSheet;	// G=0x31fb9079; S=0x31fb9089; @synthesize=_presentedActionSheet
@property(assign, nonatomic) BOOL showsBackgroundComponentHighlights;	// G=0x31fb9019; S=0x31fb9029; @synthesize=_showsBackgroundComponentHighlights
@property(assign, nonatomic) BOOL showsBackgroundViewHighlight;	// G=0x31fb9039; S=0x31fb9049; @synthesize=_showsBackgroundViewHighlight
@property(assign, nonatomic) BOOL showsContentViewHighlight;	// G=0x31fb9059; S=0x31fb9069; @synthesize=_showsContentViewHighlight
@property(readonly, retain) UIImageView *toolbarShine;	// G=0x31fb83e5; converted property
+ (id)popoverViewContainingView:(id)view;	// 0x31d17bb1
- (id)initWithFrame:(CGRect)frame;	// 0x31fb7d99
- (id)initWithFrame:(CGRect)frame backgroundViewClass:(Class)aClass;	// 0x31fb7ae1
- (BOOL)_allowsCustomizationOfContent;	// 0x31fb8535
- (void)_hideArrow;	// 0x31fb8de5
- (BOOL)_isIgnoringTapsInDimmingView;	// 0x31fb8e8d
- (void)_layoutToolbarShine;	// 0x31fb7fa5
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)newFrame;	// 0x31fb82dd
- (void)_presentationInPopoverDidBeginForViewController:(id)_presentationInPopover;	// 0x31fb8f5d
- (void)_presentationInPopoverDidEndForViewController:(id)_presentationInPopover;	// 0x31fb8fb5
- (void)_presentationInPopoverWillBeginForViewController:(id)_presentationInPopover;	// 0x31fb8f65
- (void)_presentationInPopoverWillEndForViewController:(id)_presentationInPopover;	// 0x31fb8f61
- (void)_setCornerRadius:(float)radius;	// 0x31fb8d45
- (void)_setFrame:(CGRect)frame arrowOffset:(float)offset;	// 0x31fb8941
- (void)_setIgnoreTapsInDimmingView:(BOOL)dimmingView;	// 0x31fb8ec1
- (void)_showArrow;	// 0x31fb8d95
- (CGRect)_snapshotBounds;	// 0x31fb83f5
- (int)_style;	// 0x31fb82d9
- (id)_viewForModalPresentationOfViewController:(id)viewController;	// 0x31fb8e35
// declared property getter: - (unsigned)arrowDirection;	// 0x31fb8595
// declared property getter: - (float)arrowOffset;	// 0x31fb8539
// declared property getter: - (int)backgroundStyle;	// 0x31fb8819
// converted property getter: - (id)backgroundView;	// 0x31fb8335
// converted property getter: - (id)contentView;	// 0x31fb82fd
- (void)dealloc;	// 0x31fb7dc5
- (void)layoutSubviews;	// 0x31fb810d
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x31fb82f1
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x31fb82f9
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x31fb82f5
// declared property getter: - (id)popoverController;	// 0x31fb9099
// declared property getter: - (id)presentedActionSheet;	// 0x31fb9079
// declared property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x31fb85b5
// declared property setter: - (void)setArrowOffset:(float)offset;	// 0x31fb8559
// declared property setter: - (void)setBackgroundStyle:(int)style;	// 0x31fb8839
// declared property setter: - (void)setPopoverController:(id)controller;	// 0x31fb90a9
// declared property setter: - (void)setPresentedActionSheet:(id)sheet;	// 0x31fb9089
// declared property setter: - (void)setShowsBackgroundComponentHighlights:(BOOL)highlights;	// 0x31fb9029
// declared property setter: - (void)setShowsBackgroundViewHighlight:(BOOL)highlight;	// 0x31fb9049
// declared property setter: - (void)setShowsContentViewHighlight:(BOOL)highlight;	// 0x31fb9069
- (void)setUseToolbarShine:(BOOL)shine;	// 0x31fb887d
// declared property getter: - (BOOL)showsBackgroundComponentHighlights;	// 0x31fb9019
// declared property getter: - (BOOL)showsBackgroundViewHighlight;	// 0x31fb9039
// declared property getter: - (BOOL)showsContentViewHighlight;	// 0x31fb9059
- (id)standardChromeView;	// 0x31fb836d
- (BOOL)toolbarIsVisible;	// 0x31fb8f45
// converted property getter: - (id)toolbarShine;	// 0x31fb83e5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31fb82e1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31fb82ed
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31fb82e9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31fb82e5
- (id)viewController;	// 0x31fb8efd
- (void)willMoveToWindow:(id)window;	// 0x31fb7e3d
@end
