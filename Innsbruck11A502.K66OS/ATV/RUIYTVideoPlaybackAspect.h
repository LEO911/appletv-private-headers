/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTPlayerControlling.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRMediaPlayer, RUIYTPlayerMemento, BRControllerStack, RUIYTMediaAsset, RUIYTLoadWaitController;
@protocol RUIYTVideoPlaybackAspectDelegate;

__attribute__((visibility("hidden")))
@interface RUIYTVideoPlaybackAspect : XXUnknownSuperclass <RUIYTPlayerControlling> {
	BRControllerStack *_controllerStack;	// 4 = 0x4
	BRMediaPlayer *_player;	// 8 = 0x8
	RUIYTPlayerMemento *_playerMemento;	// 12 = 0xc
	RUIYTLoadWaitController *_loadWaitController;	// 16 = 0x10
	BOOL _showsRelatedMenu;	// 20 = 0x14
	id<RUIYTVideoPlaybackAspectDelegate> _delegate;	// 24 = 0x18
	id _context;	// 28 = 0x1c
}
@property(readonly, assign) id context;	// G=0x289e19; @synthesize=_context
@property(readonly, assign) RUIYTMediaAsset *currentAsset;	// G=0x289615; @dynamic
@property(assign, nonatomic) __weak id<RUIYTVideoPlaybackAspectDelegate> delegate;	// G=0x289df9; S=0x2895a9; @synthesize=_delegate
@property(readonly, assign) BOOL isWaitingForMoreAssets;	// G=0x2895b9; @dynamic
@property(assign, nonatomic) BOOL showsRelatedMenu;	// G=0x289e39; S=0x289e49; @synthesize=_showsRelatedMenu
- (id)initWithControllerStack:(id)controllerStack;	// 0x289481
- (void).cxx_destruct;	// 0x289e59
- (void)_finishPlaybackWithError:(id)error;	// 0x28a641
- (BOOL)_haveUserConsentForInappropriateContent;	// 0x28a111
- (void)_loadMoreAssets;	// 0x28a371
- (void)_mediaPlayerCurrentAssetChanged:(id)changed;	// 0x28a75d
- (void)_mediaPlayerPlaybackEnded:(id)ended;	// 0x28a7cd
- (void)_mediaPlayerPlaybackError:(id)error;	// 0x28a981
- (void)_mediaPlayerStateChanged:(id)changed;	// 0x28a8f9
- (id)_player;	// 0x28a0fd
- (id)_playerForAssetAtIndex:(int)index inPlaylist:(id)playlist;	// 0x28a2cd
- (void)_presentPlayer;	// 0x28a595
- (void)_pushRelatedMenu;	// 0x28a4c1
- (void)_setPlayer:(id)player;	// 0x289f99
- (void)_setWaitingForMoreAssets:(BOOL)moreAssets;	// 0x289ed9
- (void)abandonYTPlayback;	// 0x289d55
- (void)appendAssets:(id)assets;	// 0x289899
- (BOOL)canResumePlayback;	// 0x2899d5
// declared property getter: - (id)context;	// 0x289e19
// declared property getter: - (id)currentAsset;	// 0x289615
- (void)dealloc;	// 0x2894f1
// declared property getter: - (id)delegate;	// 0x289df9
// declared property getter: - (BOOL)isWaitingForMoreAssets;	// 0x2895b9
- (void)menuActionForPlayer:(id)player;	// 0x289d69
- (void)playYTAssetAgain:(id)again;	// 0x289bcd
- (void)playbackAsset:(id)asset context:(id)context;	// 0x289691
- (void)playbackAssetAtIndex:(int)index inPlaylist:(id)playlist context:(id)context;	// 0x28973d
- (void)resumeYTPlayback;	// 0x289b91
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2895a9
// declared property setter: - (void)setShowsRelatedMenu:(BOOL)menu;	// 0x289e49
// declared property getter: - (BOOL)showsRelatedMenu;	// 0x289e39
@end

