/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library
#import "Preferences-Structs.h"


@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {
	SCDynamicStoreRef _prefs;	// 4 = 0x4
	CFStringRef _wifiKey;	// 8 = 0x8
	CFStringRef _wifiInterface;	// 12 = 0xc
	CFStringRef _tetheringLink;	// 16 = 0x10
}
+ (void)releaseSharedInstance;	// 0x34db2a21
+ (id)sharedInstance;	// 0x34db29d9
+ (BOOL)wifiEnabled;	// 0x34db2a4d
- (id)init;	// 0x34db33ed
- (id)_wifiNameWithState:(id)state;	// 0x34db3219
- (id)_wifiPowerWithState:(id)state;	// 0x34db3149
- (id)_wifiTetheringWithState:(id)state;	// 0x34db30cd
- (void)dealloc;	// 0x34db3471
- (void)findKeysAirPortState:(id *)state andTetheringState:(id *)state2;	// 0x34db2aa9
- (id)wifiConfig;	// 0x34db3235
@end
