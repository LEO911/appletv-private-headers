/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import </libobjc.A.h>
#import "NSSecureCoding.h"
#import "TextInput-Structs.h"

@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding> {
	NSString *_contextBeforeInput;	// 4 = 0x4
	NSString *_markedText;	// 8 = 0x8
	NSString *_selectedText;	// 12 = 0xc
	NSString *_contextAfterInput;	// 16 = 0x10
	NSRange _selectedRangeInMarkedText;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *contextAfterInput;	// G=0x32a08185; @synthesize=_contextAfterInput
@property(readonly, assign, nonatomic) NSString *contextBeforeInput;	// G=0x32a08155; @synthesize=_contextBeforeInput
@property(readonly, assign, nonatomic) NSString *markedText;	// G=0x32a08165; @synthesize=_markedText
@property(readonly, assign, nonatomic) NSRange selectedRangeInMarkedText;	// G=0x32a08195; @synthesize=_selectedRangeInMarkedText
@property(readonly, assign, nonatomic) NSString *selectedText;	// G=0x32a08175; @synthesize=_selectedText
+ (id)documentStateWithContextBefore:(id)contextBefore markedText:(id)text selectedRange:(NSRange)range contextAfter:(id)after;	// 0x32a07755
+ (id)documentStateWithContextBefore:(id)contextBefore selectedText:(id)text contextAfter:(id)after;	// 0x32a076f1
+ (id)documentStateWithText:(id)text selectedRange:(NSRange)range;	// 0x32a08bc5
+ (BOOL)supportsSecureCoding;	// 0x32a076ed
- (id)initWithCoder:(id)coder;	// 0x32a07955
- (id)initWithContextBefore:(id)contextBefore markedText:(id)text selectedText:(id)text3 contextAfter:(id)after selectedRangeInMarkedText:(NSRange)markedText;	// 0x32a07891
- (id)initWithText:(id)text selectedRange:(NSRange)range;	// 0x32a08b15
// declared property getter: - (id)contextAfterInput;	// 0x32a08185
// declared property getter: - (id)contextBeforeInput;	// 0x32a08155
- (void)dealloc;	// 0x32a07805
- (id)description;	// 0x32a07ead
- (id)documentStateAfterCollapsingSelection;	// 0x32a087e9
- (id)documentStateAfterDeletingBackward;	// 0x32a082a1
- (id)documentStateAfterDeletingForward;	// 0x32a083f1
- (id)documentStateAfterInsertingText:(id)text;	// 0x32a081ad
- (id)documentStateAfterInsertingTextAfterSelection:(id)selection;	// 0x32a08229
- (id)documentStateAfterSettingMarkedText:(id)text selectedRange:(NSRange)range;	// 0x32a08565
- (id)documentStateAfterUnmarkingText;	// 0x32a08665
- (void)encodeWithCoder:(id)coder;	// 0x32a07af5
- (unsigned)hash;	// 0x32a07ddd
- (unsigned)hashString:(id)string intoHashValue:(unsigned)value;	// 0x32a07dbd
- (unsigned)inputIndexWithTerminatorPredicate:(id)terminatorPredicate;	// 0x32a08aed
- (id)inputStemWithTerminatorPredicate:(id)terminatorPredicate;	// 0x32a089f9
- (id)inputStringWithTerminatorPredicate:(id)terminatorPredicate;	// 0x32a08a51
- (BOOL)isEqual:(id)equal;	// 0x32a07c2d
// declared property getter: - (id)markedText;	// 0x32a08165
- (BOOL)matchesContextOfDocumentState:(id)documentState;	// 0x32a080c9
// declared property getter: - (NSRange)selectedRangeInMarkedText;	// 0x32a08195
// declared property getter: - (id)selectedText;	// 0x32a08175
- (BOOL)string:(id)string matchesString:(id)string2;	// 0x32a07bf9
- (id)wordPrefixOfString:(id)string withTerminatorPredicate:(id)terminatorPredicate reverse:(BOOL)reverse;	// 0x32a08885
@end
