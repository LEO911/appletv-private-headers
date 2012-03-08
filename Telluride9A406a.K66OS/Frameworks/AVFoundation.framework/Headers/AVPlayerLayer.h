/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library

@class AVPlayerLayerInternal, AVPlayer, NSString;

@interface AVPlayerLayer : CALayer {
	AVPlayerLayerInternal *_playerLayer;	// 48 = 0x30
}
@property(assign, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;	// G=0x30e5c471; S=0x30e5c39d; converted property
@property(retain, nonatomic) AVPlayer *player;	// G=0x30e5ca59; S=0x30e5c8a5; 
@property(readonly, assign, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;	// G=0x30e5c5c1; @dynamic
@property(copy) NSString *videoGravity;	// G=0x30e5c719; S=0x30e5c619; 
+ (id)playerLayerWithPlayer:(id)player;	// 0x30e5c1a1
- (id)init;	// 0x30e5ded5
- (id)initWithLayer:(id)layer;	// 0x30e5dd69
- (void)_addAnimationsForContentLayer:(id)contentLayer size:(CGSize)size gravity:(id)gravity;	// 0x30e5d8f5
- (void)_addAnimationsForSubtitleLayer:(id)subtitleLayer size:(CGSize)size;	// 0x30e5d799
- (void)_connectContentLayerToPlayer;	// 0x30e5bc75
- (void)_disconnectContentLayerFromPlayer;	// 0x30e5bcb1
- (CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)player;	// 0x30e5d325
- (CGRect)_minRectToFitVideoAndSubtitlesInBounds:(CGRect)bounds;	// 0x30e5bbb5
- (float)_pctOfSubtitleLayerHeight;	// 0x30e5c115
- (void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;	// 0x30e5cc49
- (void)_setItem:(id)item readyForDisplay:(BOOL)display;	// 0x30e5c4f9
- (void)_setSubtitleDisplayEnabled:(BOOL)enabled;	// 0x30e5bf09
- (void)_setSubtitleGravity:(id)gravity;	// 0x30e5bfdd
- (BOOL)_subtitleDisplayEnabled;	// 0x30e5becd
- (id)_subtitleGravity;	// 0x30e5bb41
- (void)_updatePresentationSize:(CGSize)size;	// 0x30e5cfa1
- (void)_updateSubtitleLayerForPlayerLayerBounds:(CGRect)playerLayerBounds presentationSize:(CGSize)size playLayerTransform:(CATransform3D)transform;	// 0x30e5ce15
- (CGRect)_videoRect;	// 0x30e5c1fd
- (CGRect)_videoRectForBounds:(CGRect)bounds;	// 0x30e5bb99
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x30e5d705
- (void)dealloc;	// 0x30e5d449
- (void)finalize;	// 0x30e5d38d
// converted property getter: - (BOOL)isOverscanSubtitleSupportEnabled;	// 0x30e5c471
// declared property getter: - (BOOL)isReadyForDisplay;	// 0x30e5c5c1
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x30e5c7ed
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30e5cb25
// declared property getter: - (id)player;	// 0x30e5ca59
- (void)removeAllAnimations;	// 0x30e5d595
- (void)removeAnimationForKey:(id)key;	// 0x30e5d661
- (void)setBounds:(CGRect)bounds;	// 0x30e5da25
// converted property setter: - (void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;	// 0x30e5c39d
// declared property setter: - (void)setPlayer:(id)player;	// 0x30e5c8a5
// declared property setter: - (void)setVideoGravity:(id)gravity;	// 0x30e5c619
// declared property getter: - (id)videoGravity;	// 0x30e5c719
@end
