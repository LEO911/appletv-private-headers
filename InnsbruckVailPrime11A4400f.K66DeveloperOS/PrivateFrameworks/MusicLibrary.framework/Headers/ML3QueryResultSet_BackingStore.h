/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import </libobjc.A.h>


@interface ML3QueryResultSet_BackingStore : NSObject {
	vector<long long, std::__1::allocator<long long> > _persistentIDs;	// 4 = 0x4
	vector<unsigned char, std::__1::allocator<unsigned char> > _sections;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x315114a5; 
- (id).cxx_construct;	// 0x3150fed9
- (void).cxx_destruct;	// 0x31586d29
- (id)backingStoreByRemovingPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > *)ids;	// 0x31586b5d
- (BOOL)containsPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > *)ids;	// 0x315867d1
// declared property getter: - (unsigned)count;	// 0x315114a5
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x315865f1
- (void)enumerateSectionsUsingBlock:(id)block;	// 0x31510e65
- (long long)persistentIDAtIndex:(unsigned)index;	// 0x315114dd
- (void)reverseEnumeratePersistentIDsUsingBlock:(id)block;	// 0x315866e1
- (void)reverseEnumerateSectionsUsingBlock:(id)block;	// 0x315868e1
@end
