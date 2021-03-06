/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "PDAnimateScaleBehavior.h"

@class NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
	NSString *mPath;	// 120 = 0x78
	BOOL mHasAngle;	// 124 = 0x7c
	double mAngle;	// 128 = 0x80
	BOOL mHasPointType;	// 136 = 0x88
	int mPointType;	// 140 = 0x8c
	BOOL mHasOriginType;	// 144 = 0x90
	int mOriginType;	// 148 = 0x94
	BOOL mHasRotationCenter;	// 152 = 0x98
	CGPoint mRotationCenter;	// 156 = 0x9c
}
@property(assign) double angle;	// G=0x319207fd; S=0x31920815; converted property
@property(assign) int originType;	// G=0x3192088d; S=0x3192089d; converted property
@property(retain) id path;	// G=0x319207dd; S=0x3183fe7d; converted property
@property(assign) int pointType;	// G=0x3192084d; S=0x3192085d; converted property
@property(assign) CGPoint rotationCenter;	// G=0x319208cd; S=0x31840101; converted property
- (id).cxx_construct;	// 0x3183f6d5
// converted property getter: - (double)angle;	// 0x319207fd
- (void)dealloc;	// 0x318406d9
- (BOOL)hasAngle;	// 0x319207ed
- (BOOL)hasOriginType;	// 0x3192087d
- (BOOL)hasPath;	// 0x319207c5
- (BOOL)hasPointType;	// 0x3192083d
- (BOOL)hasRotationCenter;	// 0x319208bd
// converted property getter: - (int)originType;	// 0x3192088d
// converted property getter: - (id)path;	// 0x319207dd
// converted property getter: - (int)pointType;	// 0x3192084d
// converted property getter: - (CGPoint)rotationCenter;	// 0x319208cd
// converted property setter: - (void)setAngle:(double)angle;	// 0x31920815
// converted property setter: - (void)setOriginType:(int)type;	// 0x3192089d
// converted property setter: - (void)setPath:(id)path;	// 0x3183fe7d
// converted property setter: - (void)setPointType:(int)type;	// 0x3192085d
// converted property setter: - (void)setRotationCenter:(CGPoint)center;	// 0x31840101
@end

