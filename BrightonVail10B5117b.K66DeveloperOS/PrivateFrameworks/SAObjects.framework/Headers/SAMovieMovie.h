/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSDate, NSNumber, SALocalSearchReviewList, NSString, NSArray, NSURL;

@interface SAMovieMovie : SADomainObject {
}
@property(copy, nonatomic) NSArray *actors;	// G=0x355d16f1; S=0x355d170d; 
@property(copy, nonatomic) NSArray *directors;	// G=0x355d175d; S=0x355d1779; 
@property(copy, nonatomic) NSArray *genres;	// G=0x355d17c9; S=0x355d17e5; 
@property(copy, nonatomic) NSURL *hiResTrailerUri;	// G=0x355d1835; S=0x355d18b1; 
@property(copy, nonatomic) NSURL *iTunesUri;	// G=0x355d1911; S=0x355d198d; 
@property(assign, nonatomic) BOOL is3d;	// G=0x355d19ed; S=0x355d1a65; 
@property(copy, nonatomic) NSNumber *isAvailableOnItunesForPurchase;	// G=0x355d1aa9; S=0x355d1ac5; 
@property(copy, nonatomic) NSNumber *isAvailableOnItunesForRent;	// G=0x355d1b15; S=0x355d1b31; 
@property(copy, nonatomic) NSURL *lowResTrailerUri;	// G=0x355d1b81; S=0x355d1bfd; 
@property(copy, nonatomic) NSString *name;	// G=0x355d1c5d; S=0x355d1c79; 
@property(copy, nonatomic) NSArray *posterImages;	// G=0x355d1cc9; S=0x355d1d45; 
@property(copy, nonatomic) NSURL *posterUri;	// G=0x355d1dad; S=0x355d1e29; 
@property(copy, nonatomic) NSNumber *qualityRating;	// G=0x355d1e89; S=0x355d1ea5; 
@property(copy, nonatomic) NSString *rating;	// G=0x355d1ef5; S=0x355d1f11; 
@property(retain, nonatomic) SALocalSearchReviewList *reviews;	// G=0x355d1f61; S=0x355d1fb5; 
@property(copy, nonatomic) NSURL *rottenTomatoesUri;	// G=0x355d1ff1; S=0x355d206d; 
@property(assign, nonatomic) int runtimeInMinutes;	// G=0x355d20cd; S=0x355d213d; 
@property(copy, nonatomic) NSArray *studios;	// G=0x355d2181; S=0x355d219d; 
@property(copy, nonatomic) NSString *synopsis;	// G=0x355d21ed; S=0x355d2209; 
@property(copy, nonatomic) NSString *theaterShowtimeSearchRegionDescription;	// G=0x355d2259; S=0x355d2275; 
@property(copy, nonatomic) NSArray *theaterShowtimes;	// G=0x355d22c5; S=0x355d2341; 
@property(copy, nonatomic) NSDate *theatricalReleaseDate;	// G=0x355d23a9; S=0x355d23c5; 
@property(copy, nonatomic) NSURL *trailerUri;	// G=0x355d2415; S=0x355d2491; 
+ (id)movie;	// 0x355d1661
+ (id)movieWithDictionary:(id)dictionary context:(id)context;	// 0x355d16a5
// declared property getter: - (id)actors;	// 0x355d16f1
// declared property getter: - (id)directors;	// 0x355d175d
- (id)encodedClassName;	// 0x355d1655
// declared property getter: - (id)genres;	// 0x355d17c9
- (id)groupIdentifier;	// 0x355d1645
// declared property getter: - (id)hiResTrailerUri;	// 0x355d1835
// declared property getter: - (id)iTunesUri;	// 0x355d1911
// declared property getter: - (BOOL)is3d;	// 0x355d19ed
// declared property getter: - (id)isAvailableOnItunesForPurchase;	// 0x355d1aa9
// declared property getter: - (id)isAvailableOnItunesForRent;	// 0x355d1b15
// declared property getter: - (id)lowResTrailerUri;	// 0x355d1b81
// declared property getter: - (id)name;	// 0x355d1c5d
// declared property getter: - (id)posterImages;	// 0x355d1cc9
// declared property getter: - (id)posterUri;	// 0x355d1dad
// declared property getter: - (id)qualityRating;	// 0x355d1e89
// declared property getter: - (id)rating;	// 0x355d1ef5
// declared property getter: - (id)reviews;	// 0x355d1f61
// declared property getter: - (id)rottenTomatoesUri;	// 0x355d1ff1
// declared property getter: - (int)runtimeInMinutes;	// 0x355d20cd
// declared property setter: - (void)setActors:(id)actors;	// 0x355d170d
// declared property setter: - (void)setDirectors:(id)directors;	// 0x355d1779
// declared property setter: - (void)setGenres:(id)genres;	// 0x355d17e5
// declared property setter: - (void)setHiResTrailerUri:(id)uri;	// 0x355d18b1
// declared property setter: - (void)setITunesUri:(id)uri;	// 0x355d198d
// declared property setter: - (void)setIs3d:(BOOL)d;	// 0x355d1a65
// declared property setter: - (void)setIsAvailableOnItunesForPurchase:(id)purchase;	// 0x355d1ac5
// declared property setter: - (void)setIsAvailableOnItunesForRent:(id)rent;	// 0x355d1b31
// declared property setter: - (void)setLowResTrailerUri:(id)uri;	// 0x355d1bfd
// declared property setter: - (void)setName:(id)name;	// 0x355d1c79
// declared property setter: - (void)setPosterImages:(id)images;	// 0x355d1d45
// declared property setter: - (void)setPosterUri:(id)uri;	// 0x355d1e29
// declared property setter: - (void)setQualityRating:(id)rating;	// 0x355d1ea5
// declared property setter: - (void)setRating:(id)rating;	// 0x355d1f11
// declared property setter: - (void)setReviews:(id)reviews;	// 0x355d1fb5
// declared property setter: - (void)setRottenTomatoesUri:(id)uri;	// 0x355d206d
// declared property setter: - (void)setRuntimeInMinutes:(int)minutes;	// 0x355d213d
// declared property setter: - (void)setStudios:(id)studios;	// 0x355d219d
// declared property setter: - (void)setSynopsis:(id)synopsis;	// 0x355d2209
// declared property setter: - (void)setTheaterShowtimeSearchRegionDescription:(id)description;	// 0x355d2275
// declared property setter: - (void)setTheaterShowtimes:(id)showtimes;	// 0x355d2341
// declared property setter: - (void)setTheatricalReleaseDate:(id)date;	// 0x355d23c5
// declared property setter: - (void)setTrailerUri:(id)uri;	// 0x355d2491
// declared property getter: - (id)studios;	// 0x355d2181
// declared property getter: - (id)synopsis;	// 0x355d21ed
// declared property getter: - (id)theaterShowtimeSearchRegionDescription;	// 0x355d2259
// declared property getter: - (id)theaterShowtimes;	// 0x355d22c5
// declared property getter: - (id)theatricalReleaseDate;	// 0x355d23a9
// declared property getter: - (id)trailerUri;	// 0x355d2415
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x355d24f1
@end
