/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMappingDictionary : XXUnknownSuperclass {
	NSMutableDictionary *_info;	// 4 = 0x4
}
- (id)init;	// 0x3a2a59
- (long)count;	// 0x3a2d55
- (void)dealloc;	// 0x3a2abd
- (id)keyEnumerator;	// 0x3a2d75
- (id)objectEnumerator;	// 0x3a2ded
- (id)objectForKey:(id)key;	// 0x3a2d15
- (void)setObject:(id)object forKey:(id)key;	// 0x3a2cf5
- (void)setValue:(id)value forKey:(id)key;	// 0x3a2d35
- (void)setValueTransformer:(id)transformer forKey:(id)key;	// 0x3a2b7d
- (id)transformedValueForKey:(id)key forObject:(id)object;	// 0x3a2b09
- (id)valueForKey:(id)key;	// 0x3a2d45
- (id)valueTransformerForKey:(id)key;	// 0x3a2cbd
@end

