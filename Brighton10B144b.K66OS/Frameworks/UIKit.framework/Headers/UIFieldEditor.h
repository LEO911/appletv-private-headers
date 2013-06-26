/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebDocumentView.h"
#import "UIAutoscrollContainer.h"

@class NSString, UIView, DOMDocument, DOMHTMLElement;
@protocol UITextInput;

@interface UIFieldEditor : UIWebDocumentView <UIAutoscrollContainer> {
	DOMDocument *_document;	// 612 = 0x264
	DOMHTMLElement *_textElement;	// 616 = 0x268
	DOMHTMLElement *_sizeElement;	// 620 = 0x26c
	NSString *_currentStyle;	// 624 = 0x270
	UIView<UITextInput> *_proxiedView;	// 628 = 0x274
	unsigned _baseWritingDirectionIsRTL : 1;	// 632 = 0x278
	unsigned _changingView : 1;	// 632 = 0x278
	unsigned _disableNotifications : 1;	// 632 = 0x278
	unsigned _delegateRespondsToFieldEditorDidChange : 1;	// 632 = 0x278
	unsigned _delegateRespondsToShouldInsertText : 1;	// 632 = 0x278
	unsigned _delegateRespondsToShouldReplaceWithText : 1;	// 632 = 0x278
	unsigned _fieldEditorReentrancyGuard : 1;	// 632 = 0x278
	unsigned _clearOnDelete : 1;	// 632 = 0x278
}
@property(assign, nonatomic) CGPoint autoscrollContentOffset;	// G=0x32cebe59; S=0x32cebea5; 
@property(assign) BOOL notificationsDisabled;	// G=0x32ceb835; S=0x32ca579d; converted property
@property(retain) id style;	// G=0x32bd4805; S=0x32bd141d; converted property
+ (id)activeFieldEditor;	// 0x32c12a19
+ (id)excludedElementsForHTML;	// 0x32cebf05
+ (void)releaseSharedInstance;	// 0x32b6eb99
+ (id)sharedFieldEditor;	// 0x32bd0a65
- (id)initWithFrame:(CGRect)frame;	// 0x32bd0ab9
- (void)_deleteBackwardAndNotify:(BOOL)notify;	// 0x32dee365
- (id)_responderForBecomeFirstResponder;	// 0x32cead2d
- (void)_selectNSRange:(NSRange)range;	// 0x32bd2951
- (void)_setTextElementAttributedText:(id)text;	// 0x32ceb159
- (void)_setTextElementString:(id)string;	// 0x32bd1585
- (void)_setTextElementStyle:(id)style;	// 0x32bd14a5
- (id)_textSelectingContainer;	// 0x32bde755
- (id)attributedText;	// 0x32ceaf35
- (id)automaticallySelectedOverlay;	// 0x32c53089
// declared property getter: - (CGPoint)autoscrollContentOffset;	// 0x32cebe59
- (void)autoscrollWillNotStart;	// 0x32cebe55
- (void)becomeFieldEditorForView:(id)view;	// 0x32bd0efd
- (void)beginSelectionChange;	// 0x32bd27ed
- (CGRect)caretRect;	// 0x32cec02d
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x32bd5415
- (unsigned)characterOffsetAtPoint:(CGPoint)point;	// 0x32cead3d
- (CGRect)contentFrameForView:(id)view;	// 0x32cebee1
- (CGSize)contentSize;	// 0x32ceb4d9
- (id)customOverlayContainer;	// 0x32c531bd
- (void)dealloc;	// 0x32ca57b5
- (void)deleteBackward;	// 0x32ceae65
- (void)disableClearsOnInsertion;	// 0x32c45561
- (BOOL)hasMarkedText;	// 0x32ceb639
- (id)interactionAssistant;	// 0x32bd13f5
- (BOOL)isEditing;	// 0x32c4584d
- (BOOL)isInsideRichlyEditableTextWidget;	// 0x32c090c9
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x32c127d9
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x32ceadad
- (BOOL)keyboardInputChanged:(id)changed;	// 0x32c0a981
- (void)keyboardInputChangedSelection:(id)selection;	// 0x32bdeded
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x32ceae11
- (void)mouseDown:(GSEventRef)down;	// 0x32ceb66d
- (void)mouseDragged:(GSEventRef)dragged;	// 0x32ceb6cd
- (BOOL)mouseEventsChangeSelection;	// 0x32ceb849
- (void)mouseUp:(GSEventRef)up;	// 0x32ceb72d
// converted property getter: - (BOOL)notificationsDisabled;	// 0x32ceb835
- (id)proxiedView;	// 0x32bdcea5
- (BOOL)resignFirstResponder;	// 0x32c1475d
- (void)resumeWithNotification:(id)notification;	// 0x32ceb7ad
- (void)revealSelection;	// 0x32bd3e95
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x32bd3ed1
- (void)scrollToMakeInlineHoleVisible;	// 0x32c0a565
- (int)scrollXOffset;	// 0x32c14705
- (int)scrollYOffset;	// 0x32c14731
- (void)selectAll;	// 0x32ceace5
- (void)selectionChanged;	// 0x32bd2b7d
- (NSRange)selectionRange;	// 0x32c44ef1
- (id)selectionView;	// 0x32ceb84d
- (void)setAttributedText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x32ceb391
// declared property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x32cebea5
- (void)setBaseWritingDirection:(int)direction;	// 0x32bd4789
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x32c40dad
- (void)setFrame:(CGRect)frame;	// 0x32bd0d6d
// converted property setter: - (void)setNotificationsDisabled:(BOOL)disabled;	// 0x32ca579d
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x32bd21b1
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x32bd21d5
- (void)setSelection:(NSRange)selection;	// 0x32bd278d
// converted property setter: - (void)setStyle:(id)style;	// 0x32bd141d
- (void)setText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x32bd19ad
- (void)setTextSelectionBehavior:(int)behavior;	// 0x32bd2269
- (id)sizeStyleForRect:(CGRect)rect;	// 0x32bd25a5
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x32ceb875
// converted property getter: - (id)style;	// 0x32bd4805
- (id)text;	// 0x32bd265d
- (id)textColorForCaretSelection;	// 0x32ceaed1
- (id)textInputTraits;	// 0x32bd0e85
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32ceb79d
- (void)updateAutoscroll:(id)autoscroll;	// 0x32ceba75
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x32c453e9
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x32ceb559
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x32c45139
- (void)webViewDidChange:(id)webView;	// 0x32c09ac5
@end
