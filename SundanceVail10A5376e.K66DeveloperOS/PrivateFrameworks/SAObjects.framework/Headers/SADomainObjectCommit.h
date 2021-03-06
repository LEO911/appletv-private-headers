/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SADomainObjectCommit : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *identifier;	// G=0x342446cd; S=0x34244721; 
+ (id)domainObjectCommit;	// 0x3424463d
+ (id)domainObjectCommitWithDictionary:(id)dictionary context:(id)context;	// 0x34244681
- (id)encodedClassName;	// 0x34244631
- (id)groupIdentifier;	// 0x34244621
// declared property getter: - (id)identifier;	// 0x342446cd
- (BOOL)requiresResponse;	// 0x3424475d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x34244721
@end

