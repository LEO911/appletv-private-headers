/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SAClearContext : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)clearContext;	// 0x353ddd29
+ (id)clearContextWithDictionary:(id)dictionary context:(id)context;	// 0x353ddd6d
- (id)encodedClassName;	// 0x353ddd1d
- (id)groupIdentifier;	// 0x353ddd0d
@end

