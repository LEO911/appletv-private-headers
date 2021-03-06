/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

@interface GEORating : PBCodable {
	double _maxScore;	// 4 = 0x4
	double _score;	// 12 = 0xc
	int _numberOfRatings;	// 20 = 0x14
	int _numberOfReviews;	// 24 = 0x18
	NSString *_provider;	// 28 = 0x1c
	NSMutableArray *_reviews;	// 32 = 0x20
	NSString *_uRL;	// 36 = 0x24
	struct {
		unsigned eastLng : 1;
		unsigned northLat : 1;
		unsigned southLat : 1;
		unsigned westLng : 1;
	} _has;	// 40 = 0x28
}
@property(assign, nonatomic) BOOL hasMaxScore;	// G=0x33faa451; S=0x33faa435; 
@property(assign, nonatomic) BOOL hasNumberOfRatings;	// G=0x33faa4ad; S=0x33faa48d; 
@property(assign, nonatomic) BOOL hasNumberOfReviews;	// G=0x33faa605; S=0x33faa5e5; 
@property(readonly, assign, nonatomic) BOOL hasProvider;	// G=0x33faa4c1; 
@property(assign, nonatomic) BOOL hasScore;	// G=0x33faa3b9; S=0x33faa399; 
@property(readonly, assign, nonatomic) BOOL hasURL;	// G=0x33faa4d9; 
@property(assign, nonatomic) double maxScore;	// G=0x33faa3cd; S=0x33faa401; @synthesize=_maxScore
@property(assign, nonatomic) int numberOfRatings;	// G=0x33fab691; S=0x33faa465; @synthesize=_numberOfRatings
@property(assign, nonatomic) int numberOfReviews;	// G=0x33fab701; S=0x33faa5bd; @synthesize=_numberOfReviews
@property(retain, nonatomic) NSString *provider;	// G=0x33fab6a1; S=0x33fab6b1; @synthesize=_provider
@property(retain, nonatomic) NSMutableArray *reviews;	// G=0x33fab6e1; S=0x33fab6f1; @synthesize=_reviews
@property(assign, nonatomic) double score;	// G=0x33fab679; S=0x33faa365; @synthesize=_score
@property(retain, nonatomic) NSString *uRL;	// G=0x33fab6c1; S=0x33fab6d1; @synthesize=_uRL
- (void)addReview:(id)review;	// 0x33faa511
- (void)clearReviews;	// 0x33faa4f1
- (void)copyTo:(id)to;	// 0x33fab0c1
- (void)dealloc;	// 0x33faa2f9
- (id)description;	// 0x33faa619
- (id)dictionaryRepresentation;	// 0x33faa689
// declared property getter: - (BOOL)hasMaxScore;	// 0x33faa451
// declared property getter: - (BOOL)hasNumberOfRatings;	// 0x33faa4ad
// declared property getter: - (BOOL)hasNumberOfReviews;	// 0x33faa605
// declared property getter: - (BOOL)hasProvider;	// 0x33faa4c1
// declared property getter: - (BOOL)hasScore;	// 0x33faa3b9
// declared property getter: - (BOOL)hasURL;	// 0x33faa4d9
- (unsigned)hash;	// 0x33fab481
- (BOOL)isEqual:(id)equal;	// 0x33fab2c1
// declared property getter: - (double)maxScore;	// 0x33faa3cd
// declared property getter: - (int)numberOfRatings;	// 0x33fab691
// declared property getter: - (int)numberOfReviews;	// 0x33fab701
// declared property getter: - (id)provider;	// 0x33fab6a1
- (BOOL)readFrom:(id)from;	// 0x33faae55
- (id)reviewAtIndex:(unsigned)index;	// 0x33faa59d
// declared property getter: - (id)reviews;	// 0x33fab6e1
- (unsigned)reviewsCount;	// 0x33faa57d
// declared property getter: - (double)score;	// 0x33fab679
// declared property setter: - (void)setHasMaxScore:(BOOL)score;	// 0x33faa435
// declared property setter: - (void)setHasNumberOfRatings:(BOOL)ratings;	// 0x33faa48d
// declared property setter: - (void)setHasNumberOfReviews:(BOOL)reviews;	// 0x33faa5e5
// declared property setter: - (void)setHasScore:(BOOL)score;	// 0x33faa399
// declared property setter: - (void)setMaxScore:(double)score;	// 0x33faa401
// declared property setter: - (void)setNumberOfRatings:(int)ratings;	// 0x33faa465
// declared property setter: - (void)setNumberOfReviews:(int)reviews;	// 0x33faa5bd
// declared property setter: - (void)setProvider:(id)provider;	// 0x33fab6b1
// declared property setter: - (void)setReviews:(id)reviews;	// 0x33fab6f1
// declared property setter: - (void)setScore:(double)score;	// 0x33faa365
// declared property setter: - (void)setURL:(id)url;	// 0x33fab6d1
// declared property getter: - (id)uRL;	// 0x33fab6c1
- (void)writeTo:(id)to;	// 0x33faae61
@end

