/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UITextInputTraits.h"
#import "UITextInput.h"
#import "UITextSelection.h"
#import "UITextSelectingContainer.h"

@class UITextRange, NSDictionary, UITextPosition, UIFont, UIDelayedAction, UITextSelectionView, UITextInteractionAssistant, WebFrame, UIColor, NSString, DOMHTMLElement, UIWebDocumentView;
@protocol UITextInputDelegate, UITextContentViewDelegate, UITextSelectingContent, UITextInputTokenizer;

@interface UITextContentView : UIView <UITextInput, UITextSelection, UITextSelectingContainer, UITextInputTraits> {
@private
	id m_delegate;	// 48 = 0x30
	WebFrame *m_frame;	// 52 = 0x34
	DOMHTMLElement *m_body;	// 56 = 0x38
	int m_marginTop;	// 60 = 0x3c
	UIDelayedAction *m_scrollToVisibleTimer;	// 64 = 0x40
	UIEdgeInsets m_selectionInset;	// 68 = 0x44
	float m_bottomBufferHeight;	// 84 = 0x54
	BOOL m_editable;	// 88 = 0x58
	BOOL m_editing;	// 89 = 0x59
	BOOL m_becomesEditableWithGestures;	// 90 = 0x5a
	BOOL m_becomingFirstResponder;	// 91 = 0x5b
	BOOL m_reentrancyGuard;	// 92 = 0x5c
	BOOL m_scrollsSelectionOnWebDocumentChanges;	// 93 = 0x5d
	BOOL m_hasExplicitTextAlignment;	// 94 = 0x5e
	UITextInteractionAssistant *m_interactionAssistant;	// 96 = 0x60
	UITextSelectionView *m_selectionView;	// 100 = 0x64
	UIWebDocumentView *m_webView;	// 104 = 0x68
	UIFont *m_font;	// 108 = 0x6c
	UIColor *m_textColor;	// 112 = 0x70
	int m_textAlignment;	// 116 = 0x74
}
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x32f4979d; S=0x32d04aad; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x32f4a139; 
@property(assign) float bottomBufferHeight;	// G=0x32f49ed1; S=0x32f49ebd; converted property
@property(assign) BOOL caretBlinks;	// G=0x32f48b81; S=0x32f48b7d; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x32d04219; 
@property(assign) unsigned dataDetectorTypes;	// G=0x32d52db1; S=0x32d0413d; converted property
@property(assign, nonatomic) id<UITextContentViewDelegate> delegate;	// G=0x32d048ed; S=0x32d04bf1; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x32d04209; S=0x32d5b745; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x32d52dd1; S=0x32d93c55; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x32f4a161; 
@property(retain, nonatomic) UIFont *font;	// G=0x32f495a9; S=0x32d04275; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x32f4a249; S=0x32f4a271; 
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x32d94001; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) int marginTop;	// G=0x32f497ad; S=0x32f497bd; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x32f4a05d; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x32f4a085; S=0x32f4a0ad; 
@property(assign) CGPoint offset;	// G=0x32f49ef5; S=0x32f49ef1; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x32f49f15; S=0x32f49f11; converted property
@property(assign, nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;	// G=0x32d04fd1; S=0x32d03015; @synthesize=m_scrollsSelectionOnWebDocumentChanges
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x32d918cd; S=0x32f496d5; 
@property(copy) UITextRange *selectedTextRange;	// G=0x32d91ce1; S=0x32dd8db9; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x32f4a4cd; S=0x32f4a4f5; 
@property(assign, nonatomic) int selectionGranularity;	// G=0x32f4a569; S=0x32d94035; 
@property(assign, nonatomic) UIEdgeInsets selectionInset;	// G=0x32d70be1; S=0x32dd5d49; @synthesize=m_selectionInset
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x32d034fd; 
@property(assign) BOOL selectionVisible;	// G=0x32f48b79; S=0x32f48b75; converted property
@property(assign) BOOL showScrollerIndicators;	// G=0x32f49ee9; S=0x32f49ee5; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x32d0566d; S=0x32d52b79; 
@property(assign, nonatomic) int textAlignment;	// G=0x32f49695; S=0x32f496a5; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x32f495e1; S=0x32f49619; 
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x32d91cdd; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x32d93fd9; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x32d04abd; converted property
- (id)initWithCoder:(id)coder;	// 0x32f485f9
- (id)initWithFrame:(CGRect)frame;	// 0x32d008f5
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x32dd5cf9
- (id)_automationValue;	// 0x32f4a711
- (void)_bold:(id)bold;	// 0x32f491d5
- (void)_define:(id)define;	// 0x32f491b5
- (void)_didScroll;	// 0x32dd7455
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x32f4a521
- (void)_hideSelectionCommands;	// 0x32f49001
- (void)_italicize:(id)italicize;	// 0x32f491f5
- (id)_keyboardResponder;	// 0x32d933a9
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32f487ed
- (void)_promptForReplace:(id)replace;	// 0x32f4917d
- (void)_scrollViewDidEndDecelerating;	// 0x32dd7479
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x32dd7475
- (void)_scrollViewWillBeginDragging;	// 0x32dd7451
- (void)_showTextStyleOptions:(id)options;	// 0x32f49235
- (void)_underline:(id)underline;	// 0x32f49215
- (id)automaticallySelectedOverlay;	// 0x32f48a99
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x32f4a2fd
- (BOOL)becomeFirstResponder;	// 0x32d91e79
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x32f4979d
- (void)beginSelectionChange;	// 0x32d5b8f1
// declared property getter: - (id)beginningOfDocument;	// 0x32f4a139
// converted property getter: - (float)bottomBufferHeight;	// 0x32f49ed1
- (BOOL)canBecomeFirstResponder;	// 0x32d920c5
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x32dda67d
- (BOOL)canResignFirstResponder;	// 0x32ddcead
- (void)cancelAutoscroll;	// 0x32f48b55
- (void)cancelDataDetectorsWithWebLock;	// 0x32dd7779
- (void)cancelInteractionWithLink;	// 0x32f49cb1
// converted property getter: - (BOOL)caretBlinks;	// 0x32f48b81
- (CGRect)caretRectForPosition:(id)position;	// 0x32d91d09
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x32f48b85
- (unsigned short)characterBeforeCaretSelection;	// 0x32f48f59
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x32f4a45d
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x32f4a2cd
- (void)clearScrollToVisibleTimer;	// 0x32d71129
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x32f48e2d
- (id)closestPositionToPoint:(CGPoint)point;	// 0x32d93f39
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x32f4a3e9
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x32d00ae9
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x32f4a1e9
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x32f489bd
// declared property getter: - (id)content;	// 0x32d04219
- (id)contentAsHTMLString;	// 0x32d05641
- (void)copy:(id)copy;	// 0x32f490dd
- (void)cut:(id)cut;	// 0x32f490bd
// converted property getter: - (unsigned)dataDetectorTypes;	// 0x32d52db1
- (void)dealloc;	// 0x32dd7569
// declared property getter: - (id)delegate;	// 0x32d048ed
- (void)deleteBackward;	// 0x32f49f21
- (void)detachInteractionAssistant;	// 0x32dd7535
- (void)detachSelectionView;	// 0x32dd7515
- (void)didMoveToSuperview;	// 0x32d04f5d
- (void)displayScrollerIndicators;	// 0x32f49eed
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x32f4927d
- (void)encodeWithCoder:(id)coder;	// 0x32f48841
// declared property getter: - (id)endOfDocument;	// 0x32f4a161
- (void)endSelectionChange;	// 0x32d5c285
- (void)ensureSelection;	// 0x32d93ce1
- (CGRect)firstRectForRange:(id)range;	// 0x32f4a35d
// declared property getter: - (id)font;	// 0x32f495a9
- (id)fontForCaretSelection;	// 0x32f48fe1
- (void)forwardInvocation:(id)invocation;	// 0x32d04b39
- (BOOL)hasMarkedText;	// 0x32f48ed5
- (BOOL)hasSelection;	// 0x32f48b11
- (BOOL)hasText;	// 0x32ca2005
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32d91c91
// declared property getter: - (id)inputDelegate;	// 0x32f4a249
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x32f49f75
- (id)insertDictationResultPlaceholder:(CGSize)placeholder;	// 0x32f49fa5
- (void)insertText:(id)text;	// 0x32f49f49
// declared property getter: - (id)interactionAssistant;	// 0x32d94001
// declared property getter: - (BOOL)isEditable;	// 0x32d04209
// declared property getter: - (BOOL)isEditing;	// 0x32d52dd1
- (BOOL)isFirstResponder;	// 0x32d91e21
- (BOOL)isInteractingWithLink;	// 0x32f49cf1
- (BOOL)isSMSTextView;	// 0x32d5bee9
- (void)keyboardDidShow:(id)keyboard;	// 0x32d718d9
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x32dd8e75
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x32dd9a8d
- (BOOL)keyboardInputChanged:(id)changed;	// 0x32d96af5
- (void)keyboardInputChangedSelection:(id)selection;	// 0x32d93a25
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x32f49d3d
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x32f4909d
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x32f4907d
// converted property getter: - (int)marginTop;	// 0x32f497ad
- (id)markedText;	// 0x32f48ef9
// declared property getter: - (id)markedTextRange;	// 0x32f4a05d
// declared property getter: - (id)markedTextStyle;	// 0x32f4a085
- (id)metadataDictionariesForDictationResults;	// 0x32f4a005
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32d04aed
- (BOOL)mightHaveLinks;	// 0x32f49c11
// converted property getter: - (CGPoint)offset;	// 0x32f49ef5
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x32f4a219
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x32f48eb5
- (void)paste:(id)paste;	// 0x32f490fd
- (void)performBecomeEditableTasks;	// 0x32d93c65
- (void)performScrollSelectionToVisible:(BOOL)visible;	// 0x32d709b9
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x32f4a1b9
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x32f4a189
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x32f4a29d
- (void)recalculateStyle;	// 0x32d04331
- (CGRect)rectContainingCaretSelection;	// 0x32f48fad
- (CGRect)rectForScrollToVisible;	// 0x32f494a5
- (CGRect)rectForSelection:(NSRange)selection;	// 0x32f4940d
- (id)rectsForRange:(id)range;	// 0x32f4a591
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x32d03271
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertText:(BOOL)text;	// 0x32f49fd5
- (void)removeFromSuperview;	// 0x32dd74a5
- (void)replace:(id)replace;	// 0x32f4915d
- (void)replaceRange:(id)range withText:(id)text;	// 0x32f4a02d
- (void)resetDataDetectorsResultsWithWebLock;	// 0x32f49bc9
- (BOOL)resignFirstResponder;	// 0x32d56395
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x32f49a99
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x32d70aa9
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x32d5be9d
- (void)scrollToVisibleTimerAction;	// 0x32d70989
- (id)scrollView;	// 0x32d049b5
// converted property getter: - (BOOL)scrollingEnabled;	// 0x32f49f15
// declared property getter: - (BOOL)scrollsSelectionOnWebDocumentChanges;	// 0x32d04fd1
- (void)select:(id)select;	// 0x32f4911d
- (void)selectAll;	// 0x32f49255
- (void)selectAll:(id)all;	// 0x32f4913d
// declared property getter: - (NSRange)selectedRange;	// 0x32d918cd
- (id)selectedText;	// 0x32f48df1
// declared property getter: - (id)selectedTextRange;	// 0x32d91ce1
// declared property getter: - (int)selectionAffinity;	// 0x32f4a4cd
- (CGRect)selectionClipRect;	// 0x32d94011
// declared property getter: - (int)selectionGranularity;	// 0x32f4a569
// declared property getter: - (UIEdgeInsets)selectionInset;	// 0x32d70be1
- (NSRange)selectionRange;	// 0x32f48f7d
- (id)selectionRectsForRange:(id)range;	// 0x32f48bf5
// declared property getter: - (id)selectionView;	// 0x32d034fd
// converted property getter: - (BOOL)selectionVisible;	// 0x32f48b79
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x32f49f19
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x32f49f0d
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x32f4a32d
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x32d04aad
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x32f49ebd
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x32f48b7d
- (void)setContentToHTMLString:(id)htmlstring;	// 0x32d5b541
// converted property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x32d0413d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32d04bf1
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x32d5b745
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x32d93c55
// declared property setter: - (void)setFont:(id)font;	// 0x32d04275
- (void)setFrame:(CGRect)frame;	// 0x32d00945
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x32f4a271
// converted property setter: - (void)setMarginTop:(int)top;	// 0x32f497bd
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x32f4a0d9
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x32f4a0ad
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x32f49ef1
- (void)setRichText:(BOOL)text;	// 0x32f4957d
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x32f49f1d
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x32f49f11
// declared property setter: - (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)changes;	// 0x32d03015
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x32f496d5
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x32dd8db9
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x32f4a4f5
- (void)setSelectionChangeCallbacksDisabled:(BOOL)disabled;	// 0x32d02fad
// declared property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x32d94035
// declared property setter: - (void)setSelectionInset:(UIEdgeInsets)inset;	// 0x32dd5d49
- (void)setSelectionToEnd;	// 0x32d5b671
- (void)setSelectionToStart;	// 0x32f49335
// converted property setter: - (void)setSelectionVisible:(BOOL)visible;	// 0x32f48b75
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x32f492d5
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x32f49ee5
// declared property setter: - (void)setText:(id)text;	// 0x32d52b79
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x32f496a5
// declared property setter: - (void)setTextColor:(id)color;	// 0x32f49619
- (BOOL)shouldStartDataDetectors;	// 0x32d52df1
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x32f49ee9
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x32f48b35
- (void)startDataDetectorsWithWebLock;	// 0x32f49b5d
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x32f49c51
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x32f49cd1
- (id)styleString;	// 0x32d00fd1
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x32dda709
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x32f49c31
// declared property getter: - (id)text;	// 0x32d0566d
// declared property getter: - (int)textAlignment;	// 0x32f49695
// declared property getter: - (id)textColor;	// 0x32f495e1
// declared property getter: - (id)textDocument;	// 0x32d91cdd
- (id)textInRange:(id)range;	// 0x32dda625
- (id)textInputTraits;	// 0x32d04bc1
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x32d93fa9
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x32d02db5
// declared property getter: - (id)tokenizer;	// 0x32d93fd9
- (void)touchScrollToVisibleTimer;	// 0x32d5bf39
- (void)touchScrollToVisibleTimerWithDelay:(double)delay;	// 0x32d5bf59
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32f48ab9
- (id)undoManager;	// 0x32f49041
- (id)undoManagerForWebView:(id)webView;	// 0x32f49021
- (void)unmarkText;	// 0x32f4a111
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x32d032e1
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x32f49c71
- (void)updateSelection;	// 0x32f48ae9
- (void)updateWebViewObjects;	// 0x32d02e99
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x32f49c91
- (CGRect)visibleRect;	// 0x32f497e9
- (CGRect)visibleTextRect;	// 0x32f499b9
// converted property getter: - (id)webView;	// 0x32d04abd
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x32f49dcd
- (void)webViewDidChange:(id)webView;	// 0x32d04525
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x32f49d15
- (id)wordContainingCaretSelection;	// 0x32f48f19
- (id)wordRangeContainingCaretSelection;	// 0x32f48f39
@end

