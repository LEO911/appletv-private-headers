/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;

@interface TLToneManager : NSObject {
@private
	NSMutableDictionary *_iTunesTonesByIdentifier;	// 4 = 0x4
	NSMutableDictionary *_textTonesByIdentifier;	// 8 = 0x8
	NSMutableDictionary *_iTunesIdentifiersByPID;	// 12 = 0xc
	NSDictionary *_previewBehaviorForDefaultIdentifier;	// 16 = 0x10
	NSDictionary *_identifierAliasMap;	// 20 = 0x14
	id _delegate;	// 24 = 0x18
	BOOL _observingChangeNotifications;	// 28 = 0x1c
	BOOL _hasAdditionalTextTones;	// 29 = 0x1d
}
@property(retain) id currentRingtoneIdentifier;	// G=0x35cafe45; S=0x35cb1a0d; converted property
@property(assign) BOOL hasAdditionalTextTones;	// G=0x35cb21ad; S=0x35cb21bd; converted property
+ (BOOL)identifierIsTextTone:(id)tone;	// 0x35caff79
+ (BOOL)migrateLegacyToneSettings;	// 0x35cb3cb9
+ (id)sharedRingtoneManager;	// 0x35caf479
- (id)init;	// 0x35caf4c5
- (id)initWithChangeNotifications:(BOOL)changeNotifications;	// 0x35caf4d9
- (id)initWithITunesRingtonePlistAtPath:(id)path registerForChangeNotifications:(BOOL)changeNotifications;	// 0x35caf4ed
- (id)ITunesRingtoneInformationPlist;	// 0x35cb0da9
- (BOOL)_addToneToManifest:(id)manifest metadata:(id)metadata fileName:(id)name mediaDirectory:(id)directory;	// 0x35cb2aed
- (id)_copyITunesRingtonesFromManifestPath:(id)manifestPath mediaDirectoryPath:(id)path;	// 0x35cb0a6d
- (unsigned long)_currentToneSoundID:(id)anId defaultIdentifier:(id)identifier;	// 0x35cb2221
- (id)_defaultToneIdentifier:(int)identifier;	// 0x35cb21cd
- (id)_defaultToneName:(int)name;	// 0x35cb21dd
- (void)_deviceRingtonesChangedNotification;	// 0x35cafd75
- (int)_lockManifest:(id)manifest;	// 0x35cb22f1
- (void)_reloadITunesRingtonesAfterExternalChange;	// 0x35cb0cb5
- (BOOL)_removeToneFromManifest:(id)manifest fileName:(id)name deletedMetadata:(id *)metadata;	// 0x35cb2d81
- (unsigned long)_soundIDForSystemTone:(id)systemTone isValid:(BOOL *)valid;	// 0x35cb1c45
- (id)aliasForIdentifier:(id)identifier;	// 0x35cb1c15
- (void)clearOldToneSettings;	// 0x35cafac5
- (id)copyCurrentRingtoneIdentifier;	// 0x35cafdf5
- (id)copyCurrentRingtoneName;	// 0x35cafd85
- (id)copyCurrentTextToneIdentifier;	// 0x35cb18d9
- (id)copyCurrentTextToneName;	// 0x35cb1975
- (id)copyIdentifierForRingtoneAtPath:(id)path isValid:(BOOL *)valid;	// 0x35cb029d
- (id)copyNameOfIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x35cb05e5
- (id)copyNameOfRingtoneWithIdentifier:(id)identifier;	// 0x35cb002d
- (id)copyNameOfRingtoneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x35cb0041
- (id)copyNameOfTextToneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x35cb1b1d
- (id)copyPathOfRingtoneWithIdentifier:(id)identifier;	// 0x35cb0051
- (id)copyPathOfRingtoneWithIdentifier:(id)identifier isValid:(BOOL *)valid;	// 0x35cb0065
- (unsigned long)createPreviewSoundIDForToneIdentifier:(id)toneIdentifier;	// 0x35cb20a1
- (id)currentCalendarAlertToneIdentifier;	// 0x35cb36c5
- (id)currentFacebookPostToneIdentifier;	// 0x35cb38c9
- (unsigned long)currentFacebookPostToneSoundID;	// 0x35cb3c19
- (id)currentIdentifierForContext:(int)context;	// 0x35cb3975
- (unsigned long)currentNewCalendarAlertToneSoundID;	// 0x35cb3b41
- (id)currentNewMailToneIdentifier;	// 0x35cb33d1
- (id)currentNewMailToneIdentifierForAccount:(id)account;	// 0x35cb34ad
- (unsigned long)currentNewMailToneSoundID;	// 0x35cb3a21
- (unsigned long)currentNewMailToneSoundIDForAccount:(id)account;	// 0x35cb3a69
- (unsigned long)currentNewReminderAlertToneSoundID;	// 0x35cb3b89
- (id)currentNewVoicemailToneIdentifier;	// 0x35cb3619
- (unsigned long)currentNewVoicemailToneSoundID;	// 0x35cb3af9
- (id)currentReminderAlertToneIdentifier;	// 0x35cb3771
// converted property getter: - (id)currentRingtoneIdentifier;	// 0x35cafe45
- (id)currentRingtoneName;	// 0x35cafe6d
- (id)currentSentMailToneIdentifier;	// 0x35cb356d
- (unsigned long)currentSentMailToneSoundID;	// 0x35cb3ab1
- (id)currentSentTweetToneIdentifier;	// 0x35cb381d
- (unsigned long)currentSentTweetToneSoundID;	// 0x35cb3bd1
- (unsigned long)currentTextToneSoundID;	// 0x35cb1ac5
- (void)dealloc;	// 0x35caf89d
- (id)defaultCalendarAlertToneIdentifier;	// 0x35cb3369
- (id)defaultFacebookPostToneIdentifier;	// 0x35cb33a5
- (id)defaultIdentifierForContext:(int)context;	// 0x35cb33b9
- (id)defaultNewMailToneIdentifier;	// 0x35cb332d
- (id)defaultNewVoicemailToneIdentifier;	// 0x35cb3355
- (id)defaultReminderAlertToneIdentifier;	// 0x35cb337d
- (id)defaultRingtoneIdentifier;	// 0x35cafe95
- (id)defaultRingtoneName;	// 0x35cafea9
- (id)defaultRingtonePath;	// 0x35cafee9
- (id)defaultSentMailToneIdentifier;	// 0x35cb3341
- (id)defaultSentTweetToneIdentifier;	// 0x35cb3391
- (id)defaultTextToneIdentifier;	// 0x35cb1a5d
- (id)defaultTextToneName;	// 0x35cb1a71
- (void)deleteAllSyncedData;	// 0x35cb2f2d
- (BOOL)deleteSyncedToneByPID:(id)pid;	// 0x35cb2461
- (id)deviceITunesRingtoneDirectory;	// 0x35cb0d61
- (id)deviceITunesRingtoneInformationPlist;	// 0x35cb0d85
- (unsigned)durationOfToneWithIdentifier:(id)identifier;	// 0x35cb09cd
- (BOOL)ensureDirectoryExists:(id)exists;	// 0x35cb2265
- (void)fixupMissingToneSettings;	// 0x35caf989
// converted property getter: - (BOOL)hasAdditionalTextTones;	// 0x35cb21ad
- (id)iTunesRingtoneDirectory;	// 0x35cb0dcd
- (id)iTunesToneForPID:(id)pid;	// 0x35cb2aa5
- (void)importTone:(id)tone metadata:(id)metadata completionBlock:(id)block;	// 0x35cb25cd
- (BOOL)insertPurchasedToneMetadata:(id)metadata filename:(id)filename;	// 0x35cb23f5
- (BOOL)insertSyncedToneMetadata:(id)metadata filename:(id)filename;	// 0x35cb2389
- (id)installedTones;	// 0x35cb31cd
- (BOOL)isAlertTone:(id)tone;	// 0x35cb098d
- (BOOL)isRingtonePurchased:(id)purchased;	// 0x35cb0959
- (BOOL)isTonePrivateWithIdentifier:(id)identifier;	// 0x35cb0a39
- (BOOL)isToneProtectedWithIdentifier:(id)identifier;	// 0x35cb0a05
- (BOOL)isValidToneIdentifier:(id)identifier;	// 0x35cb17f9
- (void)loadITunesRingtoneInfoPlistAtPath:(id)path;	// 0x35cafbc1
- (void)loadTextToneInfo;	// 0x35cb0e31
- (id)localizedNameWithIdentifier:(id)identifier;	// 0x35caff11
- (id)localizedRingtoneNameWithIdentifier:(id)identifier;	// 0x35caff69
- (id)newAVItemWithRingtoneIdentifier:(id)ringtoneIdentifier;	// 0x35cb0885
- (id)newMailPreferenceKeyForAccount:(id)account;	// 0x35cb347d
- (id)nullTextToneName;	// 0x35cb1a85
- (id)pathFromIdentifier:(id)identifier withPrefix:(id)prefix;	// 0x35caffcd
- (int)previewBehaviorForDefaultIdentifier:(id)defaultIdentifier;	// 0x35cb1bd5
- (unsigned long)previewSoundIDForTextToneIdentifier:(id)textToneIdentifier;	// 0x35cb1b91
- (void)removeImportedToneWithIdentifier:(id)identifier;	// 0x35cb28e1
- (void)removeNewMailToneForAccount:(id)account;	// 0x35cb3c61
- (id)rootDirectory;	// 0x35cb0d55
// converted property setter: - (void)setCurrentRingtoneIdentifier:(id)identifier;	// 0x35cb1a0d
- (void)setCurrentTextToneIdentifier:(id)identifier;	// 0x35cb19bd
- (void)setDelegate:(id)delegate;	// 0x35caf979
// converted property setter: - (void)setHasAdditionalTextTones:(BOOL)tones;	// 0x35cb21bd
- (BOOL)shouldShowAlarmSounds;	// 0x35caf975
- (BOOL)shouldShowRingtones;	// 0x35caf971
- (unsigned long)soundIDForTextToneIdentifier:(id)textToneIdentifier;	// 0x35cb1ca1
- (unsigned long)soundIDForTextToneIdentifier:(id)textToneIdentifier isValid:(BOOL *)valid;	// 0x35cb1cb5
- (unsigned long)soundIDForToneIdentifier:(id)toneIdentifier;	// 0x35cb1cc5
- (unsigned long)soundIDForToneIdentifier:(id)toneIdentifier isValid:(BOOL *)valid;	// 0x35cb1cd9
- (id)systemNewSoundDirectory;	// 0x35cb0e25
- (id)systemRingtoneDirectory;	// 0x35cb0df1
- (id)systemSoundDirectory;	// 0x35cb0e19
- (BOOL)toneWithIdentifierIsValid:(id)identifierIsValid;	// 0x35cb0809
- (BOOL)transferPurchasedToITunes:(id)itunes;	// 0x35cb31ed
@end

