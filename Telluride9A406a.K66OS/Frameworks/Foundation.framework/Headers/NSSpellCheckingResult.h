/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"


@interface NSSpellCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
}
@property(readonly, assign) NSRange range;	// G=0x35ebda1d; converted property
- (id)initWithCoder:(id)coder;	// 0x35ebd931
- (id)initWithRange:(NSRange)range;	// 0x35ebd8dd
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x35ebdb2d
- (void)encodeWithCoder:(id)coder;	// 0x35ebd921
// converted property getter: - (NSRange)range;	// 0x35ebda1d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x35ebda39
- (unsigned long long)resultType;	// 0x35ebda15
@end
