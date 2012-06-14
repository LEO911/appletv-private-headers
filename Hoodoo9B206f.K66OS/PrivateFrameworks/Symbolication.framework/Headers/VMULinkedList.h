/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class VMULinkedListEntry;

@interface VMULinkedList : NSObject {
	VMULinkedListEntry *_head;	// 4 = 0x4
	VMULinkedListEntry *_tail;	// 8 = 0x8
}
@property(readonly, retain) VMULinkedListEntry *head;	// G=0x30bd5109; converted property
@property(readonly, retain) VMULinkedListEntry *tail;	// G=0x30bd5119; converted property
+ (id)linkedList;	// 0x30bd5235
- (id)init;	// 0x30bd5129
// converted property getter: - (id)head;	// 0x30bd5109
- (id)popTail;	// 0x30bd52fd
- (void)pushHead:(id)head;	// 0x30bd53b9
- (void)remove:(id)remove;	// 0x30bd526d
- (void)removeAllObjects;	// 0x30bd5449
// converted property getter: - (id)tail;	// 0x30bd5119
@end
