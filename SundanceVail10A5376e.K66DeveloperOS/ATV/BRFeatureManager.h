/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRFeatureManager : BRSingleton {
	NSMutableDictionary *_featureDatabase;	// 4 = 0x4
	NSMutableDictionary *_featureDatabaseOverrides;	// 8 = 0x8
	NSMutableDictionary *_featureCodeLookupTable;	// 12 = 0xc
}
+ (void)initialize;	// 0x3509f5
+ (void)setSingleton:(id)singleton;	// 0x350ac5
+ (id)singleton;	// 0x350ab5
- (id)init;	// 0x350ad5
- (void)_buildFeatureCodeLookupTable;	// 0x351891
- (id)_featureNameForCode:(id)code;	// 0x3513e9
- (void)_loadSavedCodes;	// 0x351491
- (void)_markFeatureNamed:(id)named enabled:(BOOL)enabled inTable:(id)table;	// 0x3512dd
- (id)_merchantWithFeatureCode:(id)featureCode;	// 0x351b01
- (void)_notifyEnabledStateChangedForFeatureNamed:(id)featureNamed;	// 0x351255
- (void)_saveFeatureCodes:(id)codes;	// 0x35175d
- (id)allFeatures;	// 0x350da9
- (id)availableFeatures;	// 0x350ee1
- (void)dealloc;	// 0x350ba9
- (void)disableFeatureNamed:(id)named;	// 0x350c4d
- (void)enableFeatureNamed:(id)named;	// 0x350c21
- (BOOL)isFeatureEnabled:(id)enabled;	// 0x350c79
- (void)resetFeatures;	// 0x350fd5
- (void)toggleSettingForCode:(id)code;	// 0x35108d
@end
