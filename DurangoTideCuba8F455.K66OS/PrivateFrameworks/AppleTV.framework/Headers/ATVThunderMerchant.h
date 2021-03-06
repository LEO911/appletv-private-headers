/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedMerchant.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderMerchant : ATVFeedMerchant {
@private
	NSDictionary *_thunderInfo;	// 20 = 0x14
}
+ (id)baseURLForKey:(id)key;	// 0x306cfba5
+ (id)deviceAlias;	// 0x306cf7f1
+ (void)setURLBag:(id)bag;	// 0x306cfbc9
- (id)initWithIdentifier:(id)identifier;	// 0x306cfb1d
- (id)archiveVideoStartDate;	// 0x306cf995
- (Class)catalogAgent;	// 0x306cfab5
- (id)cityDisplayNameForTeam:(id)team;	// 0x306cf951
- (id)courtURLForTeam:(id)team;	// 0x306cf7fd
- (id)currentSeasonEndDate;	// 0x306cf9f5
- (id)currentSeasonStartDate;	// 0x306cfa55
- (void)dealloc;	// 0x306cfad5
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x306cfc51
- (id)largeLogoURLForTeam:(id)team;	// 0x306cf841
- (id)longDisplayNameForTeam:(id)team;	// 0x306cf8c9
- (id)shortDisplayNameForTeam:(id)team;	// 0x306cf90d
- (id)smallLogoURLForTeam:(id)team;	// 0x306cf885
@end

