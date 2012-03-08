/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMModel : PBCodable {
	NSData *_depthMap;	// 4 = 0x4
	NSData *_panoMap;	// 8 = 0x8
}
@property(retain, nonatomic) NSData *depthMap;	// G=0x315a57ad; S=0x315a57bd; @synthesize=_depthMap
@property(readonly, assign, nonatomic) BOOL hasDepthMap;	// G=0x315a5541; 
@property(readonly, assign, nonatomic) BOOL hasPanoMap;	// G=0x315a5559; 
@property(retain, nonatomic) NSData *panoMap;	// G=0x315a57e1; S=0x315a57f1; @synthesize=_panoMap
- (void)dealloc;	// 0x315a54e9
// declared property getter: - (id)depthMap;	// 0x315a57ad
- (id)description;	// 0x315a5571
- (id)dictionaryRepresentation;	// 0x315a55e1
// declared property getter: - (BOOL)hasDepthMap;	// 0x315a5541
// declared property getter: - (BOOL)hasPanoMap;	// 0x315a5559
// declared property getter: - (id)panoMap;	// 0x315a57e1
- (BOOL)readFrom:(id)from;	// 0x315a5661
// declared property setter: - (void)setDepthMap:(id)map;	// 0x315a57bd
// declared property setter: - (void)setPanoMap:(id)map;	// 0x315a57f1
- (void)writeTo:(id)to;	// 0x315a5755
@end
