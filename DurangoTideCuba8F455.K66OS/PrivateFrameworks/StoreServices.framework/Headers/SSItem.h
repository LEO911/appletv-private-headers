/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSURL, SSItemImageCollection, NSDate, NSNumber, NSDictionary, NSMutableArray, SSItemOffer, SSURLConnectionRequest;

@interface SSItem : NSObject {
@private
	NSDate *_expirationDate;	// 4 = 0x4
	NSArray *_offers;	// 8 = 0x8
	NSDictionary *_properties;	// 12 = 0xc
	NSString *_tellAFriendBody;	// 16 = 0x10
	NSString *_tellAFriendBodyMIMEType;	// 20 = 0x14
	NSMutableArray *_tellAFriendHandlers;	// 24 = 0x18
	SSURLConnectionRequest *_tellAFriendRequest;	// 28 = 0x1c
	NSString *_tellAFriendSubject;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x32728c7d; 
@property(readonly, assign, nonatomic) NSArray *allItemOffers;	// G=0x32728ee5; 
@property(readonly, assign, nonatomic) NSString *artistName;	// G=0x32728e81; 
@property(readonly, assign, nonatomic) float averageUserRating;	// G=0x32728e35; 
@property(readonly, assign, nonatomic) SSItemOffer *defaultItemOffer;	// G=0x32729915; 
@property(readonly, assign, nonatomic) NSDate *expirationDate;	// G=0x327281d5; @synthesize=_expirationDate
@property(readonly, assign, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;	// G=0x32728d81; 
@property(readonly, assign, nonatomic) SSItemImageCollection *imageCollection;	// G=0x32728dd1; 
@property(readonly, assign, nonatomic) NSString *itemKind;	// G=0x32728ccd; 
@property(readonly, assign, nonatomic) NSString *itemTitle;	// G=0x32728c99; 
@property(readonly, assign, nonatomic) int numberOfUserRatings;	// G=0x32728c39; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x32729a59; 
@property(readonly, retain) NSString *tellAFriendBody;	// G=0x32728b85; converted property
@property(readonly, retain) NSString *tellAFriendBodyMIMEType;	// G=0x32728a99; converted property
@property(readonly, retain) NSString *tellAFriendSubject;	// G=0x327289e5; converted property
@property(readonly, assign, nonatomic) NSArray *thumbnailImages;	// G=0x327289c1; 
@property(readonly, assign, nonatomic) NSURL *viewItemURL;	// G=0x3272894d; 
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x3272924d
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x32728c7d
- (void)_finishTellAFriendLoadWithError:(id)error;	// 0x32729601
- (id)_offers;	// 0x32729425
- (void)_setExpirationDate:(id)date;	// 0x32728719
- (id)_tellAFriendDictionary;	// 0x32728659
// declared property getter: - (id)allItemOffers;	// 0x32728ee5
// declared property getter: - (id)artistName;	// 0x32728e81
// declared property getter: - (float)averageUserRating;	// 0x32728e35
- (id)bundleIdentifier;	// 0x327288e9
- (id)bundleVersion;	// 0x327288cd
- (id)buyParameters;	// 0x32728929
- (id)collectionName;	// 0x327288b1
- (void)dealloc;	// 0x32729319
// declared property getter: - (id)defaultItemOffer;	// 0x32729915
- (id)description;	// 0x3272929d
// declared property getter: - (id)expirationDate;	// 0x327281d5
// declared property getter: - (id)imageCollection;	// 0x32728dd1
// declared property getter: - (BOOL)isGameCenterEnabled;	// 0x32728d81
// declared property getter: - (BOOL)isRestricted;	// 0x32729a59
// declared property getter: - (id)itemKind;	// 0x32728ccd
- (id)itemOfferForIdentifier:(id)identifier;	// 0x327297fd
// declared property getter: - (id)itemTitle;	// 0x32728c99
- (void)loadTellAFriendMessageWithCompletionHandler:(id)completionHandler;	// 0x32729d7d
- (id)mediaKind;	// 0x3272a399
// declared property getter: - (int)numberOfUserRatings;	// 0x32728c39
- (id)playableMedia;	// 0x32729711
- (id)priceDisplay;	// 0x32728905
- (id)rawItemDictionary;	// 0x32728881
- (id)releaseDate;	// 0x327287a5
- (void)request:(id)request didFailWithError:(id)error;	// 0x32729d39
- (void)requestDidFinish:(id)request;	// 0x327286b9
- (id)sendGiftURL;	// 0x32728755
// converted property getter: - (id)tellAFriendBody;	// 0x32728b85
// converted property getter: - (id)tellAFriendBodyMIMEType;	// 0x32728a99
// converted property getter: - (id)tellAFriendSubject;	// 0x327289e5
// declared property getter: - (id)thumbnailImages;	// 0x327289c1
- (void)urlConnectionRequest:(id)request didReceiveResponse:(id)response;	// 0x32729fe5
- (id)valueForProperty:(id)property;	// 0x32728985
// declared property getter: - (id)viewItemURL;	// 0x3272894d
- (id)viewReviewsURL;	// 0x327286e1
@end
