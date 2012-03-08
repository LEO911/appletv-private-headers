/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPButton.h"

@class MPAVController;

@interface MPTransportButton : MPButton {
@private
	MPAVController *player;	// 168 = 0xa8
}
@property(retain, nonatomic) MPAVController *player;	// G=0x30128079; S=0x30128089; @synthesize
- (id)_automationID;	// 0x30127f29
- (void)dealloc;	// 0x3012802d
// declared property getter: - (id)player;	// 0x30128079
// declared property setter: - (void)setPlayer:(id)player;	// 0x30128089
@end
