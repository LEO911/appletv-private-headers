/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSEnumerator.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator {
	NSDictionary *_keyplaneCache;	// 4 = 0x4
	NSEnumerator *_nameEnum;	// 8 = 0x8
}
- (id)initWithKeyplaneCache:(id)keyplaneCache;	// 0x32be60fd
- (void)dealloc;	// 0x32bed8b1
- (id)nextObject;	// 0x32be6175
@end

