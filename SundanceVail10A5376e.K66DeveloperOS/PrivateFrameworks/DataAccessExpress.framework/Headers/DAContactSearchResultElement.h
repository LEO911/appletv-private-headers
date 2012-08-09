/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library
#import "NSSecureCoding.h"

@class NSArray, NSString, NSData;

@interface DAContactSearchResultElement : NSObject <NSSecureCoding> {
	NSString *_displayName;	// 4 = 0x4
	NSString *_firstName;	// 8 = 0x8
	NSString *_lastName;	// 12 = 0xc
	NSString *_emailAddress;	// 16 = 0x10
	NSString *_workPhone;	// 20 = 0x14
	NSString *_mobilePhone;	// 24 = 0x18
	NSString *_company;	// 28 = 0x1c
	NSString *_title;	// 32 = 0x20
	NSString *_homePhone;	// 36 = 0x24
	NSString *_alias;	// 40 = 0x28
	NSString *_office;	// 44 = 0x2c
	NSString *_serverSource;	// 48 = 0x30
	NSString *_recordName;	// 52 = 0x34
	NSString *_faxPhone;	// 56 = 0x38
	NSString *_department;	// 60 = 0x3c
	NSString *_street;	// 64 = 0x40
	NSString *_city;	// 68 = 0x44
	NSString *_state;	// 72 = 0x48
	NSString *_zip;	// 76 = 0x4c
	NSString *_country;	// 80 = 0x50
	NSData *_jpegPhoto;	// 84 = 0x54
	NSString *_imAddress;	// 88 = 0x58
	NSString *_uri;	// 92 = 0x5c
	NSString *_buildingName;	// 96 = 0x60
	NSString *_appleFloor;	// 100 = 0x64
	NSString *_pagerNumber;	// 104 = 0x68
	NSString *_postalAddress;	// 108 = 0x6c
	NSString *_homePostalAddress;	// 112 = 0x70
	NSString *_principalPath;	// 116 = 0x74
	NSString *_preferredUserAddress;	// 120 = 0x78
	NSArray *_cuAddresses;	// 124 = 0x7c
	NSString *_iPhone;	// 128 = 0x80
	NSString *_mainPhone;	// 132 = 0x84
	NSString *_workFaxPhone;	// 136 = 0x88
	NSString *_identifierOnServer;	// 140 = 0x8c
}
@property(copy) NSString *alias;	// G=0x3658f2a9; S=0x3658f2bd; @synthesize=_alias
@property(copy) NSString *appleFloor;	// G=0x3658f4e9; S=0x3658f4fd; @synthesize=_appleFloor
@property(copy) NSString *buildingName;	// G=0x3658f4c5; S=0x3658f4d9; @synthesize=_buildingName
@property(copy) NSString *city;	// G=0x3658f3c9; S=0x3658f3dd; @synthesize=_city
@property(copy) NSString *company;	// G=0x3658f261; S=0x3658f275; @synthesize=_company
@property(copy) NSString *country;	// G=0x3658f435; S=0x3658f449; @synthesize=_country
@property(copy) NSArray *cuAddresses;	// G=0x3658f5c1; S=0x3658f5d5; @synthesize=_cuAddresses
@property(copy) NSString *department;	// G=0x3658f381; S=0x3658f395; @synthesize=_department
@property(copy) NSString *displayName;	// G=0x3658f189; S=0x3658f19d; @synthesize=_displayName
@property(copy) NSString *emailAddress;	// G=0x3658f1f5; S=0x3658f209; @synthesize=_emailAddress
@property(copy) NSString *faxPhone;	// G=0x3658f35d; S=0x3658f371; @synthesize=_faxPhone
@property(copy) NSString *firstName;	// G=0x3658f1ad; S=0x3658f1c1; @synthesize=_firstName
@property(copy) NSString *homePhone;	// G=0x3658f2cd; S=0x3658f2e1; @synthesize=_homePhone
@property(copy) NSString *homePostalAddress;	// G=0x3658f555; S=0x3658f569; @synthesize=_homePostalAddress
@property(copy) NSString *iPhone;	// G=0x3658f5e5; S=0x3658f5f9; @synthesize=_iPhone
@property(retain) NSString *identifierOnServer;	// G=0x3658f651; S=0x3658f665; @synthesize=_identifierOnServer
@property(copy) NSString *imAddress;	// G=0x3658f47d; S=0x3658f491; @synthesize=_imAddress
@property(copy) NSData *jpegPhoto;	// G=0x3658f459; S=0x3658f46d; @synthesize=_jpegPhoto
@property(copy) NSString *lastName;	// G=0x3658f1d1; S=0x3658f1e5; @synthesize=_lastName
@property(copy) NSString *mainPhone;	// G=0x3658f609; S=0x3658f61d; @synthesize=_mainPhone
@property(copy) NSString *mobilePhone;	// G=0x3658f23d; S=0x3658f251; @synthesize=_mobilePhone
@property(copy) NSString *office;	// G=0x3658f2f1; S=0x3658f305; @synthesize=_office
@property(copy) NSString *pagerNumber;	// G=0x3658f50d; S=0x3658f521; @synthesize=_pagerNumber
@property(copy) NSString *postalAddress;	// G=0x3658f531; S=0x3658f545; @synthesize=_postalAddress
@property(copy) NSString *preferredUserAddress;	// G=0x3658f59d; S=0x3658f5b1; @synthesize=_preferredUserAddress
@property(copy) NSString *principalPath;	// G=0x3658f579; S=0x3658f58d; @synthesize=_principalPath
@property(copy) NSString *recordName;	// G=0x3658f339; S=0x3658f34d; @synthesize=_recordName
@property(copy) NSString *serverSource;	// G=0x3658f315; S=0x3658f329; @synthesize=_serverSource
@property(copy) NSString *state;	// G=0x3658f3ed; S=0x3658f401; @synthesize=_state
@property(copy) NSString *street;	// G=0x3658f3a5; S=0x3658f3b9; @synthesize=_street
@property(copy) NSString *title;	// G=0x3658f285; S=0x3658f299; @synthesize=_title
@property(copy) NSString *uri;	// G=0x3658f4a1; S=0x3658f4b5; @synthesize=_uri
@property(copy) NSString *workFaxPhone;	// G=0x3658f62d; S=0x3658f641; @synthesize=_workFaxPhone
@property(copy) NSString *workPhone;	// G=0x3658f219; S=0x3658f22d; @synthesize=_workPhone
@property(copy) NSString *zip;	// G=0x3658f411; S=0x3658f425; @synthesize=_zip
+ (BOOL)supportsSecureCoding;	// 0x3658e4ed
- (id)initWithCoder:(id)coder;	// 0x3658ea3d
// declared property getter: - (id)alias;	// 0x3658f2a9
// declared property getter: - (id)appleFloor;	// 0x3658f4e9
// declared property getter: - (id)buildingName;	// 0x3658f4c5
// declared property getter: - (id)city;	// 0x3658f3c9
// declared property getter: - (id)company;	// 0x3658f261
// declared property getter: - (id)country;	// 0x3658f435
// declared property getter: - (id)cuAddresses;	// 0x3658f5c1
- (void)dealloc;	// 0x3658d7d5
// declared property getter: - (id)department;	// 0x3658f381
- (id)description;	// 0x3658dacd
// declared property getter: - (id)displayName;	// 0x3658f189
// declared property getter: - (id)emailAddress;	// 0x3658f1f5
- (void)encodeWithCoder:(id)coder;	// 0x3658e4f1
// declared property getter: - (id)faxPhone;	// 0x3658f35d
// declared property getter: - (id)firstName;	// 0x3658f1ad
// declared property getter: - (id)homePhone;	// 0x3658f2cd
// declared property getter: - (id)homePostalAddress;	// 0x3658f555
// declared property getter: - (id)iPhone;	// 0x3658f5e5
// declared property getter: - (id)identifierOnServer;	// 0x3658f651
// declared property getter: - (id)imAddress;	// 0x3658f47d
- (BOOL)isEqual:(id)equal;	// 0x3658e491
- (BOOL)isEqualToDAContactSearchResultElement:(id)dacontactSearchResultElement;	// 0x3658db79
// declared property getter: - (id)jpegPhoto;	// 0x3658f459
// declared property getter: - (id)lastName;	// 0x3658f1d1
// declared property getter: - (id)mainPhone;	// 0x3658f609
// declared property getter: - (id)mobilePhone;	// 0x3658f23d
// declared property getter: - (id)office;	// 0x3658f2f1
// declared property getter: - (id)pagerNumber;	// 0x3658f50d
// declared property getter: - (id)postalAddress;	// 0x3658f531
// declared property getter: - (id)preferredUserAddress;	// 0x3658f59d
// declared property getter: - (id)principalPath;	// 0x3658f579
// declared property getter: - (id)recordName;	// 0x3658f339
// declared property getter: - (id)serverSource;	// 0x3658f315
// declared property setter: - (void)setAlias:(id)alias;	// 0x3658f2bd
// declared property setter: - (void)setAppleFloor:(id)floor;	// 0x3658f4fd
// declared property setter: - (void)setBuildingName:(id)name;	// 0x3658f4d9
// declared property setter: - (void)setCity:(id)city;	// 0x3658f3dd
// declared property setter: - (void)setCompany:(id)company;	// 0x3658f275
// declared property setter: - (void)setCountry:(id)country;	// 0x3658f449
// declared property setter: - (void)setCuAddresses:(id)addresses;	// 0x3658f5d5
// declared property setter: - (void)setDepartment:(id)department;	// 0x3658f395
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3658f19d
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3658f209
// declared property setter: - (void)setFaxPhone:(id)phone;	// 0x3658f371
// declared property setter: - (void)setFirstName:(id)name;	// 0x3658f1c1
// declared property setter: - (void)setHomePhone:(id)phone;	// 0x3658f2e1
// declared property setter: - (void)setHomePostalAddress:(id)address;	// 0x3658f569
// declared property setter: - (void)setIPhone:(id)phone;	// 0x3658f5f9
// declared property setter: - (void)setIdentifierOnServer:(id)server;	// 0x3658f665
// declared property setter: - (void)setImAddress:(id)address;	// 0x3658f491
// declared property setter: - (void)setJpegPhoto:(id)photo;	// 0x3658f46d
// declared property setter: - (void)setLastName:(id)name;	// 0x3658f1e5
// declared property setter: - (void)setMainPhone:(id)phone;	// 0x3658f61d
// declared property setter: - (void)setMobilePhone:(id)phone;	// 0x3658f251
// declared property setter: - (void)setOffice:(id)office;	// 0x3658f305
// declared property setter: - (void)setPagerNumber:(id)number;	// 0x3658f521
// declared property setter: - (void)setPostalAddress:(id)address;	// 0x3658f545
// declared property setter: - (void)setPreferredUserAddress:(id)address;	// 0x3658f5b1
// declared property setter: - (void)setPrincipalPath:(id)path;	// 0x3658f58d
// declared property setter: - (void)setRecordName:(id)name;	// 0x3658f34d
// declared property setter: - (void)setServerSource:(id)source;	// 0x3658f329
// declared property setter: - (void)setState:(id)state;	// 0x3658f401
// declared property setter: - (void)setStreet:(id)street;	// 0x3658f3b9
// declared property setter: - (void)setTitle:(id)title;	// 0x3658f299
// declared property setter: - (void)setUri:(id)uri;	// 0x3658f4b5
// declared property setter: - (void)setWorkFaxPhone:(id)phone;	// 0x3658f641
// declared property setter: - (void)setWorkPhone:(id)phone;	// 0x3658f22d
// declared property setter: - (void)setZip:(id)zip;	// 0x3658f425
// declared property getter: - (id)state;	// 0x3658f3ed
// declared property getter: - (id)street;	// 0x3658f3a5
// declared property getter: - (id)title;	// 0x3658f285
// declared property getter: - (id)uri;	// 0x3658f4a1
// declared property getter: - (id)workFaxPhone;	// 0x3658f62d
// declared property getter: - (id)workPhone;	// 0x3658f219
// declared property getter: - (id)zip;	// 0x3658f411
@end
