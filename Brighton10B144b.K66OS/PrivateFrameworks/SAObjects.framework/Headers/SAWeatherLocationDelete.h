/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SAWeatherLocation, NSURL;

@interface SAWeatherLocationDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353db551; S=0x353db5cd; 
@property(retain, nonatomic) SAWeatherLocation *weatherLocation;	// G=0x353db62d; S=0x353db681; 
+ (id)locationDelete;	// 0x353db4c1
+ (id)locationDeleteWithDictionary:(id)dictionary context:(id)context;	// 0x353db505
- (id)encodedClassName;	// 0x353db4b5
- (id)groupIdentifier;	// 0x353db4a5
- (BOOL)requiresResponse;	// 0x353db6bd
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353db5cd
// declared property setter: - (void)setWeatherLocation:(id)location;	// 0x353db681
// declared property getter: - (id)targetAppId;	// 0x353db551
// declared property getter: - (id)weatherLocation;	// 0x353db62d
@end
