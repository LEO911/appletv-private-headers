/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTPlayerControlling.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRControllerStack, BRMediaPlayer, RUIYTMediaAsset, RUIYTPlayerMemento, RUIYTLoadWaitController;
@protocol RUIYTVideoPlaybackAspectDelegate;

__attribute__((visibility("hidden")))
@interface RUIYTVideoPlaybackAspect : XXUnknownSuperclass <RUIYTPlayerControlling> {
	BRControllerStack *_controllerStack;	// 4 = 0x4
	BRMediaPlayer *_player;	// 8 = 0x8
	RUIYTPlayerMemento *_playerMemento;	// 12 = 0xc
	RUIYTLoadWaitController *_loadWaitController;	// 16 = 0x10
	id<RUIYTVideoPlaybackAspectDelegate> _delegate;	// 20 = 0x14
	id _context;	// 24 = 0x18
}
@property(readonly, assign) id context;	// G=0x239d99; @synthesize=_context
@property(readonly, assign) RUIYTMediaAsset *currentAsset;	// G=0x23949d; @dynamic
@property(assign, nonatomic) __weak id<RUIYTVideoPlaybackAspectDelegate> delegate;	// G=0x239d79; S=0x239431; @synthesize=_delegate
@property(readonly, assign) BOOL isWaitingForMoreAssets;	// G=0x239441; @dynamic
- (id)initWithControllerStack:(id)controllerStack;	// 0x239311
- (void).cxx_destruct;	// 0x239db9
- (BOOL)_haveUserConsentForInappropriateContent;	// 0x23a035
- (void)_loadMoreAssets;	// 0x23a295
- (void)_mediaPlayerCurrentAssetChanged:(id)changed;	// 0x23a565
- (void)_mediaPlayerPlaybackEnded:(id)ended;	// 0x23a5d5
- (void)_mediaPlayerStateChanged:(id)changed;	// 0x23a6b1
- (id)_player;	// 0x23a021
- (id)_playerForAssetAtIndex:(int)index inPlaylist:(id)playlist;	// 0x23a1f1
- (void)_presentPlayer;	// 0x23a4b9
- (void)_pushRelatedMenu;	// 0x23a3e5
- (void)_setPlayer:(id)player;	// 0x239ef9
- (void)_setWaitingForMoreAssets:(BOOL)moreAssets;	// 0x239e39
- (void)abandonYTPlayback;	// 0x239be1
- (void)appendAssets:(id)assets;	// 0x239729
- (BOOL)canResumePlayback;	// 0x239865
// declared property getter: - (id)context;	// 0x239d99
// declared property getter: - (id)currentAsset;	// 0x23949d
- (void)dealloc;	// 0x239379
// declared property getter: - (id)delegate;	// 0x239d79
// declared property getter: - (BOOL)isWaitingForMoreAssets;	// 0x239441
- (void)menuActionForPlayer:(id)player;	// 0x239ce9
- (void)playYTAssetAgain:(id)again;	// 0x239a59
- (void)playbackAsset:(id)asset context:(id)context;	// 0x239519
- (void)playbackAssetAtIndex:(int)index inPlaylist:(id)playlist context:(id)context;	// 0x2395c5
- (void)resumeYTPlayback;	// 0x239a1d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x239431
@end
