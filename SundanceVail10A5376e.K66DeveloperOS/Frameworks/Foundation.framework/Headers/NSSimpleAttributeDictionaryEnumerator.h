/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSEnumerator.h> // Unknown library

@class NSSimpleAttributeDictionary;

__attribute__((visibility("hidden")))
@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator {
	NSSimpleAttributeDictionary *dictionary;	// 4 = 0x4
	unsigned nextElement;	// 8 = 0x8
}
- (id)initWithAttributeDictionary:(id)attributeDictionary;	// 0x34e1aff9
- (void)dealloc;	// 0x34e1b0bd
- (void)finalize;	// 0x34e1b109
- (id)nextObject;	// 0x34e1b05d
@end

