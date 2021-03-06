/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAPing : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)ping;	// 0x353e2781
+ (id)pingWithDictionary:(id)dictionary context:(id)context;	// 0x353e27c5
- (id)encodedClassName;	// 0x353e2775
- (id)groupIdentifier;	// 0x353e2765
- (BOOL)requiresResponse;	// 0x353e2811
@end

