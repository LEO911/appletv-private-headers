/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSOwnedDictionaryProxy : NSDictionary {
	id _owner;	// 4 = 0x4
}
- (id)initWithOwner:(id)owner;	// 0x361d0d61
- (unsigned)count;	// 0x361d0e55
- (id)keyEnumerator;	// 0x361d0e75
- (id)objectForKey:(id)key;	// 0x361d0e95
- (oneway void)release;	// 0x361d0de5
- (id)retain;	// 0x361d0da1
- (void)superRelease;	// 0x361d0e29
@end

