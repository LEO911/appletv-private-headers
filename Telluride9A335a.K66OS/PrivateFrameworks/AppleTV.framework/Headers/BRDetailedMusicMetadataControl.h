/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRTextControl;

@interface BRDetailedMusicMetadataControl : BRControl {
@private
	BRMarqueeTextControl *_songTitle;	// 48 = 0x30
	BRTextControl *_songArtist;	// 52 = 0x34
	BRTextControl *_albumTitle;	// 56 = 0x38
	BRTextControl *_trackInfo;	// 60 = 0x3c
	BRTextControl *_duration;	// 64 = 0x40
	BRTextControl *_releaseDate;	// 68 = 0x44
	BRTextControl *_price;	// 72 = 0x48
	BOOL _scrollingAllowed;	// 76 = 0x4c
}
@property(assign) BOOL scrollingAllowed;	// G=0x341e0a6d; S=0x341e0a21; converted property
- (id)init;	// 0x341dff69
- (id)_metadataMusicArtistAndAlbumAttributes;	// 0x341e0aa1
- (id)_metadataMusicDetailsAttributes;	// 0x341e0a7d
- (id)_metadataMusicSongTitleAttributes;	// 0x341e0ac5
- (void)controlWasActivated;	// 0x341e01b1
- (void)controlWasDeactivated;	// 0x341e020d
- (void)dealloc;	// 0x341e00ed
- (void)layoutSubcontrols;	// 0x341e0629
// converted property getter: - (BOOL)scrollingAllowed;	// 0x341e0a6d
- (void)setAlbumTitle:(id)title;	// 0x341e0389
- (void)setDuration:(id)duration;	// 0x341e0471
- (void)setPrice:(id)price;	// 0x341e0559
- (void)setReleaseDate:(id)date;	// 0x341e04e5
// converted property setter: - (void)setScrollingAllowed:(BOOL)allowed;	// 0x341e0a21
- (void)setSongArtist:(id)artist;	// 0x341e0315
- (void)setSongTitle:(id)title;	// 0x341e025d
- (void)setTrackInfo:(id)info;	// 0x341e03fd
@end

