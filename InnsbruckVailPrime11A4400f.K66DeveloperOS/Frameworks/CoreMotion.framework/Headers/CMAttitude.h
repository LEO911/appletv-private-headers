/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>
#import "NSSecureCoding.h"


@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double pitch;	// G=0x2d9094d5; 
@property(readonly, assign, nonatomic) XXStruct_N5B6hD quaternion;	// G=0x2d9095cd; 
@property(readonly, assign, nonatomic) double roll;	// G=0x2d9094b5; 
@property(readonly, assign, nonatomic) XXStruct_VSauOA rotationMatrix;	// G=0x2d909515; 
@property(readonly, assign, nonatomic) double yaw;	// G=0x2d9094f5; 
+ (BOOL)supportsSecureCoding;	// 0x2d90918d
- (id)initWithCoder:(id)coder;	// 0x2d909191
- (id)initWithQuaternion:(XXStruct_N5B6hD)quaternion;	// 0x2d9090ed
- (id)copyWithZone:(NSZone *)zone;	// 0x2d90937d
- (void)dealloc;	// 0x2d909331
- (id)description;	// 0x2d9093f9
- (void)encodeWithCoder:(id)coder;	// 0x2d909229
- (void)multiplyByInverseOfAttitude:(id)attitude;	// 0x2d90960d
// declared property getter: - (double)pitch;	// 0x2d9094d5
// declared property getter: - (XXStruct_N5B6hD)quaternion;	// 0x2d9095cd
// declared property getter: - (double)roll;	// 0x2d9094b5
// declared property getter: - (XXStruct_VSauOA)rotationMatrix;	// 0x2d909515
- (void)setQuaternion:(XXStruct_N5B6hD)quaternion;	// 0x2d9092e5
// declared property getter: - (double)yaw;	// 0x2d9094f5
@end
