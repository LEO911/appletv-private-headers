/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SACommandSucceeded : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)commandSucceeded;	// 0x355b9551
+ (id)commandSucceededWithDictionary:(id)dictionary context:(id)context;	// 0x355b9595
- (id)encodedClassName;	// 0x355b9545
- (id)groupIdentifier;	// 0x355b9535
- (BOOL)requiresResponse;	// 0x355b95e1
@end

