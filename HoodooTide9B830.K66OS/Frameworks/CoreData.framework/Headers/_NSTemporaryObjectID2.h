/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSTemporaryObjectID.h"

@class _NS128bitWrapper;

__attribute__((visibility("hidden")))
@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
@private
	id _store;	// 16 = 0x10
	_NS128bitWrapper *_uuid128;	// 20 = 0x14
}
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x3233ff8d
- (BOOL)_isPersistentStoreAlive;	// 0x3233f669
- (id)_referenceData;	// 0x3233f681
- (void)_setPersistentStore:(id)store;	// 0x3234015d
- (id)_storeIdentifier;	// 0x323401a5
- (void)dealloc;	// 0x32340249
- (void)finalize;	// 0x3233f655
- (unsigned)hash;	// 0x323401c5
- (BOOL)isEqual:(id)equal;	// 0x323400f1
- (id)persistentStore;	// 0x3233f659
@end
