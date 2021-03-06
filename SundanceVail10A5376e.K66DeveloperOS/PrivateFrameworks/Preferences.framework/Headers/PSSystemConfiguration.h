/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library
#import "Preferences-Structs.h"


@interface PSSystemConfiguration : NSObject {
	SCPreferencesRef _prefs;	// 4 = 0x4
}
+ (void)releaseSharedInstance;	// 0x35e12df9
+ (id)sharedInstance;	// 0x35e12db1
- (void)cleanupPrefs;	// 0x35e12eed
- (CFStringRef)dataServiceID;	// 0x35e12f11
- (void)dealloc;	// 0x35e12e25
- (CFStringRef)getServiceIDForPDPContext:(unsigned)pdpcontext;	// 0x35e13141
- (id)interfaceConfigurationValueForKey:(CFStringRef)key serviceID:(CFStringRef)anId;	// 0x35e1326d
- (id)protocolConfiguration:(CFStringRef)configuration serviceID:(CFStringRef)anId;	// 0x35e13479
- (id)protocolConfigurationValueForKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;	// 0x35e13601
- (void)setInterfaceConfigurationValue:(id)value forKey:(CFStringRef)key serviceID:(CFStringRef)anId;	// 0x35e13315
- (void)setProtocolConfiguration:(id)configuration protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;	// 0x35e1351d
- (void)setProtocolConfigurationValue:(id)value forKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;	// 0x35e136b9
- (unsigned char)synchronizeForWriting:(BOOL)writing;	// 0x35e12e69
- (CFStringRef)voicemailServiceID;	// 0x35e13029
@end

