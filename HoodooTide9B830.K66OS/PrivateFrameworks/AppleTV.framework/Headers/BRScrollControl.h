/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ScrollAnimationDelegate, BRFadeMaskLayer;

@interface BRScrollControl : BRControl {
@private
	BRControl *_content;	// 48 = 0x30
	BRControl *_topFade;	// 52 = 0x34
	BRControl *_bottomFade;	// 56 = 0x38
	BRControl *_leftFade;	// 60 = 0x3c
	BRControl *_rightFade;	// 64 = 0x40
	BRFadeMaskLayer *_mask;	// 68 = 0x44
	ScrollAnimationDelegate *_animationDelegate;	// 72 = 0x48
	int _scrollDirection;	// 76 = 0x4c
	int _mode;	// 80 = 0x50
	float _edgeFadePercent;	// 84 = 0x54
	float _extraBottomSpace;	// 88 = 0x58
	float _extraTopSpace;	// 92 = 0x5c
	float _extraLeftSpace;	// 96 = 0x60
	float _extraRightSpace;	// 100 = 0x64
	BOOL _scrollPointSet;	// 104 = 0x68
	BOOL _constrainAllContentToEdges;	// 105 = 0x69
	BOOL _useRealMasks;	// 106 = 0x6a
	BOOL _followsFocus;	// 107 = 0x6b
	BOOL _contentLayoutDone;	// 108 = 0x6c
	BOOL _repeatActive;	// 109 = 0x6d
	BOOL _autoChangeAnimationModes;	// 110 = 0x6e
}
@property(assign) int animationMode;	// G=0x32a00ba5; S=0x32a009cd; converted property
@property(assign, nonatomic) BOOL autoChangeAnimationModes;	// G=0x32a00fc5; S=0x32a00fd5; @synthesize=_autoChangeAnimationModes
@property(assign) BOOL constrainAllContentToEdges;	// G=0x32a009bd; S=0x32a009a1; converted property
@property(retain) BRControl *content;	// G=0x32a00515; S=0x32a003fd; converted property
@property(assign) float edgeFadePercentage;	// G=0x32a00991; S=0x32a00931; converted property
@property(assign) BOOL followsFocus;	// G=0x32a00751; S=0x32a00715; converted property
@property(assign) int scrollDirection;	// G=0x32a00bd1; S=0x32a00bb5; converted property
@property(assign) BOOL useRealMasks;	// G=0x32a00921; S=0x32a008c1; converted property
- (id)init;	// 0x32a001a1
- (BOOL)_animatingPositionChange;	// 0x32a01245
- (void)_attemptToRemoveFadeMask;	// 0x32a02aa9
- (id)_bottomFadeFilters;	// 0x32a02c99
- (float)_calculateXPositionForPlane:(CGPoint)plane halfScrollerWidth:(float)width halfPlaneWidth:(float)width3;	// 0x32a01681
- (float)_calculateYPositionForPlane:(CGPoint)plane halfScrollerHeight:(float)height halfPlaneHeight:(float)height3;	// 0x32a0171d
- (void)_enlargeScrollPlaneHeight:(CGPoint)height oldPosition:(CGPoint)position;	// 0x32a017b9
- (void)_enlargeScrollPlaneWidth:(CGPoint)width oldPosition:(CGPoint)position;	// 0x32a01879
- (id)_fadeMaskForBounds:(CGSize)bounds;	// 0x32a029f5
- (void)_focusChanged:(id)changed;	// 0x32a01f99
- (id)_leftFadeFilters;	// 0x32a02dad
- (void)_minimizeVisiblePlaneArea;	// 0x32a01939
- (id)_parentScrollControl;	// 0x32a019dd
- (id)_rightFadeFilters;	// 0x32a02ec1
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x32a01c49
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x32a01c9d
- (BOOL)_setPlanePosition:(CGPoint)position;	// 0x32a012a5
- (id)_topFadeFilters;	// 0x32a02b85
- (void)_updateEdgeFading;	// 0x32a02069
- (void)_updateFocusNotifications;	// 0x32a01eed
- (void)_updateHorizontalEdgeFading;	// 0x32a02571
- (void)_updateScrollPositionForFocus;	// 0x32a01d1d
- (void)_updateVerticalEdgeFading;	// 0x32a020b9
- (CGRect)_visibleRectOfControl:(id)control;	// 0x32a019e1
// converted property getter: - (int)animationMode;	// 0x32a00ba5
// declared property getter: - (BOOL)autoChangeAnimationModes;	// 0x32a00fc5
- (BOOL)autoScrolling;	// 0x32a006c1
- (BOOL)brEventAction:(id)action;	// 0x32a00525
// converted property getter: - (BOOL)constrainAllContentToEdges;	// 0x32a009bd
// converted property getter: - (id)content;	// 0x32a00515
- (void)controlWasActivated;	// 0x32a00be1
- (void)controlWasDeactivated;	// 0x32a00c21
- (void)dealloc;	// 0x32a002bd
// converted property getter: - (float)edgeFadePercentage;	// 0x32a00991
// converted property getter: - (BOOL)followsFocus;	// 0x32a00751
- (void)layoutSubcontrols;	// 0x32a00c61
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32a00f49
// converted property getter: - (int)scrollDirection;	// 0x32a00bd1
- (void)scrollToControl:(id)control;	// 0x32a007d1
- (void)scrollToPoint:(CGPoint)point;	// 0x32a00761
- (void)scrollToRect:(CGRect)rect;	// 0x32a00795
- (BOOL)scrolling;	// 0x32a0069d
- (void)scrollingCompleted;	// 0x32a00f89
// converted property setter: - (void)setAnimationMode:(int)mode;	// 0x32a009cd
// declared property setter: - (void)setAutoChangeAnimationModes:(BOOL)modes;	// 0x32a00fd5
// converted property setter: - (void)setConstrainAllContentToEdges:(BOOL)edges;	// 0x32a009a1
// converted property setter: - (void)setContent:(id)content;	// 0x32a003fd
// converted property setter: - (void)setEdgeFadePercentage:(float)percentage;	// 0x32a00931
// converted property setter: - (void)setFollowsFocus:(BOOL)focus;	// 0x32a00715
// converted property setter: - (void)setScrollDirection:(int)direction;	// 0x32a00bb5
// converted property setter: - (void)setUseRealMasks:(BOOL)masks;	// 0x32a008c1
// converted property getter: - (BOOL)useRealMasks;	// 0x32a00921
@end

