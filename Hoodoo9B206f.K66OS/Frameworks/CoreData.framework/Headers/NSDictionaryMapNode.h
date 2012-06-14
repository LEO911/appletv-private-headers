/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import "NSStoreMapNode.h"


__attribute__((visibility("hidden")))
@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding> {
@private
	id *_attributes;	// 24 = 0x18
	id _attributesAsEncoded;	// 28 = 0x1c
}
+ (void)initialize;	// 0x3627cdf1
- (id)initWithCoder:(id)coder;	// 0x3627d579
- (id)initWithValues:(id *)values objectID:(id)anId;	// 0x3627cdb1
- (void)_doAttributeDecoding;	// 0x3627d35d
- (const id *)attributeValues;	// 0x3627d0ed
- (void)dealloc;	// 0x3627d125
- (void)encodeWithCoder:(id)coder;	// 0x3627d205
- (id)valueForKey:(id)key;	// 0x3627ce0d
@end
