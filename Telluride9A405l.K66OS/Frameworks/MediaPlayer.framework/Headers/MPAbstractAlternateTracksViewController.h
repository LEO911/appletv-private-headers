/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPViewController.h"


@interface MPAbstractAlternateTracksViewController : MPViewController {
	unsigned _selectedTracks[2];	// 196 = 0xc4
	unsigned _previousTracks[2];	// 204 = 0xcc
}
- (id)init;	// 0x33c26351
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x33c26441
- (void)addLoadingUI;	// 0x33c26541
- (id)alternateTracks;	// 0x33c26691
- (id)arrayForGroup:(int)group;	// 0x33c266c9
- (void)dealloc;	// 0x33c263d1
- (unsigned)indexForGroup:(int)group;	// 0x33c26711
- (void)reloadData;	// 0x33c26451
- (void)removeLoadingUI;	// 0x33c26571
- (void)saveChanges;	// 0x33c265ad
- (id)titleForTrack:(id)track;	// 0x33c26761
- (unsigned)typeForGroup:(int)group;	// 0x33c26869
@end

