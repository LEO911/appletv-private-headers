/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVKeyValueStore : XXUnknownSuperclass {
	sqlite3 *_db;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dbQueue;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
}
+ (id)defaultStore;	// 0x193dfd
- (void)_dbDataValuesForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x1962e5
- (void)_dbDeleteCleanRowsNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x196a29
- (void)_dbDropAllWithCompletionHandler:(id)completionHandler;	// 0x196bbd
- (void)_dbSetDataValues:(id)values versions:(id)versions forKeys:(id)keys dirtyFlag:(BOOL)flag;	// 0x195f49
- (void)_dbVersionsForKeys:(id)keys handler:(id)handler;	// 0x195c09
- (void)_getItemsFromKVSWithKeys:(id)keys resultValues:(id)values sinceVersions:(id)versions handler:(id)handler;	// 0x1957ed
- (id)_initWithDomain:(id)domain withCacheFilename:(id)cacheFilename;	// 0x1945c5
- (void)_internalPutItemsToKVS:(id)kvs resolvedKeys:(id)keys resolver:(id)resolver completionHandler:(id)handler;	// 0x195175
- (void)_objectsForKeys:(id)keys option:(int)option resolver:(id)resolver handler:(id)handler;	// 0x194ea9
- (void)_putItemsToKVS:(id)kvs resolver:(id)resolver completionHandler:(id)handler;	// 0x19512d
- (void)_setObjects:(id)objects forKeys:(id)keys resolver:(id)resolver handler:(id)handler;	// 0x1949a9
- (void)dealloc;	// 0x193ef5
- (id)objectForKey:(id)key;	// 0x1941c1
- (void)objectForKey:(id)key option:(int)option completionHandler:(id)handler;	// 0x194065
- (void)objectForKey:(id)key option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x1940ad
- (void)objectsForKeys:(id)keys option:(int)option completionHandler:(id)handler;	// 0x194089
- (void)objectsForKeys:(id)keys option:(int)option withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x193f7d
- (void)purgeCacheDataNotUpdatedSince:(id)since completionHandler:(id)handler;	// 0x1944b5
- (void)resetForRetailWithCompletionHandler:(id)completionHandler;	// 0x19453d
- (void)setObject:(id)object forKey:(id)key;	// 0x193f8d
- (void)setObject:(id)object forKey:(id)key withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x19400d
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x193fe5
- (void)setObjects:(id)objects forKeys:(id)keys withConflictResolver:(id)conflictResolver completionHandler:(id)handler;	// 0x193f6d
@end
