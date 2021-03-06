/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ABFavoritesEntry : NSObject {
	int _abUid;	// 4 = 0x4
	int _abIdentifier;	// 8 = 0x8
	NSString *_value;	// 12 = 0xc
	int _property;	// 16 = 0x10
	int _type;	// 20 = 0x14
	unsigned _dirty : 1;	// 24 = 0x18
	NSString *_label;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSString *_abDatabaseUUID;	// 36 = 0x24
	void *_addressBook;	// 40 = 0x28
}
@property(readonly, retain) NSString *label;	// G=0x32c1117d; converted property
@property(readonly, assign) int property;	// G=0x32c1116d; converted property
@property(readonly, assign) int type;	// G=0x32c111f5; converted property
@property(readonly, retain) NSString *value;	// G=0x32c111d5; converted property
+ (void)_runLookup;	// 0x32c11305
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x32c10c59
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation addressBook:(void *)book;	// 0x32c10c6d
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x32c10ac5
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier type:(int)type;	// 0x32c10ae9
- (void *)ABPerson;	// 0x32c11205
- (int)_abUid;	// 0x32c11231
- (void)_lookupChanged:(id)changed;	// 0x32c11d8d
- (void)_lookupNotFound;	// 0x32c11cb5
- (void)_postEntryChanged;	// 0x32c11c6d
- (void)_queueLookup;	// 0x32c11b21
- (void)_unqueueLookup;	// 0x32c11c0d
- (void)dealloc;	// 0x32c10e9d
- (id)dictionaryRepresentation;	// 0x32c10f51
- (void)dictionaryRepresentation:(id *)representation isDirty:(BOOL *)dirty;	// 0x32c110f9
- (id)displayName;	// 0x32c11135
- (int)identifier;	// 0x32c111e5
- (BOOL)isEqual:(id)equal;	// 0x32c11241
// converted property getter: - (id)label;	// 0x32c1117d
- (id)nonLocalizedLabel;	// 0x32c111c5
// converted property getter: - (int)property;	// 0x32c1116d
- (void)recheckAddressBook;	// 0x32c112f5
// converted property getter: - (int)type;	// 0x32c111f5
// converted property getter: - (id)value;	// 0x32c111d5
@end

