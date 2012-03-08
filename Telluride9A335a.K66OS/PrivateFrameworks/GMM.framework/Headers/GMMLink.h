/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMLink : PBCodable {
	BOOL _hasYawDegreeE6;	// 4 = 0x4
	int _yawDegreeE6;	// 8 = 0x8
	NSString *_panoId;	// 12 = 0xc
	BOOL _hasRoadArgb;	// 16 = 0x10
	int _roadArgb;	// 20 = 0x14
	NSString *_linkText;	// 24 = 0x18
	NSString *_linkStreetRange;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) BOOL hasLinkStreetRange;	// G=0x30b5860d; 
@property(readonly, assign, nonatomic) BOOL hasLinkText;	// G=0x30b585d5; 
@property(assign, nonatomic) BOOL hasRoadArgb;	// G=0x30b58a7d; S=0x30b58a8d; @synthesize=_hasRoadArgb
@property(assign, nonatomic) BOOL hasYawDegreeE6;	// G=0x30b58a29; S=0x30b58a39; @synthesize=_hasYawDegreeE6
@property(retain, nonatomic) NSString *linkStreetRange;	// G=0x30b58625; S=0x30b58ac1; @synthesize=_linkStreetRange
@property(retain, nonatomic) NSString *linkText;	// G=0x30b585ed; S=0x30b58a9d; @synthesize=_linkText
@property(retain, nonatomic) NSString *panoId;	// G=0x30b58a49; S=0x30b58a59; @synthesize=_panoId
@property(assign, nonatomic) int roadArgb;	// G=0x30b58585; S=0x30b585b1; @synthesize=_roadArgb
@property(assign, nonatomic) int yawDegreeE6;	// G=0x30b5853d; S=0x30b58561; @synthesize=_yawDegreeE6
- (void)dealloc;	// 0x30b584d1
- (id)description;	// 0x30b58645
- (id)dictionaryRepresentation;	// 0x30b586b5
// declared property getter: - (BOOL)hasLinkStreetRange;	// 0x30b5860d
// declared property getter: - (BOOL)hasLinkText;	// 0x30b585d5
// declared property getter: - (BOOL)hasRoadArgb;	// 0x30b58a7d
// declared property getter: - (BOOL)hasYawDegreeE6;	// 0x30b58a29
// declared property getter: - (id)linkStreetRange;	// 0x30b58625
// declared property getter: - (id)linkText;	// 0x30b585ed
// declared property getter: - (id)panoId;	// 0x30b58a49
- (BOOL)readFrom:(id)from;	// 0x30b58811
// declared property getter: - (int)roadArgb;	// 0x30b58585
// declared property setter: - (void)setHasRoadArgb:(BOOL)argb;	// 0x30b58a8d
// declared property setter: - (void)setHasYawDegreeE6:(BOOL)a6;	// 0x30b58a39
// declared property setter: - (void)setLinkStreetRange:(id)range;	// 0x30b58ac1
// declared property setter: - (void)setLinkText:(id)text;	// 0x30b58a9d
// declared property setter: - (void)setPanoId:(id)anId;	// 0x30b58a59
// declared property setter: - (void)setRoadArgb:(int)argb;	// 0x30b585b1
// declared property setter: - (void)setYawDegreeE6:(int)a6;	// 0x30b58561
- (void)writeTo:(id)to;	// 0x30b58961
// declared property getter: - (int)yawDegreeE6;	// 0x30b5853d
@end
