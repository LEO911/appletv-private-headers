/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SACancelRequest : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)cancelRequest;	// 0x326eafe5
+ (id)cancelRequestWithDictionary:(id)dictionary context:(id)context;	// 0x326eb029
- (id)encodedClassName;	// 0x326eafd9
- (id)groupIdentifier;	// 0x326eafc9
@end

