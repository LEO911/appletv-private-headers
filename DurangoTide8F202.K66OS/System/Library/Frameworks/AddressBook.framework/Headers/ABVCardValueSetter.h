/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library


@interface ABVCardValueSetter : NSObject {
}
- (id)fullName;	// 0x304f540d
- (BOOL)propertyIsValidForPerson:(unsigned)person;	// 0x304f53fd
- (BOOL)setImageData:(id)data;	// 0x304f5409
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x304f5401
- (void)setValueInTemporaryCache:(id)temporaryCache forProperty:(unsigned)property;	// 0x304f5411
- (void *)valueForProperty:(unsigned)property;	// 0x304f5405
@end
