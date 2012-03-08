/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVGetAccountPropertiesTaskGroup.h"

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
	NSSet *_addressBookHomes;	// 76 = 0x4c
	NSSet *_directoryGatewayURLs;	// 80 = 0x50
}
@property(readonly, assign) NSSet *addressBookHomes;	// G=0x31c2c519; @synthesize=_addressBookHomes
@property(readonly, assign) NSSet *directoryGatewayURLs;	// G=0x31c2c529; @synthesize=_directoryGatewayURLs
- (id)_copyAccountPropertiesPropFindElements;	// 0x31c2c259
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x31c2c341
// declared property getter: - (id)addressBookHomes;	// 0x31c2c519
- (void)dealloc;	// 0x31c2c15d
- (id)description;	// 0x31c2c1bd
- (id)directoryGatewayURL;	// 0x31c2c4f9
// declared property getter: - (id)directoryGatewayURLs;	// 0x31c2c529
- (id)homeSet;	// 0x31c2c331
@end
