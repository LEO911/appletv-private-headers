/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTransportControls.h"
#import "MediaPlayer-Structs.h"

@class UIImageView;

@interface MPPortraitTransportControls : MPTransportControls {
	UIImageView *_backgroundView;	// 128 = 0x80
}
+ (float)defaultHeight;	// 0x34668b0d
- (id)init;	// 0x34668999
- (void)_layoutBasicParts;	// 0x34668e81
- (void)_layoutComplexParts;	// 0x3466910d
- (void)dealloc;	// 0x34668ab9
- (void)layoutSubviews;	// 0x34668b15
- (id)newVolumeSlider;	// 0x34668b69
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x34668c91
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x346692e9
@end

