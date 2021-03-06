/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "MPAbstractAlternateTracksViewController.h"

@class UITableView;

@interface MPPadAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
	UITableView *_tableView;	// 248 = 0xf8
}
- (id)init;	// 0x33734361
- (id)initWithPlayer:(id)player;	// 0x3373428d
- (void)dealloc;	// 0x337343dd
- (void)loadView;	// 0x33734451
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x3373452d
- (void)reloadData;	// 0x337348e5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x337345a5
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3373476d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33734579
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x337346f1
@end

