/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRDetailedMusicMetadataControl : BRControl {
	BRMarqueeTextControl *_songTitle;	// 84 = 0x54
	BRTextControl *_songArtist;	// 88 = 0x58
	BRTextControl *_albumTitle;	// 92 = 0x5c
	BRTextControl *_trackInfo;	// 96 = 0x60
	BRTextControl *_duration;	// 100 = 0x64
	BRTextControl *_releaseDate;	// 104 = 0x68
	BRTextControl *_price;	// 108 = 0x6c
	BOOL _scrollingAllowed;	// 112 = 0x70
}
@property(assign) BOOL scrollingAllowed;	// G=0x2df6f5; S=0x2df6b9; converted property
- (id)init;	// 0x2debf1
- (id)_metadataMusicArtistAndAlbumAttributes;	// 0x2df729
- (id)_metadataMusicDetailsAttributes;	// 0x2df705
- (id)_metadataMusicSongTitleAttributes;	// 0x2df74d
- (void)controlWasActivated;	// 0x2dee29
- (void)controlWasDeactivated;	// 0x2dee85
- (void)dealloc;	// 0x2ded61
- (void)layoutSubcontrols;	// 0x2df2a1
// converted property getter: - (BOOL)scrollingAllowed;	// 0x2df6f5
- (void)setAlbumTitle:(id)title;	// 0x2df001
- (void)setDuration:(id)duration;	// 0x2df0e9
- (void)setPrice:(id)price;	// 0x2df1d1
- (void)setReleaseDate:(id)date;	// 0x2df15d
// converted property setter: - (void)setScrollingAllowed:(BOOL)allowed;	// 0x2df6b9
- (void)setSongArtist:(id)artist;	// 0x2def8d
- (void)setSongTitle:(id)title;	// 0x2deed5
- (void)setTrackInfo:(id)info;	// 0x2df075
@end
