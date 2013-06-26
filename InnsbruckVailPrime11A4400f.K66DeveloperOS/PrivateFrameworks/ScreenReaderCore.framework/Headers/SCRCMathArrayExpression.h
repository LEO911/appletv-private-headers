/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "SCRCMathExpression.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathArrayExpression : SCRCMathExpression {
	NSArray *_children;	// 12 = 0xc
}
@property(readonly, retain) NSArray *children;	// G=0x327337a9; converted property
@property(readonly, assign, nonatomic) NSArray *mathMLAttributes;	// G=0x32733c79; 
@property(readonly, assign, nonatomic) NSString *mathMLTag;	// G=0x32733c75; 
- (id)initWithDictionary:(id)dictionary;	// 0x3273354d
- (id)childSpeakableSegmentsWithSpeakingStyle:(int)speakingStyle upToDepth:(unsigned)depth parentTreePosition:(id)position childIndex:(unsigned *)index;	// 0x3273393d
// converted property getter: - (id)children;	// 0x327337a9
- (void)dealloc;	// 0x327336ed
- (id)description;	// 0x32733739
- (BOOL)hasSimpleArrayOfChildren;	// 0x32733c71
- (id)localizablePrefixForChildAtIndex:(unsigned)index;	// 0x32733c7d
- (id)localizableSuffixForChildAtIndex:(unsigned)index;	// 0x32733c81
// declared property getter: - (id)mathMLAttributes;	// 0x32733c79
- (id)mathMLString;	// 0x32733b31
// declared property getter: - (id)mathMLTag;	// 0x32733c75
- (id)prefixForChildAtIndex:(unsigned)index;	// 0x32733c85
- (id)speakableDescriptionWithSpeakingStyle:(int)speakingStyle arePausesAllowed:(BOOL)allowed;	// 0x327337e1
- (id)speakableSegmentsWithSpeakingStyle:(int)speakingStyle upToDepth:(unsigned)depth treePosition:(id)position;	// 0x327339dd
- (id)subExpressions;	// 0x32733799
- (id)suffixForChildAtIndex:(unsigned)index;	// 0x32733cb5
@end
