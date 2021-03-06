/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSCloudArtworkInfoRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID itemID:(unsigned long long)anId;	// 0x340cfc81
+ (id)requestWithDatabaseID:(unsigned)databaseID itemID:(unsigned long long)anId sessionID:(unsigned)anId3;	// 0x340cfcd5
- (id)initWithDatabaseID:(unsigned)databaseID itemID:(unsigned long long)anId;	// 0x340cfba5
- (id)initWithDatabaseID:(unsigned)databaseID itemID:(unsigned long long)anId sessionID:(unsigned)anId3;	// 0x340cfbf9
- (id)canonicalResponseForResponse:(id)response;	// 0x340cfd2d
@end

