/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class NSString, GEOLatLng;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable {
	double _timestamp;	// 4 = 0x4
	NSString *_bundleIdentifier;	// 12 = 0xc
	GEOLatLng *_destination;	// 16 = 0x10
	GEOLatLng *_source;	// 20 = 0x14
	XXStruct_ec15KC _has;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *bundleIdentifier;	// G=0x30f64a89; S=0x30f64a99; @synthesize=_bundleIdentifier
@property(retain, nonatomic) GEOLatLng *destination;	// G=0x30f64ac9; S=0x30f64ad9; @synthesize=_destination
@property(readonly, assign, nonatomic) BOOL hasBundleIdentifier;	// G=0x30f64065; 
@property(readonly, assign, nonatomic) BOOL hasDestination;	// G=0x30f64095; 
@property(readonly, assign, nonatomic) BOOL hasSource;	// G=0x30f6407d; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x30f640fd; S=0x30f640e1; 
@property(retain, nonatomic) GEOLatLng *source;	// G=0x30f64aa9; S=0x30f64ab9; @synthesize=_source
@property(assign, nonatomic) double timestamp;	// G=0x30f64ae9; S=0x30f640ad; @synthesize=_timestamp
// declared property getter: - (id)bundleIdentifier;	// 0x30f64a89
- (void)copyTo:(id)to;	// 0x30f64769
- (void)dealloc;	// 0x30f63ff9
- (id)description;	// 0x30f64111
// declared property getter: - (id)destination;	// 0x30f64ac9
- (id)dictionaryRepresentation;	// 0x30f64181
// declared property getter: - (BOOL)hasBundleIdentifier;	// 0x30f64065
// declared property getter: - (BOOL)hasDestination;	// 0x30f64095
// declared property getter: - (BOOL)hasSource;	// 0x30f6407d
// declared property getter: - (BOOL)hasTimestamp;	// 0x30f640fd
- (unsigned)hash;	// 0x30f64989
- (BOOL)isEqual:(id)equal;	// 0x30f64871
- (BOOL)readFrom:(id)from;	// 0x30f645c9
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x30f64a99
// declared property setter: - (void)setDestination:(id)destination;	// 0x30f64ad9
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x30f640e1
// declared property setter: - (void)setSource:(id)source;	// 0x30f64ab9
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x30f640ad
// declared property getter: - (id)source;	// 0x30f64aa9
// declared property getter: - (double)timestamp;	// 0x30f64ae9
- (void)writeTo:(id)to;	// 0x30f645d5
@end
