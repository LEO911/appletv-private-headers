/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SAUIAddViews, NSDictionary, NSString, NSURL, SAUIImageResource;

@interface SAUIAppPunchOut : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAUIAddViews *alternativePunchOut;	// G=0x3254d6f1; S=0x3254d745; 
@property(copy, nonatomic) NSString *appDisplayName;	// G=0x3254d781; S=0x3254d79d; 
@property(retain, nonatomic) SAUIImageResource *appIcon;	// G=0x3254d7ed; S=0x3254d841; 
@property(copy, nonatomic) NSDictionary *appIconMap;	// G=0x3254d87d; S=0x3254d8f9; 
@property(assign, nonatomic) BOOL appInstalled;	// G=0x3254d961; S=0x3254d9d9; 
@property(copy, nonatomic) NSURL *appStoreUri;	// G=0x3254da1d; S=0x3254da99; 
@property(copy, nonatomic) NSString *bundleId;	// G=0x3254daf9; S=0x3254db15; 
@property(copy, nonatomic) NSString *providerId;	// G=0x3254db65; S=0x3254db81; 
@property(copy, nonatomic) NSString *punchOutName;	// G=0x3254dbd1; S=0x3254dbed; 
@property(copy, nonatomic) NSURL *punchOutUri;	// G=0x3254dc3d; S=0x3254dcb9; 
+ (id)appPunchOut;	// 0x3254d661
+ (id)appPunchOutWithDictionary:(id)dictionary context:(id)context;	// 0x3254d6a5
// declared property getter: - (id)alternativePunchOut;	// 0x3254d6f1
// declared property getter: - (id)appDisplayName;	// 0x3254d781
// declared property getter: - (id)appIcon;	// 0x3254d7ed
// declared property getter: - (id)appIconMap;	// 0x3254d87d
// declared property getter: - (BOOL)appInstalled;	// 0x3254d961
// declared property getter: - (id)appStoreUri;	// 0x3254da1d
// declared property getter: - (id)bundleId;	// 0x3254daf9
- (id)encodedClassName;	// 0x3254d655
- (id)groupIdentifier;	// 0x3254d645
// declared property getter: - (id)providerId;	// 0x3254db65
// declared property getter: - (id)punchOutName;	// 0x3254dbd1
// declared property getter: - (id)punchOutUri;	// 0x3254dc3d
- (BOOL)requiresResponse;	// 0x3254dd19
// declared property setter: - (void)setAlternativePunchOut:(id)anOut;	// 0x3254d745
// declared property setter: - (void)setAppDisplayName:(id)name;	// 0x3254d79d
// declared property setter: - (void)setAppIcon:(id)icon;	// 0x3254d841
// declared property setter: - (void)setAppIconMap:(id)map;	// 0x3254d8f9
// declared property setter: - (void)setAppInstalled:(BOOL)installed;	// 0x3254d9d9
// declared property setter: - (void)setAppStoreUri:(id)uri;	// 0x3254da99
// declared property setter: - (void)setBundleId:(id)anId;	// 0x3254db15
// declared property setter: - (void)setProviderId:(id)anId;	// 0x3254db81
// declared property setter: - (void)setPunchOutName:(id)name;	// 0x3254dbed
// declared property setter: - (void)setPunchOutUri:(id)uri;	// 0x3254dcb9
@end

