/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSBulkAddPlaylistRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID sessionID:(unsigned)anId playlistName:(id)name;	// 0x317be9b5
+ (id)requestWithDatabaseID:(unsigned)databaseID sessionID:(unsigned)anId playlistName:(id)name seedItemIDs:(id)ids itemIDs:(id)ids5;	// 0x317bea11
- (id)initWithDatabaseID:(unsigned)databaseID sessionID:(unsigned)anId playlistName:(id)name seedItemIDs:(id)ids itemIDs:(id)ids5;	// 0x317be901
- (id)_bodyDataForSessionID:(unsigned)sessionID playlistName:(id)name seedItemIDs:(id)ids itemIDs:(id)ids4;	// 0x317beb19
- (id)canonicalResponseForResponse:(id)response;	// 0x317bea71
@end

