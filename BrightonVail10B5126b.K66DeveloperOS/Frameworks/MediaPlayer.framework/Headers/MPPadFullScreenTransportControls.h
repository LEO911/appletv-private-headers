/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"


@interface MPPadFullScreenTransportControls : MPTransportControls {
}
- (id)initWithFrame:(CGRect)frame;	// 0x31d29499
- (void)_itemTypeAvailableNotification:(id)notification;	// 0x31d2a16d
- (id)buttonImageForPart:(unsigned long long)part;	// 0x31d29839
- (void)dealloc;	// 0x31d29521
- (void)layoutSubviews;	// 0x31d29ae9
- (id)newVolumeSlider;	// 0x31d297ad
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x31d29591
- (void)setDisabledParts:(unsigned long long)parts;	// 0x31d29a2d
- (void)setItem:(id)item;	// 0x31d29a69
- (void)setVisibleParts:(unsigned long long)parts animated:(BOOL)animated;	// 0x31d299c9
@end
