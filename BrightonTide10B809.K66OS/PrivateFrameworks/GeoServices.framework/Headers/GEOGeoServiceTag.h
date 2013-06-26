/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOGeoServiceTag : PBCodable {
	int _serviceType;	// 4 = 0x4
@private
	NSString *_tag;	// 8 = 0x8
}
@property(assign, nonatomic) int serviceType;	// G=0x33ff6c25; S=0x33ff6c35; @synthesize=_serviceType
@property(retain, nonatomic) NSString *tag;	// G=0x33ff6c45; S=0x33ff6c55; @synthesize=_tag
- (void)copyTo:(id)to;	// 0x33ff6afd
- (void)dealloc;	// 0x33ff6755
- (id)description;	// 0x33ff6799
- (id)dictionaryRepresentation;	// 0x33ff6809
- (unsigned)hash;	// 0x33ff6bdd
- (BOOL)isEqual:(id)equal;	// 0x33ff6b55
- (BOOL)readFrom:(id)from;	// 0x33ff6aa1
// declared property getter: - (int)serviceType;	// 0x33ff6c25
// declared property setter: - (void)setServiceType:(int)type;	// 0x33ff6c35
// declared property setter: - (void)setTag:(id)tag;	// 0x33ff6c55
// declared property getter: - (id)tag;	// 0x33ff6c45
- (void)writeTo:(id)to;	// 0x33ff6aad
@end
