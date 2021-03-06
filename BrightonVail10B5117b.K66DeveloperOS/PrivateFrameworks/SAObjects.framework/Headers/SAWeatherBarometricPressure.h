/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SAWeatherBarometricPressure : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *trend;	// G=0x355b50ad; S=0x355b50c9; 
@property(copy, nonatomic) NSString *value;	// G=0x355b5119; S=0x355b5135; 
+ (id)barometricPressure;	// 0x355b501d
+ (id)barometricPressureWithDictionary:(id)dictionary context:(id)context;	// 0x355b5061
- (id)encodedClassName;	// 0x355b5011
- (id)groupIdentifier;	// 0x355b5001
// declared property setter: - (void)setTrend:(id)trend;	// 0x355b50c9
// declared property setter: - (void)setValue:(id)value;	// 0x355b5135
// declared property getter: - (id)trend;	// 0x355b50ad
// declared property getter: - (id)value;	// 0x355b5119
@end

