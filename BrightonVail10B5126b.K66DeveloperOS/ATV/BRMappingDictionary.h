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
- (id)init;	// 0x3abba9
- (long)count;	// 0x3abea5
- (void)dealloc;	// 0x3abc0d
- (id)keyEnumerator;	// 0x3abec5
- (id)objectEnumerator;	// 0x3abf3d
- (id)objectForKey:(id)key;	// 0x3abe65
- (void)setObject:(id)object forKey:(id)key;	// 0x3abe45
- (void)setValue:(id)value forKey:(id)key;	// 0x3abe85
- (void)setValueTransformer:(id)transformer forKey:(id)key;	// 0x3abccd
- (id)transformedValueForKey:(id)key forObject:(id)object;	// 0x3abc59
- (id)valueForKey:(id)key;	// 0x3abe95
- (id)valueTransformerForKey:(id)key;	// 0x3abe0d
@end
