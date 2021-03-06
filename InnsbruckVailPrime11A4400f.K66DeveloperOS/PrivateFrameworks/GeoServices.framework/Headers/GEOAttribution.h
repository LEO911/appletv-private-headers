/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOAttribution : PBCodable {
	NSString *_badge;	// 4 = 0x4
	NSString *_badgeChecksum;	// 8 = 0x8
	NSString *_logo;	// 12 = 0xc
	NSString *_logoChecksum;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
	NSString *_url;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *badge;	// G=0x30e8e921; S=0x30eae3a1; @synthesize=_badge
@property(retain, nonatomic) NSString *badgeChecksum;	// G=0x30f75ec9; S=0x30f75ed9; @synthesize=_badgeChecksum
@property(readonly, assign, nonatomic) BOOL hasBadge;	// G=0x30f75989; 
@property(readonly, assign, nonatomic) BOOL hasBadgeChecksum;	// G=0x30f759d1; 
@property(readonly, assign, nonatomic) BOOL hasLogo;	// G=0x30eb05a1; 
@property(readonly, assign, nonatomic) BOOL hasLogoChecksum;	// G=0x30f759e9; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x30f759a1; 
@property(readonly, assign, nonatomic) BOOL hasUrl;	// G=0x30f759b9; 
@property(retain, nonatomic) NSString *logo;	// G=0x30eb05b9; S=0x30eae3b1; @synthesize=_logo
@property(retain, nonatomic) NSString *logoChecksum;	// G=0x30f75ee9; S=0x30f75ef9; @synthesize=_logoChecksum
@property(retain, nonatomic) NSString *name;	// G=0x30eb05c9; S=0x30eae3c1; @synthesize=_name
@property(retain, nonatomic) NSString *url;	// G=0x30ea1005; S=0x30eae3d1; @synthesize=_url
// declared property getter: - (id)badge;	// 0x30e8e921
// declared property getter: - (id)badgeChecksum;	// 0x30f75ec9
- (void)copyTo:(id)to;	// 0x30f75c95
- (void)dealloc;	// 0x30eae2f9
- (id)description;	// 0x30f75a01
- (id)dictionaryRepresentation;	// 0x30f75a71
// declared property getter: - (BOOL)hasBadge;	// 0x30f75989
// declared property getter: - (BOOL)hasBadgeChecksum;	// 0x30f759d1
// declared property getter: - (BOOL)hasLogo;	// 0x30eb05a1
// declared property getter: - (BOOL)hasLogoChecksum;	// 0x30f759e9
// declared property getter: - (BOOL)hasName;	// 0x30f759a1
// declared property getter: - (BOOL)hasUrl;	// 0x30f759b9
- (unsigned)hash;	// 0x30f75e19
- (BOOL)isEqual:(id)equal;	// 0x30eaddd5
// declared property getter: - (id)logo;	// 0x30eb05b9
// declared property getter: - (id)logoChecksum;	// 0x30f75ee9
// declared property getter: - (id)name;	// 0x30eb05c9
- (BOOL)readFrom:(id)from;	// 0x30f75ba1
// declared property setter: - (void)setBadge:(id)badge;	// 0x30eae3a1
// declared property setter: - (void)setBadgeChecksum:(id)checksum;	// 0x30f75ed9
// declared property setter: - (void)setLogo:(id)logo;	// 0x30eae3b1
// declared property setter: - (void)setLogoChecksum:(id)checksum;	// 0x30f75ef9
// declared property setter: - (void)setName:(id)name;	// 0x30eae3c1
// declared property setter: - (void)setUrl:(id)url;	// 0x30eae3d1
// declared property getter: - (id)url;	// 0x30ea1005
- (void)writeTo:(id)to;	// 0x30f75bad
@end

