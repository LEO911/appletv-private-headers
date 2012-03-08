/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateExtendedInputTextFieldDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIScrollViewDelegate.h"
#import "UIView.h"

@class NSMutableDictionary, UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateTopBarShadowView, NSString, UIKeyboardCandidateExtendedInputView, UIKeyboardCandidateScrollViewController, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateExtended : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIScrollViewDelegate, UIKeyboardCandidateExtendedInputTextFieldDelegate> {
@private
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 48 = 0x30
	NSArray *_candidates;	// 52 = 0x34
	NSString *_inlineText;	// 56 = 0x38
	int _keyboardBehavior;	// 60 = 0x3c
	NSArray *_sorts;	// 64 = 0x40
	unsigned _selectedSortIndex;	// 68 = 0x44
	UIKeyboardCandidateExtendedInputView *_inputView;	// 72 = 0x48
	NSMutableDictionary *_scrollViewControllers;	// 76 = 0x4c
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 80 = 0x50
	UIKeyboardCandidateSortSelectionBar *_sortSelectionBar;	// 84 = 0x54
	UIKeyboardCandidateTopBarShadowView *_topBarShadowView;	// 88 = 0x58
	BOOL _keyboardHidden;	// 92 = 0x5c
	BOOL _animating;	// 93 = 0x5d
}
@property(assign, nonatomic) BOOL animating;	// G=0x33d14705; S=0x33d144f9; @synthesize=_animating
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x33d14561; S=0x33d14571; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x33d14581; S=0x33d1439d; @synthesize=_candidates
@property(copy, nonatomic) NSString *inlineText;	// G=0x33d14591; S=0x33d14435; @synthesize=_inlineText
@property(retain, nonatomic) UIKeyboardCandidateExtendedInputView *inputView;	// G=0x33d14615; S=0x33d14625; @synthesize=_inputView
@property(assign, nonatomic) int keyboardBehavior;	// G=0x33d145a1; S=0x33d145b1; @synthesize=_keyboardBehavior
@property(assign, nonatomic) BOOL keyboardHidden;	// G=0x33d146e5; S=0x33d146f5; @synthesize=_keyboardHidden
@property(retain, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x33d14649; S=0x33d14659; @synthesize=_scrollViewController
@property(readonly, assign, nonatomic) NSMutableDictionary *scrollViewControllers;	// G=0x33d14325; @synthesize=_scrollViewControllers
@property(readonly, assign, nonatomic) id selectedSort;	// G=0x33d14231; 
@property(assign, nonatomic) unsigned selectedSortIndex;	// G=0x33d145f5; S=0x33d14605; @synthesize=_selectedSortIndex
@property(retain, nonatomic) UIKeyboardCandidateSortSelectionBar *sortSelectionBar;	// G=0x33d1467d; S=0x33d1468d; @synthesize=_sortSelectionBar
@property(retain, nonatomic) NSArray *sorts;	// G=0x33d145c1; S=0x33d145d1; @synthesize=_sorts
@property(retain, nonatomic) UIKeyboardCandidateTopBarShadowView *topBarShadowView;	// G=0x33d146b1; S=0x33d146c1; @synthesize=_topBarShadowView
- (id)initWithFrame:(CGRect)frame keyboardBehavior:(int)behavior;	// 0x33d114bd
- (void)animateInWithInlineText:(id)inlineText inlineRect:(CGRect)rect inView:(id)view;	// 0x33d12775
// declared property getter: - (BOOL)animating;	// 0x33d14705
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x33d13e95
- (id)candidateAtIndex:(unsigned)index;	// 0x33d13e69
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x33d13fe9
// declared property getter: - (id)candidateListDelegate;	// 0x33d14561
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x33d14035
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x33d140e1
// declared property getter: - (id)candidates;	// 0x33d14581
- (void)closeButtonAction;	// 0x33d13b85
- (void)configureKeyboard:(id)keyboard;	// 0x33d13f2d
- (unsigned)count;	// 0x33d13ec1
- (id)currentCandidate;	// 0x33d13e19
- (unsigned)currentIndex;	// 0x33d13e41
- (void)dealloc;	// 0x33d1159d
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x33d13f59
- (void)hideKeyboard;	// 0x33d12639
- (CGRect)idealFrame;	// 0x33d11785
// declared property getter: - (id)inlineText;	// 0x33d14591
- (void)inputTextFieldCaretDidStartBlinking:(id)inputTextFieldCaret;	// 0x33d13cb1
// declared property getter: - (id)inputView;	// 0x33d14615
// declared property getter: - (int)keyboardBehavior;	// 0x33d145a1
// declared property getter: - (BOOL)keyboardHidden;	// 0x33d146e5
- (void)layout;	// 0x33d11fe5
- (void)layoutCandidatesWithFrame:(CGRect)frame;	// 0x33d1198d
- (void)layoutInputViewWithFrame:(CGRect)frame;	// 0x33d11d2d
- (void)layoutSortSelectionBarWithFrame:(CGRect)frame;	// 0x33d11e45
- (void)maximizeKeyboard;	// 0x33d124bd
- (void)minimizeKeyboard;	// 0x33d12445
- (void)orderOutWithAnimation:(BOOL)animation simultaneousAnimations:(id)animations completion:(id)completion targetHeight:(float)height;	// 0x33d13595
// declared property getter: - (id)scrollViewController;	// 0x33d14649
// declared property getter: - (id)scrollViewControllers;	// 0x33d14325
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x33d13c09
- (void)selectCandidate:(id)candidate;	// 0x33d13b59
// declared property getter: - (id)selectedSort;	// 0x33d14231
// declared property getter: - (unsigned)selectedSortIndex;	// 0x33d145f5
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x33d144f9
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x33d14571
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x33d1439d
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x33d13ee9
// declared property setter: - (void)setInlineText:(id)text;	// 0x33d14435
// declared property setter: - (void)setInputView:(id)view;	// 0x33d14625
// declared property setter: - (void)setKeyboardBehavior:(int)behavior;	// 0x33d145b1
// declared property setter: - (void)setKeyboardHidden:(BOOL)hidden;	// 0x33d146f5
// declared property setter: - (void)setScrollViewController:(id)controller;	// 0x33d14659
- (void)setSelectedCandidateIndex:(unsigned)index;	// 0x33d13d71
// declared property setter: - (void)setSelectedSortIndex:(unsigned)index;	// 0x33d14605
// declared property setter: - (void)setSortSelectionBar:(id)bar;	// 0x33d1468d
// declared property setter: - (void)setSorts:(id)sorts;	// 0x33d145d1
// declared property setter: - (void)setTopBarShadowView:(id)view;	// 0x33d146c1
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x33d13f1d
- (void)showCandidateAtIndex:(unsigned)index;	// 0x33d13cf5
- (void)showKeyboard;	// 0x33d12535
- (void)showNextCandidate;	// 0x33d13d21
- (void)showNextPage;	// 0x33d13dc9
- (void)showPageAtIndex:(unsigned)index;	// 0x33d13d9d
- (void)showPreviousCandidate;	// 0x33d13d49
- (void)showPreviousPage;	// 0x33d13df1
// declared property getter: - (id)sortSelectionBar;	// 0x33d1467d
- (void)sortSelectionBarAction:(id)action;	// 0x33d13b99
// declared property getter: - (id)sorts;	// 0x33d145c1
- (void)statusBarFrameWillChangeNotification:(id)statusBarFrame;	// 0x33d1412d
- (int)textEffectsVisibilityLevel;	// 0x33d1273d
// declared property getter: - (id)topBarShadowView;	// 0x33d146b1
@end
