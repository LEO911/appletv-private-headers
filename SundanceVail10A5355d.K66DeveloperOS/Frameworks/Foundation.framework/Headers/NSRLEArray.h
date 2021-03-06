/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSMutableCopying.h"


@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
	NSRefCountedRunArray *theList;	// 4 = 0x4
}
- (id)init;	// 0x3465aff1
- (id)initWithRefCountedRunArray:(NSRefCountedRunArray *)refCountedRunArray;	// 0x3465b005
- (void)_makeNewListFrom:(NSRefCountedRunArray *)from;	// 0x3465b071
- (id)copyWithZone:(NSZone *)zone;	// 0x3465ec71
- (unsigned)count;	// 0x34720f09
- (void)dealloc;	// 0x3465cdf1
- (id)description;	// 0x34720f1d
- (void)finalize;	// 0x34720dd1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34720d8d
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3465d0a9
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range runIndex:(unsigned *)index3;	// 0x34720e25
- (id)objectAtRunIndex:(unsigned)runIndex length:(unsigned *)length;	// 0x34720ecd
@end

