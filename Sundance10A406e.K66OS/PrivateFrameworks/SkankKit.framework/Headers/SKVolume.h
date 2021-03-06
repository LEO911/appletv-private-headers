/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"


@interface SKVolume : SKLayer {
	float _volume;	// 56 = 0x38
	int _volumeSteps;	// 60 = 0x3c
	BOOL _muted;	// 64 = 0x40
	BOOL _drawsShadow;	// 65 = 0x41
	CGRect *_rects;	// 68 = 0x44
}
- (id)init;	// 0x3026e309
- (void)dealloc;	// 0x3026e421
- (void)drawInContext:(CGContextRef)context;	// 0x3026e671
- (float)getVolume;	// 0x3026e5a9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3026e999
- (void)recalculateBarRects;	// 0x3026e461
- (void)setBounds:(CGRect)bounds;	// 0x3026e529
- (void)setDrawsShadow:(BOOL)shadow;	// 0x3026e645
- (void)setMuted:(BOOL)muted;	// 0x3026e619
- (void)setVolume:(float)volume;	// 0x3026e571
- (void)setVolumeSteps:(int)steps;	// 0x3026e5b9
@end

