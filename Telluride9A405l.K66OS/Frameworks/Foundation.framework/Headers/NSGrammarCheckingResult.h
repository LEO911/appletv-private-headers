/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSArray *_details;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x3033a35d; converted property
- (id)initWithCoder:(id)coder;	// 0x30339f81
- (id)initWithRange:(NSRange)range details:(id)details;	// 0x30339bc9
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x3033a485
- (void)dealloc;	// 0x30339c31
- (void)encodeWithCoder:(id)coder;	// 0x30339c7d
- (id)grammarDetails;	// 0x3033a521
// converted property getter: - (NSRange)range;	// 0x3033a35d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x3033a379
- (unsigned long long)resultType;	// 0x3033a355
@end

