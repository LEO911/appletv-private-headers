/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreBaseAppliance.h"


__attribute__((visibility("hidden")))
@interface MOVAppliance : ATVMusicStoreBaseAppliance {
	BOOL _wishlistCategoryEnabled;	// 8 = 0x8
}
+ (void)initialize;	// 0x2a041d
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x2a0539
- (void)_favoritesUpdated:(id)updated;	// 0x2a0cc9
- (id)applianceController;	// 0x2a0931
- (id)applianceSpecificControllerForIdentifier:(id)identifier args:(id)args;	// 0x2a0aa5
- (void)dealloc;	// 0x2a05fd
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x2a096d
- (id)loadCategories;	// 0x2a0695
- (id)localizedSearchTitle;	// 0x2a0ca9
- (int)noContentBRError;	// 0x2a0cb9
- (int)noRemoteContentBRError;	// 0x2a0cc1
- (BOOL)supportsPurchase;	// 0x2a068d
- (BOOL)supportsRental;	// 0x2a0691
- (id)topShelfController;	// 0x2a08f9
@end

