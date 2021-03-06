/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOSentinelTile : PBCodable {
	NSString *_resourceName;	// 4 = 0x4
	int _type;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *resourceName;	// G=0x33915d59; S=0x33921cb5; @synthesize=_resourceName
@property(assign, nonatomic) int type;	// G=0x33915d49; S=0x339a401d; @synthesize=_type
- (void)copyTo:(id)to;	// 0x339a3f7d
- (void)dealloc;	// 0x33921c71
- (id)description;	// 0x339a3e1d
- (id)dictionaryRepresentation;	// 0x339a3e8d
- (unsigned)hash;	// 0x339a3fd5
- (BOOL)isEqual:(id)equal;	// 0x33921949
- (BOOL)readFrom:(id)from;	// 0x339a3f21
// declared property getter: - (id)resourceName;	// 0x33915d59
// declared property setter: - (void)setResourceName:(id)name;	// 0x33921cb5
// declared property setter: - (void)setType:(int)type;	// 0x339a401d
// declared property getter: - (int)type;	// 0x33915d49
- (void)writeTo:(id)to;	// 0x339a3f2d
@end

