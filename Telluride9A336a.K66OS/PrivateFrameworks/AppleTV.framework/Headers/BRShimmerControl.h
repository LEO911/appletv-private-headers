/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRShimmerControl : BRControl {
@private
	BRControl *_base;	// 48 = 0x30
	BRImageControl *_shimmer;	// 52 = 0x34
	float _offset;	// 56 = 0x38
}
@property(assign) float offset;	// G=0x33ab7845; S=0x33ab77f1; converted property
+ (id)shimmerWithOffset:(float)offset;	// 0x33ab75ed
- (id)init;	// 0x33ab77dd
- (id)initWithOffset:(float)offset;	// 0x33ab7651
- (id)_calculateKeyTimes;	// 0x33ab7bf1
- (id)_calculatePositionValues;	// 0x33ab7af5
- (void)dealloc;	// 0x33ab7855
- (void)layoutSubcontrols;	// 0x33ab78b5
// converted property getter: - (float)offset;	// 0x33ab7845
// converted property setter: - (void)setOffset:(float)offset;	// 0x33ab77f1
@end
