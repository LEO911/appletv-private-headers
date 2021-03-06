/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import "SyncedDefaults-Structs.h"
#import <NSObject.h> // Unknown library

@class SYDClient, NSMutableDictionary;

@interface SYDRemotePreferencesSource : NSObject {
@private
	long _generationCount;	// 4 = 0x4
	long _lastGenerationFromDisk;	// 8 = 0x8
	CFStringRef preferenceID;	// 12 = 0xc
	CFURLRef urlOnDisk;	// 16 = 0x10
	CFDictionaryRef cache;	// 20 = 0x14
	long long storageChangeCount;	// 24 = 0x18
	long long initialSyncChangeCount;	// 32 = 0x20
	unsigned char isInitialSync;	// 40 = 0x28
	CFSetRef dirtyKeys;	// 44 = 0x2c
	SYDClient *client;	// 48 = 0x30
	CFDictionaryRef configurationDictionary;	// 52 = 0x34
	NSMutableDictionary *externalChanges;	// 56 = 0x38
	id registrationBlock;	// 60 = 0x3c
}
@property(readonly, assign) long generationCount;	// G=0x333f1a15; converted property
@property(readonly, assign) unsigned char isInitialSync;	// G=0x333f14a5; converted property
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;	// 0x333f1cd1
+ (id)SYDRemotePreferencesSourceDidChangeNotification;	// 0x333f1cc5
+ (void)initialize;	// 0x333effc9
+ (void)noteAccountChanges:(id)changes;	// 0x333f1ea5
+ (void)resetAllApplicationsWithCompletionHandler:(id)completionHandler;	// 0x333f1cdd
- (id)initWithApplicationID:(CFStringRef)applicationID shared:(BOOL)shared;	// 0x333f0421
- (id)initWithApplicationID:(CFStringRef)applicationID storeID:(CFStringRef)anId shared:(BOOL)shared;	// 0x333f0445
- (id)initWithApplicationID:(CFStringRef)applicationID storeID:(CFStringRef)anId shared:(BOOL)shared additionalSource:(BOOL)source;	// 0x333f0469
- (void)_cachePlistFromDisk;	// 0x333f0a69
- (void)_storeConfiguration:(CFDictionaryRef)configuration;	// 0x333f0011
- (long)configurationValueForKey:(CFStringRef)key;	// 0x333f01a1
- (CFDictionaryRef)copyConfigurationDictionary;	// 0x333f00e5
- (CFDictionaryRef)copyDictionary;	// 0x333f18e1
- (id)copyExternalChangesWithChangeCount:(long long *)changeCount;	// 0x333f14e1
- (CFArrayRef)copyKeyList;	// 0x333f1865
- (void)dealloc;	// 0x333f06d5
- (void)discardExternalChangesForChangeCount:(long long)changeCount;	// 0x333f17f5
- (void)finalize;	// 0x333f07c1
// converted property getter: - (long)generationCount;	// 0x333f1a15
- (void *)getValueForKey:(CFStringRef)key;	// 0x333f087d
- (unsigned char)hasExternalChanges;	// 0x333f14b5
// converted property getter: - (unsigned char)isInitialSync;	// 0x333f14a5
- (long)maximumDataLengthPerKey;	// 0x333f03e9
- (long)maximumKeyCount;	// 0x333f03b1
- (long)maximumKeyLength;	// 0x333f03cd
- (long)maximumTotalDataLength;	// 0x333f0405
- (void)registerForSynchronizedDefaults;	// 0x333f1a25
- (void)scheduleRemoteSynchronization;	// 0x333f10cd
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x333f08c9
- (unsigned char)synchronize;	// 0x333f1171
- (unsigned char)synchronizeForced:(unsigned char)forced;	// 0x333f1189
- (void)unregisterForSynchronizedDefaults;	// 0x333f1bc9
- (void)updateConfiguration;	// 0x333f1c11
@end

