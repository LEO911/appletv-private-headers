/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIControl.h"
#import "UITextInput.h"
#import "UITextSelectingContainer.h"
#import "UIPopoverControllerDelegate.h"
#import "UIKit-Structs.h"

@class UIPopoverController, UIButton, UITextInputTraits, UITextFieldLabel, UITextFieldBorderView, UITextFieldAtomBackgroundView, UITextRange, NSDictionary, UITextPosition, UITextFieldBackgroundView, UITextSelectionView, UIViewController, UITextInteractionAssistant, UIFont, UILabel, UIColor, UIImageView, UIImage, NSString;
@protocol UITextFieldDelegate, UITextInputDelegate, UITextInputTokenizer, UITextSelectingContent;

@interface UITextField : UIControl <UITextSelectingContainer, UIPopoverControllerDelegate, UITextInput, NSCoding> {
@private
	NSString *_text;	// 72 = 0x48
	UIColor *_textColor;	// 76 = 0x4c
	int _borderStyle;	// 80 = 0x50
	float _minimumFontSize;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	UIImage *_background;	// 92 = 0x5c
	UIImage *_disabledBackground;	// 96 = 0x60
	int _clearButtonMode;	// 100 = 0x64
	UIView *_leftView;	// 104 = 0x68
	int _leftViewMode;	// 108 = 0x6c
	UIView *_rightView;	// 112 = 0x70
	int _rightViewMode;	// 116 = 0x74
	UITextInputTraits *_traits;	// 120 = 0x78
	UITextInputTraits *_nonAtomTraits;	// 124 = 0x7c
	float _fullFontSize;	// 128 = 0x80
	float _paddingLeft;	// 132 = 0x84
	float _paddingTop;	// 136 = 0x88
	float _paddingRight;	// 140 = 0x8c
	float _paddingBottom;	// 144 = 0x90
	NSString *_textFont;	// 148 = 0x94
	NSRange _selectionRange;	// 152 = 0x98
	int _scrollXOffset;	// 160 = 0xa0
	int _scrollYOffset;	// 164 = 0xa4
	int _suffixWidth;	// 168 = 0xa8
	float _progress;	// 172 = 0xac
	NSString *_style;	// 176 = 0xb0
	double _mouseDownTime;	// 180 = 0xb4
	UIButton *_clearButton;	// 188 = 0xbc
	CGSize _clearButtonOffset;	// 192 = 0xc0
	CGSize _leftViewOffset;	// 200 = 0xc8
	CGSize _rightViewOffset;	// 208 = 0xd0
	UITextFieldBorderView *_backgroundView;	// 216 = 0xd8
	UITextFieldBorderView *_disabledBackgroundView;	// 220 = 0xdc
	UITextFieldBackgroundView *_systemBackgroundView;	// 224 = 0xe0
	UITextFieldLabel *_textLabel;	// 228 = 0xe4
	UITextFieldLabel *_placeholderLabel;	// 232 = 0xe8
	UITextFieldLabel *_suffixLabel;	// 236 = 0xec
	UITextFieldLabel *_prefixLabel;	// 240 = 0xf0
	UIImageView *_iconView;	// 244 = 0xf4
	UILabel *_label;	// 248 = 0xf8
	float _labelOffset;	// 252 = 0xfc
	UITextInteractionAssistant *_interactionAssistant;	// 256 = 0x100
	UITextSelectionView *_selectionView;	// 260 = 0x104
	UIView *_inputView;	// 264 = 0x108
	UIView *_inputAccessoryView;	// 268 = 0x10c
	UITextFieldAtomBackgroundView *_atomBackgroundView;	// 272 = 0x110
	UIPopoverController *_definitionPopoverController;	// 276 = 0x114
	UIViewController *_definitionModalViewController;	// 280 = 0x118
	UIColor *_shadowColor;	// 284 = 0x11c
	CGSize _shadowOffset;	// 288 = 0x120
	float _shadowBlur;	// 296 = 0x128
	struct {
		unsigned secureTextChanged : 1;
		unsigned guard : 1;
		unsigned delegateRespondsToHandleKeyDown : 1;
		unsigned verticallyCenterText : 1;
		unsigned isAnimating : 4;
		unsigned inactiveHasDimAppearance : 1;
		unsigned becomesFirstResponderOnClearButtonTap : 1;
		unsigned clearsOnBeginEditing : 1;
		unsigned clearsPlaceholderOnBeginEditing : 1;
		unsigned adjustsFontSizeToFitWidth : 1;
		unsigned fieldEditorAttached : 1;
		unsigned canBecomeFirstResponder : 1;
		unsigned shouldSuppressShouldBeginEditing : 1;
		unsigned inResignFirstResponder : 1;
		unsigned undoDisabled : 1;
		unsigned contentsRTL : 1;
		unsigned explicitAlignment : 1;
		unsigned implementsCustomDrawing : 1;
		unsigned needsClearing : 1;
	} _textFieldFlags;	// 300 = 0x12c
}
@property(assign, nonatomic) BOOL adjustsFontSizeToFitWidth;	// G=0x35327319; S=0x3548fdb5; 
@property(assign) int atomStyle;	// G=0x3547d8a5; S=0x35480c91; converted property
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(retain, nonatomic) UIImage *background;	// G=0x354e6235; S=0x35354399; @synthesize=_background
@property(retain) id backgroundColor;	// G=0x353ae115; S=0x353ae645; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x354e5c65; 
@property(assign, nonatomic) int borderStyle;	// G=0x354e6215; S=0x353adea5; @synthesize=_borderStyle
@property(assign) BOOL caretBlinks;	// G=0x354e4e75; S=0x354e4e71; converted property
@property(readonly, retain) UIButton *clearButton;	// G=0x35372e0d; converted property
@property(assign, nonatomic) int clearButtonMode;	// G=0x35327d61; S=0x35353fd1; @synthesize=_clearButtonMode
@property(assign) CGSize clearButtonOffset;	// G=0x354e4a89; S=0x354e4d55; converted property
@property(assign, nonatomic) BOOL clearsOnBeginEditing;	// G=0x353eda35; S=0x354e4005; 
@property(assign) BOOL clearsPlaceholderOnBeginEditing;	// G=0x35444989; S=0x354e4029; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x3535204d; 
@property(assign, nonatomic) id<UITextFieldDelegate> delegate;	// G=0x353ec5a5; S=0x35352e81; @synthesize=_delegate
@property(retain, nonatomic) UIImage *disabledBackground;	// G=0x354e6245; S=0x353543f1; @synthesize=_disabledBackground
@property(assign) BOOL drawsAsAtom;	// G=0x35352099; S=0x354809c1; converted property
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x35351de9; 
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x35327659; 
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x3540a011; 
@property(retain, nonatomic) UIFont *font;	// G=0x353738d1; S=0x35352e91; 
@property(retain) UIView *inputAccessoryView;	// G=0x353f08c1; S=0x354391a5; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x354e5d4d; S=0x354e5d75; 
@property(retain) UIView *inputView;	// G=0x353f08ad; S=0x35439181; @synthesize=_inputView
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x353f010d; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(retain, nonatomic) UIView *leftView;	// G=0x354e6255; S=0x35353101; @synthesize=_leftView
@property(assign, nonatomic) int leftViewMode;	// G=0x353731e9; S=0x3535316d; @synthesize=_leftViewMode
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x354e5b89; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x354e5bb1; S=0x354e5bd9; 
@property(assign, nonatomic) float minimumFontSize;	// G=0x354e6225; S=0x35432b0d; @synthesize=_minimumFontSize
@property(assign) float paddingBottom;	// G=0x354e440d; S=0x353eb505; converted property
@property(assign) float paddingLeft;	// G=0x354e43ed; S=0x353b17ad; converted property
@property(assign) float paddingRight;	// G=0x354e4459; S=0x354e441d; converted property
@property(assign) float paddingTop;	// G=0x354e43fd; S=0x353b1771; converted property
@property(copy, nonatomic) NSString *placeholder;	// G=0x35355485; S=0x353548e9; 
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(retain, nonatomic) UIView *rightView;	// G=0x353d0435; S=0x35353f65; @synthesize=_rightView
@property(assign, nonatomic) int rightViewMode;	// G=0x35373395; S=0x35353409; @synthesize=_rightViewMode
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// S=0x354e3a69; @dynamic
@property(copy) UITextRange *selectedTextRange;	// G=0x353eed0d; S=0x354e5b5d; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x354e5fd1; S=0x354e5ff9; 
@property(assign, nonatomic) int selectionGranularity;	// G=0x354e606d; S=0x3540a2c5; 
@property(assign) NSRange selectionRange;	// G=0x354e49a5; S=0x35484c15; converted property
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x353eea9d; 
@property(assign) BOOL selectionVisible;	// G=0x354e4e6d; S=0x354e4e69; converted property
@property(assign) float shadowBlur;	// G=0x354e3cd5; S=0x354e3c75; converted property
@property(retain) UIColor *shadowColor;	// G=0x354e3ba9; S=0x354e3b31; converted property
@property(assign) CGSize shadowOffset;	// G=0x354e3c59; S=0x354e3bb9; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x353cfded; S=0x353228d5; 
@property(assign, nonatomic) int textAlignment;	// G=0x35327d29; S=0x354e3ce5; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x354e3b21; S=0x353ae7ad; 
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x353eec55; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, retain) UITextFieldLabel *textLabel;	// G=0x3547d7d1; converted property
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x35409f25; 
@property(assign, getter=isUndoEnabled) BOOL undoEnabled;	// G=0x35421dcd; S=0x354e4b59; converted property
- (id)initWithCoder:(id)coder;	// 0x354e2219
- (id)initWithFrame:(CGRect)frame;	// 0x35350821
- (CGRect)_atomBackgroundViewFrame;	// 0x354849e5
- (void)_becomeFirstResponder;	// 0x353eca3d
- (void)_becomeFirstResponderAndMakeVisible;	// 0x354e333d
- (BOOL)_canDrawContent;	// 0x35350ed5
- (void)_clearBackgroundViews;	// 0x35327b95
- (id)_clearButton;	// 0x353b1ae1
- (void)_clearButtonClicked:(id)clicked;	// 0x354e4b81
- (id)_clearButtonImageForState:(unsigned)state;	// 0x353731b5
- (void)_clearSelectionUI;	// 0x354e48ad
- (void)_clearStyle;	// 0x353511f1
- (id)_copyFont:(id)font newSize:(float)size maxSize:(float)size3;	// 0x354e3455
- (id)_createCSSStyleDeclarationForWebView:(id)webView;	// 0x353ee265
- (void)_define:(id)define;	// 0x354e53ed
- (id)_dictationInterpretations;	// 0x354e4195
- (void)_drawTextInRect:(CGRect)rect forLabel:(id)label;	// 0x35328905
- (void)_encodeBackgroundColorWithCoder:(id)coder;	// 0x354e31d1
- (void)_endedEditing;	// 0x354233bd
- (id)_fieldEditor;	// 0x3535205d
- (BOOL)_fieldEditorAttached;	// 0x353b1abd
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x354e6025
- (CGSize)_fontMetrics:(id)metrics;	// 0x35328659
- (CGRect)_frameForLabel:(id)label inTextRect:(CGRect)textRect;	// 0x3532826d
- (BOOL)_hasContent;	// 0x353276dd
- (BOOL)_implementsCustomDrawing;	// 0x35350f6d
- (BOOL)_isDisplayingReferenceLibraryViewController;	// 0x354e55a5
- (BOOL)_isShowingPlaceholder;	// 0x35413951
- (BOOL)_isShowingPrefix;	// 0x354e34d5
- (id)_keyboardResponder;	// 0x353f0901
- (CGSize)_leftViewOffset;	// 0x354e39dd
- (float)_marginTopForText:(id)text;	// 0x35328439
- (id)_placeholderColor;	// 0x35354b41
- (id)_placeholderLabel;	// 0x354a5505
- (id)_placeholderView;	// 0x353b1ad1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x354e2a85
- (CGRect)_prefixFrame;	// 0x354e3821
- (void)_promptForReplace:(id)replace;	// 0x354e5959
- (void)_removeDefinitionController;	// 0x3532dc8d
- (BOOL)_requiresKeyboardResetOnReload;	// 0x353f08a9
- (void)_resetSelectionUI;	// 0x354e48fd
- (void)_resignFirstResponder;	// 0x35423001
- (CGSize)_rightViewOffset;	// 0x354e3a4d
- (id)_scriptingInfo;	// 0x354a5451
- (CGPoint)_scrollOffset;	// 0x3545f36d
- (void)_setImplicitAlignment;	// 0x35322f59
- (void)_setLeftViewOffset:(CGSize)offset;	// 0x354e39f9
- (void)_setNeedsStyleRecalc;	// 0x353511c1
- (void)_setPrefix:(id)prefix;	// 0x354e3f01
- (void)_setRightViewOffset:(CGSize)offset;	// 0x353d0445
- (void)_setSuffix:(id)suffix withColor:(id)color;	// 0x354e3e15
- (void)_setSystemBackgroundViewActive:(BOOL)active;	// 0x353b17f9
- (BOOL)_shouldEndEditing;	// 0x35422bc9
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;	// 0x35413981
- (BOOL)_showsAtomBackground;	// 0x35480dd9
- (BOOL)_showsClearButton:(BOOL)button;	// 0x35327691
- (BOOL)_showsClearButtonWhenEmpty;	// 0x353277a9
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)empty;	// 0x35327c2d
- (BOOL)_showsLeftView;	// 0x353277ad
- (BOOL)_showsRightView;	// 0x3532782d
- (void)_sizeChanged:(BOOL)changed;	// 0x35372da5
- (id)_style;	// 0x353edb95
- (CGRect)_suffixFrame;	// 0x354e3505
- (Class)_systemBackgroundViewClass;	// 0x3547cd19
- (id)_text;	// 0x35327751
- (id)_textLabelView;	// 0x353b17e9
- (CGRect)_textRectExcludingButtonsForBounds:(CGRect)bounds;	// 0x353281bd
- (CGRect)_textRectForBounds:(CGRect)bounds forEditing:(BOOL)editing;	// 0x35327db5
- (CGSize)_textSize;	// 0x3547c401
- (void)_updateAtomBackground;	// 0x35326f19
- (void)_updateAutosizeStyleIfNeeded;	// 0x35326fd1
- (void)_updateBackgroundViews;	// 0x353278ad
- (void)_updateButtons;	// 0x3532735d
- (void)_updateLabel;	// 0x35326dc5
- (void)_updateTextColor;	// 0x3545ee41
- (void)_updateTextLabel;	// 0x35322dd5
- (void)_windowBecameKey;	// 0x354e33f9
- (id)actualFont;	// 0x354e39bd
- (float)actualMinimumFontSize;	// 0x35490561
- (CGRect)adjustedCaretRectForCaretRect:(CGRect)caretRect;	// 0x353eef79
// declared property getter: - (BOOL)adjustsFontSizeToFitWidth;	// 0x35327319
// converted property getter: - (int)atomStyle;	// 0x3547d8a5
- (void)attachFieldEditor:(id)editor;	// 0x353ee819
// declared property getter: - (id)background;	// 0x354e6235
// converted property getter: - (id)backgroundColor;	// 0x353ae115
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x354e5e01
- (void)beginSelectionChange;	// 0x354096ed
// declared property getter: - (id)beginningOfDocument;	// 0x354e5c65
- (CGRect)borderRectForBounds:(CGRect)bounds;	// 0x353733a5
// declared property getter: - (int)borderStyle;	// 0x354e6215
- (BOOL)canBecomeFirstResponder;	// 0x353ec5b5
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x35402935
- (BOOL)canResignFirstResponder;	// 0x35422bb1
- (void)cancelAutoscroll;	// 0x354e4e41
// converted property getter: - (BOOL)caretBlinks;	// 0x354e4e75
- (CGRect)caretRectForPosition:(id)position;	// 0x353f0301
- (unsigned)characterOffsetAtPoint:(CGPoint)point;	// 0x354e4a15
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x354e5f61
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x354e5dd1
// converted property getter: - (id)clearButton;	// 0x35372e0d
// declared property getter: - (int)clearButtonMode;	// 0x35327d61
// converted property getter: - (CGSize)clearButtonOffset;	// 0x354e4a89
- (CGRect)clearButtonRect;	// 0x35372f5d
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;	// 0x35373029
- (void)clearText;	// 0x354e494d
// declared property getter: - (BOOL)clearsOnBeginEditing;	// 0x353eda35
// converted property getter: - (BOOL)clearsPlaceholderOnBeginEditing;	// 0x35444989
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x354e5075
- (id)closestPositionToPoint:(CGPoint)point;	// 0x35409a3d
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x354e5eed
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x354e5ced
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x354e517d
// declared property getter: - (id)content;	// 0x3535204d
- (void)copy:(id)copy;	// 0x354e537d
- (id)createPlaceholderLabelWithFont:(id)font andTextAlignment:(int)alignment;	// 0x35354a05
- (id)createTextLabelWithTextColor:(id)textColor;	// 0x3535121d
- (id)customOverlayContainer;	// 0x354e40c5
- (void)cut:(id)cut;	// 0x354e5261
- (void)dealloc;	// 0x354387f1
// declared property getter: - (id)delegate;	// 0x353ec5a5
- (void)deleteBackward;	// 0x354e5991
// declared property getter: - (id)disabledBackground;	// 0x354e6245
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x354e4211
- (void)drawBorder:(CGRect)border;	// 0x354e4289
- (void)drawPlaceholderInRect:(CGRect)rect;	// 0x35374365
- (void)drawPrefixInRect:(CGRect)rect;	// 0x354e4089
- (void)drawRect:(CGRect)rect;	// 0x353b1f79
- (void)drawSuffixInRect:(CGRect)rect;	// 0x354e404d
- (void)drawTextInRect:(CGRect)rect;	// 0x35328999
// converted property getter: - (BOOL)drawsAsAtom;	// 0x35352099
- (CGRect)editRect;	// 0x353ee6d1
- (CGRect)editingRectForBounds:(CGRect)bounds;	// 0x353ee731
- (void)encodeWithCoder:(id)coder;	// 0x354e2bc9
// declared property getter: - (id)endOfDocument;	// 0x3540a011
- (void)endSelectionChange;	// 0x3540a331
- (BOOL)fieldEditor:(id)editor shouldInsertText:(id)text replacingRange:(NSRange)range;	// 0x354466fd
- (BOOL)fieldEditor:(id)editor shouldReplaceWithText:(id)text;	// 0x35446761
- (NSRange)fieldEditor:(id)editor willChangeSelectionFromCharacterRange:(NSRange)characterRange toCharacterRange:(NSRange)characterRange3;	// 0x354468d5
- (void)fieldEditorDidChange:(id)fieldEditor;	// 0x354137a1
- (void)fieldEditorDidChangeSelection:(id)fieldEditor;	// 0x353eee89
- (CGRect)firstRectForRange:(id)range;	// 0x354e5e61
// declared property getter: - (id)font;	// 0x353738d1
- (void)forwardInvocation:(id)invocation;	// 0x35322e85
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x354e5a6d
- (BOOL)hasMarkedText;	// 0x35413ac9
- (BOOL)hasSelection;	// 0x354e4da9
- (BOOL)hasText;	// 0x354e5ad9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x354039b5
- (CGRect)iconRect;	// 0x353ade35
// declared property getter: - (id)inputAccessoryView;	// 0x353f08c1
// declared property getter: - (id)inputDelegate;	// 0x354e5d4d
// declared property getter: - (id)inputView;	// 0x353f08ad
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x354e59e5
- (id)insertDictationResultPlaceholder;	// 0x354e5a15
- (void)insertText:(id)text;	// 0x354e59b9
// declared property getter: - (id)interactionAssistant;	// 0x353f010d
- (BOOL)isAccessibilityElementByDefault;	// 0x35595571
// declared property getter: - (BOOL)isEditable;	// 0x35351de9
// declared property getter: - (BOOL)isEditing;	// 0x35327659
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x35595575
// converted property getter: - (BOOL)isUndoEnabled;	// 0x35421dcd
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x35421c29
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x354691f5
- (BOOL)keyboardInputChanged:(id)changed;	// 0x35413dd9
- (void)keyboardInputChangedSelection:(id)selection;	// 0x353f31c5
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x354a1e71
- (void)layoutSubviews;	// 0x35326795
- (void)layoutTilesNow;	// 0x3545efb5
// declared property getter: - (id)leftView;	// 0x354e6255
// declared property getter: - (int)leftViewMode;	// 0x353731e9
- (CGRect)leftViewRectForBounds:(CGRect)bounds;	// 0x35373291
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x354e58e9
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x354e58b1
// declared property getter: - (id)markedTextRange;	// 0x354e5b89
// declared property getter: - (id)markedTextStyle;	// 0x354e5bb1
- (id)metadataDictionariesForDictationResults;	// 0x354e5ab1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x35322e39
// declared property getter: - (float)minimumFontSize;	// 0x354e6225
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x354e5d1d
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x354e5145
// converted property getter: - (float)paddingBottom;	// 0x354e440d
// converted property getter: - (float)paddingLeft;	// 0x354e43ed
// converted property getter: - (float)paddingRight;	// 0x354e4459
// converted property getter: - (float)paddingTop;	// 0x354e43fd
- (void)paste:(id)paste;	// 0x354e55fd
// declared property getter: - (id)placeholder;	// 0x35355485
- (CGRect)placeholderRectForBounds:(CGRect)bounds;	// 0x35373681
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x354e55d1
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x354e5cbd
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x354e5c8d
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x354e5da1
- (id)rectsForRange:(id)range;	// 0x354e6095
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x354e5a3d
- (void)replace:(id)replace;	// 0x354e5921
- (void)replaceRange:(id)range withText:(id)text;	// 0x354e5b2d
- (BOOL)resignFirstResponder;	// 0x3532dbe5
- (BOOL)respondsToSelector:(SEL)selector;	// 0x353509fd
// declared property getter: - (id)rightView;	// 0x353d0435
// declared property getter: - (int)rightViewMode;	// 0x35373395
- (CGRect)rightViewRectForBounds:(CGRect)bounds;	// 0x353d0509
- (id)searchText;	// 0x35413985
- (void)select:(id)select;	// 0x354e57c9
- (void)selectAll;	// 0x35484bd1
- (void)selectAll:(id)all;	// 0x354e583d
- (void)selectAllFromFieldEditor:(id)fieldEditor;	// 0x35484bc1
- (id)selectedText;	// 0x35402e21
// declared property getter: - (id)selectedTextRange;	// 0x353eed0d
// declared property getter: - (int)selectionAffinity;	// 0x354e5fd1
- (CGRect)selectionClipRect;	// 0x353f0745
// declared property getter: - (int)selectionGranularity;	// 0x354e606d
// converted property getter: - (NSRange)selectionRange;	// 0x354e49a5
- (id)selectionRectsForRange:(id)range;	// 0x354e4e79
// declared property getter: - (id)selectionView;	// 0x353eea9d
// converted property getter: - (BOOL)selectionVisible;	// 0x354e4e6d
// declared property setter: - (void)setAdjustsFontSizeToFitWidth:(BOOL)fitWidth;	// 0x3548fdb5
- (void)setAnimating:(BOOL)animating;	// 0x3545e655
// converted property setter: - (void)setAtomStyle:(int)style;	// 0x35480c91
- (void)setAutoresizesTextToFit:(BOOL)fit;	// 0x354e4269
// declared property setter: - (void)setBackground:(id)background;	// 0x35354399
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x353ae645
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x354e5e31
- (void)setBecomesFirstResponderOnClearButtonTap:(BOOL)tap;	// 0x353cfe69
// declared property setter: - (void)setBorderStyle:(int)style;	// 0x353adea5
- (void)setBounds:(CGRect)bounds;	// 0x354e320d
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x354e4e71
// declared property setter: - (void)setClearButtonMode:(int)mode;	// 0x35353fd1
// converted property setter: - (void)setClearButtonOffset:(CGSize)offset;	// 0x354e4d55
- (void)setClearButtonStyle:(int)style;	// 0x353ae805
// declared property setter: - (void)setClearsOnBeginEditing:(BOOL)editing;	// 0x354e4005
// converted property setter: - (void)setClearsPlaceholderOnBeginEditing:(BOOL)editing;	// 0x354e4029
- (void)setContentVerticalAlignment:(int)alignment;	// 0x35351141
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35352e81
// declared property setter: - (void)setDisabledBackground:(id)background;	// 0x353543f1
// converted property setter: - (void)setDrawsAsAtom:(BOOL)atom;	// 0x354809c1
- (void)setEnabled:(BOOL)enabled;	// 0x3548fcf1
// declared property setter: - (void)setFont:(id)font;	// 0x35352e91
- (void)setFont:(id)font fullFontSize:(float)size;	// 0x35352f4d
- (void)setFrame:(CGRect)frame;	// 0x3535101d
- (void)setIcon:(id)icon;	// 0x353adc9d
- (void)setInactiveHasDimAppearance:(BOOL)appearance;	// 0x354e4835
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x354391a5
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x354e5d75
// declared property setter: - (void)setInputView:(id)view;	// 0x35439181
- (void)setLabel:(id)label;	// 0x3547d5f1
- (void)setLabelOffset:(float)offset;	// 0x3547d7fd
// declared property setter: - (void)setLeftView:(id)view;	// 0x35353101
// declared property setter: - (void)setLeftViewMode:(int)mode;	// 0x3535316d
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x354e5c05
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x354e5bd9
// declared property setter: - (void)setMinimumFontSize:(float)size;	// 0x35432b0d
// converted property setter: - (void)setPaddingBottom:(float)bottom;	// 0x353eb505
// converted property setter: - (void)setPaddingLeft:(float)left;	// 0x353b17ad
// converted property setter: - (void)setPaddingRight:(float)right;	// 0x354e441d
// converted property setter: - (void)setPaddingTop:(float)top;	// 0x353b1771
- (void)setPaddingTop:(float)top paddingLeft:(float)left;	// 0x353ae73d
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x353548e9
- (void)setProgress:(float)progress;	// 0x354e4aa5
// declared property setter: - (void)setRightView:(id)view;	// 0x35353f65
// declared property setter: - (void)setRightViewMode:(int)mode;	// 0x35353409
// declared property setter: - (void)setSecureTextEntry:(BOOL)entry;	// 0x354e3a69
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x354e5b5d
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x354e5ff9
// declared property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x3540a2c5
// converted property setter: - (void)setSelectionRange:(NSRange)range;	// 0x35484c15
// converted property setter: - (void)setSelectionVisible:(BOOL)visible;	// 0x354e4e69
// converted property setter: - (void)setShadowBlur:(float)blur;	// 0x354e3c75
// converted property setter: - (void)setShadowColor:(id)color;	// 0x354e3b31
// converted property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x354e3bb9
// declared property setter: - (void)setText:(id)text;	// 0x353228d5
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x354e3ce5
- (void)setTextAutorresizesToFit:(BOOL)fit;	// 0x354e4279
- (void)setTextCentersHorizontally:(BOOL)horizontally;	// 0x354e4af5
- (void)setTextCentersVertically:(BOOL)vertically;	// 0x354e4b11
// declared property setter: - (void)setTextColor:(id)color;	// 0x353ae7ad
- (void)setTextFont:(id)font;	// 0x354e4469
// converted property setter: - (void)setUndoEnabled:(BOOL)enabled;	// 0x354e4b59
// converted property getter: - (float)shadowBlur;	// 0x354e3cd5
// converted property getter: - (id)shadowColor;	// 0x354e3ba9
// converted property getter: - (CGSize)shadowOffset;	// 0x354e3c59
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35490599
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x354e4dd1
- (id)supportedPasteboardTypes;	// 0x35403299
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x354e410d
// declared property getter: - (id)text;	// 0x353cfded
// declared property getter: - (int)textAlignment;	// 0x35327d29
// declared property getter: - (id)textColor;	// 0x354e3b21
// declared property getter: - (id)textDocument;	// 0x353eec55
- (id)textInRange:(id)range;	// 0x354e5b01
- (id)textInputTraits;	// 0x35322b31
// converted property getter: - (id)textLabel;	// 0x3547d7d1
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x35409c09
- (CGRect)textRect;	// 0x3542365d
- (CGRect)textRectForBounds:(CGRect)bounds;	// 0x35327d71
// declared property getter: - (id)tokenizer;	// 0x35409f25
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x354e3451
- (id)undoManager;	// 0x35421d7d
- (void)unmarkText;	// 0x354e5c3d
- (id)webView;	// 0x354e5245
- (void)willAttachFieldEditor:(id)editor;	// 0x353ed8a5
- (void)willDetachFieldEditor:(id)editor;	// 0x35423349
@end

