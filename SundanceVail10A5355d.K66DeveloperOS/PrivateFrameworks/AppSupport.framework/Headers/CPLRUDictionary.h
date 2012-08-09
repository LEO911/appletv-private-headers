/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {
	CFDictionaryRef _dictionary;	// 4 = 0x4
	unsigned _maxCount;	// 8 = 0x8
	CPLRUDictionaryNode *_head;	// 12 = 0xc
	CPLRUDictionaryNode *_tail;	// 16 = 0x10
}
+ (id)dictionaryWithMaximumCapacity:(unsigned)maximumCapacity;	// 0x331d4fc9
- (id)initWithMaximumCapacity:(unsigned)maximumCapacity;	// 0x331d5015
- (void)_addNodeToFront:(id)front;	// 0x331d4f81
- (void)_moveNodeToFront:(id)front;	// 0x331d4f29
- (void)_removeNode:(id)node;	// 0x331d4ee1
- (void)_removeNodeFromLinkedList:(id)linkedList;	// 0x331d4ebd
- (id)allKeys;	// 0x331d5331
- (id)allKeysInLRUOrder;	// 0x331d559d
- (id)allValuesInLRUOrder;	// 0x331d5645
- (unsigned)count;	// 0x331d531d
- (void)dealloc;	// 0x331d51a5
- (id)description;	// 0x331d5219
- (unsigned)linkedListCount;	// 0x331d5561
- (id)objectForKey:(id)key;	// 0x331d5351
- (id)objectForKeyWithoutAffectingLRU:(id)keyWithoutAffectingLRU;	// 0x331d56ed
- (void)removeAllObjects;	// 0x331d5505
- (void)removeObjectForKey:(id)key;	// 0x331d54cd
- (void)setObject:(id)object forKey:(id)key;	// 0x331d539d
@end
