/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BRMappingDictionary : NSObject {
@private
	NSMutableDictionary *_info;	// 4 = 0x4
}
- (id)init;	// 0x3036c619
- (long)count;	// 0x3036c901
- (void)dealloc;	// 0x3036c67d
- (id)keyEnumerator;	// 0x3036c921
- (id)objectEnumerator;	// 0x3036c999
- (id)objectForKey:(id)key;	// 0x3036c8c1
- (void)setObject:(id)object forKey:(id)key;	// 0x3036c8a1
- (void)setValue:(id)value forKey:(id)key;	// 0x3036c8e1
- (void)setValueTransformer:(id)transformer forKey:(id)key;	// 0x3036c739
- (id)transformedValueForKey:(id)key forObject:(id)object;	// 0x3036c6c9
- (id)valueForKey:(id)key;	// 0x3036c8f1
- (id)valueTransformerForKey:(id)key;	// 0x3036c86d
@end
