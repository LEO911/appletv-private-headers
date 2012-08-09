/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMDeviceOrientation : CMLogItem {
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int orientation;	// G=0x377806a9; 
- (id)initWithCoder:(id)coder;	// 0x377803c9
- (id)initWithOrientation:(int)orientation andTimestamp:(double)timestamp;	// 0x37780351
- (id)copyWithZone:(NSZone *)zone;	// 0x37780509
- (void)dealloc;	// 0x377804bd
- (id)description;	// 0x377805f1
- (void)encodeWithCoder:(id)coder;	// 0x37780455
// declared property getter: - (int)orientation;	// 0x377806a9
- (id)orientationString;	// 0x37780565
@end
