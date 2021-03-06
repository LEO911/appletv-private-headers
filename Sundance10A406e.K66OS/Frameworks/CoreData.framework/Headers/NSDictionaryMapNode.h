/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapNode.h"
#import "NSCoding.h"


@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding> {
	id *_attributes;	// 24 = 0x18
	id _attributesAsEncoded;	// 28 = 0x1c
}
+ (void)initialize;	// 0x33d02941
- (id)initWithCoder:(id)coder;	// 0x33d0299d
- (id)initWithValues:(id *)values objectID:(id)anId;	// 0x33d0295d
- (void)_doAttributeDecoding;	// 0x33d02a39
- (const id *)attributeValues;	// 0x33d02e99
- (void)dealloc;	// 0x33d02dc1
- (void)encodeWithCoder:(id)coder;	// 0x33d02c61
- (id)valueForKey:(id)key;	// 0x33d02ed1
@end

