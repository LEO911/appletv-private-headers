/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSUUID, NSString;

@interface UIDevice : NSObject {
	int _numDeviceOrientationObservers;	// 4 = 0x4
	float _batteryLevel;	// 8 = 0x8
	struct {
		unsigned batteryMonitoringEnabled : 1;
		unsigned proximityMonitoringEnabled : 1;
		unsigned expectsFaceContactInLandscape : 1;
		unsigned orientation : 3;
		unsigned batteryState : 2;
		unsigned proximityState : 1;
	} _deviceFlags;	// 12 = 0xc
}
@property(assign, nonatomic, setter=_setBacklightLevel:) float _backlightLevel;	// G=0x30e4ad91; S=0x30e4ad7d; 
@property(readonly, assign, nonatomic) float batteryLevel;	// G=0x30e4abc5; 
@property(assign, nonatomic, getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;	// G=0x30e4abb1; S=0x30d9ad69; 
@property(readonly, assign, nonatomic) int batteryState;	// G=0x30d9b23d; 
@property(readonly, assign, nonatomic) NSString *buildVersion;	// G=0x30c39d3d; 
@property(readonly, assign, nonatomic, getter=isGeneratingDeviceOrientationNotifications) BOOL generatesDeviceOrientationNotifications;	// G=0x30c50355; 
@property(readonly, assign, nonatomic) NSUUID *identifierForAdvertising;	// G=0x30e4ab49; 
@property(readonly, assign, nonatomic) NSUUID *identifierForVendor;	// G=0x30e4ab7d; 
@property(assign) BOOL isWildcat;	// G=0x30c2fa75; S=0x30e4aec9; converted property
@property(readonly, assign, nonatomic) NSString *localizedModel;	// G=0x30e4aa3d; 
@property(readonly, assign, nonatomic) NSString *model;	// G=0x30cd3685; 
@property(readonly, assign, nonatomic, getter=isMultitaskingSupported) BOOL multitaskingSupported;	// G=0x30cc6219; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x30e4aa09; 
@property(readonly, assign, nonatomic) int orientation;	// G=0x30c36f35; 
@property(assign, nonatomic) int orientation;	// S=0x30c4f4e5; 
@property(assign, nonatomic, getter=isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;	// G=0x30e4abf5; S=0x30e4ac09; 
@property(readonly, assign, nonatomic) BOOL proximityState;	// G=0x30e4ad11; 
@property(readonly, assign, nonatomic) NSString *systemName;	// G=0x30e4aaa1; 
@property(readonly, assign, nonatomic) NSString *systemVersion;	// G=0x30e4aaf9; 
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x30e4ab2d; 
@property(readonly, assign, nonatomic) int userInterfaceIdiom;	// G=0x30c13f35; 
+ (id)currentDevice;	// 0x30c13ed5
+ (int)currentDeviceOrientationAllowingAmbiguous:(BOOL)ambiguous;	// 0x30c4f45d
+ (id)modelSpecificLocalizedStringKeyForKey:(id)key;	// 0x30d59cd9
// declared property getter: - (float)_backlightLevel;	// 0x30e4ad91
- (void)_enableDeviceOrientationEvents:(BOOL)events;	// 0x30c4f421
- (BOOL)_isTTYEnabled;	// 0x30e4ae5d
- (void)_playSystemSound:(unsigned long)sound;	// 0x30d0d5d9
- (void)_registerForSystemSounds:(id)systemSounds;	// 0x30cfa135
- (void)_setActiveUserInterfaceIdiom:(int)idiom;	// 0x30e4aeed
// declared property setter: - (void)_setBacklightLevel:(float)level;	// 0x30e4ad7d
- (void)_setBatteryLevel:(float)level;	// 0x30d9b251
- (void)_setBatteryState:(int)state;	// 0x30d9b5c5
- (void)_setExpectsFaceContactInLandscape:(BOOL)landscape;	// 0x30e4ac9d
- (void)_setProximityState:(BOOL)state;	// 0x30e4ade9
- (float)_softwareDimmingAlpha;	// 0x30e4adad
- (void)_unregisterForSystemSounds:(id)systemSounds;	// 0x30c94865
- (void)_updateSystemSoundActiveStatus:(id)status;	// 0x30d3e195
// declared property getter: - (float)batteryLevel;	// 0x30e4abc5
// declared property getter: - (int)batteryState;	// 0x30d9b23d
- (void)beginGeneratingDeviceOrientationNotifications;	// 0x30c4f3a5
// declared property getter: - (id)buildVersion;	// 0x30c39d3d
- (id)deviceInfoForKey:(CFStringRef)key;	// 0x30c39d71
- (void)endGeneratingDeviceOrientationNotifications;	// 0x30cc56d1
// declared property getter: - (id)identifierForAdvertising;	// 0x30e4ab49
// declared property getter: - (id)identifierForVendor;	// 0x30e4ab7d
// declared property getter: - (BOOL)isBatteryMonitoringEnabled;	// 0x30e4abb1
// declared property getter: - (BOOL)isGeneratingDeviceOrientationNotifications;	// 0x30c50355
// declared property getter: - (BOOL)isMultitaskingSupported;	// 0x30cc6219
// declared property getter: - (BOOL)isProximityMonitoringEnabled;	// 0x30e4abf5
// converted property getter: - (BOOL)isWildcat;	// 0x30c2fa75
// declared property getter: - (id)localizedModel;	// 0x30e4aa3d
// declared property getter: - (id)model;	// 0x30cd3685
// declared property getter: - (id)name;	// 0x30e4aa09
// declared property getter: - (int)orientation;	// 0x30c36f35
- (void)playInputClick;	// 0x30e4ad29
// declared property getter: - (BOOL)proximityState;	// 0x30e4ad11
// declared property setter: - (void)setBatteryMonitoringEnabled:(BOOL)enabled;	// 0x30d9ad69
// converted property setter: - (void)setIsWildcat:(BOOL)wildcat;	// 0x30e4aec9
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x30c4f4e5
- (void)setOrientation:(int)orientation animated:(BOOL)animated;	// 0x30c1a839
// declared property setter: - (void)setProximityMonitoringEnabled:(BOOL)enabled;	// 0x30e4ac09
// declared property getter: - (id)systemName;	// 0x30e4aaa1
// declared property getter: - (id)systemVersion;	// 0x30e4aaf9
// declared property getter: - (id)uniqueIdentifier;	// 0x30e4ab2d
// declared property getter: - (int)userInterfaceIdiom;	// 0x30c13f35
@end

