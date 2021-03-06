/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library
#import "AppSupport-Structs.h"

@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {
	CFDictionaryRef _dictionary;	// 4 = 0x4
	unsigned _maxCount;	// 8 = 0x8
	CPLRUDictionaryNode *_head;	// 12 = 0xc
	CPLRUDictionaryNode *_tail;	// 16 = 0x10
}
+ (id)dictionaryWithMaximumCapacity:(unsigned)maximumCapacity;	// 0x30cb6935
- (id)initWithMaximumCapacity:(unsigned)maximumCapacity;	// 0x30cb6b1d
- (void)_addNodeToFront:(id)front;	// 0x30cb662d
- (void)_moveNodeToFront:(id)front;	// 0x30cb67b9
- (void)_removeNode:(id)node;	// 0x30cb6ad9
- (void)_removeNodeFromLinkedList:(id)linkedList;	// 0x30cb6609
- (id)allKeys;	// 0x30cb6915
- (id)allKeysInLRUOrder;	// 0x30cb6981
- (id)allValuesInLRUOrder;	// 0x30cb6a2d
- (unsigned)count;	// 0x30cb6edd
- (void)dealloc;	// 0x30cb6ef1
- (id)description;	// 0x30cb6809
- (unsigned)linkedListCount;	// 0x30cb6679
- (id)objectForKey:(id)key;	// 0x30cb6e91
- (id)objectForKeyWithoutAffectingLRU:(id)keyWithoutAffectingLRU;	// 0x30cb6f65
- (void)removeAllObjects;	// 0x30cb6ccd
- (void)removeObjectForKey:(id)key;	// 0x30cb6d31
- (void)setObject:(id)object forKey:(id)key;	// 0x30cb6d69
@end

