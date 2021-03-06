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
+ (void)initialize;	// 0x3632f5
+ (void)setSingleton:(id)singleton;	// 0x3633c5
+ (id)singleton;	// 0x3633b5
- (id)init;	// 0x3633d5
- (void)_buildFeatureCodeLookupTable;	// 0x364191
- (id)_featureNameForCode:(id)code;	// 0x363ce9
- (void)_loadSavedCodes;	// 0x363d91
- (void)_markFeatureNamed:(id)named enabled:(BOOL)enabled inTable:(id)table;	// 0x363bdd
- (id)_merchantWithFeatureCode:(id)featureCode;	// 0x3643c1
- (void)_notifyEnabledStateChangedForFeatureNamed:(id)featureNamed;	// 0x363b55
- (void)_saveFeatureCodes:(id)codes;	// 0x36405d
- (id)allFeatures;	// 0x3636a9
- (id)availableFeatures;	// 0x3637e1
- (void)dealloc;	// 0x3634a9
- (void)disableFeatureNamed:(id)named;	// 0x36354d
- (void)enableFeatureNamed:(id)named;	// 0x363521
- (BOOL)isFeatureEnabled:(id)enabled;	// 0x363579
- (void)resetFeatures;	// 0x3638d5
- (void)toggleSettingForCode:(id)code;	// 0x36398d
@end

