/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableArray.h"

@class NSKeyValueNonmutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray1 : NSKeyValueFastMutableArray {
@private
	NSKeyValueNonmutatingArrayMethodSet *_nonmutatingMethods;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x35e51959
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x35e51969
- (void)_proxyNonGCFinalize;	// 0x35e519d1
- (unsigned)count;	// 0x35e51a25
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x35e51a55
- (id)objectAtIndex:(unsigned)index;	// 0x35e51ac9
- (id)objectsAtIndexes:(id)indexes;	// 0x35e51b89
@end
