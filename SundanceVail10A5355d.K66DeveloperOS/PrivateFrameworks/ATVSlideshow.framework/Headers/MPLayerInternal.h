/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSString;

@interface MPLayerInternal : NSObject {
	double numberOfLoops;	// 4 = 0x4
	float opacity;	// 12 = 0xc
	CGPoint position;	// 16 = 0x10
	float zPosition;	// 24 = 0x18
	CGSize size;	// 28 = 0x1c
	float rotationAngle;	// 36 = 0x24
	float xRotationAngle;	// 40 = 0x28
	float yRotationAngle;	// 44 = 0x2c
	float scale;	// 48 = 0x30
	double timeIn;	// 52 = 0x34
	double duration;	// 60 = 0x3c
	double phaseInDuration;	// 68 = 0x44
	double phaseOutDuration;	// 76 = 0x4c
	NSString *title;	// 84 = 0x54
	BOOL isTriggered;	// 88 = 0x58
	BOOL startsPaused;	// 89 = 0x59
	BOOL isAudioLayer;	// 90 = 0x5a
	int audioPriority;	// 92 = 0x5c
	double durationPadding;	// 96 = 0x60
	NSString *layerID;	// 104 = 0x68
	int zIndex;	// 108 = 0x6c
	NSString *uuid;	// 112 = 0x70
	NSLock *containerLock;	// 116 = 0x74
	BOOL cleaningUp;	// 120 = 0x78
}
@property(assign, nonatomic) int audioPriority;	// G=0x32090985; S=0x32090995; @synthesize
@property(assign, nonatomic) BOOL cleaningUp;	// G=0x32090a31; S=0x32090a41; @synthesize
@property(retain, nonatomic) NSLock *containerLock;	// G=0x32090a11; S=0x32090a21; @synthesize
@property(assign, nonatomic) double duration;	// G=0x320908a1; S=0x320908b9; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x320909a5; S=0x320909bd; @synthesize
@property(assign, nonatomic) BOOL isAudioLayer;	// G=0x32090965; S=0x32090975; @synthesize
@property(assign, nonatomic) BOOL isTriggered;	// G=0x32090861; S=0x32090871; @synthesize
@property(retain, nonatomic) NSString *layerID;	// G=0x320909d1; S=0x320909e1; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x320906f1; S=0x32090709; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x3209071d; S=0x3209072d; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x320908cd; S=0x320908e5; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x320908f9; S=0x32090911; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x3209073d; S=0x32090755; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x320907b5; S=0x320907c5; @synthesize
@property(assign, nonatomic) float scale;	// G=0x32090815; S=0x32090825; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x32090789; S=0x320907a1; @synthesize
@property(assign, nonatomic) BOOL startsPaused;	// G=0x32090881; S=0x32090891; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x32090835; S=0x3209084d; @synthesize
@property(retain, nonatomic) NSString *title;	// G=0x32090945; S=0x32090955; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x320909f1; S=0x32090a01; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x320907d5; S=0x320907e5; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x320907f5; S=0x32090805; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x32090925; S=0x32090935; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x32090769; S=0x32090779; @synthesize
// declared property getter: - (int)audioPriority;	// 0x32090985
// declared property getter: - (BOOL)cleaningUp;	// 0x32090a31
// declared property getter: - (id)containerLock;	// 0x32090a11
- (void)dealloc;	// 0x32090649
// declared property getter: - (double)duration;	// 0x320908a1
// declared property getter: - (double)durationPadding;	// 0x320909a5
// declared property getter: - (BOOL)isAudioLayer;	// 0x32090965
// declared property getter: - (BOOL)isTriggered;	// 0x32090861
// declared property getter: - (id)layerID;	// 0x320909d1
// declared property getter: - (double)numberOfLoops;	// 0x320906f1
// declared property getter: - (float)opacity;	// 0x3209071d
// declared property getter: - (double)phaseInDuration;	// 0x320908cd
// declared property getter: - (double)phaseOutDuration;	// 0x320908f9
// declared property getter: - (CGPoint)position;	// 0x3209073d
// declared property getter: - (float)rotationAngle;	// 0x320907b5
// declared property getter: - (float)scale;	// 0x32090815
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x32090995
// declared property setter: - (void)setCleaningUp:(BOOL)up;	// 0x32090a41
// declared property setter: - (void)setContainerLock:(id)lock;	// 0x32090a21
// declared property setter: - (void)setDuration:(double)duration;	// 0x320908b9
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x320909bd
// declared property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x32090975
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x32090871
// declared property setter: - (void)setLayerID:(id)anId;	// 0x320909e1
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x32090709
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x3209072d
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x320908e5
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x32090911
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x32090755
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x320907c5
// declared property setter: - (void)setScale:(float)scale;	// 0x32090825
// declared property setter: - (void)setSize:(CGSize)size;	// 0x320907a1
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x32090891
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x3209084d
// declared property setter: - (void)setTitle:(id)title;	// 0x32090955
// declared property setter: - (void)setUuid:(id)uuid;	// 0x32090a01
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x320907e5
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x32090805
// declared property setter: - (void)setZIndex:(int)index;	// 0x32090935
// declared property setter: - (void)setZPosition:(float)position;	// 0x32090779
// declared property getter: - (CGSize)size;	// 0x32090789
// declared property getter: - (BOOL)startsPaused;	// 0x32090881
// declared property getter: - (double)timeIn;	// 0x32090835
// declared property getter: - (id)title;	// 0x32090945
// declared property getter: - (id)uuid;	// 0x320909f1
// declared property getter: - (float)xRotationAngle;	// 0x320907d5
// declared property getter: - (float)yRotationAngle;	// 0x320907f5
// declared property getter: - (int)zIndex;	// 0x32090925
// declared property getter: - (float)zPosition;	// 0x32090769
@end

