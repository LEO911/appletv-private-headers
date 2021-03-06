/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *weatherLocations;	// G=0x34241911; S=0x3424198d; 
+ (id)locationSearchCompleted;	// 0x34241805
+ (id)locationSearchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x34241849
+ (id)locationSearchCompletedWithWeatherLocations:(id)weatherLocations;	// 0x34241895
- (id)initWithWeatherLocations:(id)weatherLocations;	// 0x342418dd
- (id)encodedClassName;	// 0x342417f9
- (id)groupIdentifier;	// 0x342417e9
// declared property setter: - (void)setWeatherLocations:(id)locations;	// 0x3424198d
// declared property getter: - (id)weatherLocations;	// 0x34241911
@end

