/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSet, CLHeading, NSString, CLLocation;
@protocol CLLocationManagerDelegate;

@interface CLLocationManager : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double bestAccuracy;	// G=0x33f8eb9d; 
@property(assign, nonatomic) id<CLLocationManagerDelegate> delegate;	// G=0x33f8e5bd; S=0x33f8e59d; 
@property(assign, nonatomic) double desiredAccuracy;	// G=0x33f8e7bd; S=0x33f8e6e1; 
@property(assign, nonatomic) double distanceFilter;	// G=0x33f8e6b9; S=0x33f8e5dd; 
@property(readonly, assign, nonatomic) double expectedGpsUpdateInterval;	// G=0x33f8ea65; 
@property(readonly, assign, nonatomic) CLHeading *heading;	// G=0x33f8f1e5; 
@property(readonly, assign, nonatomic) BOOL headingAvailable;	// G=0x33f8ef85; 
@property(assign, nonatomic) double headingFilter;	// G=0x33f8f0c5; S=0x33f8efad; 
@property(assign, nonatomic) int headingOrientation;	// G=0x33f8f1c5; S=0x33f8f0ed; 
@property(readonly, assign, nonatomic) CLClientRef internalClient;	// G=0x33f8ebf5; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x33f8e7e5; 
@property(readonly, assign, nonatomic) BOOL locationServicesApproved;	// G=0x33f8ea39; 
@property(readonly, assign, nonatomic) BOOL locationServicesAvailable;	// G=0x33f8e9e9; 
@property(readonly, assign, nonatomic) BOOL locationServicesEnabled;	// G=0x33f8ea11; 
@property(assign, nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;	// G=0x33f9306d; S=0x33f9308d; 
@property(readonly, assign, nonatomic) double maximumRegionMonitoringDistance;	// G=0x33f8f941; 
@property(readonly, assign, nonatomic) NSSet *monitoredRegions;	// G=0x33f8fa15; 
@property(assign, nonatomic, getter=isPersistentMonitoringEnabled) BOOL persistentMonitoringEnabled;	// G=0x33f9300d; S=0x33f9302d; 
@property(assign, nonatomic) BOOL privateMode;	// G=0x33f8ec25; S=0x33f8ec15; 
@property(copy, nonatomic) NSString *purpose;	// G=0x33f8ecf1; S=0x33f8ec39; 
@property(assign, nonatomic) BOOL supportInfo;	// G=0x33f8eb99; S=0x33f8ea85; 
+ (int)_authorizationStatus;	// 0x33f92f7d
+ (int)_authorizationStatusForBundleIdentifier:(id)bundleIdentifier bundle:(id)bundle;	// 0x33f92f1d
+ (int)authorizationStatus;	// 0x33f92f91
+ (int)authorizationStatusForBundle:(id)bundle;	// 0x33f92f69
+ (int)authorizationStatusForBundleIdentifier:(id)bundleIdentifier;	// 0x33f92f55
+ (id)dateLocationLastUsedForLocationDictionary:(id)locationDictionary;	// 0x33fc0d51
+ (unsigned)entityClassesForLocationDictionary:(id)locationDictionary;	// 0x33fc0d21
+ (BOOL)headingAvailable;	// 0x33f8e55d
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)locationDictionary;	// 0x33fc0d59
+ (BOOL)isLocationActiveForLocationDictionary:(id)locationDictionary;	// 0x33fc0d45
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned)locationEntityClass;	// 0x33fc0c71
+ (BOOL)locationServicesEnabled;	// 0x33f8e525
+ (BOOL)locationServicesEnabled:(BOOL)enabled;	// 0x33f8e535
+ (unsigned)primaryEntityClassForLocationDictionary:(id)locationDictionary;	// 0x33fc0ced
+ (BOOL)regionMonitoringAvailable;	// 0x33f8e57d
+ (BOOL)regionMonitoringEnabled;	// 0x33f8e58d
+ (void)setAuthorizationStatus:(BOOL)status forBundle:(id)bundle;	// 0x33f92fb5
+ (void)setAuthorizationStatus:(BOOL)status forBundleIdentifier:(id)bundleIdentifier;	// 0x33f92fa1
+ (void)setDefaultEffectiveBundle:(id)bundle;	// 0x33f92fed
+ (void)setDefaultEffectiveBundleIdentifier:(id)identifier;	// 0x33f92fe5
+ (void)setEntityAuthorized:(BOOL)authorized forLocationDictionary:(id)locationDictionary;	// 0x33fc0dad
+ (void)setLocationServicesEnabled:(BOOL)enabled;	// 0x33f8e54d
+ (void)setStatusBarIconEnabled:(BOOL)enabled forLocationEntityClass:(unsigned)locationEntityClass;	// 0x33fc0c05
+ (id)sharedManager;	// 0x33f8e4dd
+ (BOOL)significantLocationChangeMonitoringAvailable;	// 0x33f8e56d
- (id)init;	// 0x33f8e455
- (id)initWithEffectiveBundle:(id)effectiveBundle;	// 0x33f8e47d
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier;	// 0x33f8e469
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier bundle:(id)bundle;	// 0x33f8e3dd
- (id)appsUsingLocation;	// 0x33f8fe5d
- (id)appsUsingLocationWithDetails;	// 0x33f8fe61
// declared property getter: - (double)bestAccuracy;	// 0x33f8eb9d
- (void)dealloc;	// 0x33f8e491
// declared property getter: - (id)delegate;	// 0x33f8e5bd
// declared property getter: - (double)desiredAccuracy;	// 0x33f8e7bd
- (void)dismissHeadingCalibrationDisplay;	// 0x33f8f545
// declared property getter: - (double)distanceFilter;	// 0x33f8e6b9
// declared property getter: - (double)expectedGpsUpdateInterval;	// 0x33f8ea65
// declared property getter: - (id)heading;	// 0x33f8f1e5
// declared property getter: - (BOOL)headingAvailable;	// 0x33f8ef85
// declared property getter: - (double)headingFilter;	// 0x33f8f0c5
// declared property getter: - (int)headingOrientation;	// 0x33f8f1c5
- (void)historicLocationsFromDate:(id)date forInterval:(double)interval;	// 0x33f8ef6d
// declared property getter: - (CLClientRef)internalClient;	// 0x33f8ebf5
// declared property getter: - (BOOL)isLocationServicesPreferencesDialogEnabled;	// 0x33f9306d
// declared property getter: - (BOOL)isPersistentMonitoringEnabled;	// 0x33f9300d
// declared property getter: - (id)location;	// 0x33f8e7e5
// declared property getter: - (BOOL)locationServicesApproved;	// 0x33f8ea39
// declared property getter: - (BOOL)locationServicesAvailable;	// 0x33f8e9e9
// declared property getter: - (BOOL)locationServicesEnabled;	// 0x33f8ea11
// declared property getter: - (double)maximumRegionMonitoringDistance;	// 0x33f8f941
// declared property getter: - (id)monitoredRegions;	// 0x33f8fa15
- (void)onClientEvent:(int)event supportInfo:(id)info;	// 0x33f8feb9
- (void)onClientEventAuthStatus:(id)status;	// 0x33f8ff85
- (void)onClientEventError:(id)error;	// 0x33f90bb9
- (void)onClientEventHeading:(id)heading;	// 0x33f90719
- (void)onClientEventHeadingCalibration:(id)calibration;	// 0x33f909c9
- (void)onClientEventHistoricLocation:(id)location;	// 0x33f90bb5
- (void)onClientEventLocation:(id)location;	// 0x33f9014d
- (void)onClientEventLocationUnavailable:(id)unavailable;	// 0x33f9067d
- (void)onClientEventRegion:(id)region;	// 0x33f90d0d
- (void)onClientEventRegionError:(id)error;	// 0x33f9153d
- (void)onClientEventRegionResponseDelayed:(id)delayed;	// 0x33f91c1d
- (void)onClientEventRegionSetupCompleted:(id)completed;	// 0x33f92895
// declared property getter: - (BOOL)privateMode;	// 0x33f8ec25
// declared property getter: - (id)purpose;	// 0x33f8ecf1
- (void)registerAsLocationClient;	// 0x33f930cd
- (void)resetApps;	// 0x33f8fdcd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33f8e59d
// declared property setter: - (void)setDesiredAccuracy:(double)accuracy;	// 0x33f8e6e1
// declared property setter: - (void)setDistanceFilter:(double)filter;	// 0x33f8e5dd
// declared property setter: - (void)setHeadingFilter:(double)filter;	// 0x33f8efad
// declared property setter: - (void)setHeadingOrientation:(int)orientation;	// 0x33f8f0ed
// declared property setter: - (void)setLocationServicesPreferencesDialogEnabled:(BOOL)enabled;	// 0x33f9308d
// declared property setter: - (void)setPersistentMonitoringEnabled:(BOOL)enabled;	// 0x33f9302d
// declared property setter: - (void)setPrivateMode:(BOOL)mode;	// 0x33f8ec15
// declared property setter: - (void)setPurpose:(id)purpose;	// 0x33f8ec39
// declared property setter: - (void)setSupportInfo:(BOOL)info;	// 0x33f8ea85
- (void)startAppStatusUpdates;	// 0x33f8f5f9
- (void)startMonitoringForRegion:(id)region;	// 0x33f8f781
- (void)startMonitoringForRegion:(id)region desiredAccuracy:(double)accuracy;	// 0x33f8f771
- (void)startMonitoringSignificantLocationChanges;	// 0x33f8f609
- (void)startTechStatusUpdates;	// 0x33f8f601
- (void)startUpdatingHeading;	// 0x33f8f38d
- (void)startUpdatingLocation;	// 0x33f8eda9
- (void)stopAppStatusUpdates;	// 0x33f8f5fd
- (void)stopMonitoringForRegion:(id)region;	// 0x33f8f865
- (void)stopMonitoringSignificantLocationChanges;	// 0x33f8f6bd
- (void)stopTechStatusUpdates;	// 0x33f8f605
- (void)stopUpdatingHeading;	// 0x33f8f485
- (void)stopUpdatingLocation;	// 0x33f8eead
// declared property getter: - (BOOL)supportInfo;	// 0x33f8eb99
- (id)technologiesInUse;	// 0x33f8fe7d
@end
