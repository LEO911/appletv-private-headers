/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSURL, NSString;

@interface MPStoreOffer : NSObject {
	NSDictionary *_offerDictionary;	// 4 = 0x4
	MPStoreOffer *_regularPriceOffer;	// 8 = 0x8
	NSDictionary *_mediaAssetDictionary;	// 12 = 0xc
	unsigned long long _entityPersistentID;	// 16 = 0x10
	int _entityType;	// 24 = 0x18
	NSString *_entityTitle;	// 28 = 0x1c
	int _passType;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *actionDisplayTitle;	// G=0x31e2b15d; 
@property(readonly, assign, nonatomic) NSString *buyParameters;	// G=0x31e2afd5; 
@property(readonly, assign, nonatomic) int buyType;	// G=0x31e2a945; 
@property(readonly, assign, nonatomic) NSString *displayPrice;	// G=0x31e2b229; 
@property(readonly, assign, nonatomic) NSString *displayTitle;	// G=0x31e2b029; 
@property(readonly, assign, nonatomic) unsigned long long downloadSize;	// G=0x31e2b381; 
@property(readonly, assign, nonatomic) unsigned long long entityPersistentID;	// G=0x31e2b445; @synthesize=_entityPersistentID
@property(readonly, assign, nonatomic) NSString *entityTitle;	// G=0x31e2b46d; @synthesize=_entityTitle
@property(readonly, assign, nonatomic) int entityType;	// G=0x31e2b45d; @synthesize=_entityType
@property(readonly, assign, nonatomic) int passType;	// G=0x31e2b481; @synthesize=_passType
@property(readonly, assign, nonatomic) double previewDuration;	// G=0x31e2b3f1; 
@property(readonly, assign, nonatomic) NSURL *previewURL;	// G=0x31e2b3c5; 
@property(readonly, assign, nonatomic) float price;	// G=0x31e2b255; 
@property(readonly, assign, nonatomic) NSString *regularPriceDisplayPrice;	// G=0x31e2b359; 
@property(readonly, assign, nonatomic) BOOL requiresConfirmation;	// G=0x31e2b1e1; 
+ (id)_priceForOfferDictionary:(id)offerDictionary;	// 0x31e2ad05
+ (int)bestOfferVariantInOfferDictionaries:(id)offerDictionaries withPreferredVariant:(int)preferredVariant;	// 0x31e2abe5
+ (int)buyTypeForOfferDictionary:(id)offerDictionary;	// 0x31e2ade1
+ (void)getBuyOfferDictionary:(id *)dictionary regularPriceOfferDictionary:(id *)dictionary2 inOfferDictionaries:(id)offerDictionaries variant:(int)variant;	// 0x31e2ab49
+ (void)getBuyOfferDictionary:(id *)dictionary regularPriceOfferDictionary:(id *)dictionary2 inOfferDictionaries:(id)offerDictionaries variantString:(id)string;	// 0x31e2a9a1
+ (id)offerVariantResponseKeyForOfferVariant:(int)offerVariant;	// 0x31e2a981
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary regularPriceOfferDictionary:(id)dictionary passType:(int)type entityType:(int)type4 persistentID:(unsigned long long)anId title:(id)title;	// 0x31e2a769
- (BOOL)_isBuy;	// 0x31e2af65
// declared property getter: - (id)actionDisplayTitle;	// 0x31e2b15d
// declared property getter: - (id)buyParameters;	// 0x31e2afd5
// declared property getter: - (int)buyType;	// 0x31e2a945
- (id)buyURL;	// 0x31e2af81
- (void)dealloc;	// 0x31e2a8b9
// declared property getter: - (id)displayPrice;	// 0x31e2b229
// declared property getter: - (id)displayTitle;	// 0x31e2b029
// declared property getter: - (unsigned long long)downloadSize;	// 0x31e2b381
// declared property getter: - (unsigned long long)entityPersistentID;	// 0x31e2b445
// declared property getter: - (id)entityTitle;	// 0x31e2b46d
// declared property getter: - (int)entityType;	// 0x31e2b45d
// declared property getter: - (int)passType;	// 0x31e2b481
// declared property getter: - (double)previewDuration;	// 0x31e2b3f1
// declared property getter: - (id)previewURL;	// 0x31e2b3c5
// declared property getter: - (float)price;	// 0x31e2b255
// declared property getter: - (id)regularPriceDisplayPrice;	// 0x31e2b359
// declared property getter: - (BOOL)requiresConfirmation;	// 0x31e2b1e1
- (id)storeOfferDictionary;	// 0x31e2b435
@end
