/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSTemporaryObjectID.h"

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
	id _store;	// 16 = 0x10
	_NS128bitWrapper *_uuid128;	// 20 = 0x14
}
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x36651781
- (BOOL)_isPersistentStoreAlive;	// 0x36651a29
- (id)_referenceData;	// 0x36651aed
- (void)_setPersistentStore:(id)store;	// 0x36651a41
- (id)_storeIdentifier;	// 0x366519f9
- (void)dealloc;	// 0x366518f1
- (void)finalize;	// 0x36651975
- (unsigned)hash;	// 0x36651979
- (BOOL)isEqual:(id)equal;	// 0x36651a85
- (id)persistentStore;	// 0x36651a19
@end

