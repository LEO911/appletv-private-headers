/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVAirTunesManager : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x10ebc5
+ (id)singleton;	// 0x10ebb5
- (id)init;	// 0x10ebe9
- (void)_airPlayActiveAudioRouteChanged:(id)changed;	// 0x112855
- (id)_airPlayAuthFailed:(id)failed;	// 0x111ee1
- (void)_airPlayPickableRoutesChanged:(id)changed;	// 0x11275d
- (id)_cachedMACAddress;	// 0x112665
- (id)_cleanUpSpeakerState:(id)state;	// 0x112421
- (void)_deviceWillSleep:(id)_device;	// 0x10f6e5
- (void)_deviceWillWake:(id)_device;	// 0x10f73d
- (void)_initializeStateMachine:(id)machine;	// 0x111311
- (BOOL)_isRouteToMe:(id)me;	// 0x1126f1
- (void)_networkStateChanged:(id)changed;	// 0x11293d
- (id)_newPasswordDialogForSpeaker:(id)speaker;	// 0x110e79
- (void)_portStatusDidChange:(id)_portStatus;	// 0x1128e5
- (void)_refreshSpeakerUpdateState;	// 0x10f8b9
- (void)_screenSaverActivated:(id)activated;	// 0x10f879
- (void)_screenSaverDeactivated:(id)deactivated;	// 0x10f899
- (id)_selectRoute:(id)route withPassword:(id)password showDialog:(BOOL)dialog isTransient:(BOOL)transient;	// 0x110a29
- (id)_selectedSpeakerInfo;	// 0x110131
- (void)_setSelectedSpeakerInfo:(id)info;	// 0x110325
- (id)_supportedMediaTypes;	// 0x1124a1
- (void)_updateSpeakerSelectionAfterSleep:(id)sleep;	// 0x10f7bd
- (BOOL)areAlternateSpeakersSelected;	// 0x10fa4d
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0x1110d1
- (void)dealloc;	// 0x10f00d
- (id)defaultRoute;	// 0x11082d
- (BOOL)destinationIsAppleTV;	// 0x10fa79
- (BOOL)disableSelectedRoute;	// 0x110d3d
- (void)disableSelectedRouteWithDelay:(float)delay;	// 0x110e05
- (BOOL)doesSpeakerHavePINCode:(id)code;	// 0x10fef5
- (BOOL)doesSpeakerHavePassword:(id)password;	// 0x10fea9
- (BOOL)doesSpeakerSupportAirPlayAudio:(id)audio;	// 0x10ff41
- (BOOL)doesSpeakerSupportAirPlayScreen:(id)screen;	// 0x10ffd9
- (BOOL)doesSpeakerSupportAirPlayVideo:(id)video;	// 0x10ff8d
- (BOOL)enableSelectedRoute;	// 0x110c59
- (BOOL)isActivelyUsingAlternateSpeakers;	// 0x10fa15
- (BOOL)isDefaultRoute:(id)route;	// 0x10fe4d
- (BOOL)isSpeakerConnectedForInfo:(id)info;	// 0x10fd65
- (int)numPickableRoutes;	// 0x10fb19
- (int)numPickableScreens;	// 0x10fb39
- (int)numPickableSpeakers;	// 0x10fb75
- (id)pickableScreens;	// 0x1106d1
- (id)pickableSpeakers;	// 0x1103ad
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0x10fbb1
- (id)remoteSpeakerInfoWithUID:(id)uid;	// 0x10fbfd
- (BOOL)selectRoute:(id)route;	// 0x110975
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0x1111c9
- (id)speakerNameForInfo:(id)info;	// 0x110049
- (id)speakerUIDForInfo:(id)info;	// 0x110025
- (id)speakersProviderWithHandler:(id)handler title:(id)title initialSelection:(long *)selection disableAlternateRoutes:(BOOL)routes;	// 0x10f0a5
@end

