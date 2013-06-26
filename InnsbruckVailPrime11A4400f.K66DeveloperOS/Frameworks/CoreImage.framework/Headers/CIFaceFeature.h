/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFeature.h"


@interface CIFaceFeature : CIFeature {
	CGRect bounds;	// 4 = 0x4
	BOOL hasLeftEyePosition;	// 20 = 0x14
	CGPoint leftEyePosition;	// 24 = 0x18
	BOOL hasRightEyePosition;	// 32 = 0x20
	CGPoint rightEyePosition;	// 36 = 0x24
	BOOL hasMouthPosition;	// 44 = 0x2c
	CGPoint mouthPosition;	// 48 = 0x30
	BOOL hasTrackingID;	// 56 = 0x38
	int trackingID;	// 60 = 0x3c
	BOOL hasTrackingFrameCount;	// 64 = 0x40
	int trackingFrameCount;	// 68 = 0x44
	BOOL hasFaceAngle;	// 72 = 0x48
	float faceAngle;	// 76 = 0x4c
	BOOL hasSmile;	// 80 = 0x50
	BOOL leftEyeClosed;	// 81 = 0x51
	BOOL rightEyeClosed;	// 82 = 0x52
}
@property(assign) CGRect bounds;	// G=0x2d72fff1; S=0x2d730015; @synthesize
@property(assign) float faceAngle;	// G=0x2d7302b5; S=0x2d7302c9; @synthesize
@property(assign) BOOL hasFaceAngle;	// G=0x2d730285; S=0x2d73029d; @synthesize
@property(assign) BOOL hasLeftEyePosition;	// G=0x2d73004d; S=0x2d730065; @synthesize
@property(assign) BOOL hasMouthPosition;	// G=0x2d73014d; S=0x2d730165; @synthesize
@property(assign) BOOL hasRightEyePosition;	// G=0x2d7300cd; S=0x2d7300e5; @synthesize
@property(assign) BOOL hasSmile;	// G=0x2d7302e1; S=0x2d7302f9; @synthesize
@property(assign) BOOL hasTrackingFrameCount;	// G=0x2d730229; S=0x2d730241; @synthesize
@property(assign) BOOL hasTrackingID;	// G=0x2d7301cd; S=0x2d7301e5; @synthesize
@property(assign) BOOL leftEyeClosed;	// G=0x2d730311; S=0x2d730329; @synthesize
@property(assign) CGPoint leftEyePosition;	// G=0x2d73007d; S=0x2d7300a1; @synthesize
@property(assign) CGPoint mouthPosition;	// G=0x2d73017d; S=0x2d7301a1; @synthesize
@property(assign) BOOL rightEyeClosed;	// G=0x2d730341; S=0x2d730359; @synthesize
@property(assign) CGPoint rightEyePosition;	// G=0x2d7300fd; S=0x2d730121; @synthesize
@property(assign) int trackingFrameCount;	// G=0x2d730259; S=0x2d73026d; @synthesize
@property(assign) int trackingID;	// G=0x2d7301fd; S=0x2d730211; @synthesize
+ (id)faceFeatureWithBounds:(CGRect)bounds;	// 0x2d72fb5d
+ (id)faceFeaturesWithBoundsArray:(const CGRect *)boundsArray count:(unsigned)count;	// 0x2d72fbb5
- (id)initWithBounds:(CGRect)bounds;	// 0x2d72fd25
- (id)initWithBounds:(CGRect)bounds hasLeftEyePosition:(BOOL)position leftEyePosition:(CGPoint)position3 hasRightEyePosition:(BOOL)position4 rightEyePosition:(CGPoint)position5 hasMouthPosition:(BOOL)position6 mouthPosition:(CGPoint)position7 hasFaceAngle:(BOOL)angle faceAngle:(float)angle9 hasTrackingID:(BOOL)anId trackingID:(int)anId11 hasTrackingFrameCount:(BOOL)count trackingFrameCount:(int)count13 hasSmile:(BOOL)smile leftEyeClosed:(BOOL)closed rightEyeClosed:(BOOL)closed16;	// 0x2d72fe81
- (id).cxx_construct;	// 0x2d730371
// declared property getter: - (CGRect)bounds;	// 0x2d72fff1
// declared property getter: - (float)faceAngle;	// 0x2d7302b5
// declared property getter: - (BOOL)hasFaceAngle;	// 0x2d730285
// declared property getter: - (BOOL)hasLeftEyePosition;	// 0x2d73004d
// declared property getter: - (BOOL)hasMouthPosition;	// 0x2d73014d
// declared property getter: - (BOOL)hasRightEyePosition;	// 0x2d7300cd
// declared property getter: - (BOOL)hasSmile;	// 0x2d7302e1
// declared property getter: - (BOOL)hasTrackingFrameCount;	// 0x2d730229
// declared property getter: - (BOOL)hasTrackingID;	// 0x2d7301cd
// declared property getter: - (BOOL)leftEyeClosed;	// 0x2d730311
// declared property getter: - (CGPoint)leftEyePosition;	// 0x2d73007d
// declared property getter: - (CGPoint)mouthPosition;	// 0x2d73017d
// declared property getter: - (BOOL)rightEyeClosed;	// 0x2d730341
// declared property getter: - (CGPoint)rightEyePosition;	// 0x2d7300fd
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x2d730015
// declared property setter: - (void)setFaceAngle:(float)angle;	// 0x2d7302c9
// declared property setter: - (void)setHasFaceAngle:(BOOL)angle;	// 0x2d73029d
// declared property setter: - (void)setHasLeftEyePosition:(BOOL)position;	// 0x2d730065
// declared property setter: - (void)setHasMouthPosition:(BOOL)position;	// 0x2d730165
// declared property setter: - (void)setHasRightEyePosition:(BOOL)position;	// 0x2d7300e5
// declared property setter: - (void)setHasSmile:(BOOL)smile;	// 0x2d7302f9
// declared property setter: - (void)setHasTrackingFrameCount:(BOOL)count;	// 0x2d730241
// declared property setter: - (void)setHasTrackingID:(BOOL)anId;	// 0x2d7301e5
// declared property setter: - (void)setLeftEyeClosed:(BOOL)closed;	// 0x2d730329
// declared property setter: - (void)setLeftEyePosition:(CGPoint)position;	// 0x2d7300a1
// declared property setter: - (void)setMouthPosition:(CGPoint)position;	// 0x2d7301a1
// declared property setter: - (void)setRightEyeClosed:(BOOL)closed;	// 0x2d730359
// declared property setter: - (void)setRightEyePosition:(CGPoint)position;	// 0x2d730121
// declared property setter: - (void)setTrackingFrameCount:(int)count;	// 0x2d73026d
// declared property setter: - (void)setTrackingID:(int)anId;	// 0x2d730211
// declared property getter: - (int)trackingFrameCount;	// 0x2d730259
// declared property getter: - (int)trackingID;	// 0x2d7301fd
- (id)type;	// 0x2d72fb51
@end
