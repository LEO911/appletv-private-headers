/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class CPSearchMatcher;

@interface ALCityManager : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	sqlite3 *_localizedDb;	// 8 = 0x8
	CPSearchMatcher *_citySearchMatcher;	// 12 = 0xc
}
@property(readonly, assign) CPSearchMatcher *citySearchMatcher;	// G=0x331d7ba5; @synthesize=_citySearchMatcher
+ (CFArrayRef)legacyCityForCity:(id)city;	// 0x331d6d51
+ (id)newCitiesByIdentifierMap:(id)map;	// 0x331d659d
+ (id)sharedManager;	// 0x331d5959
- (id)init;	// 0x331d5719
- (id)allCities;	// 0x331d59a1
- (id)bestCityForLegacyCity:(CFArrayRef)legacyCity;	// 0x331d6b89
- (id)citiesMatchingName:(id)name;	// 0x331d59ed
- (id)citiesMatchingName:(id)name localized:(BOOL)localized;	// 0x331d5a01
- (id)citiesMatchingQualifier:(id)qualifier;	// 0x331d6f51
- (id)citiesWithIdentifiers:(id)identifiers;	// 0x331d6701
- (id)citiesWithTimeZone:(id)timeZone;	// 0x331d7ad1
- (id)cityForClassicIdentifier:(id)classicIdentifier;	// 0x331d69e1
// declared property getter: - (id)citySearchMatcher;	// 0x331d7ba5
- (void)dealloc;	// 0x331d7b2d
- (id)defaultCitiesForLocaleCode:(id)localeCode;	// 0x331d76a9
- (id)defaultCitiesForLocaleCode:(id)localeCode options:(int)options;	// 0x331d7385
- (id)defaultCityForTimeZone:(id)timeZone;	// 0x331d76bd
- (id)localeWithCode:(id)code;	// 0x331d70cd
- (void)localizeCities:(id)cities;	// 0x331d5e0d
@end
