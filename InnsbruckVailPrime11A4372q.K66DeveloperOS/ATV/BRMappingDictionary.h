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
- (id)init;	// 0x4258ad
- (long)count;	// 0x425bb1
- (void)dealloc;	// 0x425911
- (id)keyEnumerator;	// 0x425bd1
- (id)objectEnumerator;	// 0x425c49
- (id)objectForKey:(id)key;	// 0x425b71
- (void)setObject:(id)object forKey:(id)key;	// 0x425b51
- (void)setValue:(id)value forKey:(id)key;	// 0x425b91
- (void)setValueTransformer:(id)transformer forKey:(id)key;	// 0x4259d5
- (id)transformedValueForKey:(id)key forObject:(id)object;	// 0x42595d
- (id)valueForKey:(id)key;	// 0x425ba1
- (id)valueTransformerForKey:(id)key;	// 0x425b19
@end

