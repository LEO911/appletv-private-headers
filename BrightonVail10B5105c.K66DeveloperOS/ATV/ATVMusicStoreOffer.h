/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOffer : XXUnknownSuperclass {
	NSString *_storeOfferType;	// 4 = 0x4
	int _offerCategory;	// 8 = 0x8
	NSDictionary *_storeOfferInfo;	// 12 = 0xc
}
@property(readonly, assign) int offerCategory;	// G=0x1fe4f5; converted property
@property(readonly, retain) NSString *storeOfferType;	// G=0x1fe4e5; converted property
+ (void)_swizzlePreviewsToSD:(id)sd;	// 0x1ff2c9
+ (BOOL)anyOfferHasDigitalExtras:(id)extras;	// 0x1fe1bd
+ (id)normalizeOffersDictionary:(id)dictionary;	// 0x1fda85
+ (id)normalizeOffersDictionary:(id)dictionary preferHD:(BOOL)hd;	// 0x1fdad5
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x1fddc1
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary preferHD:(BOOL)hd;	// 0x1fde11
+ (id)priceRangeFromStoreOffers:(id)storeOffers;	// 0x1fe035
+ (id)priceRangeFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x1fe18d
+ (id)primaryOfferFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x1fdf95
+ (id)redownloadOffersDictionary:(id)dictionary;	// 0x1fd98d
+ (id)storeOfferFromDictionary:(id)dictionary forType:(id)type;	// 0x1fdfe9
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary forType:(id)type;	// 0x1fe21d
- (id)_flavorForPlaybackResolution:(int)playbackResolution;	// 0x1ff1bd
- (id)_storeOfferObjectForKey:(id)key;	// 0x1ff229
- (id)_storeOfferObjectForKey:(id)key playbackResolution:(int)resolution;	// 0x1ff279
- (id)actionDisplayName;	// 0x1fec25
- (id)dateAvailable;	// 0x1fe971
- (void)dealloc;	// 0x1fe481
- (id)dolbyDigitalLanguages;	// 0x1fecd1
- (id)downloadURL;	// 0x1fe9e5
- (long)duration;	// 0x1fe521
- (id)fileSize;	// 0x1fe641
- (BOOL)hasDateAvailable;	// 0x1fe929
- (BOOL)hasDigitalExtras;	// 0x1febcd
- (BOOL)hasDownload;	// 0x1fe99d
- (BOOL)hasPreview;	// 0x1fea11
- (BOOL)hasPurchase;	// 0x1fe721
- (BOOL)hasRedownload;	// 0x1fe68d
- (BOOL)hasRental;	// 0x1fe8b1
- (BOOL)isCMS:(BOOL *)cms;	// 0x1fe73d
- (BOOL)isClosedCaptioned;	// 0x1fea79
- (BOOL)isDolbyDigital;	// 0x1feb85
- (BOOL)isHD;	// 0x1feb05
- (BOOL)isWideScreen;	// 0x1feac1
// converted property getter: - (int)offerCategory;	// 0x1fe4f5
- (id)originalPurchasePrice;	// 0x1fe885
- (id)preActionWarning;	// 0x1fec51
- (long)previewDuration;	// 0x1fe601
- (id)previewURL;	// 0x1fea4d
- (id)price;	// 0x1fe661
- (id)purchaseParams;	// 0x1fe7c9
- (id)purchasePrice;	// 0x1fe859
- (id)redownloadParams;	// 0x1fe6f5
- (id)rentalParams;	// 0x1fe8d1
- (id)rentalPrice;	// 0x1fe8fd
- (id)stereoLanguages;	// 0x1fee4d
// converted property getter: - (id)storeOfferType;	// 0x1fe4e5
- (id)subtitleLanguages;	// 0x1fefc9
- (BOOL)supportsPlaybackResolution:(int)resolution;	// 0x1fe505
- (BOOL)usesStoreDrivenFlow;	// 0x1fec7d
@end

