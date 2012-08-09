/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray, NSString;

@interface ASSearchStore : ASItem {
	NSMutableArray *_results;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSNumber *_total;	// 48 = 0x30
	NSString *_range;	// 52 = 0x34
}
@property(copy) NSString *range;	// G=0x36edca39; S=0x36edca4d; @synthesize=_range
@property(retain) NSArray *results;	// G=0x36edc9f1; S=0x36edca05; @synthesize=_results
@property(copy) NSNumber *status;	// G=0x36edca15; S=0x36edca29; @synthesize=_status
@property(copy) NSNumber *total;	// G=0x36edca5d; S=0x36edca71; @synthesize=_total
+ (BOOL)acceptsTopLevelLeaves;	// 0x36edc455
+ (BOOL)frontingBasicTypes;	// 0x36edc551
+ (BOOL)notifyOfUnknownTokens;	// 0x36edc5a5
+ (BOOL)parsingLeafNode;	// 0x36edc4a9
+ (BOOL)parsingWithSubItems;	// 0x36edc4fd
- (void)addResult:(id)result;	// 0x36edc6c5
- (id)asParseRules;	// 0x36edc765
- (void)dealloc;	// 0x36edc5f9
- (id)description;	// 0x36edc685
// declared property getter: - (id)range;	// 0x36edca39
// declared property getter: - (id)results;	// 0x36edc9f1
// declared property setter: - (void)setRange:(id)range;	// 0x36edca4d
// declared property setter: - (void)setResults:(id)results;	// 0x36edca05
// declared property setter: - (void)setStatus:(id)status;	// 0x36edca29
// declared property setter: - (void)setTotal:(id)total;	// 0x36edca71
// declared property getter: - (id)status;	// 0x36edca15
// declared property getter: - (id)total;	// 0x36edca5d
@end
