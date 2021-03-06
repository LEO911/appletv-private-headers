/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@protocol BRRatingInfoDatabase;

__attribute__((visibility("hidden")))
@interface BRParentalControlManager : BRSingleton {
	id<BRRatingInfoDatabase> _ratingInfoDatabase;	// 4 = 0x4
}
@property(assign) BOOL accessControlEnabled;	// G=0x339a51; S=0x339995; converted property
@property(assign) int accessModeForPurchase;	// G=0x33a955; S=0x33a885; converted property
@property(retain) id defaultRatingSystemID;	// G=0x339bd9; S=0x339b91; converted property
@property(retain) id pin;	// G=0x339b4d; S=0x339a91; converted property
@property(retain) id ratingDatabase;	// G=0x339c59; S=0x339c1d; converted property
+ (void)setSingleton:(id)singleton;	// 0x339959
+ (id)singleton;	// 0x339949
+ (BOOL)storeAccessRestricted;	// 0x33ac8d
- (id)init;	// 0x339969
- (int)_accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier isSet:(BOOL *)set;	// 0x33a175
- (void)_delayedNotifyApplianceAccessChanged;	// 0x33a131
// converted property getter: - (BOOL)accessControlEnabled;	// 0x339a51
- (int)accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x33a3d5
- (int)accessModeForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank;	// 0x33a689
- (int)accessModeForMerchantIdentifier:(id)merchantIdentifier;	// 0x33a37d
// converted property getter: - (int)accessModeForPurchase;	// 0x33a955
- (void)clearAccessModeforAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x339c69
- (int)computeAccessModeForAppliance:(id)appliance withCategoryIdentifier:(id)categoryIdentifier;	// 0x33ae89
- (int)computeAccessModeForAsset:(id)asset;	// 0x33ace9
- (int)computeAccessModeForPurchase;	// 0x33add5
- (int)computeAccessModeForPurchaseWithMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank isExplicit:(BOOL)anExplicit;	// 0x33ae0d
// converted property getter: - (id)defaultRatingSystemID;	// 0x339bd9
- (int)explicitAccessModeForMediaType:(id)mediaType;	// 0x33ab41
- (BOOL)hasAccessModeBeenSetForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x33a34d
// converted property getter: - (id)pin;	// 0x339b4d
// converted property getter: - (id)ratingDatabase;	// 0x339c59
// converted property setter: - (void)setAccessControlEnabled:(BOOL)enabled;	// 0x339995
- (void)setAccessMode:(int)mode forAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x339e3d
- (void)setAccessMode:(int)mode forMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withThresholdRank:(id)thresholdRank;	// 0x33a3f9
// converted property setter: - (void)setAccessModeForPurchase:(int)purchase;	// 0x33a885
// converted property setter: - (void)setDefaultRatingSystemID:(id)anId;	// 0x339b91
- (void)setExplicitAccessMode:(int)mode forMediaType:(id)mediaType;	// 0x33a9a9
// converted property setter: - (void)setPin:(id)pin;	// 0x339a91
// converted property setter: - (void)setRatingDatabase:(id)database;	// 0x339c1d
- (id)thresholdForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID;	// 0x33aec9
@end

