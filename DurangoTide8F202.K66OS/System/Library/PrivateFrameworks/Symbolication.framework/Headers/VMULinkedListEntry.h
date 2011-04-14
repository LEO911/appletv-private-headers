/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class VMUSymbolOwner;

@interface VMULinkedListEntry : NSObject {
	VMULinkedListEntry *_prev;	// 4 = 0x4
	VMULinkedListEntry *_next;	// 8 = 0x8
	unsigned _size;	// 12 = 0xc
	VMUSymbolOwner *_symbolOwner;	// 16 = 0x10
}
@property(retain) VMULinkedListEntry *next;	// G=0x3018a251; S=0x3018a271; converted property
@property(retain) VMULinkedListEntry *prev;	// G=0x3018a241; S=0x3018a261; converted property
@property(readonly, assign) unsigned size;	// G=0x3018a221; converted property
@property(readonly, retain) VMUSymbolOwner *symbolOwner;	// G=0x3018a231; converted property
+ (id)linkedListEntryWithSymbolOwner:(id)symbolOwner;	// 0x3018a3e5
- (id)initWithSymbolOwner:(id)symbolOwner;	// 0x3018a379
- (void)dealloc;	// 0x3018a281
- (id)description;	// 0x3018a2e5
// converted property getter: - (id)next;	// 0x3018a251
// converted property getter: - (id)prev;	// 0x3018a241
// converted property setter: - (void)setNext:(id)next;	// 0x3018a271
// converted property setter: - (void)setPrev:(id)prev;	// 0x3018a261
// converted property getter: - (unsigned)size;	// 0x3018a221
// converted property getter: - (id)symbolOwner;	// 0x3018a231
@end
