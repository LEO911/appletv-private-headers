/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSURL, NSString;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *error;	// G=0x326c2101; S=0x326c211d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *weatherLocationId;	// G=0x326c216d; S=0x326c21e9; 
+ (id)locationAddCompleted;	// 0x326c1f79
+ (id)locationAddCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326c1fbd
+ (id)locationAddCompletedWithError:(id)error;	// 0x326c2009
+ (id)locationAddCompletedWithWeatherLocationId:(id)weatherLocationId;	// 0x326c2051
- (id)initWithError:(id)error;	// 0x326c2099
- (id)initWithWeatherLocationId:(id)weatherLocationId;	// 0x326c20cd
- (id)encodedClassName;	// 0x326c1f6d
// declared property getter: - (id)error;	// 0x326c2101
- (id)groupIdentifier;	// 0x326c1f5d
// declared property setter: - (void)setError:(id)error;	// 0x326c211d
// declared property setter: - (void)setWeatherLocationId:(id)anId;	// 0x326c21e9
// declared property getter: - (id)weatherLocationId;	// 0x326c216d
@end

