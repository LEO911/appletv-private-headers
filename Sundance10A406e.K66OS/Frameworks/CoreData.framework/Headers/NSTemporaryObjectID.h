/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectID.h"
#import "CoreData-Structs.h"

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
	int _cd_rc;	// 4 = 0x4
	int _counter;	// 8 = 0x8
	NSEntityDescription *_entity;	// 12 = 0xc
}
@property(readonly, retain) NSEntityDescription *entity;	// G=0x33d9d071; converted property
+ (id)initWithEntity:(id)entity;	// 0x33d9cec9
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x33d9cf15
+ (void)_release_1;	// 0x33d9cc7d
+ (id)_retain_1;	// 0x33d9cc59
+ (void)_storeDeallocated;	// 0x33d9c8f1
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33d9cc45
+ (id)alloc;	// 0x33d9cc41
+ (id)allocWithZone:(NSZone *)zone;	// 0x33d9cc3d
+ (unsigned)allocateBatch:(id *)batch forEntity:(id)entity count:(unsigned)count;	// 0x33d9ce49
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33d9c8ed
+ (Class)classForStore:(id)store;	// 0x33d9c991
+ (void)initialize;	// 0x33cb82f9
+ (void)release;	// 0x33d9cc79
+ (id)retain;	// 0x33d9cc55
+ (void)setObjectStoreIdentifier:(id)identifier;	// 0x33d9c949
+ (int)version;	// 0x33d9cc49
- (id)initWithEntity:(id)entity;	// 0x33d9cf31
- (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x33d9cf4d
- (id)URIRepresentation;	// 0x33d9d209
- (BOOL)_isPersistentStoreAlive;	// 0x33d9d0e5
- (id)_referenceData;	// 0x33d9d255
- (id)_retainedURIString;	// 0x33d9d109
- (void)_setPersistentStore:(id)store;	// 0x33d9d031
- (id)_storeIdentifier;	// 0x33d9d085
- (void)dealloc;	// 0x33d9cd29
// converted property getter: - (id)entity;	// 0x33d9d071
- (void)finalize;	// 0x33d9cd95
- (unsigned)hash;	// 0x33d9cf69
- (BOOL)isEqual:(id)equal;	// 0x33d9cfc9
- (BOOL)isTemporaryID;	// 0x33d9d081
- (id)persistentStore;	// 0x33d9d015
- (void)release;	// 0x33d9ccd9
- (id)retain;	// 0x33d9ccb9
- (unsigned)retainCount;	// 0x33d9cd15
@end
