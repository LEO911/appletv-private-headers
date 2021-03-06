/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABVCardPersonValueSetter.h"


@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {
	BOOL _recordIsGroup;	// 12 = 0xc
	BOOL _importingToExistingGroup;	// 13 = 0xd
}
@property(assign) BOOL recordIsGroup;	// G=0x329d2601; S=0x329d2619; @synthesize=_recordIsGroup
+ (CFDictionaryRef)_personToGroupPropertyMap;	// 0x329d1fb5
+ (int)groupPropertyForPersonProperty:(int)personProperty;	// 0x329d2065
- (id)initWithGroup:(void *)group removeExistingProperties:(BOOL)properties;	// 0x329d2495
- (id)initWithPerson:(void *)person removeExistingProperties:(BOOL)properties;	// 0x329d2445
- (void)_drainExistingProperties;	// 0x329d2341
- (void *)copyParsedRecordWithSource:(void *)source outRecordType:(unsigned *)type;	// 0x329d20dd
- (id)imageData;	// 0x329d25ad
- (BOOL)propertyIsValidForPerson:(unsigned)person;	// 0x329d2091
// declared property getter: - (BOOL)recordIsGroup;	// 0x329d2601
- (BOOL)setImageData:(id)data cropRectX:(int)x cropRectY:(int)y cropRectWidth:(int)width cropRectHeight:(int)height;	// 0x329d24f1
// declared property setter: - (void)setRecordIsGroup:(BOOL)group;	// 0x329d2619
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x329d2295
- (void *)valueForProperty:(unsigned)property;	// 0x329d2209
@end

