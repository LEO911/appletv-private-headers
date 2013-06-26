/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_addressBook;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_searchAddressBook;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_shared;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_principal;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_collection;	// 44 = 0x2c
	CoreDAVItemWithNoChildren *_unauthenticated;	// 48 = 0x30
}
@property(retain) CoreDAVItemWithNoChildren *addressBook;	// G=0x304a0769; S=0x304a077d; @synthesize=_addressBook
@property(retain) CoreDAVItemWithNoChildren *collection;	// G=0x304a07f9; S=0x304a080d; @synthesize=_collection
@property(retain) CoreDAVItemWithNoChildren *principal;	// G=0x304a07d5; S=0x304a07e9; @synthesize=_principal
@property(retain) CoreDAVItemWithNoChildren *searchAddressBook;	// G=0x304a078d; S=0x304a07a1; @synthesize=_searchAddressBook
@property(retain) CoreDAVItemWithNoChildren *shared;	// G=0x304a07b1; S=0x304a07c5; @synthesize=_shared
@property(readonly, assign) NSSet *stringSet;	// G=0x304a003d; 
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x304a081d; S=0x304a0831; @synthesize=_unauthenticated
+ (id)copyParseRules;	// 0x3049fa41
- (id)init;	// 0x3049f7e9
// declared property getter: - (id)addressBook;	// 0x304a0769
// declared property getter: - (id)collection;	// 0x304a07f9
- (void)dealloc;	// 0x3049f819
- (id)description;	// 0x3049f8cd
- (BOOL)isTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x304a0501
// declared property getter: - (id)principal;	// 0x304a07d5
// declared property getter: - (id)searchAddressBook;	// 0x304a078d
// declared property setter: - (void)setAddressBook:(id)book;	// 0x304a077d
// declared property setter: - (void)setCollection:(id)collection;	// 0x304a080d
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x304a07e9
// declared property setter: - (void)setSearchAddressBook:(id)book;	// 0x304a07a1
// declared property setter: - (void)setShared:(id)shared;	// 0x304a07c5
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x304a0831
// declared property getter: - (id)shared;	// 0x304a07b1
// declared property getter: - (id)stringSet;	// 0x304a003d
// declared property getter: - (id)unauthenticated;	// 0x304a081d
- (void)write:(id)write;	// 0x3049fe5d
@end
