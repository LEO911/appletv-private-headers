/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"
#import "SADomainObjectCommand.h"

@class NSString, NSArray;

@interface SADomainObjectRetrieveCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *objects;	// G=0x32f514e9; S=0x32f51565; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectRetrieveCompleted;	// 0x32f51459
+ (id)domainObjectRetrieveCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f5149d
- (id)encodedClassName;	// 0x32f5144d
- (id)groupIdentifier;	// 0x32f5143d
// declared property getter: - (id)objects;	// 0x32f514e9
// declared property setter: - (void)setObjects:(id)objects;	// 0x32f51565
@end

