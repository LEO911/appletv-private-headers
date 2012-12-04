/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import <NSObject.h> // Unknown library

@class UIKeyboardCandidateView, NSString, UIView, NSArray;
@protocol UIKeyboardCandidateViewInline;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInline : NSObject <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
	NSArray *m_candidates;	// 4 = 0x4
	NSString *m_inlineText;	// 8 = 0x8
	CGRect m_inlineRect;	// 12 = 0xc
	UIView<UIKeyboardCandidateList> *m_inlineView;	// 28 = 0x1c
	UIKeyboardCandidateView<UIKeyboardCandidateViewInline> *m_extendedView;	// 32 = 0x20
	struct {
		unsigned isExtended;
	} _inlineFlags;	// 36 = 0x24
	int _promptTextType;	// 40 = 0x28
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 44 = 0x2c
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x30b34e09; S=0x30b34e19; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x30b34d69; S=0x30b34d79; @synthesize=m_candidates
@property(assign, nonatomic) CGRect inlineRect;	// G=0x30b34da9; S=0x30b34dcd; @synthesize=m_inlineRect
@property(retain, nonatomic) NSString *inlineText;	// G=0x30b34d89; S=0x30b34d99; @synthesize=m_inlineText
@property(assign, nonatomic) int promptTextType;	// G=0x30b34de9; S=0x30b34df9; @synthesize=_promptTextType
+ (id)sharedInstance;	// 0x30b33f8d
- (id)init;	// 0x30b3401d
- (id)_inlineView;	// 0x30b34e29
- (id)activeCandidateList;	// 0x30b34255
- (void)animateInlineCandidate;	// 0x30b34599
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x30b34965
- (id)candidateAtIndex:(unsigned)index;	// 0x30b34939
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x30b34c81
// declared property getter: - (id)candidateListDelegate;	// 0x30b34e09
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x30b34cd5
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x30b34d25
// declared property getter: - (id)candidates;	// 0x30b34d69
- (void)candidatesDidChange;	// 0x30b34559
- (void)configureKeyboard:(id)keyboard;	// 0x30b34a09
- (unsigned)count;	// 0x30b349e1
- (id)currentCandidate;	// 0x30b348c5
- (unsigned)currentIndex;	// 0x30b34911
- (void)dealloc;	// 0x30b341fd
// declared property getter: - (CGRect)inlineRect;	// 0x30b34da9
// declared property getter: - (id)inlineText;	// 0x30b34d89
- (BOOL)isReducedWidth;	// 0x30b33fd5
- (void)layout;	// 0x30b3459d
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x30b34595
// declared property getter: - (int)promptTextType;	// 0x30b34de9
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x30b34e19
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x30b34d79
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x30b34c2d
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x30b34b25
- (void)setCompletionContext:(id)context;	// 0x30b34c71
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x30b34dcd
// declared property setter: - (void)setInlineText:(id)text;	// 0x30b34d99
- (void)setInlineViewExtended:(BOOL)extended;	// 0x30b34295
// declared property setter: - (void)setPromptTextType:(int)type;	// 0x30b34df9
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x30b345e9
- (void)showCandidate:(id)candidate;	// 0x30b34681
- (void)showCandidateAtIndex:(unsigned)index;	// 0x30b346ad
- (void)showNextCandidate;	// 0x30b34759
- (void)showNextPage;	// 0x30b34875
- (void)showPageAtIndex:(unsigned)index;	// 0x30b34849
- (void)showPreviousCandidate;	// 0x30b347d1
- (void)showPreviousPage;	// 0x30b3489d
@end
