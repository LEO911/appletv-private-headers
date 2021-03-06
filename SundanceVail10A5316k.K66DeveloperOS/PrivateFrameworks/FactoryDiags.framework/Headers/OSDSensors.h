/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface OSDSensors : NSObject {
@private
	NSDictionary *syntheticSensors;	// 4 = 0x4
}
@property(copy, nonatomic) NSDictionary *syntheticSensors;	// G=0x36b4b659; S=0x36b4b66d; @synthesize
+ (void)initialize;	// 0x36b4b1d9
+ (id)sharedInstance;	// 0x36b4b231
- (id)init;	// 0x36b4b241
- (id)getSensorsForType:(int)type sortByID:(bool)anId;	// 0x36b4abd5
- (float)readSensor:(id)sensor type:(int)type;	// 0x36b4b46d
- (id)readSensor:(id)sensor type:(int)type error:(id *)error;	// 0x36b4b2f1
- (id)sensorNamesForType:(int)type;	// 0x36b4b4ad
// declared property setter: - (void)setSyntheticSensors:(id)sensors;	// 0x36b4b66d
// declared property getter: - (id)syntheticSensors;	// 0x36b4b659
@end

