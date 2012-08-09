/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SAClientBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSString, NSArray;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *appId;	// @dynamic
@property(copy, nonatomic) NSArray *callbacks;	// @dynamic
@property(assign, nonatomic) int errorCode;	// G=0x34243d05; S=0x34243d75; 
@property(copy, nonatomic) NSString *reason;	// G=0x34243db9; S=0x34243dd5; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)commandFailed;	// 0x34243b7d
+ (id)commandFailedWithDictionary:(id)dictionary context:(id)context;	// 0x34243bc1
+ (id)commandFailedWithErrorCode:(int)errorCode;	// 0x34243c0d
+ (id)commandFailedWithReason:(id)reason;	// 0x34243c55
- (id)initWithErrorCode:(int)errorCode;	// 0x34243c9d
- (id)initWithReason:(id)reason;	// 0x34243cd1
- (id)encodedClassName;	// 0x34243b71
// declared property getter: - (int)errorCode;	// 0x34243d05
- (id)groupIdentifier;	// 0x34243b61
// declared property getter: - (id)reason;	// 0x34243db9
- (BOOL)requiresResponse;	// 0x34243e25
// declared property setter: - (void)setErrorCode:(int)code;	// 0x34243d75
// declared property setter: - (void)setReason:(id)reason;	// 0x34243dd5
@end
