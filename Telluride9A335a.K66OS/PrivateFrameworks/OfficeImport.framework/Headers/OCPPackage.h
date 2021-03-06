/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OCPPackageRelationshipCollection, OCPPackageProperties, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCPPackage : NSObject {
@private
	OCPPackageRelationshipCollection *mRelationships;	// 4 = 0x4
	OCPPackageProperties *mProperties;	// 8 = 0x8
	NSMutableDictionary *mDefaultContentTypes;	// 12 = 0xc
	NSMutableDictionary *mContentTypeOverrides;	// 16 = 0x10
}
- (id)init;	// 0x353ef135
- (id)initWithRelationshipsXml:(xmlDoc *)relationshipsXml propertiesXml:(xmlDoc *)xml contentTypesXml:(xmlDoc *)xml3;	// 0x352aab15
- (id)contentTypeForPartLocation:(id)partLocation;	// 0x352c6fc9
- (void)dealloc;	// 0x352c69fd
- (id)partForLocation:(id)location;	// 0x353ef131
- (id)properties;	// 0x352c5df9
- (void)readContentTypeOverrideFromElement:(xmlNode *)element;	// 0x352abb1d
- (void)readContentTypesXml:(xmlDoc *)xml;	// 0x352ab9dd
- (void)readDefaultContentTypeFromElement:(xmlNode *)element;	// 0x352abd15
- (id)relationshipForIdentifier:(id)identifier;	// 0x353ef14d
- (id)relationshipsByType:(id)type;	// 0x353ef171
@end

