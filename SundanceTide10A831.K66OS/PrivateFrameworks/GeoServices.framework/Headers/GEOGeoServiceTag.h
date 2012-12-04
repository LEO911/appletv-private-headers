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
	NSString *_tag;	// 8 = 0x8
}
@property(assign, nonatomic) int serviceType;	// G=0x302c5db5; S=0x302c5dc5; @synthesize=_serviceType
@property(retain, nonatomic) NSString *tag;	// G=0x302c5dd5; S=0x302c5de5; @synthesize=_tag
- (void)copyTo:(id)to;	// 0x302c5c8d
- (void)dealloc;	// 0x302c58e5
- (id)description;	// 0x302c5929
- (id)dictionaryRepresentation;	// 0x302c5999
- (unsigned)hash;	// 0x302c5d6d
- (BOOL)isEqual:(id)equal;	// 0x302c5ce5
- (BOOL)readFrom:(id)from;	// 0x302c5c31
// declared property getter: - (int)serviceType;	// 0x302c5db5
// declared property setter: - (void)setServiceType:(int)type;	// 0x302c5dc5
// declared property setter: - (void)setTag:(id)tag;	// 0x302c5de5
// declared property getter: - (id)tag;	// 0x302c5dd5
- (void)writeTo:(id)to;	// 0x302c5c3d
@end
