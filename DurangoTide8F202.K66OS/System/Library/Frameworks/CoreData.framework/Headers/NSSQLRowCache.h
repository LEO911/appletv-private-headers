/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStoreCache.h"
#import "CoreData-Structs.h"

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLRowCache : NSPersistentStoreCache {
@private
	NSSQLCore *_sqlCore;	// 12 = 0xc
	int _debug;	// 16 = 0x10
}
+ (void)initialize;	// 0x330f9301
- (id)initWithSQLCore:(id)sqlcore;	// 0x330f9321
- (id)adapter;	// 0x33190029
- (void)dealloc;	// 0x33109461
- (void)forgetRowForObjectID:(NSScalarObjectID *)objectID;	// 0x33190015
- (void)registerRow:(id)row forObjectID:(NSScalarObjectID *)objectID;	// 0x3318fff1
- (void)registerSnapshots:(id)snapshots;	// 0x33190121
- (void)registerToMany:(id)many forSourceObjectID:(NSScalarObjectID *)sourceObjectID relationshipName:(id)name andTimestamp:(double)timestamp;	// 0x3318ffbd
- (id)rowForObjectID:(id)objectID;	// 0x3318ff45
- (id)rowForObjectID:(id)objectID after:(double)after;	// 0x3318ff6d
- (id)toManyForSourceObjectID:(id)sourceObjectID relationshipName:(id)name after:(double)after;	// 0x3318ff99
@end

