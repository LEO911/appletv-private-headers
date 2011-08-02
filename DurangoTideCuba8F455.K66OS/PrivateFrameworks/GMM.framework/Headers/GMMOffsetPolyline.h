/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData, GMMGeometry;

__attribute__((visibility("hidden")))
@interface GMMOffsetPolyline : PBCodable {
@private
	GMMGeometry *_absolutePoint;	// 4 = 0x4
	NSData *_relativePoints;	// 8 = 0x8
}
@property(retain, nonatomic) GMMGeometry *absolutePoint;	// G=0x3444c6a1; S=0x3444caed; @synthesize=_absolutePoint
@property(readonly, assign, nonatomic) BOOL hasRelativePoints;	// G=0x3444c67d; 
@property(retain, nonatomic) NSData *relativePoints;	// G=0x3444c691; S=0x3444cb15; @synthesize=_relativePoints
- (id)init;	// 0x3444c6b1
// declared property getter: - (id)absolutePoint;	// 0x3444c6a1
- (void)dealloc;	// 0x3444ca91
- (id)description;	// 0x3444c755
- (id)dictionaryRepresentation;	// 0x3444c6dd
// declared property getter: - (BOOL)hasRelativePoints;	// 0x3444c67d
- (BOOL)readFrom:(id)from;	// 0x3444c8f1
// declared property getter: - (id)relativePoints;	// 0x3444c691
// declared property setter: - (void)setAbsolutePoint:(id)point;	// 0x3444caed
// declared property setter: - (void)setRelativePoints:(id)points;	// 0x3444cb15
- (void)writeTo:(id)to;	// 0x3444c839
@end
