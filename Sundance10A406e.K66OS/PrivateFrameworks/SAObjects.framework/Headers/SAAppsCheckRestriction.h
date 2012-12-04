/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SAAppsCheckRestriction : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *launchId;	// G=0x3254e439; S=0x3254e455; 
+ (id)checkRestriction;	// 0x3254e3a9
+ (id)checkRestrictionWithDictionary:(id)dictionary context:(id)context;	// 0x3254e3ed
- (id)encodedClassName;	// 0x3254e39d
- (id)groupIdentifier;	// 0x3254e38d
// declared property getter: - (id)launchId;	// 0x3254e439
- (BOOL)requiresResponse;	// 0x3254e4a5
// declared property setter: - (void)setLaunchId:(id)anId;	// 0x3254e455
@end
