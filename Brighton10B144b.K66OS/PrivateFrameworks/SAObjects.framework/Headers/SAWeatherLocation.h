/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SALocation.h"

@class NSString;

@interface SAWeatherLocation : SALocation {
}
@property(copy, nonatomic) NSString *locationId;	// G=0x353dae81; S=0x353dae9d; 
+ (id)location;	// 0x353dadf1
+ (id)locationWithDictionary:(id)dictionary context:(id)context;	// 0x353dae35
- (id)encodedClassName;	// 0x353dade5
- (id)groupIdentifier;	// 0x353dadd5
// declared property getter: - (id)locationId;	// 0x353dae81
// declared property setter: - (void)setLocationId:(id)anId;	// 0x353dae9d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353daeed
@end

