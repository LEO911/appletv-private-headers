/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SALocation, NSString, NSArray, NSURL;

@interface SAFmfSearch : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SALocation *currentLocation;	// G=0x353d5ec5; S=0x353d5f19; 
@property(copy, nonatomic) NSArray *emailAddresses;	// G=0x353d5f55; S=0x353d5f71; 
@property(copy, nonatomic) NSArray *friends;	// G=0x353d5fc1; S=0x353d603d; 
@property(copy, nonatomic) NSString *proximity;	// G=0x353d60a5; S=0x353d60c1; 
@property(retain, nonatomic) SALocation *requestedLocation;	// G=0x353d6111; S=0x353d6165; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353d5de9; S=0x353d5e65; 
+ (id)search;	// 0x353d5d59
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x353d5d9d
// declared property getter: - (id)currentLocation;	// 0x353d5ec5
// declared property getter: - (id)emailAddresses;	// 0x353d5f55
- (id)encodedClassName;	// 0x353d5d4d
// declared property getter: - (id)friends;	// 0x353d5fc1
- (id)groupIdentifier;	// 0x353d5d3d
// declared property getter: - (id)proximity;	// 0x353d60a5
// declared property getter: - (id)requestedLocation;	// 0x353d6111
- (BOOL)requiresResponse;	// 0x353d61a1
// declared property setter: - (void)setCurrentLocation:(id)location;	// 0x353d5f19
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x353d5f71
// declared property setter: - (void)setFriends:(id)friends;	// 0x353d603d
// declared property setter: - (void)setProximity:(id)proximity;	// 0x353d60c1
// declared property setter: - (void)setRequestedLocation:(id)location;	// 0x353d6165
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353d5e65
// declared property getter: - (id)targetAppId;	// 0x353d5de9
@end

