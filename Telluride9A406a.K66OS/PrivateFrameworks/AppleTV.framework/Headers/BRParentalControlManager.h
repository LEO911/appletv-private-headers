/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@protocol BRRatingInfoDatabase;

@interface BRParentalControlManager : BRSingleton {
@private
	id<BRRatingInfoDatabase> _ratingInfoDatabase;	// 4 = 0x4
}
@property(assign) BOOL accessControlEnabled;	// G=0x33107749; S=0x3310768d; converted property
@property(assign) int accessModeForPurchase;	// G=0x3310864d; S=0x33108585; converted property
@property(retain) id defaultRatingSystemID;	// G=0x331078d1; S=0x33107889; converted property
@property(retain) id pin;	// G=0x33107845; S=0x33107789; converted property
@property(retain) id ratingDatabase;	// G=0x33107955; S=0x33107915; converted property
+ (void)setSingleton:(id)singleton;	// 0x33107651
+ (id)singleton;	// 0x33107641
+ (BOOL)storeAccessRestricted;	// 0x3310897d
- (id)init;	// 0x33107661
- (int)_accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier isSet:(BOOL *)set;	// 0x33107e85
// converted property getter: - (BOOL)accessControlEnabled;	// 0x33107749
- (int)accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x331080a9
- (int)accessModeForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank;	// 0x33108379
// converted property getter: - (int)accessModeForPurchase;	// 0x3310864d
- (void)clearAccessModeforAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x33107965
- (int)computeAccessModeForAppliance:(id)appliance withCategoryIdentifier:(id)categoryIdentifier;	// 0x33108b69
- (int)computeAccessModeForAsset:(id)asset;	// 0x331089d5
- (int)computeAccessModeForPurchase;	// 0x33108ab9
- (int)computeAccessModeForPurchaseWithMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank isExplicit:(BOOL)anExplicit;	// 0x33108af1
// converted property getter: - (id)defaultRatingSystemID;	// 0x331078d1
- (int)explicitAccessModeForMediaType:(id)mediaType;	// 0x33108845
- (BOOL)hasAccessModeBeenSetForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x3310807d
// converted property getter: - (id)pin;	// 0x33107845
// converted property getter: - (id)ratingDatabase;	// 0x33107955
// converted property setter: - (void)setAccessControlEnabled:(BOOL)enabled;	// 0x3310768d
- (void)setAccessMode:(int)mode forAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x33107b5d
- (void)setAccessMode:(int)mode forMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withThresholdRank:(id)thresholdRank;	// 0x331080cd
// converted property setter: - (void)setAccessModeForPurchase:(int)purchase;	// 0x33108585
// converted property setter: - (void)setDefaultRatingSystemID:(id)anId;	// 0x33107889
- (void)setExplicitAccessMode:(int)mode forMediaType:(id)mediaType;	// 0x331086a1
// converted property setter: - (void)setPin:(id)pin;	// 0x33107789
// converted property setter: - (void)setRatingDatabase:(id)database;	// 0x33107915
- (id)thresholdForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID;	// 0x33108ba9
@end

