/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSMutableDictionary.h> // Unknown library
#import "MIME-Structs.h"

@class NSLock;

@interface MFWeakDictionary : NSMutableDictionary {
	unsigned long _gen;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	NSMutableDictionary *_dictionary;	// 12 = 0xc
}
- (id)initWithCapacity:(unsigned)capacity;	// 0x3442ff3d
- (id)_copyDictionary;	// 0x344304ad
- (id)allKeys;	// 0x344300a1
- (id)allValues;	// 0x344300d9
- (unsigned)count;	// 0x34430045
- (unsigned)countByEnumeratingWithState:(XXStruct_t4MBZD *)state objects:(id *)objects count:(unsigned)count;	// 0x3443032d
- (void)dealloc;	// 0x3442ffe1
- (void)enumerateKeysAndObjectsUsingBlock:(id)block;	// 0x34430499
- (void)enumerateKeysAndObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x344303e5
- (id)objectForKey:(id)key;	// 0x34430111
- (void)removeAllObjects;	// 0x344302c1
- (void)removeObjectForKey:(id)key;	// 0x34430251
- (void)setObject:(id)object forKey:(id)key;	// 0x344301b9
@end

