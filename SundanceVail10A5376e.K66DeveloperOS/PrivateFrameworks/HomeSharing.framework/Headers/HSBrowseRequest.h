/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSBrowseRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID browseGroupType:(int)type;	// 0x3551e74d
- (id)initWithDatabaseID:(unsigned)databaseID browseGroupType:(int)type;	// 0x3551e6e9
- (id)_stringForBrowseGroupType:(int)browseGroupType;	// 0x3551e7f9
- (id)canonicalResponseForResponse:(id)response;	// 0x3551e78d
@end

