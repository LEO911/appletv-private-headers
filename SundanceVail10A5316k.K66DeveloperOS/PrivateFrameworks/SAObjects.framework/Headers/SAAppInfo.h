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
@property(copy, nonatomic) NSString *appId;	// G=0x32f5e125; S=0x32f5e141; 
@property(copy, nonatomic) NSString *appName;	// G=0x32f5e191; S=0x32f5e1ad; 
@property(copy, nonatomic) NSDictionary *appNameMap;	// G=0x32f5e1fd; S=0x32f5e219; 
@property(copy, nonatomic) NSString *appVersion;	// G=0x32f5e269; S=0x32f5e285; 
@property(copy, nonatomic) NSString *displayAppName;	// G=0x32f5e2d5; S=0x32f5e2f1; 
@property(copy, nonatomic) NSDictionary *displayAppNameMap;	// G=0x32f5e341; S=0x32f5e35d; 
@property(copy, nonatomic) NSString *providerName;	// G=0x32f5e3ad; S=0x32f5e3c9; 
@property(copy, nonatomic) NSString *spotlightName;	// G=0x32f5e419; S=0x32f5e435; 
@property(copy, nonatomic) NSDictionary *spotlightNameMap;	// G=0x32f5e485; S=0x32f5e4a1; 
@property(copy, nonatomic) NSArray *supportedCommands;	// G=0x32f5e4f1; S=0x32f5e56d; 
@property(copy, nonatomic) NSArray *supportedSchemes;	// G=0x32f5e5d5; S=0x32f5e5f1; 
+ (id)appInfo;	// 0x32f5e095
+ (id)appInfoWithDictionary:(id)dictionary context:(id)context;	// 0x32f5e0d9
// declared property getter: - (id)appId;	// 0x32f5e125
// declared property getter: - (id)appName;	// 0x32f5e191
// declared property getter: - (id)appNameMap;	// 0x32f5e1fd
// declared property getter: - (id)appVersion;	// 0x32f5e269
// declared property getter: - (id)displayAppName;	// 0x32f5e2d5
// declared property getter: - (id)displayAppNameMap;	// 0x32f5e341
- (id)encodedClassName;	// 0x32f5e089
- (id)groupIdentifier;	// 0x32f5e079
// declared property getter: - (id)providerName;	// 0x32f5e3ad
// declared property setter: - (void)setAppId:(id)anId;	// 0x32f5e141
// declared property setter: - (void)setAppName:(id)name;	// 0x32f5e1ad
// declared property setter: - (void)setAppNameMap:(id)map;	// 0x32f5e219
// declared property setter: - (void)setAppVersion:(id)version;	// 0x32f5e285
// declared property setter: - (void)setDisplayAppName:(id)name;	// 0x32f5e2f1
// declared property setter: - (void)setDisplayAppNameMap:(id)map;	// 0x32f5e35d
// declared property setter: - (void)setProviderName:(id)name;	// 0x32f5e3c9
// declared property setter: - (void)setSpotlightName:(id)name;	// 0x32f5e435
// declared property setter: - (void)setSpotlightNameMap:(id)map;	// 0x32f5e4a1
// declared property setter: - (void)setSupportedCommands:(id)commands;	// 0x32f5e56d
// declared property setter: - (void)setSupportedSchemes:(id)schemes;	// 0x32f5e5f1
// declared property getter: - (id)spotlightName;	// 0x32f5e419
// declared property getter: - (id)spotlightNameMap;	// 0x32f5e485
// declared property getter: - (id)supportedCommands;	// 0x32f5e4f1
// declared property getter: - (id)supportedSchemes;	// 0x32f5e5d5
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f5e641
@end
