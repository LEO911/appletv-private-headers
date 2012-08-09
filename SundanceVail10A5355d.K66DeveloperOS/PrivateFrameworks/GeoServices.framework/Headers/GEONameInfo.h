/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEONameInfo : PBCodable {
	NSString *_name;	// 4 = 0x4
	NSString *_phoneticName;	// 8 = 0x8
	int _phoneticType;	// 12 = 0xc
	NSString *_shield;	// 16 = 0x10
	int _shieldType;	// 20 = 0x14
	int _signType;	// 24 = 0x18
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x3457bb05; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x3457bb1d; 
@property(assign, nonatomic) BOOL hasPhoneticType;	// G=0x3457bbed; S=0x3457bbd1; 
@property(readonly, assign, nonatomic) BOOL hasShield;	// G=0x3457bb35; 
@property(assign, nonatomic) BOOL hasShieldType;	// G=0x3457bb95; S=0x3457bb75; 
@property(assign, nonatomic) BOOL hasSignType;	// G=0x3457bc49; S=0x3457bc29; 
@property(retain, nonatomic) NSString *name;	// G=0x3457c741; S=0x3457c751; @synthesize=_name
@property(retain, nonatomic) NSString *phoneticName;	// G=0x3457c761; S=0x3457c771; @synthesize=_phoneticName
@property(assign, nonatomic) int phoneticType;	// G=0x3457c7b1; S=0x3457bba9; @synthesize=_phoneticType
@property(retain, nonatomic) NSString *shield;	// G=0x3457c781; S=0x3457c791; @synthesize=_shield
@property(assign, nonatomic) int shieldType;	// G=0x3457c7a1; S=0x3457bb4d; @synthesize=_shieldType
@property(assign, nonatomic) int signType;	// G=0x3457c7c1; S=0x3457bc01; @synthesize=_signType
- (void)copyTo:(id)to;	// 0x3457c361
- (void)dealloc;	// 0x3457ba99
- (id)description;	// 0x3457bc5d
- (id)dictionaryRepresentation;	// 0x3457bccd
// declared property getter: - (BOOL)hasName;	// 0x3457bb05
// declared property getter: - (BOOL)hasPhoneticName;	// 0x3457bb1d
// declared property getter: - (BOOL)hasPhoneticType;	// 0x3457bbed
// declared property getter: - (BOOL)hasShield;	// 0x3457bb35
// declared property getter: - (BOOL)hasShieldType;	// 0x3457bb95
// declared property getter: - (BOOL)hasSignType;	// 0x3457bc49
- (unsigned)hash;	// 0x3457c64d
- (BOOL)isEqual:(id)equal;	// 0x3457c4e5
// declared property getter: - (id)name;	// 0x3457c741
// declared property getter: - (id)phoneticName;	// 0x3457c761
// declared property getter: - (int)phoneticType;	// 0x3457c7b1
- (BOOL)readFrom:(id)from;	// 0x3457c24d
// declared property setter: - (void)setHasPhoneticType:(BOOL)type;	// 0x3457bbd1
// declared property setter: - (void)setHasShieldType:(BOOL)type;	// 0x3457bb75
// declared property setter: - (void)setHasSignType:(BOOL)type;	// 0x3457bc29
// declared property setter: - (void)setName:(id)name;	// 0x3457c751
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x3457c771
// declared property setter: - (void)setPhoneticType:(int)type;	// 0x3457bba9
// declared property setter: - (void)setShield:(id)shield;	// 0x3457c791
// declared property setter: - (void)setShieldType:(int)type;	// 0x3457bb4d
// declared property setter: - (void)setSignType:(int)type;	// 0x3457bc01
// declared property getter: - (id)shield;	// 0x3457c781
// declared property getter: - (int)shieldType;	// 0x3457c7a1
// declared property getter: - (int)signType;	// 0x3457c7c1
- (void)writeTo:(id)to;	// 0x3457c259
@end
