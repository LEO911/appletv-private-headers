/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueFastMutableArray.h"
#import "Foundation-Structs.h"

@class NSKeyValueNonmutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray1 : NSKeyValueFastMutableArray {
@private
	NSKeyValueNonmutatingArrayMethodSet *_nonmutatingMethods;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x32478f39
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x32479b59
- (void)_proxyNonGCFinalize;	// 0x32479b0d
- (unsigned)count;	// 0x3247a005
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x32479f89
- (id)objectAtIndex:(unsigned)index;	// 0x32479ed1
- (id)objectsAtIndexes:(id)indexes;	// 0x32479e71
@end

