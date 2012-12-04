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
- (id)init;	// 0x36c2ce85
- (id)initWithRelationshipsXml:(xmlDoc *)relationshipsXml propertiesXml:(xmlDoc *)xml contentTypesXml:(xmlDoc *)xml3;	// 0x36a9ced5
- (id)contentTypeForPartLocation:(id)partLocation;	// 0x36ab414d
- (void)dealloc;	// 0x36ad03fd
- (id)partForLocation:(id)location;	// 0x36c2ce9d
- (id)properties;	// 0x36ac0a11
- (void)readContentTypeOverrideFromElement:(xmlNode *)element;	// 0x36a9df25
- (void)readContentTypesXml:(xmlDoc *)xml;	// 0x36a9dde1
- (void)readDefaultContentTypeFromElement:(xmlNode *)element;	// 0x36a9e169
- (id)relationshipForIdentifier:(id)identifier;	// 0x36c2cea1
- (id)relationshipsByType:(id)type;	// 0x36c2cec1
@end
