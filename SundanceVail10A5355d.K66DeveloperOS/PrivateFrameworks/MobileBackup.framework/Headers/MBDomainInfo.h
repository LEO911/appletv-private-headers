/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "MobileBackup-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MBDomainInfo : NSObject <NSCopying, NSCoding> {
	BOOL _enabled;	// 4 = 0x4
	NSString *_domainName;	// 8 = 0x8
	BOOL _restricted;	// 12 = 0xc
	BOOL _systemApp;	// 13 = 0xd
	unsigned long long _remoteSize;	// 16 = 0x10
	unsigned long long _localSize;	// 24 = 0x18
}
@property(readonly, assign, nonatomic, getter=isAppDomain) BOOL appDomain;	// G=0x30463a05; 
@property(readonly, assign, nonatomic) NSString *bundleID;	// G=0x30463aa5; 
@property(readonly, assign, nonatomic, getter=isCameraRollDomain) BOOL cameraRollDomain;	// G=0x30463a75; 
@property(retain, nonatomic) NSString *domainName;	// G=0x30463b21; S=0x30463b31; @synthesize=_domainName
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30463b01; S=0x30463b11; @synthesize=_enabled
@property(assign, nonatomic) unsigned long long localSize;	// G=0x30463bad; S=0x30463bc5; @synthesize=_localSize
@property(assign, nonatomic) unsigned long long remoteSize;	// G=0x30463b81; S=0x30463b99; @synthesize=_remoteSize
@property(assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x30463b41; S=0x30463b51; @synthesize=_restricted
@property(readonly, assign, nonatomic) unsigned long long size;	// G=0x30463ad1; 
@property(assign, nonatomic, getter=isSystemApp) BOOL systemApp;	// G=0x30463b61; S=0x30463b71; @synthesize=_systemApp
+ (id)domainInfoWithName:(id)name systemApp:(BOOL)app remoteSize:(unsigned long long)size localSize:(unsigned long long)size4 enabled:(BOOL)enabled restricted:(BOOL)restricted;	// 0x30463465
+ (id)domainNameForBundleID:(id)bundleID;	// 0x30463449
- (id)initWithCoder:(id)coder;	// 0x3046359d
- (id)initWithDomainName:(id)domainName systemApp:(BOOL)app remoteSize:(unsigned long long)size localSize:(unsigned long long)size4 enabled:(BOOL)enabled restricted:(BOOL)restricted;	// 0x304634d5
// declared property getter: - (id)bundleID;	// 0x30463aa5
- (id)copyWithZone:(NSZone *)zone;	// 0x3046388d
- (void)dealloc;	// 0x30463841
- (id)description;	// 0x3046393d
// declared property getter: - (id)domainName;	// 0x30463b21
- (void)encodeWithCoder:(id)coder;	// 0x304636f9
// declared property getter: - (BOOL)isAppDomain;	// 0x30463a05
// declared property getter: - (BOOL)isCameraRollDomain;	// 0x30463a75
// declared property getter: - (BOOL)isEnabled;	// 0x30463b01
// declared property getter: - (BOOL)isRestricted;	// 0x30463b41
// declared property getter: - (BOOL)isSystemApp;	// 0x30463b61
// declared property getter: - (unsigned long long)localSize;	// 0x30463bad
// declared property getter: - (unsigned long long)remoteSize;	// 0x30463b81
// declared property setter: - (void)setDomainName:(id)name;	// 0x30463b31
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30463b11
// declared property setter: - (void)setLocalSize:(unsigned long long)size;	// 0x30463bc5
// declared property setter: - (void)setRemoteSize:(unsigned long long)size;	// 0x30463b99
// declared property setter: - (void)setRestricted:(BOOL)restricted;	// 0x30463b51
// declared property setter: - (void)setSystemApp:(BOOL)app;	// 0x30463b71
// declared property getter: - (unsigned long long)size;	// 0x30463ad1
@end

