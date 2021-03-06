/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <CALayer.h> // Unknown library


@interface CALayer (ControlCheaters)
- (id)_owningControl;	// 0x32f56c39
@end

@interface CALayer (DirtyLayout)
- (void)setNeedsLayoutOnAllSublayers;	// 0x32f584b1
@end

@interface CALayer (BRScalingLayoutManager)
@property(assign) CGRect scaledFrame;	// G=0x32fab179; S=0x32fab1c1; converted property
// converted property getter: - (CGRect)scaledFrame;	// 0x32fab179
// converted property setter: - (void)setScaledFrame:(CGRect)frame;	// 0x32fab1c1
@end

@interface CALayer (BRCALayerAdditions)
- (void)addBasicAnimationForProperty:(id)property fromValue:(id)value toValue:(id)value3 duration:(double)duration timingFunction:(id)function delegate:(id)delegate;	// 0x32fcc9a9
- (id)firstLayerNamed:(id)named;	// 0x32fcca79
@end

