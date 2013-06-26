/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSObject.h"

@class MPMediaQuery, MPMediaItem;

@protocol MPAVControllerProtocol <NSObject>
@property(readonly, assign, nonatomic) MPMediaItem *currentMediaItem;
@property(readonly, assign, nonatomic) MPMediaQuery *currentMediaQuery;
@property(assign, nonatomic) unsigned displayOverridePlaybackState;
@property(readonly, assign, nonatomic) unsigned state;
// declared property getter: - (id)currentMediaItem;
// declared property getter: - (id)currentMediaQuery;
// declared property getter: - (unsigned)displayOverridePlaybackState;
// declared property setter: - (void)setDisplayOverridePlaybackState:(unsigned)state;
- (BOOL)shouldDisplayAsPlaying;
// declared property getter: - (unsigned)state;
@end
