/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library


@interface CLSimulationManager : NSObject {
	double _locationDistance;	// 4 = 0x4
	double _locationInterval;	// 12 = 0xc
	double _locationSpeed;	// 20 = 0x14
	int _locationRepeatBehavior;	// 28 = 0x1c
	int _locationDeliveryBehavior;	// 32 = 0x20
}
@property(assign, nonatomic) int locationDeliveryBehavior;	// G=0x3290f1d9; S=0x3290e9bd; @synthesize=_locationDeliveryBehavior
@property(assign, nonatomic) double locationDistance;	// G=0x3290f181; S=0x3290ea19; @synthesize=_locationDistance
@property(assign, nonatomic) double locationInterval;	// G=0x3290f199; S=0x3290ea6d; @synthesize=_locationInterval
@property(assign, nonatomic) int locationRepeatBehavior;	// G=0x3290f1c9; S=0x3290eb15; @synthesize=_locationRepeatBehavior
@property(assign, nonatomic) double locationSpeed;	// G=0x3290f1b1; S=0x3290eac1; @synthesize=_locationSpeed
- (id)init;	// 0x3290e505
- (void)appendSimulatedLocation:(id)location;	// 0x3290eb99
- (id)availableScenarios;	// 0x3290e679
- (void)clearSimulatedCells;	// 0x3290eec9
- (void)clearSimulatedLocations;	// 0x3290eb61
- (void)flush;	// 0x3290f149
- (void)loadScenarioFromURL:(id)url;	// 0x3290e84d
- (id)localizedNameForScenario:(id)scenario;	// 0x3290e7c5
// declared property getter: - (int)locationDeliveryBehavior;	// 0x3290f1d9
// declared property getter: - (double)locationDistance;	// 0x3290f181
// declared property getter: - (double)locationInterval;	// 0x3290f199
// declared property getter: - (int)locationRepeatBehavior;	// 0x3290f1c9
// declared property getter: - (double)locationSpeed;	// 0x3290f1b1
- (id)scenariosPath;	// 0x3290e595
- (void)selectScenario:(id)scenario;	// 0x3290e7c9
// declared property setter: - (void)setLocationDeliveryBehavior:(int)behavior;	// 0x3290e9bd
// declared property setter: - (void)setLocationDistance:(double)distance;	// 0x3290ea19
// declared property setter: - (void)setLocationInterval:(double)interval;	// 0x3290ea6d
// declared property setter: - (void)setLocationRepeatBehavior:(int)behavior;	// 0x3290eb15
// declared property setter: - (void)setLocationSpeed:(double)speed;	// 0x3290eac1
- (void)setSimulatedCell:(id)cell;	// 0x3290ef01
- (void)setSimulatedCellRegistrationStatus:(BOOL)status;	// 0x3290f009
- (void)setSimulatedWifiPower:(BOOL)power;	// 0x3290f10d
- (void)setWifiScanResults:(id)results;	// 0x3290f045
- (void)startCellSimulation;	// 0x3290ef99
- (void)startLocationSimulation;	// 0x3290ee59
- (void)startWifiSimulation;	// 0x3290f09d
- (void)stopCellSimulation;	// 0x3290efd1
- (void)stopLocationSimulation;	// 0x3290ee91
- (void)stopWifiSimulation;	// 0x3290f0d5
@end

