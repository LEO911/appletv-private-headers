/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSLock, NSMutableDictionary;

@interface BRFeatureManager : BRSingleton {
@private
	NSMutableDictionary *_featureDatabase;	// 4 = 0x4
	NSMutableDictionary *_featureCodeLookupTable;	// 8 = 0x8
	NSLock *_featureLock;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x32917145
+ (id)singleton;	// 0x32917065
- (id)init;	// 0x32917071
- (void)_buildFeatureCodeLookupTable;	// 0x329b63ad
- (id)_featureNameForCode:(id)code;	// 0x329b69d5
- (void)_loadSavedCodes;	// 0x329b6801
- (void)_saveFeatureCodes;	// 0x329b6605
- (id)availableFeatures;	// 0x329b6ad9
- (void)dealloc;	// 0x329b6d51
- (void)disableFeatureNamed:(id)named;	// 0x329b6be9
- (void)enableFeatureNamed:(id)named;	// 0x32917151
- (BOOL)isFeatureEnabled:(id)enabled;	// 0x3291d72d
- (void)resetFeatures;	// 0x329b6a3d
- (void)toggleSettingForCode:(id)code;	// 0x329b6dbd
@end

