/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOSource : PBCodable {
	NSString *_sourceId;	// 4 = 0x4
	NSString *_sourceName;	// 8 = 0x8
	NSString *_sourceVersion;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasSourceVersion;	// G=0x3395b851; 
@property(retain, nonatomic) NSString *sourceId;	// G=0x3395bd8d; S=0x3395bd9d; @synthesize=_sourceId
@property(retain, nonatomic) NSString *sourceName;	// G=0x3395bd6d; S=0x3395bd7d; @synthesize=_sourceName
@property(retain, nonatomic) NSString *sourceVersion;	// G=0x3395bdad; S=0x3395bdbd; @synthesize=_sourceVersion
- (void)copyTo:(id)to;	// 0x3395bba9
- (void)dealloc;	// 0x3395b7e5
- (id)description;	// 0x3395b869
- (id)dictionaryRepresentation;	// 0x3395b8d9
// declared property getter: - (BOOL)hasSourceVersion;	// 0x3395b851
- (unsigned)hash;	// 0x3395bd11
- (BOOL)isEqual:(id)equal;	// 0x3395bc41
- (BOOL)readFrom:(id)from;	// 0x3395bb35
// declared property setter: - (void)setSourceId:(id)anId;	// 0x3395bd9d
// declared property setter: - (void)setSourceName:(id)name;	// 0x3395bd7d
// declared property setter: - (void)setSourceVersion:(id)version;	// 0x3395bdbd
// declared property getter: - (id)sourceId;	// 0x3395bd8d
// declared property getter: - (id)sourceName;	// 0x3395bd6d
// declared property getter: - (id)sourceVersion;	// 0x3395bdad
- (void)writeTo:(id)to;	// 0x3395bb41
@end

