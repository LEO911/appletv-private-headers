/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSString;

@interface MPNavigatorInternal : NSObject {
	NSString *startPlugID;	// 4 = 0x4
	float opacity;	// 8 = 0x8
	CGPoint position;	// 12 = 0xc
	float zPosition;	// 20 = 0x14
	CGSize size;	// 24 = 0x18
	float rotationAngle;	// 32 = 0x20
	float xRotationAngle;	// 36 = 0x24
	float yRotationAngle;	// 40 = 0x28
	float scale;	// 44 = 0x2c
	int zIndex;	// 48 = 0x30
	NSString *uuid;	// 52 = 0x34
	double numberOfLoops;	// 56 = 0x38
	double duration;	// 64 = 0x40
	double timeIn;	// 72 = 0x48
	double phaseInDuration;	// 80 = 0x50
	double phaseOutDuration;	// 88 = 0x58
	NSMutableDictionary *layerKeyDictionary;	// 96 = 0x60
	BOOL isTriggered;	// 100 = 0x64
	BOOL startsPaused;	// 101 = 0x65
}
@property(assign, nonatomic) double duration;	// G=0x32098409; S=0x32098421; @synthesize
@property(assign, nonatomic) BOOL isTriggered;	// G=0x32098461; S=0x32098471; @synthesize
@property(retain, nonatomic) NSMutableDictionary *layerKeyDictionary;	// G=0x320984f9; S=0x32098509; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x320983dd; S=0x320983f5; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x32098269; S=0x32098279; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x320984a1; S=0x320984b9; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x320984cd; S=0x320984e5; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x32098289; S=0x320982a5; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x32098309; S=0x32098319; @synthesize
@property(assign, nonatomic) float scale;	// G=0x32098369; S=0x32098379; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x320982d9; S=0x320982f5; @synthesize
@property(retain, nonatomic) NSString *startPlugID;	// G=0x32098235; S=0x32098245; @synthesize
@property(assign, nonatomic) BOOL startsPaused;	// G=0x32098481; S=0x32098491; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x32098435; S=0x3209844d; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x320983a9; S=0x320983b9; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x32098329; S=0x32098339; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x32098349; S=0x32098359; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x32098389; S=0x32098399; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x320982b9; S=0x320982c9; @synthesize
- (void)dealloc;	// 0x320981a1
// declared property getter: - (double)duration;	// 0x32098409
- (void)finalize;	// 0x32098175
// declared property getter: - (BOOL)isTriggered;	// 0x32098461
// declared property getter: - (id)layerKeyDictionary;	// 0x320984f9
// declared property getter: - (double)numberOfLoops;	// 0x320983dd
// declared property getter: - (float)opacity;	// 0x32098269
// declared property getter: - (double)phaseInDuration;	// 0x320984a1
// declared property getter: - (double)phaseOutDuration;	// 0x320984cd
// declared property getter: - (CGPoint)position;	// 0x32098289
// declared property getter: - (float)rotationAngle;	// 0x32098309
// declared property getter: - (float)scale;	// 0x32098369
// declared property setter: - (void)setDuration:(double)duration;	// 0x32098421
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x32098471
// declared property setter: - (void)setLayerKeyDictionary:(id)dictionary;	// 0x32098509
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x320983f5
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x32098279
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x320984b9
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x320984e5
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x320982a5
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x32098319
// declared property setter: - (void)setScale:(float)scale;	// 0x32098379
// declared property setter: - (void)setSize:(CGSize)size;	// 0x320982f5
// declared property setter: - (void)setStartPlugID:(id)anId;	// 0x32098245
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x32098491
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x3209844d
// declared property setter: - (void)setUuid:(id)uuid;	// 0x320983b9
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x32098339
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x32098359
// declared property setter: - (void)setZIndex:(int)index;	// 0x32098399
// declared property setter: - (void)setZPosition:(float)position;	// 0x320982c9
// declared property getter: - (CGSize)size;	// 0x320982d9
// declared property getter: - (id)startPlugID;	// 0x32098235
// declared property getter: - (BOOL)startsPaused;	// 0x32098481
// declared property getter: - (double)timeIn;	// 0x32098435
// declared property getter: - (id)uuid;	// 0x320983a9
// declared property getter: - (float)xRotationAngle;	// 0x32098329
// declared property getter: - (float)yRotationAngle;	// 0x32098349
// declared property getter: - (int)zIndex;	// 0x32098389
// declared property getter: - (float)zPosition;	// 0x320982b9
@end

