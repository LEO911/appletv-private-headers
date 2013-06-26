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
	id _internal;	// 4 = 0x4
}
@property(assign, nonatomic) int activityType;	// G=0x315a7bb9; S=0x315a7ab5; 
@property(readonly, assign, nonatomic) double bestAccuracy;	// G=0x315a7891; 
@property(assign, nonatomic) id<CLLocationManagerDelegate> delegate;	// G=0x315a70f1; S=0x315a70d1; 
@property(assign, nonatomic) double desiredAccuracy;	// G=0x315a7309; S=0x315a7221; 
@property(assign, nonatomic) double distanceFilter;	// G=0x315a71f9; S=0x315a7111; 
@property(readonly, assign, nonatomic) double expectedGpsUpdateInterval;	// G=0x315a77c5; 
@property(readonly, assign, nonatomic) CLHeading *heading;	// G=0x315a8541; 
@property(readonly, assign, nonatomic) BOOL headingAvailable;	// G=0x315a82c5; 
@property(assign, nonatomic) double headingFilter;	// G=0x315a8411; S=0x315a82f1; 
@property(assign, nonatomic) int headingOrientation;	// G=0x315a8521; S=0x315a8439; 
@property(readonly, assign, nonatomic) CLClientRef internalClient;	// G=0x315a78e9; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x315a750d; 
@property(readonly, assign, nonatomic) BOOL locationServicesApproved;	// G=0x315a7799; 
@property(readonly, assign, nonatomic) BOOL locationServicesAvailable;	// G=0x315a7749; 
@property(readonly, assign, nonatomic) BOOL locationServicesEnabled;	// G=0x315a7771; 
@property(assign, nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;	// G=0x315ad355; S=0x315ad375; 
@property(readonly, assign, nonatomic) double maximumRegionMonitoringDistance;	// G=0x315a8f1d; 
@property(readonly, assign, nonatomic) NSSet *monitoredRegions;	// G=0x315a8ff9; 
@property(assign, nonatomic) BOOL pausesLocationUpdatesAutomatically;	// G=0x315a74d1; S=0x315a7331; 
@property(assign, nonatomic, getter=isPersistentMonitoringEnabled) BOOL persistentMonitoringEnabled;	// G=0x315ad2f5; S=0x315ad315; 
@property(assign, nonatomic) BOOL privateMode;	// G=0x315a7915; S=0x315a7909; 
@property(copy, nonatomic) NSString *purpose;	// G=0x315a79ed; S=0x315a7925; 
@property(assign, nonatomic) BOOL supportInfo;	// G=0x315a788d; S=0x315a77e5; 
+ (int)_authorizationStatus;	// 0x315ad26d
+ (int)_authorizationStatusForBundleIdentifier:(id)bundleIdentifier bundle:(id)bundle;	// 0x315ad20d
+ (unsigned)activeLocationServiceTypesForLocationDictionary:(id)locationDictionary;	// 0x315de1e5
+ (int)authorizationStatus;	// 0x315ad281
+ (int)authorizationStatusForBundle:(id)bundle;	// 0x315ad259
+ (int)authorizationStatusForBundleIdentifier:(id)bundleIdentifier;	// 0x315ad245
+ (id)dateLocationLastUsedForLocationDictionary:(id)locationDictionary;	// 0x315de219
+ (BOOL)deferredLocationUpdatesAvailable;	// 0x315a82a5
+ (BOOL)dumpLogsWithMessage:(id)message;	// 0x315ad3d5
+ (unsigned)entityClassesForLocationDictionary:(id)locationDictionary;	// 0x315de1a5
+ (BOOL)headingAvailable;	// 0x315a7091
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)locationDictionary;	// 0x315de221
+ (BOOL)isLocationActiveForLocationDictionary:(id)locationDictionary;	// 0x315de1c9
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned)locationEntityClass;	// 0x315de0fd
+ (BOOL)locationServicesEnabled;	// 0x315a705d
+ (BOOL)locationServicesEnabled:(BOOL)enabled;	// 0x315a706d
+ (BOOL)mapCorrectionAvailable;	// 0x315a7501
+ (unsigned)primaryEntityClassForLocationDictionary:(id)locationDictionary;	// 0x315de175
+ (BOOL)regionMonitoringAvailable;	// 0x315a70b1
+ (BOOL)regionMonitoringEnabled;	// 0x315a70c1
+ (void)setAuthorizationStatus:(BOOL)status forBundle:(id)bundle;	// 0x315ad2a1
+ (void)setAuthorizationStatus:(BOOL)status forBundleIdentifier:(id)bundleIdentifier;	// 0x315ad291
+ (void)setDefaultEffectiveBundle:(id)bundle;	// 0x315ad2d5
+ (void)setDefaultEffectiveBundleIdentifier:(id)identifier;	// 0x315ad2cd
+ (void)setEntityAuthorized:(BOOL)authorized forLocationDictionary:(id)locationDictionary;	// 0x315de22d
+ (void)setLocationServicesEnabled:(BOOL)enabled;	// 0x315a7085
+ (void)setStatusBarIconEnabled:(BOOL)enabled forLocationEntityClass:(unsigned)locationEntityClass;	// 0x315de091
+ (id)sharedManager;	// 0x315a7015
+ (BOOL)shutdownDaemon;	// 0x315ad3e5
+ (BOOL)significantLocationChangeMonitoringAvailable;	// 0x315a70a1
- (id)init;	// 0x315a6f5d
- (id)initWithEffectiveBundle:(id)effectiveBundle;	// 0x315a6f85
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier;	// 0x315a6f71
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier bundle:(id)bundle;	// 0x315a6e4d
// declared property getter: - (int)activityType;	// 0x315a7bb9
- (void)allowDeferredLocationUpdatesUntilTraveled:(double)traveled timeout:(double)timeout;	// 0x315a7fa1
- (id)appsUsingLocation;	// 0x315a949d
- (id)appsUsingLocationWithDetails;	// 0x315a94a1
// declared property getter: - (double)bestAccuracy;	// 0x315a7891
- (void)dealloc;	// 0x315a6f99
// declared property getter: - (id)delegate;	// 0x315a70f1
// declared property getter: - (double)desiredAccuracy;	// 0x315a7309
- (void)disallowDeferredLocationUpdates;	// 0x315a81e1
- (void)dismissHeadingCalibrationDisplay;	// 0x315a88d1
// declared property getter: - (double)distanceFilter;	// 0x315a71f9
// declared property getter: - (double)expectedGpsUpdateInterval;	// 0x315a77c5
// declared property getter: - (id)heading;	// 0x315a8541
// declared property getter: - (BOOL)headingAvailable;	// 0x315a82c5
// declared property getter: - (double)headingFilter;	// 0x315a8411
// declared property getter: - (int)headingOrientation;	// 0x315a8521
- (void)historicLocationsFromDate:(id)date forInterval:(double)interval;	// 0x315a82b1
// declared property getter: - (CLClientRef)internalClient;	// 0x315a78e9
// declared property getter: - (BOOL)isLocationServicesPreferencesDialogEnabled;	// 0x315ad355
// declared property getter: - (BOOL)isPersistentMonitoringEnabled;	// 0x315ad2f5
// declared property getter: - (id)location;	// 0x315a750d
// declared property getter: - (BOOL)locationServicesApproved;	// 0x315a7799
// declared property getter: - (BOOL)locationServicesAvailable;	// 0x315a7749
// declared property getter: - (BOOL)locationServicesEnabled;	// 0x315a7771
// declared property getter: - (double)maximumRegionMonitoringDistance;	// 0x315a8f1d
// declared property getter: - (id)monitoredRegions;	// 0x315a8ff9
- (void)onClientEvent:(int)event supportInfo:(id)info;	// 0x315a94f9
- (void)onClientEventAuthStatus:(id)status;	// 0x315a95e5
- (void)onClientEventAutopauseStatus:(id)status;	// 0x315accd9
- (void)onClientEventBatch:(id)batch;	// 0x315acea9
- (void)onClientEventError:(id)error;	// 0x315aa675
- (void)onClientEventHeading:(id)heading;	// 0x315aa1d5
- (void)onClientEventHeadingCalibration:(id)calibration;	// 0x315aa47d
- (void)onClientEventHistoricLocation:(id)location;	// 0x315aa671
- (void)onClientEventInterrupted:(id)interrupted;	// 0x315ad0b9
- (void)onClientEventLocation:(id)location;	// 0x315a97a1
- (void)onClientEventLocationUnavailable:(id)unavailable;	// 0x315aa135
- (void)onClientEventRegion:(id)region;	// 0x315aa7c1
- (void)onClientEventRegionError:(id)error;	// 0x315ab035
- (void)onClientEventRegionResponseDelayed:(id)delayed;	// 0x315ab721
- (void)onClientEventRegionSetupCompleted:(id)completed;	// 0x315ac389
- (void)onDidBecomeActive:(id)on;	// 0x315acc1d
- (void)pauseLocationUpdates:(BOOL)updates;	// 0x315acadd
// declared property getter: - (BOOL)pausesLocationUpdatesAutomatically;	// 0x315a74d1
// declared property getter: - (BOOL)privateMode;	// 0x315a7915
// declared property getter: - (id)purpose;	// 0x315a79ed
- (void)registerAsLocationClient;	// 0x315ad3b5
- (void)resetApps;	// 0x315a93f9
- (void)resumeLocationUpdates;	// 0x315aca09
// declared property setter: - (void)setActivityType:(int)type;	// 0x315a7ab5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x315a70d1
// declared property setter: - (void)setDesiredAccuracy:(double)accuracy;	// 0x315a7221
// declared property setter: - (void)setDistanceFilter:(double)filter;	// 0x315a7111
// declared property setter: - (void)setHeadingFilter:(double)filter;	// 0x315a82f1
// declared property setter: - (void)setHeadingOrientation:(int)orientation;	// 0x315a8439
// declared property setter: - (void)setLocationServicesPreferencesDialogEnabled:(BOOL)enabled;	// 0x315ad375
// declared property setter: - (void)setPausesLocationUpdatesAutomatically:(BOOL)automatically;	// 0x315a7331
// declared property setter: - (void)setPersistentMonitoringEnabled:(BOOL)enabled;	// 0x315ad315
// declared property setter: - (void)setPrivateMode:(BOOL)mode;	// 0x315a7909
// declared property setter: - (void)setPurpose:(id)purpose;	// 0x315a7925
// declared property setter: - (void)setSupportInfo:(BOOL)info;	// 0x315a77e5
- (void)startAppStatusUpdates;	// 0x315a8999
- (void)startMonitoringForRegion:(id)region;	// 0x315a8b41
- (void)startMonitoringForRegion:(id)region desiredAccuracy:(double)accuracy;	// 0x315a8b31
- (void)startMonitoringSignificantLocationChanges;	// 0x315a89a9
- (void)startTechStatusUpdates;	// 0x315a89a1
- (void)startUpdatingHeading;	// 0x315a86fd
- (void)startUpdatingLocation;	// 0x315a7c1d
- (void)startUpdatingLocationWithPrompt;	// 0x315a7bdd
- (void)stopAppStatusUpdates;	// 0x315a899d
- (void)stopMonitoringForRegion:(id)region;	// 0x315a8e35
- (void)stopMonitoringSignificantLocationChanges;	// 0x315a8a6d
- (void)stopTechStatusUpdates;	// 0x315a89a5
- (void)stopUpdatingHeading;	// 0x315a87fd
- (void)stopUpdatingLocation;	// 0x315a7eb9
// declared property getter: - (BOOL)supportInfo;	// 0x315a788d
- (id)technologiesInUse;	// 0x315a94bd
@end
