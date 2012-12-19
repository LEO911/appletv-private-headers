/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class SAFmfGeoFence, NSString, NSURL;

@interface SAFmfGeoFenceSetCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) SAFmfGeoFence *geoFence;	// G=0x353eb4d1; S=0x353eb525; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *searchContext;	// G=0x353eb561; S=0x353eb5dd; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353eb3f5; S=0x353eb471; 
+ (id)geoFenceSetCompleted;	// 0x353eb365
+ (id)geoFenceSetCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353eb3a9
- (id)encodedClassName;	// 0x353eb359
// declared property getter: - (id)geoFence;	// 0x353eb4d1
- (id)groupIdentifier;	// 0x353eb349
- (BOOL)requiresResponse;	// 0x353eb63d
// declared property getter: - (id)searchContext;	// 0x353eb561
// declared property setter: - (void)setGeoFence:(id)fence;	// 0x353eb525
// declared property setter: - (void)setSearchContext:(id)context;	// 0x353eb5dd
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353eb471
// declared property getter: - (id)targetAppId;	// 0x353eb3f5
@end
