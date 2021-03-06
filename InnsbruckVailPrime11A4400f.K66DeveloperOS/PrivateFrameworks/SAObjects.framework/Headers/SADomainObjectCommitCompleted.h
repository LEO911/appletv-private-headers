/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSURL, NSString;

@interface SADomainObjectCommitCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *identifier;	// G=0x326ed5dd; S=0x326ed659; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectCommitCompleted;	// 0x326ed54d
+ (id)domainObjectCommitCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326ed591
- (id)encodedClassName;	// 0x326ed541
- (id)groupIdentifier;	// 0x326ed531
// declared property getter: - (id)identifier;	// 0x326ed5dd
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x326ed659
@end

