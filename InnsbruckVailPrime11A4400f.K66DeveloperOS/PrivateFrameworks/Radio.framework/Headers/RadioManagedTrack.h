/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import <CoreData/NSManagedObject.h>

@class NSDictionary, NSDate, NSString, NSURL, NSData;

@interface RadioManagedTrack : NSManagedObject {
}
@property(retain, nonatomic) NSData *adData;	// G=0x3264e879; S=0x3264f561; 
@property(assign, nonatomic) long long afterPromoClipID;	// G=0x3264e8d9; S=0x3264f5cd; 
@property(copy, nonatomic) NSString *album;	// @dynamic
@property(assign, nonatomic) long long albumID;	// G=0x3264e959; S=0x3264f659; 
@property(copy, nonatomic) NSURL *albumURL;	// G=0x3264e9d9; S=0x3264f6e5; 
@property(copy, nonatomic) NSString *artist;	// @dynamic
@property(copy, nonatomic) NSURL *artworkURL;	// G=0x3264ea69; S=0x3264f775; 
@property(copy, nonatomic) NSData *artworkURLData;	// G=0x3264eaf9; S=0x3264f805; 
@property(assign, nonatomic) long long beforePromoClipID;	// G=0x3264eb59; S=0x3264f871; 
@property(copy, nonatomic) NSString *copyrightText;	// G=0x3264ebd9; S=0x3264f8fd; 
@property(copy, nonatomic) NSDate *dateAdded;	// G=0x3264ec39; S=0x3264f969; 
@property(assign, nonatomic) long long dateFetched;	// G=0x3264ec99; S=0x3264f9d5; 
@property(copy, nonatomic) NSString *debugMessage;	// G=0x3264ed19; S=0x3264fa61; 
@property(readonly, assign, nonatomic) NSDictionary *dictionaryRepresentation;	// G=0x326504cd; 
@property(assign, nonatomic) double duration;	// G=0x3264ed79; S=0x3264facd; 
@property(assign, nonatomic) BOOL inWishList;	// G=0x3264efed; S=0x3264fb59; 
@property(assign, nonatomic) BOOL isExplicit;	// G=0x3264f061; S=0x3264fbd9; 
@property(assign, nonatomic) int likeStatus;	// G=0x3264f0dd; S=0x3264fc59; 
@property(copy, nonatomic) NSString *offerBuyParameters;	// G=0x3264f205; S=0x3264fcd9; 
@property(copy, nonatomic) NSString *offerFormattedPrice;	// G=0x3264f265; S=0x3264fd45; 
@property(assign, nonatomic) float offerPrice;	// G=0x3264f2c5; S=0x3264fdb1; 
@property(assign, nonatomic) int offerType;	// G=0x3264f341; S=0x3264fe31; 
@property(copy, nonatomic) NSURL *previewURL;	// G=0x3264f3b5; S=0x3264ff45; 
@property(copy, nonatomic) NSDictionary *promoContent;	// G=0x3264f159; S=0x326500ed; 
@property(assign, nonatomic) long long shuffleSeed;	// G=0x326502c9; S=0x3264ffd5; 
@property(assign, nonatomic) long long storeID;	// G=0x32650349; S=0x32650061; 
@property(copy, nonatomic) NSString *title;	// @dynamic
@property(copy, nonatomic) NSDictionary *trackInfo;	// G=0x326503c1; S=0x326501a5; 
@property(copy, nonatomic) NSDate *wishListDate;	// G=0x3265046d; S=0x3265025d; 
- (id)_keyForActionTextStyle:(int)actionTextStyle;	// 0x32650585
- (int)_offerTypeForOfferTypeString:(id)offerTypeString;	// 0x326505c9
- (id)_offerTypeStringForOfferType:(int)offerType;	// 0x32650621
- (id)actionTextForStyle:(int)style;	// 0x3264e765
// declared property getter: - (id)adData;	// 0x3264e879
// declared property getter: - (long long)afterPromoClipID;	// 0x3264e8d9
// declared property getter: - (long long)albumID;	// 0x3264e959
// declared property getter: - (id)albumURL;	// 0x3264e9d9
// declared property getter: - (id)artworkURL;	// 0x3264ea69
// declared property getter: - (id)artworkURLData;	// 0x3264eaf9
// declared property getter: - (long long)beforePromoClipID;	// 0x3264eb59
// declared property getter: - (id)copyrightText;	// 0x3264ebd9
// declared property getter: - (id)dateAdded;	// 0x3264ec39
// declared property getter: - (long long)dateFetched;	// 0x3264ec99
// declared property getter: - (id)debugMessage;	// 0x3264ed19
// declared property getter: - (id)dictionaryRepresentation;	// 0x326504cd
// declared property getter: - (double)duration;	// 0x3264ed79
- (id)feedbackDictionaryRepresentation;	// 0x3264edf9
// declared property getter: - (BOOL)inWishList;	// 0x3264efed
// declared property getter: - (BOOL)isExplicit;	// 0x3264f061
// declared property getter: - (int)likeStatus;	// 0x3264f0dd
// declared property getter: - (id)offerBuyParameters;	// 0x3264f205
// declared property getter: - (id)offerFormattedPrice;	// 0x3264f265
// declared property getter: - (float)offerPrice;	// 0x3264f2c5
// declared property getter: - (int)offerType;	// 0x3264f341
// declared property getter: - (id)previewURL;	// 0x3264f3b5
// declared property getter: - (id)promoContent;	// 0x3264f159
- (void)setActionText:(id)text forStyle:(int)style;	// 0x3264f445
// declared property setter: - (void)setAdData:(id)data;	// 0x3264f561
// declared property setter: - (void)setAfterPromoClipID:(long long)anId;	// 0x3264f5cd
// declared property setter: - (void)setAlbumID:(long long)anId;	// 0x3264f659
// declared property setter: - (void)setAlbumURL:(id)url;	// 0x3264f6e5
// declared property setter: - (void)setArtworkURL:(id)url;	// 0x3264f775
// declared property setter: - (void)setArtworkURLData:(id)data;	// 0x3264f805
// declared property setter: - (void)setBeforePromoClipID:(long long)anId;	// 0x3264f871
// declared property setter: - (void)setCopyrightText:(id)text;	// 0x3264f8fd
// declared property setter: - (void)setDateAdded:(id)added;	// 0x3264f969
// declared property setter: - (void)setDateFetched:(long long)fetched;	// 0x3264f9d5
// declared property setter: - (void)setDebugMessage:(id)message;	// 0x3264fa61
// declared property setter: - (void)setDuration:(double)duration;	// 0x3264facd
// declared property setter: - (void)setInWishList:(BOOL)wishList;	// 0x3264fb59
// declared property setter: - (void)setIsExplicit:(BOOL)anExplicit;	// 0x3264fbd9
// declared property setter: - (void)setLikeStatus:(int)status;	// 0x3264fc59
// declared property setter: - (void)setOfferBuyParameters:(id)parameters;	// 0x3264fcd9
// declared property setter: - (void)setOfferFormattedPrice:(id)price;	// 0x3264fd45
// declared property setter: - (void)setOfferPrice:(float)price;	// 0x3264fdb1
// declared property setter: - (void)setOfferType:(int)type;	// 0x3264fe31
// declared property setter: - (void)setPreviewURL:(id)url;	// 0x3264ff45
// declared property setter: - (void)setPromoContent:(id)content;	// 0x326500ed
// declared property setter: - (void)setShuffleSeed:(long long)seed;	// 0x3264ffd5
// declared property setter: - (void)setStoreID:(long long)anId;	// 0x32650061
// declared property setter: - (void)setTrackInfo:(id)info;	// 0x326501a5
// declared property setter: - (void)setWishListDate:(id)date;	// 0x3265025d
// declared property getter: - (long long)shuffleSeed;	// 0x326502c9
// declared property getter: - (long long)storeID;	// 0x32650349
// declared property getter: - (id)trackInfo;	// 0x326503c1
// declared property getter: - (id)wishListDate;	// 0x3265046d
@end
