/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import </libobjc.A.h>

@class TICharacterSetDescription, TIKeyboardCandidate, TIKeyboardBehaviors, TIKeyEventMap, NSString;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {
	TIKeyboardBehaviors *_keyboardBehaviors;	// 4 = 0x4
	union {
		int integerValue;
		struct {
			unsigned canHandleKeyHitTest : 1;
			unsigned ignoresDeadKeys : 1;
			unsigned needsKeyHitTestResults : 1;
			unsigned shouldExtendPriorWord : 1;
			unsigned suppliesCompletions : 1;
			unsigned supportsNumberKeySelection : 1;
			unsigned supportsSetPhraseBoundary : 1;
			unsigned suppressCompletionsForFieldEditor : 1;
			unsigned usesAutoDeleteWord : 1;
			unsigned usesCandidateSelection : 1;
			unsigned commitsAcceptedCandidate : 1;
			unsigned nextInputWouldStartSentence : 1;
			unsigned inputStringIsExemptFromChecker : 1;
		} fields;
	} _mask;	// 8 = 0x8
	BOOL _shouldAddModifierSymbolsToWordCharacters;	// 12 = 0xc
	TIKeyboardCandidate *_autocorrectionRecordForInputString;	// 16 = 0x10
	NSString *_wordSeparator;	// 20 = 0x14
	unsigned _inputCount;	// 24 = 0x18
	unsigned _inputIndex;	// 28 = 0x1c
	NSString *_inputString;	// 32 = 0x20
	TIKeyEventMap *_keyEventMap;	// 36 = 0x24
	NSString *_replacementForDoubleSpace;	// 40 = 0x28
	NSString *_searchStringForMarkedText;	// 44 = 0x2c
	NSString *_shadowTyping;	// 48 = 0x30
	TICharacterSetDescription *_wordCharacters;	// 52 = 0x34
	TICharacterSetDescription *_shortcutCompletions;	// 56 = 0x38
	TICharacterSetDescription *_inputsPreventingAcceptSelectedCandidate;	// 60 = 0x3c
	TICharacterSetDescription *_inputsToReject;	// 64 = 0x40
	TICharacterSetDescription *_terminatorsPreventingAutocorrection;	// 68 = 0x44
}
@property(copy, nonatomic) TIKeyboardCandidate *autocorrectionRecordForInputString;	// G=0x32a135d9; S=0x32a135ed; @synthesize=_autocorrectionRecordForInputString
@property(assign, nonatomic) BOOL canHandleKeyHitTest;	// G=0x32a12715; S=0x32a12729; 
@property(assign, nonatomic) BOOL commitsAcceptedCandidate;	// G=0x32a12749; S=0x32a1275d; 
@property(assign, nonatomic) BOOL ignoresDeadKeys;	// G=0x32a12781; S=0x32a12795; 
@property(assign, nonatomic) unsigned inputCount;	// G=0x32a13621; S=0x32a13631; @synthesize=_inputCount
@property(assign, nonatomic) unsigned inputIndex;	// G=0x32a13641; S=0x32a13651; @synthesize=_inputIndex
@property(copy, nonatomic) NSString *inputString;	// G=0x32a13661; S=0x32a13675; @synthesize=_inputString
@property(assign, nonatomic) BOOL inputStringIsExemptFromChecker;	// G=0x32a127b9; S=0x32a127cd; 
@property(copy, nonatomic) TICharacterSetDescription *inputsPreventingAcceptSelectedCandidate;	// G=0x32a13799; S=0x32a137ad; @synthesize=_inputsPreventingAcceptSelectedCandidate
@property(copy, nonatomic) TICharacterSetDescription *inputsToReject;	// G=0x32a137bd; S=0x32a137d1; @synthesize=_inputsToReject
@property(retain, nonatomic) TIKeyEventMap *keyEventMap;	// G=0x32a136a5; S=0x32a136b5; @synthesize=_keyEventMap
@property(retain, nonatomic) TIKeyboardBehaviors *keyboardBehaviors;	// G=0x32a13685; S=0x32a13695; @synthesize=_keyboardBehaviors
@property(assign, nonatomic) BOOL needsKeyHitTestResults;	// G=0x32a127f1; S=0x32a12805; 
@property(assign, nonatomic) BOOL nextInputWouldStartSentence;	// G=0x32a12829; S=0x32a1283d; 
@property(copy, nonatomic) NSString *replacementForDoubleSpace;	// G=0x32a136c5; S=0x32a136d9; @synthesize=_replacementForDoubleSpace
@property(copy, nonatomic) NSString *searchStringForMarkedText;	// G=0x32a136e9; S=0x32a136fd; @synthesize=_searchStringForMarkedText
@property(copy, nonatomic) NSString *shadowTyping;	// G=0x32a1370d; S=0x32a13721; @synthesize=_shadowTyping
@property(copy, nonatomic) TICharacterSetDescription *shortcutCompletions;	// G=0x32a13775; S=0x32a13789; @synthesize=_shortcutCompletions
@property(assign, nonatomic) BOOL shouldAddModifierSymbolsToWordCharacters;	// G=0x32a13731; S=0x32a13741; @synthesize=_shouldAddModifierSymbolsToWordCharacters
@property(assign, nonatomic) BOOL shouldExtendPriorWord;	// G=0x32a12861; S=0x32a12875; 
@property(assign, nonatomic) BOOL suppliesCompletions;	// G=0x32a12899; S=0x32a128ad; 
@property(assign, nonatomic) BOOL supportsNumberKeySelection;	// G=0x32a128d1; S=0x32a128e5; 
@property(assign, nonatomic) BOOL supportsSetPhraseBoundary;	// G=0x32a12909; S=0x32a1291d; 
@property(assign, nonatomic) BOOL suppressCompletionsForFieldEditor;	// G=0x32a12941; S=0x32a12959; 
@property(copy, nonatomic) TICharacterSetDescription *terminatorsPreventingAutocorrection;	// G=0x32a137e1; S=0x32a137f5; @synthesize=_terminatorsPreventingAutocorrection
@property(assign, nonatomic) BOOL usesAutoDeleteWord;	// G=0x32a1297d; S=0x32a12995; 
@property(assign, nonatomic) BOOL usesCandidateSelection;	// G=0x32a129b9; S=0x32a129cd; 
@property(copy, nonatomic) TICharacterSetDescription *wordCharacters;	// G=0x32a13751; S=0x32a13765; @synthesize=_wordCharacters
@property(copy, nonatomic) NSString *wordSeparator;	// G=0x32a135fd; S=0x32a13611; @synthesize=_wordSeparator
+ (BOOL)supportsSecureCoding;	// 0x32a129f1
- (id)initWithCoder:(id)coder;	// 0x32a12b35
- (BOOL)acceptInputString:(id)string;	// 0x32a13391
// declared property getter: - (id)autocorrectionRecordForInputString;	// 0x32a135d9
// declared property getter: - (BOOL)canHandleKeyHitTest;	// 0x32a12715
// declared property getter: - (BOOL)commitsAcceptedCandidate;	// 0x32a12749
- (id)copyWithZone:(NSZone *)zone;	// 0x32a131b9
- (void)dealloc;	// 0x32a129f5
- (void)encodeWithCoder:(id)coder;	// 0x32a12f4d
// declared property getter: - (BOOL)ignoresDeadKeys;	// 0x32a12781
// declared property getter: - (unsigned)inputCount;	// 0x32a13621
// declared property getter: - (unsigned)inputIndex;	// 0x32a13641
// declared property getter: - (id)inputString;	// 0x32a13661
- (BOOL)inputStringAcceptsCurrentCandidateIfSelected:(id)selected;	// 0x32a133f5
// declared property getter: - (BOOL)inputStringIsExemptFromChecker;	// 0x32a127b9
// declared property getter: - (id)inputsPreventingAcceptSelectedCandidate;	// 0x32a13799
// declared property getter: - (id)inputsToReject;	// 0x32a137bd
// declared property getter: - (id)keyEventMap;	// 0x32a136a5
// declared property getter: - (id)keyboardBehaviors;	// 0x32a13685
// declared property getter: - (BOOL)needsKeyHitTestResults;	// 0x32a127f1
// declared property getter: - (BOOL)nextInputWouldStartSentence;	// 0x32a12829
// declared property getter: - (id)replacementForDoubleSpace;	// 0x32a136c5
// declared property getter: - (id)searchStringForMarkedText;	// 0x32a136e9
// declared property setter: - (void)setAutocorrectionRecordForInputString:(id)inputString;	// 0x32a135ed
// declared property setter: - (void)setCanHandleKeyHitTest:(BOOL)test;	// 0x32a12729
// declared property setter: - (void)setCommitsAcceptedCandidate:(BOOL)candidate;	// 0x32a1275d
// declared property setter: - (void)setIgnoresDeadKeys:(BOOL)keys;	// 0x32a12795
// declared property setter: - (void)setInputCount:(unsigned)count;	// 0x32a13631
// declared property setter: - (void)setInputIndex:(unsigned)index;	// 0x32a13651
// declared property setter: - (void)setInputString:(id)string;	// 0x32a13675
// declared property setter: - (void)setInputStringIsExemptFromChecker:(BOOL)checker;	// 0x32a127cd
// declared property setter: - (void)setInputsPreventingAcceptSelectedCandidate:(id)candidate;	// 0x32a137ad
// declared property setter: - (void)setInputsToReject:(id)reject;	// 0x32a137d1
// declared property setter: - (void)setKeyEventMap:(id)map;	// 0x32a136b5
// declared property setter: - (void)setKeyboardBehaviors:(id)behaviors;	// 0x32a13695
// declared property setter: - (void)setNeedsKeyHitTestResults:(BOOL)results;	// 0x32a12805
// declared property setter: - (void)setNextInputWouldStartSentence:(BOOL)sentence;	// 0x32a1283d
// declared property setter: - (void)setReplacementForDoubleSpace:(id)doubleSpace;	// 0x32a136d9
// declared property setter: - (void)setSearchStringForMarkedText:(id)markedText;	// 0x32a136fd
// declared property setter: - (void)setShadowTyping:(id)typing;	// 0x32a13721
// declared property setter: - (void)setShortcutCompletions:(id)completions;	// 0x32a13789
// declared property setter: - (void)setShouldAddModifierSymbolsToWordCharacters:(BOOL)addModifierSymbolsToWordCharacters;	// 0x32a13741
// declared property setter: - (void)setShouldExtendPriorWord:(BOOL)extendPriorWord;	// 0x32a12875
// declared property setter: - (void)setSuppliesCompletions:(BOOL)completions;	// 0x32a128ad
// declared property setter: - (void)setSupportsNumberKeySelection:(BOOL)selection;	// 0x32a128e5
// declared property setter: - (void)setSupportsSetPhraseBoundary:(BOOL)boundary;	// 0x32a1291d
// declared property setter: - (void)setSuppressCompletionsForFieldEditor:(BOOL)fieldEditor;	// 0x32a12959
// declared property setter: - (void)setTerminatorsPreventingAutocorrection:(id)autocorrection;	// 0x32a137f5
// declared property setter: - (void)setUsesAutoDeleteWord:(BOOL)word;	// 0x32a12995
// declared property setter: - (void)setUsesCandidateSelection:(BOOL)selection;	// 0x32a129cd
// declared property setter: - (void)setWordCharacters:(id)characters;	// 0x32a13765
// declared property setter: - (void)setWordSeparator:(id)separator;	// 0x32a13611
// declared property getter: - (id)shadowTyping;	// 0x32a1370d
// declared property getter: - (id)shortcutCompletions;	// 0x32a13775
// declared property getter: - (BOOL)shouldAddModifierSymbolsToWordCharacters;	// 0x32a13731
// declared property getter: - (BOOL)shouldExtendPriorWord;	// 0x32a12861
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)terminator;	// 0x32a13459
- (BOOL)stringEndsWord:(id)word;	// 0x32a134e1
// declared property getter: - (BOOL)suppliesCompletions;	// 0x32a12899
// declared property getter: - (BOOL)supportsNumberKeySelection;	// 0x32a128d1
// declared property getter: - (BOOL)supportsSetPhraseBoundary;	// 0x32a12909
// declared property getter: - (BOOL)suppressCompletionsForFieldEditor;	// 0x32a12941
// declared property getter: - (id)terminatorsPreventingAutocorrection;	// 0x32a137e1
// declared property getter: - (BOOL)usesAutoDeleteWord;	// 0x32a1297d
// declared property getter: - (BOOL)usesCandidateSelection;	// 0x32a129b9
// declared property getter: - (id)wordCharacters;	// 0x32a13751
// declared property getter: - (id)wordSeparator;	// 0x32a135fd
@end
