/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidateList.h"
#import "UIKit-Structs.h"
#import "UIKBKeyView.h"

@class NSArray, NSMutableArray, UIKeyboardCandidateScrollViewController, UIColor;
@protocol UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateList> {
@private
	NSArray *m_candidates;	// 72 = 0x48
	NSMutableArray *m_buttons;	// 76 = 0x4c
	id<UIKeyboardCandidateListDelegate> m_delegate;	// 80 = 0x50
	UIKeyboardCandidateScrollViewController *m_scrollViewController;	// 84 = 0x54
	int m_columns;	// 88 = 0x58
	int m_candidatesPerColumn;	// 92 = 0x5c
	int m_candidatesPerPage;	// 96 = 0x60
	int m_current;	// 100 = 0x64
	int m_firstShown;	// 104 = 0x68
	int m_firstComposition;	// 108 = 0x6c
	int m_candidateCount;	// 112 = 0x70
	CGRect m_symbolRect;	// 116 = 0x74
	UIColor *m_textColor;	// 132 = 0x84
	CGColorRef m_highlightColor;	// 136 = 0x88
	BOOL m_respondsToSelect;	// 140 = 0x8c
	BOOL m_respondsToAccept;	// 141 = 0x8d
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x303277e1
- (id).cxx_construct;	// 0x30328be5
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x30328991
- (id)candidateAtIndex:(unsigned)index;	// 0x30328945
- (id)candidateList;	// 0x30327fa5
- (void)configureKeyboard:(id)keyboard;	// 0x303289a5
- (unsigned)count;	// 0x30328995
- (id)currentCandidate;	// 0x303288f5
- (unsigned)currentIndex;	// 0x30328935
- (void)dealloc;	// 0x30327b4d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30328ba9
- (void)jumpToCompositions;	// 0x30328c85
- (void)layout;	// 0x3032812d
- (void)nextCandidatesAction;	// 0x30327fbd
- (void)selectCandidate:(id)candidate;	// 0x30328be9
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x30327fcd
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x303286dd
- (void)showCandidateAtIndex:(unsigned)index;	// 0x30328799
- (void)showNextCandidate;	// 0x3032879d
- (void)showNextPage;	// 0x30328825
- (void)showPageAtIndex:(unsigned)index;	// 0x303287a5
- (void)showPreviousCandidate;	// 0x303287a1
- (void)showPreviousPage;	// 0x30328875
- (void)updateForKeyboard:(id)keyboard key:(id)key;	// 0x30327cb1
@end
