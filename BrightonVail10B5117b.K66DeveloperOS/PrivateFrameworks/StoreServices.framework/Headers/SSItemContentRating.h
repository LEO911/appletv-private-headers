/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, SSItemArtworkImage, NSString;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *contentRatingDictionary;	// G=0x356c0161; 
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x356bfbf1; 
@property(assign, nonatomic) int rank;	// G=0x356bfd1d; S=0x356bff2d; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x356bfd81; S=0x356bff71; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x356bfe11; S=0x356bff8d; 
@property(assign, nonatomic) int ratingSystem;	// G=0x356bfea1; S=0x356bffa9; 
@property(readonly, assign, nonatomic) SSItemArtworkImage *ratingSystemLogo;	// G=0x356c0199; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x356bfc31; 
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;	// G=0x356c003d; S=0x356bfff9; 
+ (int)ratingSystemFromString:(id)string;	// 0x356c00f1
+ (id)stringForRatingSystem:(int)ratingSystem;	// 0x356c0139
- (id)init;	// 0x356bfa91
- (id)initWithDictionary:(id)dictionary;	// 0x356bfaf5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x356c02a1
- (BOOL)_isRatingSystemForApps:(int)apps;	// 0x356c0341
- (BOOL)_isRatingSystemForMovies:(int)movies;	// 0x356c0351
- (BOOL)_isRatingSystemForMusic:(int)music;	// 0x356c0369
- (BOOL)_isRatingSystemForTV:(int)tv;	// 0x356c0375
- (void)_setValue:(id)value forProperty:(id)property;	// 0x356c03cd
- (void)_setValueCopy:(id)copy forProperty:(id)property;	// 0x356c0385
// declared property getter: - (id)contentRatingDictionary;	// 0x356c0161
- (id)copyWithZone:(NSZone *)zone;	// 0x356bfb95
- (id)copyXPCEncoding;	// 0x356c026d
- (void)dealloc;	// 0x356bfb49
// declared property getter: - (BOOL)isExplicitContent;	// 0x356bfbf1
// declared property getter: - (BOOL)isRestricted;	// 0x356bfc31
// declared property getter: - (int)rank;	// 0x356bfd1d
// declared property getter: - (id)ratingDescription;	// 0x356bfd81
// declared property getter: - (id)ratingLabel;	// 0x356bfe11
// declared property getter: - (int)ratingSystem;	// 0x356bfea1
// declared property getter: - (id)ratingSystemLogo;	// 0x356c0199
// declared property setter: - (void)setRank:(int)rank;	// 0x356bff2d
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x356bff71
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x356bff8d
// declared property setter: - (void)setRatingSystem:(int)system;	// 0x356bffa9
// declared property setter: - (void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;	// 0x356bfff9
// declared property getter: - (BOOL)shouldHideWhenRestricted;	// 0x356c003d
- (id)valueForProperty:(id)property;	// 0x356c00a9
@end

