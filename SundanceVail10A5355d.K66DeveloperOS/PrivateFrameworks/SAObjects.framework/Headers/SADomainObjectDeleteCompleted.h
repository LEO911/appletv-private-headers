/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"
#import "SADomainObjectCommand.h"

@class NSString;

@interface SADomainObjectDeleteCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectDeleteCompleted;	// 0x366222b9
+ (id)domainObjectDeleteCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x366222fd
- (id)encodedClassName;	// 0x366222ad
- (id)groupIdentifier;	// 0x3662229d
@end

