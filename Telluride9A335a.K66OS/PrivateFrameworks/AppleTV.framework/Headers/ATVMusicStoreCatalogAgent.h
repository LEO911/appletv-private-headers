/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVCatalogAgent.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface ATVMusicStoreCatalogAgent : NSObject <ATVCatalogAgent> {
}
+ (void)_augmentStoreOffers:(id)offers purchaseOfferParams:(id)params;	// 0x340cbe9d
+ (id)_backgroundGradientImageForItem:(id)item;	// 0x340cf1dd
+ (id)_backgroundImageForItem:(id)item;	// 0x340cf1bd
+ (id)_backgroundImageForItem:(id)item imageName:(id)name;	// 0x340cf1fd
+ (CGSize)_backgroundImageSizeForItem:(id)item inset:(float *)inset;	// 0x340cf071
+ (void)_catalogControlRequestProcessed:(id)processed;	// 0x340cb1ed
+ (id)_catalogPageControlForItem:(id)item;	// 0x340cc79d
+ (BOOL)_checkForPurchases:(id)purchases metadata:(id)metadata userInfo:(id)info;	// 0x340cbc51
+ (void)_checkForPurchasesComplete:(id)purchasesComplete;	// 0x340cbd71
+ (id)_collectionControlsForPageItem:(id)pageItem requestedBy:(id)by dividerSeparated:(BOOL)separated;	// 0x340cda15
+ (id)_controlForItem:(id)item;	// 0x340cc2e1
+ (void)_controlForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x340cc6a9
+ (id)_controlForRequestParameters:(id)requestParameters identifier:(id)identifier merchant:(id)merchant;	// 0x340cc0e1
+ (id)_controlForURL:(id)url identifier:(id)identifier merchant:(id)merchant;	// 0x340cc269
+ (id)_createItemTypeMap;	// 0x340c8e09
+ (id)_firstControlOfType:(Class)type inArray:(id)array;	// 0x340cead5
+ (id)_formattedPageContentCountString:(id)string;	// 0x340ce429
+ (id)_headerControlsForPageItem:(id)pageItem;	// 0x340cdf1d
+ (id)_listPageForItem:(id)item;	// 0x340ccc4d
+ (id)_mediaTypeForStoreLink:(id)storeLink;	// 0x340cb635
+ (id)_mediaTypeForStoreMediaCollectionType:(id)storeMediaCollectionType;	// 0x340cb4b5
+ (id)_mediaTypeForStoreMediaType:(id)storeMediaType;	// 0x340cb2f5
+ (id)_moreInfoHeaderControlsForPageItem:(id)pageItem;	// 0x340ce139
+ (void)_playEventMediaAsset:(id)asset swapCatalogApplianceController:(BOOL)controller;	// 0x340cb96d
+ (void)_playVideoClip:(id)clip;	// 0x340cb69d
+ (void)_popToItemController:(id)itemController;	// 0x340cb2a1
+ (id)_roomDescriptionControlsForPageItem:(id)pageItem;	// 0x340ceb7d
+ (id)_roomPageContainerForItem:(id)item withScroller:(id)scroller;	// 0x340cd051
+ (id)_roomPageForItem:(id)item;	// 0x340ccded
+ (id)_scrollerControlsFromHeaderControls:(id)headerControls collectionControls:(id)controls;	// 0x340ce399
+ (id)_setupScroller;	// 0x340cca2d
+ (id)_supplementPageForItem:(id)item;	// 0x340ccba5
+ (id)_tabbedPageForItem:(id)item;	// 0x340cd499
+ (void)acquireItem:(id)item;	// 0x340c8321
+ (id)allLeafItemsForItem:(id)item;	// 0x340c9dc1
+ (void)augmentPageDictionaryWithPurchases:(id)purchases purchaseCheckResponse:(id)response;	// 0x340ca925
+ (id)catalogHandler;	// 0x340c8131
+ (void)checkForPurchases;	// 0x340c828d
+ (id)checkForPurchasesRequestForPageDictionary:(id)pageDictionary;	// 0x340ca401
+ (id)configureRelatedControlsFromControl:(id)control style:(int)style;	// 0x340ca1d1
+ (id)controlForItem:(id)item;	// 0x340c8df9
+ (void)controlForObject:(id)object;	// 0x340c8a75
+ (id)controlForObject:(id)object merchant:(id)merchant;	// 0x340c8ab5
+ (id)coverArtForItem:(id)item;	// 0x340c991d
+ (id)coverArtURLForItem:(id)item featured:(BOOL)featured thumbnail:(BOOL)thumbnail;	// 0x340c9b0d
+ (long)downloadItem:(id)item;	// 0x340c8599
+ (id)episodeArtURLForItem:(id)item;	// 0x340c9bfd
+ (void)initialize;	// 0x340c7e25
+ (BOOL)isItemFeatured:(id)featured;	// 0x340c9cb1
+ (BOOL)isItemOrdered:(id)ordered;	// 0x340c9cd9
+ (BOOL)isPurchaseAllowedForItem:(id)item;	// 0x340c8215
+ (BOOL)isTemplateParameterSet:(id)set forItem:(id)item;	// 0x340c9d01
+ (long)itemIDForItem:(id)item;	// 0x340c97e1
+ (int)itemType:(id)type;	// 0x340c9089
+ (id)mediaAssetForStoreOffer:(id)storeOffer;	// 0x340c9261
+ (id)mediaTypeForItem:(id)item;	// 0x340c91bd
+ (void)playItem:(id)item;	// 0x340ca0d9
+ (void)playStoreItem:(id)item;	// 0x340c9f6d
+ (id)plistFromURLDocument:(id)urldocument;	// 0x340ca145
+ (void)processResponseDocument:(id)document userInfo:(id)info;	// 0x340cada9
+ (void)registerClass:(Class)aClass withTemplateName:(id)templateName;	// 0x340c86b1
+ (long)repurchaseItem:(id)item context:(void *)context;	// 0x340c8509
+ (void)sendPingForItem:(id)item;	// 0x340c8805
+ (void)setDownloadFunction:(/*function-pointer*/ void *)function;	// 0x340c8301
+ (void)setPurchaseFunction:(/*function-pointer*/ void *)function;	// 0x340c82d1
+ (void)setRentalFunction:(/*function-pointer*/ void *)function;	// 0x340c82e1
+ (void)setRepurchaseFunction:(/*function-pointer*/ void *)function;	// 0x340c8311
+ (void)setSubscribeFunction:(/*function-pointer*/ void *)function;	// 0x340c82f1
+ (BOOL)showAllTitles:(id)titles;	// 0x340c9c61
+ (BOOL)showTitleAndSubtitle:(id)subtitle;	// 0x340c9c89
+ (BOOL)storeVersionIsCompatibileForPageDictionary:(id)pageDictionary redirectURL:(id *)url;	// 0x340c897d
+ (void)subscribeToItem:(id)item;	// 0x340c8579
@end

