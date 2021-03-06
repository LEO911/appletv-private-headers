/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSMutableArray;

@interface GEOSearchAttribution : PBCodable {
	NSMutableArray *_attributionURLs;	// 4 = 0x4
	NSString *_sourceIdentifier;	// 8 = 0x8
	unsigned _sourceVersion;	// 12 = 0xc
}
@property(retain, nonatomic) NSMutableArray *attributionURLs;	// G=0x30f7e361; S=0x30f7e371; @synthesize=_attributionURLs
@property(retain, nonatomic) NSString *sourceIdentifier;	// G=0x30f7e321; S=0x30f7e331; @synthesize=_sourceIdentifier
@property(assign, nonatomic) unsigned sourceVersion;	// G=0x30f7e341; S=0x30f7e351; @synthesize=_sourceVersion
- (void)addAttributionURLs:(id)urls;	// 0x30f7dbf1
// declared property getter: - (id)attributionURLs;	// 0x30f7e361
- (id)attributionURLsAtIndex:(unsigned)index;	// 0x30f7dc7d
- (unsigned)attributionURLsCount;	// 0x30f7dc5d
- (void)clearAttributionURLs;	// 0x30f7dbd1
- (void)copyTo:(id)to;	// 0x30f7e139
- (void)dealloc;	// 0x30f7db79
- (id)description;	// 0x30f7dc9d
- (id)dictionaryRepresentation;	// 0x30f7dd0d
- (unsigned)hash;	// 0x30f7e2bd
- (BOOL)isEqual:(id)equal;	// 0x30f7e205
- (BOOL)readFrom:(id)from;	// 0x30f7e025
// declared property setter: - (void)setAttributionURLs:(id)urls;	// 0x30f7e371
// declared property setter: - (void)setSourceIdentifier:(id)identifier;	// 0x30f7e331
// declared property setter: - (void)setSourceVersion:(unsigned)version;	// 0x30f7e351
// declared property getter: - (id)sourceIdentifier;	// 0x30f7e321
// declared property getter: - (unsigned)sourceVersion;	// 0x30f7e341
- (void)writeTo:(id)to;	// 0x30f7e031
@end

