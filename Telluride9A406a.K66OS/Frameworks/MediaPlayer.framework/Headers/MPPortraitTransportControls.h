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
+ (float)defaultHeight;	// 0x319f1605
- (id)init;	// 0x319f1491
- (void)_layoutBasicParts;	// 0x319f1979
- (void)_layoutComplexParts;	// 0x319f1c05
- (void)dealloc;	// 0x319f15b1
- (void)layoutSubviews;	// 0x319f160d
- (id)newVolumeSlider;	// 0x319f1661
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x319f1789
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x319f1de1
@end
