/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOSessionID : PBCodable {
@private
	unsigned long long _low;	// 4 = 0x4
	unsigned long long _high;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned long long high;	// G=0x30ce7bd1; S=0x30ce7be1; @synthesize=_high
@property(assign, nonatomic) unsigned long long low;	// G=0x30ce7bf5; S=0x30ce7c05; @synthesize=_low
- (id)init;	// 0x30ce7c45
- (void)dealloc;	// 0x30ce7c19
- (id)description;	// 0x30ce7d11
- (id)dictionaryRepresentation;	// 0x30ce7c71
// declared property getter: - (unsigned long long)high;	// 0x30ce7bd1
// declared property getter: - (unsigned long long)low;	// 0x30ce7bf5
- (BOOL)readFrom:(id)from;	// 0x30ce7e5d
// declared property setter: - (void)setHigh:(unsigned long long)high;	// 0x30ce7be1
// declared property setter: - (void)setLow:(unsigned long long)low;	// 0x30ce7c05
- (void)writeTo:(id)to;	// 0x30ce7dfd
@end
