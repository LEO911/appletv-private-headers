/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSExternalRefCountedData : NSObject {
	int _cd_rc;	// 4 = 0x4
	int _externalReferenceCount;	// 8 = 0x8
	externalRefFlags_st _externalRefFlags;	// 12 = 0xc
	id _toManyMap;	// 16 = 0x10
	double _birth;	// 20 = 0x14
}
@property(readonly, assign) int externalReferenceCount;	// G=0x334cfef1; converted property
@property(retain) id relationshipCaches;	// G=0x334cff15; S=0x334cff25; converted property
@property(assign) double timestamp;	// G=0x33497b99; S=0x334cfed9; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x334cfe29
- (id)initWithOptions:(unsigned)options andTimestamp:(double)timestamp;	// 0x334cfe31
- (BOOL)_isDeallocating;	// 0x334cfea5
- (BOOL)_tryRetain;	// 0x334cfea1
- (void)dealloc;	// 0x334cfea9
- (int)decrementRefCount;	// 0x3349a2d9
// converted property getter: - (int)externalReferenceCount;	// 0x334cfef1
- (void)incrementExternalReferenceCount:(int)count;	// 0x334cff01
- (void)incrementRefCount;	// 0x33494b25
- (unsigned)options;	// 0x334cfeed
- (unsigned)optionsForKey:(id)key;	// 0x334d003d
- (id)relatedIDsForKey:(id)key;	// 0x334d0071
// converted property getter: - (id)relationshipCaches;	// 0x334cff15
- (void)release;	// 0x33494b39
- (id)retain;	// 0x33497be1
- (unsigned)retainCount;	// 0x334cfe8d
- (void)setRelatedIDs:(id)ids forKey:(id)key options:(unsigned)options andTimestamp:(double)timestamp;	// 0x334d00ed
// converted property setter: - (void)setRelationshipCaches:(id)caches;	// 0x334cff25
// converted property setter: - (void)setTimestamp:(double)timestamp;	// 0x334cfed9
// converted property getter: - (double)timestamp;	// 0x33497b99
- (double)timestampForKey:(id)key;	// 0x334d00a5
- (void)updateFromOriginalRelationshipCaches:(id)originalRelationshipCaches;	// 0x334cff69
@end
