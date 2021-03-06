/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSDictionary, NSString, NSArray;

@interface SAAppInfo : SADomainObject {
}
@property(copy, nonatomic) NSString *appId;	// G=0x304ff1b1; S=0x304ff1cd; 
@property(copy, nonatomic) NSString *appName;	// G=0x304ff21d; S=0x304ff239; 
@property(copy, nonatomic) NSDictionary *appNameMap;	// G=0x304ff289; S=0x304ff2a5; 
@property(copy, nonatomic) NSString *appVersion;	// G=0x304ff2f5; S=0x304ff311; 
@property(copy, nonatomic) NSString *displayAppName;	// G=0x304ff361; S=0x304ff37d; 
@property(copy, nonatomic) NSDictionary *displayAppNameMap;	// G=0x304ff3cd; S=0x304ff3e9; 
@property(copy, nonatomic) NSString *providerName;	// G=0x304ff439; S=0x304ff455; 
@property(copy, nonatomic) NSString *spotlightName;	// G=0x304ff4a5; S=0x304ff4c1; 
@property(copy, nonatomic) NSDictionary *spotlightNameMap;	// G=0x304ff511; S=0x304ff52d; 
@property(copy, nonatomic) NSArray *supportedCommands;	// G=0x304ff57d; S=0x304ff5f9; 
@property(copy, nonatomic) NSArray *supportedSchemes;	// G=0x304ff661; S=0x304ff67d; 
+ (id)appInfo;	// 0x304ff121
+ (id)appInfoWithDictionary:(id)dictionary context:(id)context;	// 0x304ff165
// declared property getter: - (id)appId;	// 0x304ff1b1
// declared property getter: - (id)appName;	// 0x304ff21d
// declared property getter: - (id)appNameMap;	// 0x304ff289
// declared property getter: - (id)appVersion;	// 0x304ff2f5
// declared property getter: - (id)displayAppName;	// 0x304ff361
// declared property getter: - (id)displayAppNameMap;	// 0x304ff3cd
- (id)encodedClassName;	// 0x304ff115
- (id)groupIdentifier;	// 0x304ff105
// declared property getter: - (id)providerName;	// 0x304ff439
// declared property setter: - (void)setAppId:(id)anId;	// 0x304ff1cd
// declared property setter: - (void)setAppName:(id)name;	// 0x304ff239
// declared property setter: - (void)setAppNameMap:(id)map;	// 0x304ff2a5
// declared property setter: - (void)setAppVersion:(id)version;	// 0x304ff311
// declared property setter: - (void)setDisplayAppName:(id)name;	// 0x304ff37d
// declared property setter: - (void)setDisplayAppNameMap:(id)map;	// 0x304ff3e9
// declared property setter: - (void)setProviderName:(id)name;	// 0x304ff455
// declared property setter: - (void)setSpotlightName:(id)name;	// 0x304ff4c1
// declared property setter: - (void)setSpotlightNameMap:(id)map;	// 0x304ff52d
// declared property setter: - (void)setSupportedCommands:(id)commands;	// 0x304ff5f9
// declared property setter: - (void)setSupportedSchemes:(id)schemes;	// 0x304ff67d
// declared property getter: - (id)spotlightName;	// 0x304ff4a5
// declared property getter: - (id)spotlightNameMap;	// 0x304ff511
// declared property getter: - (id)supportedCommands;	// 0x304ff57d
// declared property getter: - (id)supportedSchemes;	// 0x304ff661
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x304ff6cd
@end

