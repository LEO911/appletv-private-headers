/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <PBRequest.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMClientPropertiesRequest : PBRequest {
	NSString *_cohort;	// 4 = 0x4
	BOOL _hasHasLocationFix;	// 8 = 0x8
	BOOL _hasLocationFix;	// 9 = 0x9
	BOOL _hasMobileCountryCode;	// 10 = 0xa
	int _mobileCountryCode;	// 12 = 0xc
	BOOL _hasGzipEnabled;	// 16 = 0x10
	BOOL _gzipEnabled;	// 17 = 0x11
	NSString *_applicationName;	// 20 = 0x14
	NSString *_gaiaAuthToken;	// 24 = 0x18
	BOOL _hasVoiceSearchEnabled;	// 28 = 0x1c
	BOOL _voiceSearchEnabled;	// 29 = 0x1d
	BOOL _hasScreenPixelDensity;	// 30 = 0x1e
	int _screenPixelDensity;	// 32 = 0x20
	XXStruct_WmZAAA _experimentIds;	// 36 = 0x24
	BOOL _hasMapTileCacheType;	// 48 = 0x30
	int _mapTileCacheType;	// 52 = 0x34
}
@property(retain, nonatomic) NSString *applicationName;	// G=0x33867cbd; S=0x33867ccd; @synthesize=_applicationName
@property(retain, nonatomic) NSString *cohort;	// G=0x33867c19; S=0x33867c29; @synthesize=_cohort
@property(readonly, assign, nonatomic) int *experimentIds;	// G=0x3386730d; 
@property(readonly, assign, nonatomic) unsigned experimentIdsCount;	// G=0x338672f9; 
@property(retain, nonatomic) NSString *gaiaAuthToken;	// G=0x33867cf1; S=0x33867d01; @synthesize=_gaiaAuthToken
@property(assign, nonatomic) BOOL gzipEnabled;	// G=0x338671f1; S=0x33867215; @synthesize=_gzipEnabled
@property(readonly, assign, nonatomic) BOOL hasApplicationName;	// G=0x33867239; 
@property(readonly, assign, nonatomic) BOOL hasCohort;	// G=0x3386716d; 
@property(readonly, assign, nonatomic) BOOL hasGaiaAuthToken;	// G=0x33867251; 
@property(assign, nonatomic) BOOL hasGzipEnabled;	// G=0x33867c9d; S=0x33867cad; @synthesize=_hasGzipEnabled
@property(assign, nonatomic) BOOL hasHasLocationFix;	// G=0x33867c4d; S=0x33867c5d; @synthesize=_hasHasLocationFix
@property(assign, nonatomic) BOOL hasLocationFix;	// G=0x33867185; S=0x338671a9; @synthesize=_hasLocationFix
@property(assign, nonatomic) BOOL hasMapTileCacheType;	// G=0x33867d65; S=0x33867d75; @synthesize=_hasMapTileCacheType
@property(assign, nonatomic) BOOL hasMobileCountryCode;	// G=0x33867c6d; S=0x33867c7d; @synthesize=_hasMobileCountryCode
@property(assign, nonatomic) BOOL hasScreenPixelDensity;	// G=0x33867d45; S=0x33867d55; @synthesize=_hasScreenPixelDensity
@property(assign, nonatomic) BOOL hasVoiceSearchEnabled;	// G=0x33867d25; S=0x33867d35; @synthesize=_hasVoiceSearchEnabled
@property(assign, nonatomic) int mapTileCacheType;	// G=0x33867d85; S=0x33867401; @synthesize=_mapTileCacheType
@property(assign, nonatomic) int mobileCountryCode;	// G=0x33867c8d; S=0x338671cd; @synthesize=_mobileCountryCode
@property(assign, nonatomic) int screenPixelDensity;	// G=0x338672b1; S=0x338672d5; @synthesize=_screenPixelDensity
@property(assign, nonatomic) BOOL voiceSearchEnabled;	// G=0x33867269; S=0x3386728d; @synthesize=_voiceSearchEnabled
- (void)addExperimentId:(int)anId;	// 0x33867331
// declared property getter: - (id)applicationName;	// 0x33867cbd
- (void)clearExperimentIds;	// 0x3386731d
// declared property getter: - (id)cohort;	// 0x33867c19
- (void)dealloc;	// 0x338670f1
- (id)description;	// 0x33867425
- (id)dictionaryRepresentation;	// 0x33867495
- (int)experimentIdAtIndex:(unsigned)index;	// 0x33867345
// declared property getter: - (int *)experimentIds;	// 0x3386730d
// declared property getter: - (unsigned)experimentIdsCount;	// 0x338672f9
// declared property getter: - (id)gaiaAuthToken;	// 0x33867cf1
// declared property getter: - (BOOL)gzipEnabled;	// 0x338671f1
// declared property getter: - (BOOL)hasApplicationName;	// 0x33867239
// declared property getter: - (BOOL)hasCohort;	// 0x3386716d
// declared property getter: - (BOOL)hasGaiaAuthToken;	// 0x33867251
// declared property getter: - (BOOL)hasGzipEnabled;	// 0x33867c9d
// declared property getter: - (BOOL)hasHasLocationFix;	// 0x33867c4d
// declared property getter: - (BOOL)hasLocationFix;	// 0x33867185
// declared property getter: - (BOOL)hasMapTileCacheType;	// 0x33867d65
// declared property getter: - (BOOL)hasMobileCountryCode;	// 0x33867c6d
// declared property getter: - (BOOL)hasScreenPixelDensity;	// 0x33867d45
// declared property getter: - (BOOL)hasVoiceSearchEnabled;	// 0x33867d25
// declared property getter: - (int)mapTileCacheType;	// 0x33867d85
// declared property getter: - (int)mobileCountryCode;	// 0x33867c8d
- (BOOL)readFrom:(id)from;	// 0x33867779
- (unsigned)requestTypeCode;	// 0x33867bf9
- (Class)responseClass;	// 0x33867bfd
// declared property getter: - (int)screenPixelDensity;	// 0x338672b1
// declared property setter: - (void)setApplicationName:(id)name;	// 0x33867ccd
// declared property setter: - (void)setCohort:(id)cohort;	// 0x33867c29
- (void)setExperimentIds:(int *)ids count:(unsigned)count;	// 0x338673e9
// declared property setter: - (void)setGaiaAuthToken:(id)token;	// 0x33867d01
// declared property setter: - (void)setGzipEnabled:(BOOL)enabled;	// 0x33867215
// declared property setter: - (void)setHasGzipEnabled:(BOOL)enabled;	// 0x33867cad
// declared property setter: - (void)setHasHasLocationFix:(BOOL)fix;	// 0x33867c5d
// declared property setter: - (void)setHasLocationFix:(BOOL)fix;	// 0x338671a9
// declared property setter: - (void)setHasMapTileCacheType:(BOOL)type;	// 0x33867d75
// declared property setter: - (void)setHasMobileCountryCode:(BOOL)code;	// 0x33867c7d
// declared property setter: - (void)setHasScreenPixelDensity:(BOOL)density;	// 0x33867d55
// declared property setter: - (void)setHasVoiceSearchEnabled:(BOOL)enabled;	// 0x33867d35
// declared property setter: - (void)setMapTileCacheType:(int)type;	// 0x33867401
// declared property setter: - (void)setMobileCountryCode:(int)code;	// 0x338671cd
// declared property setter: - (void)setScreenPixelDensity:(int)density;	// 0x338672d5
// declared property setter: - (void)setVoiceSearchEnabled:(BOOL)enabled;	// 0x3386728d
// declared property getter: - (BOOL)voiceSearchEnabled;	// 0x33867269
- (void)writeTo:(id)to;	// 0x33867a11
@end
