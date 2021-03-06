/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"
#import "BREventDelegate.h"

@class ATVPreferences, BRImageControl, BRCursorControl, ATVImage, NSMutableArray, BRTopShelfView, ATVMainMenuButton, ATVMainMenuButtonGrid, NSMutableDictionary, NSDictionary, NSArray, BRShimmerControl, BRControl, BRImageManager, ATVBackgroundTask;
@protocol ATVMainMenuControllerDelegate, BRTopShelfController, BRAppliance;

__attribute__((visibility("hidden")))
@interface ATVMainMenuController : BRViewController <BREventDelegate> {
	BRControl *_containerView;	// 104 = 0x68
	BRControl *_containerViewFocusedControl;	// 108 = 0x6c
	id<BRTopShelfController> _shelfController;	// 112 = 0x70
	BRImageControl *_shelfBackground;	// 116 = 0x74
	BRImageControl *_appsBackground;	// 120 = 0x78
	BRImageControl *_appsBackgroundShroud;	// 124 = 0x7c
	BRTopShelfView *_topShelfView;	// 128 = 0x80
	ATVMainMenuButton *_savedFocusedInternetAppButton;	// 132 = 0x84
	BOOL _shelfTransitionInFlight;	// 136 = 0x88
	BOOL _suppressShelfReloadFromFocusedAppliance;	// 137 = 0x89
	ATVMainMenuButtonGrid *_mainApplicationsGrid;	// 140 = 0x8c
	ATVMainMenuButtonGrid *_internetContentGrid;	// 144 = 0x90
	BRShimmerControl *_topDivider;	// 148 = 0x94
	BRControl *_internetContentFadeMask;	// 152 = 0x98
	id<ATVMainMenuControllerDelegate> _delegate;	// 156 = 0x9c
	BRCursorControl *_cursor;	// 160 = 0xa0
	ATVImage *_blackBrickImage;	// 164 = 0xa4
	id<BRAppliance> _focusedAppliance;	// 168 = 0xa8
	NSMutableDictionary *_shelfControllersByApplication;	// 172 = 0xac
	ATVBackgroundTask *_topShelfRefreshTask;	// 176 = 0xb0
	NSMutableArray *_changedMerchantIDs;	// 180 = 0xb4
	NSMutableArray *_changedAppliances;	// 184 = 0xb8
	ATVPreferences *_imageCachePrefs;	// 188 = 0xbc
	NSDictionary *_layoutInfo;	// 192 = 0xc0
	NSArray *_internetMerchants;	// 196 = 0xc4
	NSArray *_appliances;	// 200 = 0xc8
	id _focusedMerchant;	// 204 = 0xcc
}
@property(copy, nonatomic) NSArray *appliances;	// G=0xe0cd1; S=0xe0ce5; @synthesize=_appliances
@property(assign, nonatomic) id<ATVMainMenuControllerDelegate> delegate;	// G=0xe00c5; S=0xe00b5; 
@property(readonly, assign, nonatomic) id<BRAppliance> focusedAppliance;	// G=0xe00a5; 
@property(assign, nonatomic) id focusedMerchant;	// G=0xe0cf5; S=0xe0d05; @synthesize=_focusedMerchant
@property(readonly, assign, nonatomic) BRImageManager *imageManager;	// G=0xe0d15; 
@property(copy, nonatomic) NSArray *internetMerchants;	// G=0xe0cbd; S=0xdcac9; @synthesize=_internetMerchants
+ (BOOL)automaticallyNotifiesObserversOfInternetMerchants;	// 0xdcac5
+ (id)mainMenu;	// 0xdc491
- (id)init;	// 0xdc501
- (void)_animateContainerViewToPosition:(CGPoint)position;	// 0xde6c1
- (void)_arrangeMerchantsArray:(id)array;	// 0xe02c1
- (id)_blackBrickImage;	// 0xe0e0d
- (void)_cacheImageForAppliance:(id)appliance;	// 0xe1499
- (void)_cacheImageForMerchant:(id)merchant;	// 0xe1601
- (void)_coalescedUpdateImagesForChangedAppliances;	// 0xe1a91
- (void)_coalescedUpdateImagesForChangedMerchants;	// 0xe18bd
- (id)_extraInfoForAppliance:(id)appliance;	// 0xe11b9
- (void)_handleImageManagerImageUpdatedNotification:(id)notification;	// 0xe16ed
- (void)_handleParentalControlsChangedNotification:(id)notification;	// 0xdcce9
- (BOOL)_handleRemoteEvent:(id)event;	// 0xe0841
- (BOOL)_handleTouchEvent:(id)event;	// 0xe09bd
- (void)_handleWindowMaxBoundsChanged;	// 0xdd299
- (id)_identifierFromImageID:(id)imageID;	// 0xe13dd
- (id)_imageBaseNameFromAppliance:(id)appliance;	// 0xe1271
- (id)_imageForAppliance:(id)appliance;	// 0xe0f75
- (id)_imageForMerchant:(id)merchant;	// 0xe0e59
- (id)_imageNameFromAppliance:(id)appliance;	// 0xe12c5
- (id)_imageNameFromMerchant:(id)merchant;	// 0xe1181
- (id)_imageNameWithBaseName:(id)baseName;	// 0xe10d9
- (void)_installBottomEdgeFadeMask;	// 0xdf479
- (void)_installOrRemoveBottomEdgeFadeMaskAsNecessary;	// 0xdf375
- (void)_layoutContainerView;	// 0xdd6e9
- (void)_layoutViews;	// 0xdd859
- (id)_newBackgroundWithImageNamed:(id)imageNamed;	// 0xde095
- (id)_newBackgroundWithImageNamed:(id)imageNamed asContents:(BOOL)contents;	// 0xddfd5
- (id)_newInternetContentGrid;	// 0xde361
- (id)_newMainApplicationsGrid;	// 0xde0a9
- (id)_prefsVersionKeyFromName:(id)name;	// 0xe12fd
- (void)_pushControllerForApplianceOrMerchant:(id)applianceOrMerchant;	// 0xdcfcd
- (void)_refreshTopShelfControllers;	// 0xddf99
- (void)_reload;	// 0xdd1c1
- (void)_reloadTopShelf;	// 0xdf91d
- (void)_reloadTopShelfWithoutAnimating;	// 0xdf81d
- (void)_removeBottomEdgeFadeMask;	// 0xdf5f1
- (void)_saveVersion:(id)version forAppID:(id)appID;	// 0xe138d
- (void)_scrollApplicationsToVisible;	// 0xded81
- (void)_scrollShelfToVisible;	// 0xde7dd
- (void)_setupTopShelfView;	// 0xdde19
- (void)_updateCachedApplianceImages;	// 0xdcdc5
- (void)_updateCachedMerchantImages;	// 0xdccf9
- (id)_versionForAppID:(id)appID;	// 0xe1351
- (id)accessibilityLabel;	// 0xe0b39
- (id)accessibilityScreenContent;	// 0xe0ae9
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0xdfcd5
// declared property getter: - (id)appliances;	// 0xe0cd1
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0xe03e1
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0xe0ae1
- (BOOL)canBeRemovedFromStack;	// 0xe0ae5
- (void)controlWasActivated;	// 0xdca6d
- (void)dealloc;	// 0xdc8c1
// declared property getter: - (id)delegate;	// 0xe00c5
- (void)focusApplianceWithIdentifier:(id)identifier;	// 0xe00d5
// declared property getter: - (id)focusedAppliance;	// 0xe00a5
// declared property getter: - (id)focusedMerchant;	// 0xe0cf5
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0xe0b61
- (void)gridViewDidBeginEditing:(id)gridView;	// 0xe0bd9
- (void)gridViewDidEndEditing:(id)gridView;	// 0xe0c0d
- (void)handleInternetGridWillScroll;	// 0xde665
- (void)handleRootCollectionChanged;	// 0xdfd2d
// declared property getter: - (id)imageManager;	// 0xe0d15
// declared property getter: - (id)internetMerchants;	// 0xe0cbd
- (void)merchantChanged:(id)changed;	// 0xdfe75
// declared property setter: - (void)setAppliances:(id)appliances;	// 0xe0ce5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xe00b5
- (void)setFocusedAppliance:(id)appliance;	// 0xdffb5
// declared property setter: - (void)setFocusedMerchant:(id)merchant;	// 0xe0d05
// declared property setter: - (void)setInternetMerchants:(id)merchants;	// 0xdcac9
- (id)topShelfControllerForApp:(id)app;	// 0xe01d9
- (void)updateBoundAvailableAppliances;	// 0xdce91
- (void)updateBoundFocusedControlOfContainerView;	// 0xdcf1d
- (void)updateBoundInternetMerchants;	// 0xdcc55
- (void)updateBoundMusicStoreMerchantInfo;	// 0xdcf0d
- (id)view;	// 0xdd319
@end

