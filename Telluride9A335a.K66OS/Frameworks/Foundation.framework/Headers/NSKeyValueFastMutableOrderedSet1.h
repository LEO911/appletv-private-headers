/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableOrderedSet.h"

@class NSKeyValueNonmutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet1 : NSKeyValueFastMutableOrderedSet {
@private
	NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x32107665
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3203dfdd
- (void)_proxyNonGCFinalize;	// 0x32107675
- (unsigned)count;	// 0x3203e179
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3203fe85
- (unsigned)indexOfObject:(id)object;	// 0x321076c9
- (id)objectAtIndex:(unsigned)index;	// 0x32040559
- (id)objectsAtIndexes:(id)indexes;	// 0x32107701
@end
