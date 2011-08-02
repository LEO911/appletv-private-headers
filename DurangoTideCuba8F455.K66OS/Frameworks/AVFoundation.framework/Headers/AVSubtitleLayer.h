/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library

@class AVPlayer, AVSubtitleLayerInternal;

@interface AVSubtitleLayer : CALayer {
	AVSubtitleLayerInternal *_subtitleLayer;	// 48 = 0x30
}
@property(assign, nonatomic, getter=isNonForcedSubtitleDisplayEnabled) BOOL nonForcedSubtitleDisplayEnabled;	// S=0x325c8bc5; @dynamic
@property(retain, nonatomic) AVPlayer *player;	// G=0x325c827d; S=0x325c845d; @dynamic
+ (id)subtitleLayerWithPlayer:(id)player;	// 0x325c8729
- (id)init;	// 0x325c8879
- (void)_invalidateBoundaryTimeObserver;	// 0x325c84dd
- (void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;	// 0x325c8981
- (void)dealloc;	// 0x325c8779
- (void)drawInContext:(CGContextRef)context;	// 0x325c8b81
- (void)finalize;	// 0x325c881d
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x325c8c09
- (BOOL)nonForcedSubtitleDisplayEnabled;	// 0x325c8299
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x325c82b5
// declared property getter: - (id)player;	// 0x325c827d
// declared property setter: - (void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x325c8bc5
// declared property setter: - (void)setPlayer:(id)player;	// 0x325c845d
- (void)subtitlesDidChange:(id)subtitles;	// 0x325c8c91
@end
