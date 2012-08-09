/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library
#import "AccessibilityUtilities-Structs.h"

@class NSMutableArray, NSMutableOrderedSet, NSString, NSLinguisticTagger;

@interface AXLanguageTaggedContent : NSObject {
	NSMutableArray *_tags;	// 4 = 0x4
	BOOL _tagged;	// 8 = 0x8
	NSLinguisticTagger *_linguisticTagger;	// 12 = 0xc
	NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;	// 16 = 0x10
	NSString *_userPreferredLangID;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *content;	// G=0x341a2d79; 
@property(retain, nonatomic) NSLinguisticTagger *linguisticTagger;	// G=0x341a40e5; S=0x341a40f5; @synthesize=_linguisticTagger
@property(assign, nonatomic, getter=isTagged) BOOL tagged;	// G=0x341a40c5; S=0x341a40d5; @synthesize=_tagged
@property(retain, nonatomic) NSMutableArray *tags;	// G=0x341a40a5; S=0x341a40b5; @synthesize=_tags
@property(retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps;	// G=0x341a4105; S=0x341a4115; @synthesize=_unpredictedAmbiguousLangMaps
@property(copy, nonatomic) NSString *userPreferredLangID;	// G=0x341a4125; S=0x341a4139; @synthesize=_userPreferredLangID
- (id)initWithContent:(id)content;	// 0x341a2b09
- (void)_addTag;	// 0x341a3cad
- (void)_manuallyProcessContentWithRange:(NSRange)range;	// 0x341a3b65
- (id)ambiguousLangMaps;	// 0x341a3639
// declared property getter: - (id)content;	// 0x341a2d79
- (void)dealloc;	// 0x341a2bf9
- (id)description;	// 0x341a2c79
- (void)enumeratePredictedTags:(id)tags;	// 0x341a2e7d
- (void)enumerateUnpredictedTags:(id)tags;	// 0x341a2da1
- (BOOL)hasOnlyNonWesternLangMaps;	// 0x341a39a9
- (BOOL)hasOnlyWesternLangMaps;	// 0x341a37ed
// declared property getter: - (BOOL)isTagged;	// 0x341a40c5
- (BOOL)langMapIsSignificant:(id)significant;	// 0x341a33ad
// declared property getter: - (id)linguisticTagger;	// 0x341a40e5
- (id)primaryAmbiguousDialect;	// 0x341a3e49
// declared property setter: - (void)setLinguisticTagger:(id)tagger;	// 0x341a40f5
// declared property setter: - (void)setTagged:(BOOL)tagged;	// 0x341a40d5
// declared property setter: - (void)setTags:(id)tags;	// 0x341a40b5
// declared property setter: - (void)setUnpredictedAmbiguousLangMaps:(id)maps;	// 0x341a4115
// declared property setter: - (void)setUserPreferredLangID:(id)anId;	// 0x341a4139
- (id)significantAmbiguousLangMaps;	// 0x341a33b1
- (id)significantAmbiguousLangMapsForUserKeyboards;	// 0x341a33c1
- (void)tagContent;	// 0x341a2f59
// declared property getter: - (id)tags;	// 0x341a40a5
- (id)unambiguousLangMaps;	// 0x341a34fd
// declared property getter: - (id)unpredictedAmbiguousLangMaps;	// 0x341a4105
- (void)updateTagsForLocalePrefChange;	// 0x341a3ea9
// declared property getter: - (id)userPreferredLangID;	// 0x341a4125
@end
