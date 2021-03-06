/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSString, NSDictionary, NSTimer, NSArray;

__attribute__((visibility("hidden")))
@interface ATVAirTunesManager : BRSingleton {
	NSArray *_pickableRoutes;	// 4 = 0x4
	NSArray *_pickableSpeakers;	// 8 = 0x8
	NSArray *_pickableScreens;	// 12 = 0xc
	NSString *_cachedMACAddress;	// 16 = 0x10
	NSDictionary *_cachedDefaultRoute;	// 20 = 0x14
	BOOL _hasAttemptedPINAuth;	// 24 = 0x18
	BOOL _selectedSpeakerDirty;	// 25 = 0x19
	BOOL _selectedRouteEnabled;	// 26 = 0x1a
	BOOL _updatesDisabledForScreenSaver;	// 27 = 0x1b
	BOOL _updatesDisabledForPlayback;	// 28 = 0x1c
	NSTimer *_disableRouteTimer;	// 32 = 0x20
}
@property(readonly, retain) NSArray *pickableScreens;	// G=0x10cb85; converted property
@property(readonly, retain) NSArray *pickableSpeakers;	// G=0x10c90d; converted property
+ (void)setSingleton:(id)singleton;	// 0x10c101
+ (id)singleton;	// 0x10c0f1
- (id)init;	// 0x10c111
- (void)_airPlayActiveAudioRouteChanged:(id)changed;	// 0x10e0c9
- (void)_airPlayAuthFailed:(id)failed;	// 0x10dc1d
- (void)_airPlayPickableRoutesChanged:(id)changed;	// 0x10df8d
- (id)_cachedMACAddress;	// 0x10db5d
- (void)_dismissDialogWithAnyPress:(id)anyPress;	// 0x10da05
- (BOOL)_isRouteToMe:(id)me;	// 0x10dbcd
- (void)_networkStateChanged:(id)changed;	// 0x10e249
- (id)_newPasswordDialogForSpeaker:(id)speaker;	// 0x10d691
- (void)_portStatusDidChange:(id)_portStatus;	// 0x10e275
- (void)_refreshSpeakerUpdateState;	// 0x10c3b1
- (void)_screenSaverActivated:(id)activated;	// 0x10c331
- (void)_screenSaverDeactivated:(id)deactivated;	// 0x10c351
- (BOOL)_selectRoute:(id)route withPassword:(id)password;	// 0x10d205
- (BOOL)_selectRoute:(id)route withPassword:(id)password isTransient:(BOOL)transient;	// 0x10d229
- (id)_selectedSpeakerInfo;	// 0x10c719
- (void)_setSelectedSpeakerInfo:(id)info;	// 0x10c8c9
- (id)_supportedMediaTypes;	// 0x10da41
- (BOOL)airTunesAvailableForAsset:(id)asset;	// 0x10c5a9
- (BOOL)areAlternateSpeakersSelected;	// 0x10c689
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0x10d859
- (void)dealloc;	// 0x10c4dd
- (id)defaultRoute;	// 0x10ccb1
- (BOOL)destinationIsAppleTV;	// 0x10c6a5
- (BOOL)disableSelectedRoute;	// 0x10d43d
- (void)disableSelectedRouteWithDelay:(float)delay;	// 0x10d4cd
- (BOOL)doesSpeakerHavePINCode:(id)code;	// 0x10d069
- (BOOL)doesSpeakerHavePassword:(id)password;	// 0x10d031
- (BOOL)doesSpeakerSupportAirPlayAudio:(id)audio;	// 0x10d0a1
- (BOOL)doesSpeakerSupportAirPlayScreen:(id)screen;	// 0x10d111
- (BOOL)doesSpeakerSupportAirPlayVideo:(id)video;	// 0x10d0d9
- (BOOL)enableSelectedRoute;	// 0x10d3d1
- (BOOL)isActivelyUsingAlternateSpeakers;	// 0x10c64d
- (BOOL)isSpeakerConnectedForInfo:(id)info;	// 0x10cf8d
- (int)numPickableRoutes;	// 0x10cde5
- (int)numPickableScreens;	// 0x10ce05
- (int)numPickableSpeakers;	// 0x10ce2d
- (void)pauseUpdatesForPlayback;	// 0x10c371
// converted property getter: - (id)pickableScreens;	// 0x10cb85
// converted property getter: - (id)pickableSpeakers;	// 0x10c90d
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0x10ce55
- (id)remoteSpeakerInfoWithUID:(id)uid;	// 0x10ce81
- (void)resumeUpdatesForPlayback;	// 0x10c391
- (BOOL)selectRoute:(id)route;	// 0x10d52d
- (BOOL)selectRoute:(id)route isTransient:(BOOL)transient;	// 0x10d545
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0x10d8f5
- (id)speakerNameForInfo:(id)info;	// 0x10d16d
- (id)speakerUIDForInfo:(id)info;	// 0x10d149
@end

