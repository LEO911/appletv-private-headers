/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"
#import "SADomainObjectCommand.h"

@class NSString, NSURL;

@interface SADomainObjectCreateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *identifier;	// G=0x303bb20d; S=0x303bb289; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectCreateCompleted;	// 0x303bb17d
+ (id)domainObjectCreateCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x303bb1c1
- (id)encodedClassName;	// 0x303bb171
- (id)groupIdentifier;	// 0x303bb161
// declared property getter: - (id)identifier;	// 0x303bb20d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x303bb289
@end

