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
@property(readonly, assign) NSSet *addressBookHomes;	// G=0x35fe1791; @synthesize=_addressBookHomes
@property(readonly, assign) NSSet *directoryGatewayURLs;	// G=0x35fe17a5; @synthesize=_directoryGatewayURLs
- (id)_copyAccountPropertiesPropFindElements;	// 0x35fe14c5
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x35fe15ad
// declared property getter: - (id)addressBookHomes;	// 0x35fe1791
- (void)dealloc;	// 0x35fe13c1
- (id)description;	// 0x35fe1425
- (id)directoryGatewayURL;	// 0x35fe1771
// declared property getter: - (id)directoryGatewayURLs;	// 0x35fe17a5
- (id)homeSet;	// 0x35fe159d
@end

