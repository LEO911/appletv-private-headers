/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVSettingsMigration.h"
#import "ATVSettingsSaver.h"
#import "BRSingleton.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVSettingsFacade : BRSingleton <ATVSettingsSaver, ATVSettingsMigration> {
	NSArray *_allMarimbaSlideshowThemeIdentifiers;	// 4 = 0x4
	NSArray *_allMarimbaSlideshowThemeTitleKeys;	// 8 = 0x8
	id _screenSaverSetCollectionBlock;	// 12 = 0xc
}
@property(assign) BOOL UISoundsEnabled;	// G=0x234cf1; S=0x234d6d; converted property
@property(assign) BOOL airTunesControlFromSpeakerIsEnabled;	// G=0x239279; S=0x2392bd; converted property
@property(assign) BOOL airTunesDenyInterruptionsIsEnabled;	// G=0x2393cd; S=0x239449; converted property
@property(assign) BOOL airTunesIsEnabled;	// G=0x238fa9; S=0x239025; converted property
@property(retain) id airTunesPassword;	// G=0x239139; S=0x2391c1; converted property
@property(assign) BOOL airTunesPinModeIsEnabled;	// G=0x2392c1; S=0x23933d; converted property
@property(assign) int audioFormatSetting;	// G=0x2358fd; S=0x235971; converted property
@property(assign) int audioOutputQuality;	// G=0x2359d5; S=0x235a19; converted property
@property(assign) BOOL crashReportingEnabled;	// G=0x235b3d; S=0x235a7d; converted property
@property(retain) id defaultAudioLanguage;	// G=0x235025; S=0x2350bd; converted property
@property(retain) id defaultSubtitleLanguage;	// G=0x234f29; S=0x234fc1; converted property
@property(assign) int displayOverscanOverrideMode;	// G=0x23731d; S=0x23735d; converted property
@property(assign) int favoritesSortMode;	// G=0x2373f5; S=0x237439; converted property
@property(retain) id keyboardLanguageKeys;	// G=0x23841d; S=0x23845d; converted property
@property(retain) id lastUsedKeyboardLanguage;	// G=0x238515; S=0x238555; converted property
@property(assign) BOOL legacyPhotoStreamEnabled;	// G=0x238035; S=0x238075; converted property
@property(retain) id marimbaSlideshowDefaultMusicPlaylistID;	// G=0x237f81; S=0x237ff1; converted property
@property(retain) id marimbaSlideshowDefaultMusicServerSetting;	// G=0x237c8d; S=0x237ead; converted property
@property(retain) id marimbaSlideshowStyle;	// G=0x237bf1; S=0x237bad; converted property
@property(assign) int musicRepeatMode;	// G=0x235611; S=0x235655; converted property
@property(assign) BOOL musicUseSoundCheck;	// G=0x235835; S=0x235879; converted property
@property(assign) BOOL musicVolumeControlEnabled;	// G=0x2356a1; S=0x2356e5; converted property
@property(assign) int playbackResolution;	// G=0x237035; S=0x237189; converted property
@property(assign) BOOL playlistsEverywhereEnabled;	// G=0x235c15; S=0x235c59; converted property
@property(assign) BOOL preferHDPreviews;	// G=0x236ee9; S=0x236f55; converted property
@property(assign) BOOL screenSaverAllowedOverMusic;	// G=0x235ca1; S=0x235ce5; converted property
@property(assign) BOOL screenSaverPrefetchComplete;	// G=0x235fe5; S=0x236029; converted property
@property(assign) int screenSaverSecondsPerSlide;	// G=0x236d31; S=0x236da9; converted property
@property(readonly, assign) id screenSaverSetCollectionBlock;	// G=0x236cad; @synthesize=_screenSaverSetCollectionBlock
@property(retain) id screenSaverSlideshowTheme;	// G=0x235f49; S=0x235f9d; converted property
@property(assign) int screenSaverTimeout;	// G=0x236a49; S=0x236ab9; converted property
@property(retain) id screenSaverTransition;	// G=0x236df1; S=0x236e5d; converted property
@property(retain) id selectedScreenSaverIdentifier;	// G=0x235d2d; S=0x235ecd; converted property
@property(assign) BOOL sharedPhotoStreamEnabled;	// G=0x2380c5; S=0x238105; converted property
@property(assign) BOOL sharedPhotoStreamEnabledStateCanBeToggled;	// G=0x2383dd; S=0x23835d; converted property
@property(assign) int sleepTimeout;	// G=0x236b81; S=0x236be5; converted property
@property(assign) BOOL slideshowRepeat;	// G=0x2375c1; S=0x237631; converted property
@property(assign) int slideshowSecondsPerSlide;	// G=0x237509; S=0x237579; converted property
@property(retain) id slideshowSelectedTransitionName;	// G=0x237791; S=0x2377fd; converted property
@property(assign) BOOL slideshowShuffleMusic;	// G=0x237705; S=0x237749; converted property
@property(assign) BOOL slideshowShufflePhotos;	// G=0x237679; S=0x2376bd; converted property
@property(assign) int videoClosedCaptionMode;	// G=0x234e05; S=0x234e49; converted property
+ (id)getMobileGestaltString:(CFStringRef)string;	// 0x238edd
+ (void)initializePlatformFacade;	// 0x234799
+ (void)setSingleton:(id)singleton;	// 0x2347c5
+ (id)singleton;	// 0x2347b5
// converted property getter: - (BOOL)UISoundsEnabled;	// 0x234cf1
- (id)_avSelectionPlistForMedia:(id)media forType:(id)type;	// 0x23a861
- (id)_availableDefaultAVLanguages;	// 0x23a9e5
- (SCNetworkServiceRef)_copyNetworkServiceForInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x23ad15
- (id)_existingSlideshowThemeKeys;	// 0x23aab9
- (id)_existingSlideshowThemeTitleKeys;	// 0x23abb1
- (id)_newSlideshowThemeKeys;	// 0x23aca9
- (id)_newSlideshowThemeTitleKeys;	// 0x23acad
- (void)_removeSavedPreferredOptionsForType:(id)type;	// 0x23a969
- (int)_resolutionForPlaybackString:(id)playbackString;	// 0x236fe9
- (void)_saveAVSelectionDictionary:(id)dictionary forMedia:(id)media forType:(id)type;	// 0x23a619
- (BOOL)_saveConfiguration:(id)configuration forInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x23ade5
- (BOOL)_setDNSWithAddresses:(id)addresses forService:(SCNetworkServiceRef)service;	// 0x23b319
- (void)_setPhotoStreamEnabledState:(BOOL)state withPrefsKey:(id)prefsKey withNotificationName:(id)notificationName;	// 0x238155
- (void)_setScreenSaverCollection:(id)collection;	// 0x23acb1
- (id)_stringForPlaybackResolution:(int)playbackResolution;	// 0x236fbd
- (void)addPathsToSaveTo:(id)to;	// 0x234849
- (BOOL)addSiteIsEnabled;	// 0x239b7d
- (id)addSiteLoggingURL;	// 0x239c49
// converted property getter: - (BOOL)airTunesControlFromSpeakerIsEnabled;	// 0x239279
// converted property getter: - (BOOL)airTunesDenyInterruptionsIsEnabled;	// 0x2393cd
// converted property getter: - (BOOL)airTunesIsEnabled;	// 0x238fa9
// converted property getter: - (id)airTunesPassword;	// 0x239139
- (BOOL)airTunesPasswordIsEnabled;	// 0x2390f9
// converted property getter: - (BOOL)airTunesPinModeIsEnabled;	// 0x2392c1
- (void)appleConnectID:(id *)anId password:(id *)password;	// 0x2394d9
// converted property getter: - (int)audioFormatSetting;	// 0x2358fd
// converted property getter: - (int)audioOutputQuality;	// 0x2359d5
- (id)avAudioSelectionPlistForMedia:(id)media;	// 0x23557d
- (int)avClosedCaptionsSettingForMedia:(id)media;	// 0x235459
- (id)avSubtitleSelectionPlistForMedia:(id)media;	// 0x2353c5
- (id)availableDefaultAudioLanguages;	// 0x234f19
- (id)availableDefaultSubtitleLanguages;	// 0x234f09
// converted property getter: - (BOOL)crashReportingEnabled;	// 0x235b3d
- (BOOL)crashReportingPreferenceSet;	// 0x235bd1
- (void)dealloc;	// 0x2347d5
// converted property getter: - (id)defaultAudioLanguage;	// 0x235025
// converted property getter: - (id)defaultSubtitleLanguage;	// 0x234f29
- (int)deviceActivationState;	// 0x239d15
- (BOOL)displayNewSlideshowThemes;	// 0x237845
// converted property getter: - (int)displayOverscanOverrideMode;	// 0x23731d
- (id)externalSubtitleSelectionForMedia:(id)media;	// 0x235121
// converted property getter: - (int)favoritesSortMode;	// 0x2373f5
- (void)flushDiskChanges;	// 0x234c39
- (id)hardwareResolution;	// 0x2372b5
- (id)hwDeviceName;	// 0x2387a9
- (id)hwModel;	// 0x238f75
- (id)hwSerialNumber;	// 0x238d11
- (BOOL)hwSetSystemLanguage:(id)language;	// 0x238d39
- (BOOL)isAutomaticTimeZoneSelectionEnabled;	// 0x23a2b9
- (BOOL)isTimeZoneSet;	// 0x23a159
- (BOOL)keyboardLanguageEnabled:(id)enabled;	// 0x2384a1
// converted property getter: - (id)keyboardLanguageKeys;	// 0x23841d
// converted property getter: - (id)lastUsedKeyboardLanguage;	// 0x238515
// converted property getter: - (BOOL)legacyPhotoStreamEnabled;	// 0x238035
- (id)logPushID;	// 0x238b25
// converted property getter: - (id)marimbaSlideshowDefaultMusicPlaylistID;	// 0x237f81
// converted property getter: - (id)marimbaSlideshowDefaultMusicServerSetting;	// 0x237c8d
// converted property getter: - (id)marimbaSlideshowStyle;	// 0x237bf1
- (id)marimbaSlideshowThemeIdentifiers;	// 0x237849
- (id)marimbaSlideshowThemeTitleKeys;	// 0x237a05
- (int)maximumPlaybackResolution;	// 0x237169
- (void)migrateFrom:(id)from to:(id)to;	// 0x234969
// converted property getter: - (int)musicRepeatMode;	// 0x235611
// converted property getter: - (BOOL)musicUseSoundCheck;	// 0x235835
- (float)musicVolume;	// 0x235785
// converted property getter: - (BOOL)musicVolumeControlEnabled;	// 0x2356a1
- (id)parentalControlsPasscode;	// 0x237481
- (int)parentalControlsYTMode;	// 0x2374c5
// converted property getter: - (int)playbackResolution;	// 0x237035
// converted property getter: - (BOOL)playlistsEverywhereEnabled;	// 0x235c15
// converted property getter: - (BOOL)preferHDPreviews;	// 0x236ee9
- (BOOL)preferHDVideo;	// 0x236ea5
- (BOOL)runningAnInternalBuild;	// 0x238ae9
- (void)saveAVAudioSelectionPlist:(id)plist forMedia:(id)media;	// 0x235599
- (void)saveAVClosedCaptionsEnabled:(BOOL)enabled forMedia:(id)media;	// 0x2354e9
- (void)saveAVSubtitleSelectionPlist:(id)plist forMedia:(id)media;	// 0x2353e1
- (BOOL)saveConfiguration:(id)configuration;	// 0x2389d1
- (void)saveExternalSubtitleSelection:(id)selection forMedia:(id)media;	// 0x235275
- (void)saveMusicVolume:(float)volume;	// 0x2357cd
// converted property getter: - (BOOL)screenSaverAllowedOverMusic;	// 0x235ca1
- (id)screenSaverCollectionArchive;	// 0x236071
- (BOOL)screenSaverCollectionTypeIsAlbumArtwork:(id)artwork;	// 0x2369f5
// converted property getter: - (BOOL)screenSaverPrefetchComplete;	// 0x235fe5
// converted property getter: - (int)screenSaverSecondsPerSlide;	// 0x236d31
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x236cad
// converted property getter: - (id)screenSaverSlideshowTheme;	// 0x235f49
- (BOOL)screenSaverThemeAllowsAlbumArtwork:(id)artwork;	// 0x2369a9
// converted property getter: - (int)screenSaverTimeout;	// 0x236a49
// converted property getter: - (id)screenSaverTransition;	// 0x236df1
// converted property getter: - (id)selectedScreenSaverIdentifier;	// 0x235d2d
// converted property setter: - (void)setAirTunesControlFromSpeakerIsEnabled:(BOOL)speakerIsEnabled;	// 0x2392bd
// converted property setter: - (void)setAirTunesDenyInterruptionsIsEnabled:(BOOL)enabled;	// 0x239449
// converted property setter: - (void)setAirTunesIsEnabled:(BOOL)enabled;	// 0x239025
// converted property setter: - (void)setAirTunesPassword:(id)password;	// 0x2391c1
// converted property setter: - (void)setAirTunesPinModeIsEnabled:(BOOL)enabled;	// 0x23933d
- (BOOL)setAppleConnectID:(id)anId password:(id)password;	// 0x23981d
// converted property setter: - (void)setAudioFormatSetting:(int)setting;	// 0x235971
// converted property setter: - (void)setAudioOutputQuality:(int)quality;	// 0x235a19
- (BOOL)setAutomaticTimeZoneSelectionEnabled:(BOOL)enabled;	// 0x23a2c5
// converted property setter: - (void)setCrashReportingEnabled:(BOOL)enabled;	// 0x235a7d
// converted property setter: - (void)setDefaultAudioLanguage:(id)language;	// 0x2350bd
// converted property setter: - (void)setDefaultSubtitleLanguage:(id)language;	// 0x234fc1
- (void)setDeviceActivationFailureState:(int)state;	// 0x239df1
- (void)setDeviceActivationWasSkipped:(BOOL)skipped;	// 0x239ec9
// converted property setter: - (void)setDisplayOverscanOverrideMode:(int)mode;	// 0x23735d
// converted property setter: - (void)setFavoritesSortMode:(int)mode;	// 0x237439
- (void)setHWDeviceName:(id)name;	// 0x238831
- (void)setKeyboardLanguageEnabled:(id)enabled enabled:(BOOL)enabled2;	// 0x2384d9
// converted property setter: - (void)setKeyboardLanguageKeys:(id)keys;	// 0x23845d
// converted property setter: - (void)setLastUsedKeyboardLanguage:(id)language;	// 0x238555
// converted property setter: - (void)setLegacyPhotoStreamEnabled:(BOOL)enabled;	// 0x238075
// converted property setter: - (void)setMarimbaSlideshowDefaultMusicPlaylistID:(id)anId;	// 0x237ff1
// converted property setter: - (void)setMarimbaSlideshowDefaultMusicServerSetting:(id)setting;	// 0x237ead
// converted property setter: - (void)setMarimbaSlideshowStyle:(id)style;	// 0x237bad
// converted property setter: - (void)setMusicRepeatMode:(int)mode;	// 0x235655
// converted property setter: - (void)setMusicUseSoundCheck:(BOOL)check;	// 0x235879
// converted property setter: - (void)setMusicVolumeControlEnabled:(BOOL)enabled;	// 0x2356e5
// converted property setter: - (void)setPlaybackResolution:(int)resolution;	// 0x237189
// converted property setter: - (void)setPlaylistsEverywhereEnabled:(BOOL)enabled;	// 0x235c59
// converted property setter: - (void)setPreferHDPreviews:(BOOL)previews;	// 0x236f55
// converted property setter: - (void)setScreenSaverAllowedOverMusic:(BOOL)music;	// 0x235ce5
- (void)setScreenSaverMusicCoverCollection:(id)collection;	// 0x2360b5
- (void)setScreenSaverPhotoCollection:(id)collection;	// 0x236491
// converted property setter: - (void)setScreenSaverPrefetchComplete:(BOOL)complete;	// 0x236029
// converted property setter: - (void)setScreenSaverSecondsPerSlide:(int)slide;	// 0x236da9
// converted property setter: - (void)setScreenSaverSlideshowTheme:(id)theme;	// 0x235f9d
// converted property setter: - (void)setScreenSaverTimeout:(int)timeout;	// 0x236ab9
// converted property setter: - (void)setScreenSaverTransition:(id)transition;	// 0x236e5d
// converted property setter: - (void)setSelectedScreenSaverIdentifier:(id)identifier;	// 0x235ecd
// converted property setter: - (void)setSharedPhotoStreamEnabled:(BOOL)enabled;	// 0x238105
// converted property setter: - (void)setSharedPhotoStreamEnabledStateCanBeToggled:(BOOL)toggled;	// 0x23835d
// converted property setter: - (void)setSleepTimeout:(int)timeout;	// 0x236be5
// converted property setter: - (void)setSlideshowRepeat:(BOOL)repeat;	// 0x237631
// converted property setter: - (void)setSlideshowSecondsPerSlide:(int)slide;	// 0x237579
// converted property setter: - (void)setSlideshowSelectedTransitionName:(id)name;	// 0x2377fd
// converted property setter: - (void)setSlideshowShuffleMusic:(BOOL)music;	// 0x237749
// converted property setter: - (void)setSlideshowShufflePhotos:(BOOL)photos;	// 0x2376bd
- (BOOL)setTimeZoneFromCityID:(id)cityID;	// 0x239f41
// converted property setter: - (void)setUISoundsEnabled:(BOOL)enabled;	// 0x234d6d
- (BOOL)setUserAllowedAutomaticTimeZoneSelection:(BOOL)selection;	// 0x23a201
// converted property setter: - (void)setVideoClosedCaptionMode:(int)mode;	// 0x234e49
// converted property getter: - (BOOL)sharedPhotoStreamEnabled;	// 0x2380c5
// converted property getter: - (BOOL)sharedPhotoStreamEnabledStateCanBeToggled;	// 0x2383dd
// converted property getter: - (int)sleepTimeout;	// 0x236b81
// converted property getter: - (BOOL)slideshowRepeat;	// 0x2375c1
// converted property getter: - (int)slideshowSecondsPerSlide;	// 0x237509
// converted property getter: - (id)slideshowSelectedTransitionName;	// 0x237791
// converted property getter: - (BOOL)slideshowShuffleMusic;	// 0x237705
// converted property getter: - (BOOL)slideshowShufflePhotos;	// 0x237679
- (id)timeZone;	// 0x239f25
- (id)timeZoneCityDisplayNameIncludingCountry:(BOOL)country;	// 0x23a351
- (id)timeZoneCityID;	// 0x23a4c9
- (void)updateHostID:(id)anId to:(id)to;	// 0x234b69
- (BOOL)userAllowedAutomaticTimeZoneSelection;	// 0x23a1bd
- (id)versionEFI;	// 0x238689
- (id)versionGF;	// 0x238741
- (id)versionIR;	// 0x238725
- (id)versionOS;	// 0x238651
- (id)versionOSBuild;	// 0x23866d
- (id)versionSoftware;	// 0x238599
- (id)versionSoftwareBuild;	// 0x2385e9
// converted property getter: - (int)videoClosedCaptionMode;	// 0x234e05
- (BOOL)wasDeviceActivationSkipped;	// 0x239e85
- (BOOL)wasTimeZoneSetByCoreLocation;	// 0x23a245
@end

