/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, OCPPackageProperties, OCPPackageRelationshipCollection;

@interface OCPPackage : NSObject {
	OCPPackageRelationshipCollection *mRelationships;	// 4 = 0x4
	OCPPackageProperties *mProperties;	// 8 = 0x8
	NSMutableDictionary *mDefaultContentTypes;	// 12 = 0xc
	NSMutableDictionary *mContentTypeOverrides;	// 16 = 0x10
}
- (id)init;	// 0x37b08e85
- (id)initWithRelationshipsXml:(xmlDoc *)relationshipsXml propertiesXml:(xmlDoc *)xml contentTypesXml:(xmlDoc *)xml3;	// 0x37978ed5
- (id)contentTypeForPartLocation:(id)partLocation;	// 0x3799014d
- (void)dealloc;	// 0x379ac3fd
- (id)partForLocation:(id)location;	// 0x37b08e9d
- (id)properties;	// 0x3799ca11
- (void)readContentTypeOverrideFromElement:(xmlNode *)element;	// 0x37979f25
- (void)readContentTypesXml:(xmlDoc *)xml;	// 0x37979de1
- (void)readDefaultContentTypeFromElement:(xmlNode *)element;	// 0x3797a169
- (id)relationshipForIdentifier:(id)identifier;	// 0x37b08ea1
- (id)relationshipsByType:(id)type;	// 0x37b08ec1
@end

