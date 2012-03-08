/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSOrthography;

@interface NSOrthographyCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSOrthography *_orthography;	// 12 = 0xc
}
@property(readonly, retain) NSOrthography *orthography;	// G=0x35ebd8cd; converted property
@property(readonly, assign) NSRange range;	// G=0x35ebd709; converted property
- (id)initWithCoder:(id)coder;	// 0x35ebd5d9
- (id)initWithRange:(NSRange)range orthography:(id)orthography;	// 0x35ebd42d
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x35ebd831
- (void)dealloc;	// 0x35ebd495
- (id)description;	// 0x35ebd4e1
- (void)encodeWithCoder:(id)coder;	// 0x35ebd551
// converted property getter: - (id)orthography;	// 0x35ebd8cd
// converted property getter: - (NSRange)range;	// 0x35ebd709
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x35ebd725
- (unsigned long long)resultType;	// 0x35ebd701
@end
