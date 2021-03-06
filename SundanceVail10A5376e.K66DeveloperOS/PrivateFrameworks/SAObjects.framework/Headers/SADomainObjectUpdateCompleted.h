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

@interface SADomainObjectUpdateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *identifier;	// G=0x34245539; S=0x342455b5; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectUpdateCompleted;	// 0x342454a9
+ (id)domainObjectUpdateCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x342454ed
- (id)encodedClassName;	// 0x3424549d
- (id)groupIdentifier;	// 0x3424548d
// declared property getter: - (id)identifier;	// 0x34245539
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x342455b5
@end

