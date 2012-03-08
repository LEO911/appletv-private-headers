/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTrackInfoLayer, NSString, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRTrackInfoControl : BRControl {
@private
	BRTrackInfoLayer *_layer;	// 48 = 0x30
	BRMediaPlayer *_player;	// 52 = 0x34
	NSString *_lastAssetID;	// 56 = 0x38
}
@property(retain) BRMediaPlayer *player;	// G=0x35e3d0f5; S=0x35e3cfed; converted property
- (id)init;	// 0x35e3cd4d
- (id)_fetchCoverArt;	// 0x35e3d2e5
- (void)_playbackAssetChanged:(id)changed;	// 0x35e3d3d1
- (void)_playerStateChanged:(id)changed;	// 0x35e3d391
- (BOOL)_supportsShowingArtist:(id)artist;	// 0x35e3d4ad
- (BOOL)_supportsShowingPrimaryCollectionTitle:(id)title;	// 0x35e3d549
- (void)_updateCoverArt:(id)art;	// 0x35e3d3e1
- (void)_updateTrackInfo;	// 0x35e3d125
- (id)accessibilityLabel;	// 0x35e3d105
- (void)controlWasActivated;	// 0x35e3ce81
- (void)controlWasDeactivated;	// 0x35e3cf51
- (void)dealloc;	// 0x35e3cddd
// converted property getter: - (id)player;	// 0x35e3d0f5
// converted property setter: - (void)setPlayer:(id)player;	// 0x35e3cfed
@end
