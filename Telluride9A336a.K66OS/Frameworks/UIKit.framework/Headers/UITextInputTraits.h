/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UITextInputTraits.h"
#import "NSObject.h"
#import "UITextInputTraits_Private.h"
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class UIImage, UIColor;

@protocol UITextInputTraits <NSObject>
@optional
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) int spellCheckingType;
// declared property getter: - (int)autocapitalizationType;
// declared property getter: - (int)autocorrectionType;
// declared property getter: - (BOOL)enablesReturnKeyAutomatically;
// declared property getter: - (BOOL)isSecureTextEntry;
// declared property getter: - (int)keyboardAppearance;
// declared property getter: - (int)keyboardType;
// declared property getter: - (int)returnKeyType;
// declared property setter: - (void)setAutocapitalizationType:(int)type;
// declared property setter: - (void)setAutocorrectionType:(int)type;
// declared property setter: - (void)setEnablesReturnKeyAutomatically:(BOOL)automatically;
// declared property setter: - (void)setKeyboardAppearance:(int)appearance;
// declared property setter: - (void)setKeyboardType:(int)type;
// declared property setter: - (void)setReturnKeyType:(int)type;
// declared property setter: - (void)setSecureTextEntry:(BOOL)entry;
// declared property setter: - (void)setSpellCheckingType:(int)type;
// declared property getter: - (int)spellCheckingType;
@end

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {
	int autocapitalizationType;	// 4 = 0x4
	int autocorrectionType;	// 8 = 0x8
	int spellCheckingType;	// 12 = 0xc
	unsigned keyboardType : 8;	// 16 = 0x10
	unsigned keyboardAppearance : 8;	// 17 = 0x11
	int returnKeyType;	// 20 = 0x14
	BOOL enablesReturnKeyAutomatically;	// 24 = 0x18
	BOOL secureTextEntry;	// 25 = 0x19
	CFCharacterSetRef textTrimmingSet;	// 28 = 0x1c
	UIColor *insertionPointColor;	// 32 = 0x20
	UIColor *selectionBarColor;	// 36 = 0x24
	UIColor *selectionHighlightColor;	// 40 = 0x28
	UIImage *selectionDragDotImage;	// 44 = 0x2c
	unsigned insertionPointWidth;	// 48 = 0x30
	int textLoupeVisibility;	// 52 = 0x34
	int textSelectionBehavior;	// 56 = 0x38
	id textSuggestionDelegate;	// 60 = 0x3c
	BOOL contentsIsSingleValue;	// 64 = 0x40
	BOOL acceptsEmoji;	// 65 = 0x41
	BOOL returnKeyGoesToNextResponder;	// 66 = 0x42
	BOOL acceptsFloatingKeyboard;	// 67 = 0x43
	BOOL acceptsSplitKeyboard;	// 68 = 0x44
	BOOL richText;	// 69 = 0x45
	BOOL displaySecureTextUsingPlainText;	// 70 = 0x46
	BOOL learnsCorrections;	// 71 = 0x47
	int emptyContentReturnKeyType;	// 72 = 0x48
	int shortcutConversionType;	// 76 = 0x4c
	BOOL suppressReturnKeyStyling;	// 80 = 0x50
	BOOL forceEnableDictation;	// 81 = 0x51
}
@property(assign, nonatomic) BOOL acceptsEmoji;	// G=0x3512d65d; S=0x35143be1; @synthesize
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;	// G=0x3512d68d; S=0x353230f9; @synthesize
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;	// G=0x3512d69d; S=0x35323109; @synthesize
@property(assign, nonatomic) int autocapitalizationType;	// G=0x3512d531; S=0x351418d9; @synthesize
@property(assign, nonatomic) int autocorrectionType;	// G=0x3512d541; S=0x35102e7d; @synthesize
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// G=0x3512d64d; S=0x351e11dd; @synthesize
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;	// G=0x3512d6bd; S=0x35323119; @synthesize
@property(assign, nonatomic) int emptyContentReturnKeyType;	// G=0x3512d67d; S=0x353230d9; @synthesize
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// G=0x3512d591; S=0x35102a41; @synthesize
@property(assign, nonatomic) BOOL forceEnableDictation;	// G=0x35323149; S=0x35323159; @synthesize
@property(retain, nonatomic) UIColor *insertionPointColor;	// G=0x3512d5cd; S=0x350ff7cd; @synthesize
@property(assign, nonatomic) unsigned insertionPointWidth;	// G=0x3512d60d; S=0x353230c9; @synthesize
@property(assign, nonatomic) int keyboardAppearance;	// G=0x3512d571; S=0x353230b9; @synthesize
@property(assign, nonatomic) int keyboardType;	// G=0x3512d561; S=0x351418f9; @synthesize
@property(assign, nonatomic) BOOL learnsCorrections;	// G=0x3512d6cd; S=0x35323129; @synthesize
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;	// G=0x3512d66d; S=0x353230e9; @synthesize
@property(assign, nonatomic) int returnKeyType;	// G=0x3512d581; S=0x35102a31; @synthesize
@property(assign, nonatomic, getter=isRichText) BOOL richText;	// G=0x3512d6ad; S=0x35214ce9; @synthesize
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// G=0x350d1af1; S=0x353226c1; @synthesize
@property(retain, nonatomic) UIColor *selectionBarColor;	// G=0x3512d5dd; S=0x350ff7f1; @synthesize
@property(retain, nonatomic) UIImage *selectionDragDotImage;	// G=0x3512d5fd; S=0x350ff901; @synthesize
@property(retain, nonatomic) UIColor *selectionHighlightColor;	// G=0x3512d5ed; S=0x350ff8dd; @synthesize
@property(assign, nonatomic) int shortcutConversionType;	// G=0x3512d6dd; S=0x35323139; @synthesize
@property(assign, nonatomic) int spellCheckingType;	// G=0x3512d551; S=0x351418e9; @synthesize
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;	// G=0x3512d6ed; S=0x3522be69; @synthesize
@property(assign, nonatomic) int textLoupeVisibility;	// G=0x3512d61d; S=0x3517f0b5; @synthesize
@property(assign, nonatomic) int textSelectionBehavior;	// G=0x3512d62d; S=0x3519d13d; @synthesize
@property(assign, nonatomic) id textSuggestionDelegate;	// G=0x3512d63d; S=0x351e11ed; @dynamic
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// G=0x350d18f9; S=0x3512d5a1; @dynamic
+ (id)defaultTextInputTraits;	// 0x3520ccdd
+ (BOOL)keyboardTypeRequiresASCIICapable:(int)capable;	// 0x351a0f9d
+ (id)traitsByAdoptingTraits:(id)traits;	// 0x351a0179
- (id)init;	// 0x350ff4b1
// declared property getter: - (BOOL)acceptsEmoji;	// 0x3512d65d
// declared property getter: - (BOOL)acceptsFloatingKeyboard;	// 0x3512d68d
// declared property getter: - (BOOL)acceptsSplitKeyboard;	// 0x3512d69d
// declared property getter: - (int)autocapitalizationType;	// 0x3512d531
// declared property getter: - (int)autocorrectionType;	// 0x3512d541
// declared property getter: - (BOOL)contentsIsSingleValue;	// 0x3512d64d
- (id)copyWithZone:(NSZone *)zone;	// 0x3512cad5
- (void)dealloc;	// 0x3513f711
- (id)description;	// 0x353226ed
- (id)dictionaryRepresentation;	// 0x3532245d
// declared property getter: - (BOOL)displaySecureTextUsingPlainText;	// 0x3512d6bd
// declared property getter: - (int)emptyContentReturnKeyType;	// 0x3512d67d
// declared property getter: - (BOOL)enablesReturnKeyAutomatically;	// 0x3512d591
// declared property getter: - (BOOL)forceEnableDictation;	// 0x35323149
// declared property getter: - (id)insertionPointColor;	// 0x3512d5cd
// declared property getter: - (unsigned)insertionPointWidth;	// 0x3512d60d
- (BOOL)isEqual:(id)equal;	// 0x35322cb5
// declared property getter: - (BOOL)isRichText;	// 0x3512d6ad
// declared property getter: - (BOOL)isSecureTextEntry;	// 0x350d1af1
// declared property getter: - (int)keyboardAppearance;	// 0x3512d571
// declared property getter: - (int)keyboardType;	// 0x3512d561
// declared property getter: - (BOOL)learnsCorrections;	// 0x3512d6cd
// declared property getter: - (BOOL)returnKeyGoesToNextResponder;	// 0x3512d66d
// declared property getter: - (int)returnKeyType;	// 0x3512d581
// declared property getter: - (id)selectionBarColor;	// 0x3512d5dd
// declared property getter: - (id)selectionDragDotImage;	// 0x3512d5fd
// declared property getter: - (id)selectionHighlightColor;	// 0x3512d5ed
// declared property setter: - (void)setAcceptsEmoji:(BOOL)emoji;	// 0x35143be1
// declared property setter: - (void)setAcceptsFloatingKeyboard:(BOOL)keyboard;	// 0x353230f9
// declared property setter: - (void)setAcceptsSplitKeyboard:(BOOL)keyboard;	// 0x35323109
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x351418d9
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x35102e7d
// declared property setter: - (void)setContentsIsSingleValue:(BOOL)value;	// 0x351e11dd
// declared property setter: - (void)setDisplaySecureTextUsingPlainText:(BOOL)text;	// 0x35323119
// declared property setter: - (void)setEmptyContentReturnKeyType:(int)type;	// 0x353230d9
// declared property setter: - (void)setEnablesReturnKeyAutomatically:(BOOL)automatically;	// 0x35102a41
// declared property setter: - (void)setForceEnableDictation:(BOOL)dictation;	// 0x35323159
// declared property setter: - (void)setInsertionPointColor:(id)color;	// 0x350ff7cd
// declared property setter: - (void)setInsertionPointWidth:(unsigned)width;	// 0x353230c9
// declared property setter: - (void)setKeyboardAppearance:(int)appearance;	// 0x353230b9
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x351418f9
// declared property setter: - (void)setLearnsCorrections:(BOOL)corrections;	// 0x35323129
// declared property setter: - (void)setReturnKeyGoesToNextResponder:(BOOL)nextResponder;	// 0x353230e9
// declared property setter: - (void)setReturnKeyType:(int)type;	// 0x35102a31
// declared property setter: - (void)setRichText:(BOOL)text;	// 0x35214ce9
// declared property setter: - (void)setSecureTextEntry:(BOOL)entry;	// 0x353226c1
// declared property setter: - (void)setSelectionBarColor:(id)color;	// 0x350ff7f1
// declared property setter: - (void)setSelectionDragDotImage:(id)image;	// 0x350ff901
// declared property setter: - (void)setSelectionHighlightColor:(id)color;	// 0x350ff8dd
// declared property setter: - (void)setShortcutConversionType:(int)type;	// 0x35323139
// declared property setter: - (void)setSpellCheckingType:(int)type;	// 0x351418e9
// declared property setter: - (void)setSuppressReturnKeyStyling:(BOOL)styling;	// 0x3522be69
// declared property setter: - (void)setTextLoupeVisibility:(int)visibility;	// 0x3517f0b5
// declared property setter: - (void)setTextSelectionBehavior:(int)behavior;	// 0x3519d13d
// declared property setter: - (void)setTextSuggestionDelegate:(id)delegate;	// 0x351e11ed
// declared property setter: - (void)setTextTrimmingSet:(CFCharacterSetRef)set;	// 0x3512d5a1
- (void)setToDefaultValues;	// 0x350ff4f9
- (void)setToSecureValues;	// 0x353223bd
// declared property getter: - (int)shortcutConversionType;	// 0x3512d6dd
// declared property getter: - (int)spellCheckingType;	// 0x3512d551
// declared property getter: - (BOOL)suppressReturnKeyStyling;	// 0x3512d6ed
- (void)takeTraitsFrom:(id)from;	// 0x3512cb21
// declared property getter: - (int)textLoupeVisibility;	// 0x3512d61d
// declared property getter: - (int)textSelectionBehavior;	// 0x3512d62d
// declared property getter: - (id)textSuggestionDelegate;	// 0x3512d63d
// declared property getter: - (CFCharacterSetRef)textTrimmingSet;	// 0x350d18f9
@end

