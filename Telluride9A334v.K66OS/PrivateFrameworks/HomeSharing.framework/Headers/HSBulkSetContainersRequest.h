/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSBulkSetContainersRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID sessionID:(unsigned)anId containerID:(unsigned)anId3 itemIDs:(id)ids;	// 0x34974db5
- (id)initWithDatabaseID:(unsigned)databaseID sessionID:(unsigned)anId containerID:(unsigned)anId3 itemIDs:(id)ids;	// 0x34974d05
- (id)_bodyDataForSessionID:(unsigned)sessionID containerID:(unsigned)anId itemIDs:(id)ids;	// 0x34974e0d
@end

