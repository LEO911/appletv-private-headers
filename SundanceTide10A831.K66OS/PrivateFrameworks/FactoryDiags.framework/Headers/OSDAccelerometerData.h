/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library


@interface OSDAccelerometerData : NSObject {
	float x;	// 4 = 0x4
	float y;	// 8 = 0x8
	float z;	// 12 = 0xc
	double timestamp;	// 16 = 0x10
}
@property(assign, nonatomic) double timestamp;	// G=0x321d4dd5; S=0x321d4ded; @synthesize
@property(assign, nonatomic) float x;	// G=0x321d4d75; S=0x321d4d85; @synthesize
@property(assign, nonatomic) float y;	// G=0x321d4d95; S=0x321d4da5; @synthesize
@property(assign, nonatomic) float z;	// G=0x321d4db5; S=0x321d4dc5; @synthesize
- (id)init;	// 0x321d4d01
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x321d4ded
// declared property setter: - (void)setX:(float)x;	// 0x321d4d85
// declared property setter: - (void)setY:(float)y;	// 0x321d4da5
// declared property setter: - (void)setZ:(float)z;	// 0x321d4dc5
// declared property getter: - (double)timestamp;	// 0x321d4dd5
// declared property getter: - (float)x;	// 0x321d4d75
// declared property getter: - (float)y;	// 0x321d4d95
// declared property getter: - (float)z;	// 0x321d4db5
@end
