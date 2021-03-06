/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"


@interface MPInlineAudioTransportControls : MPTransportControls {
@private
	int _style;	// 128 = 0x80
}
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x303b0c15
- (id)buttonImageForPart:(unsigned)part;	// 0x303b0fe9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x303b1141
- (void)layoutSubviews;	// 0x303b117d
- (id)newVolumeSlider;	// 0x303b10e5
- (id)pauseButtonImage;	// 0x303b1115
- (id)playButtonImage;	// 0x303b10e9
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x303b0cc1
@end

