/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"

@class UIActivityIndicatorView, UILabel;

@interface MPInlineTransportControls : MPTransportControls {
	UILabel *_loadingMovieLabel;	// 176 = 0xb0
	UIActivityIndicatorView *_loadingMovieIndicator;	// 180 = 0xb4
}
@property(readonly, assign, nonatomic) CGRect availableProgressControlAreaFrame;	// G=0x31dc40b5; 
- (id)initWithFrame:(CGRect)frame;	// 0x31dc3439
- (void)_disableAnimationIfNecessary:(id)necessary;	// 0x31dc4225
- (void)_enableAnimationIfNecessary:(id)necessary;	// 0x31dc4265
// declared property getter: - (CGRect)availableProgressControlAreaFrame;	// 0x31dc40b5
- (id)buttonImageForPart:(unsigned long long)part;	// 0x31dc37f9
- (void)dealloc;	// 0x31dc34a9
- (void)layoutSubviews;	// 0x31dc3909
- (id)newButtonForPart:(unsigned long long)part;	// 0x31dc37b5
- (id)pauseButtonImage;	// 0x31dc38bd
- (id)playButtonImage;	// 0x31dc38b1
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x31dc350d
- (void)setDisabledParts:(unsigned long long)parts;	// 0x31dc38c9
@end

