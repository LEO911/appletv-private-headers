/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library
#import "AccessibilityUtilities-Structs.h"

@class AXDialectMap, NSString, NSMutableOrderedSet;

@interface AXLanguageTag : NSObject {
	NSRange _range;	// 4 = 0x4
	NSString *_content;	// 12 = 0xc
	AXDialectMap *_unambiguousDialect;	// 16 = 0x10
	NSMutableOrderedSet *_ambiguousDialects;	// 20 = 0x14
	BOOL _wasPredicted;	// 24 = 0x18
}
@property(retain, nonatomic) NSMutableOrderedSet *ambiguousDialects;	// G=0x33396379; S=0x33396389; @synthesize=_ambiguousDialects
@property(assign, nonatomic) NSString *content;	// G=0x33396339; S=0x33396349; @synthesize=_content
@property(readonly, assign, nonatomic) NSString *contentSubstring;	// G=0x33395f9d; 
@property(readonly, assign, nonatomic) AXDialectMap *dialect;	// G=0x33395ff1; 
@property(readonly, assign, nonatomic) AXDialectMap *preferredAmbiguousDialect;	// G=0x33395f4d; 
@property(assign, nonatomic) NSRange range;	// G=0x3339630d; S=0x33396325; @synthesize=_range
@property(retain, nonatomic) AXDialectMap *unambiguousDialect;	// G=0x33396359; S=0x33396369; @synthesize=_unambiguousDialect
@property(assign, nonatomic) BOOL wasPredicted;	// G=0x33396399; S=0x333963a9; @synthesize=_wasPredicted
+ (id)tagWithDialect:(id)dialect range:(NSRange)range content:(id)content predictedByTagger:(BOOL)tagger;	// 0x33395e7d
- (void)addAmbiguousDialect:(id)dialect;	// 0x333960a1
- (void)addAmbiguousDialects:(id)dialects;	// 0x33396139
// declared property getter: - (id)ambiguousDialects;	// 0x33396379
- (BOOL)canBeSpokenByDialect:(id)dialect;	// 0x33396285
- (BOOL)canBeSpokenByLanguage:(id)language;	// 0x333962b9
// declared property getter: - (id)content;	// 0x33396339
// declared property getter: - (id)contentSubstring;	// 0x33395f9d
- (void)dealloc;	// 0x33396035
- (id)description;	// 0x333961f1
// declared property getter: - (id)dialect;	// 0x33395ff1
// declared property getter: - (id)preferredAmbiguousDialect;	// 0x33395f4d
// declared property getter: - (NSRange)range;	// 0x3339630d
// declared property setter: - (void)setAmbiguousDialects:(id)dialects;	// 0x33396389
// declared property setter: - (void)setContent:(id)content;	// 0x33396349
// declared property setter: - (void)setRange:(NSRange)range;	// 0x33396325
// declared property setter: - (void)setUnambiguousDialect:(id)dialect;	// 0x33396369
// declared property setter: - (void)setWasPredicted:(BOOL)predicted;	// 0x333963a9
// declared property getter: - (id)unambiguousDialect;	// 0x33396359
// declared property getter: - (BOOL)wasPredicted;	// 0x33396399
@end

