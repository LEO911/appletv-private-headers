/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOAttributeKeyValue : PBCodable {
@private
	NSString *_attributeKey;	// 4 = 0x4
	NSString *_attributeValue;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *attributeKey;	// G=0x34b5bd51; S=0x34b5bd61; @synthesize=_attributeKey
@property(retain, nonatomic) NSString *attributeValue;	// G=0x34b5bd71; S=0x34b5bd81; @synthesize=_attributeValue
// declared property getter: - (id)attributeKey;	// 0x34b5bd51
// declared property getter: - (id)attributeValue;	// 0x34b5bd71
- (void)copyTo:(id)to;	// 0x34b5bc19
- (void)dealloc;	// 0x34b5b8f1
- (id)description;	// 0x34b5b949
- (id)dictionaryRepresentation;	// 0x34b5b9b9
- (unsigned)hash;	// 0x34b5bd11
- (BOOL)isEqual:(id)equal;	// 0x34b5bc71
- (BOOL)readFrom:(id)from;	// 0x34b5bbc5
// declared property setter: - (void)setAttributeKey:(id)key;	// 0x34b5bd61
// declared property setter: - (void)setAttributeValue:(id)value;	// 0x34b5bd81
- (void)writeTo:(id)to;	// 0x34b5bbd1
@end

