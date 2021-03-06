/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@protocol UIAccelerometerDelegate;

@interface UIAccelerometer : NSObject {
	double _updateInterval;	// 4 = 0x4
	id<UIAccelerometerDelegate> _delegate;	// 12 = 0xc
	mdocFlags _accelerometerFlags;	// 16 = 0x10
}
@property(assign, nonatomic) id<UIAccelerometerDelegate> delegate;	// G=0x31e42751; S=0x31e42581; @synthesize=_delegate
@property(assign, nonatomic) double updateInterval;	// G=0x31e42739; S=0x31e42521; @synthesize=_updateInterval
+ (id)sharedAccelerometer;	// 0x31e4248d
- (id)init;	// 0x31e424c9
- (void)_acceleratedInX:(double)x y:(double)y z:(double)z timestamp:(double)timestamp;	// 0x31e42639
// declared property getter: - (id)delegate;	// 0x31e42751
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31e42581
// declared property setter: - (void)setUpdateInterval:(double)interval;	// 0x31e42521
// declared property getter: - (double)updateInterval;	// 0x31e42739
@end

