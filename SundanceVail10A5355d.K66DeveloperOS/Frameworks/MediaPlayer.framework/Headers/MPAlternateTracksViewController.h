/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UITableViewDelegate.h"
#import "MediaPlayer-Structs.h"
#import "UITableViewDataSource.h"
#import "MPAbstractAlternateTracksViewController.h"

@class UIProgressIndicator, UIView, UINavigationBar, UITextLabel, UITableView;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
	UIView *_backgroundView;	// 248 = 0xf8
	UINavigationBar *_navigationBar;	// 252 = 0xfc
	UITableView *_table;	// 256 = 0x100
	UIProgressIndicator *_progressIndicator;	// 260 = 0x104
	UITextLabel *_loadingLabel;	// 264 = 0x108
}
- (void)_cancelButtonAction:(id)action;	// 0x336ddf01
- (void)_doneButtonAction:(id)action;	// 0x336ddf45
- (void)_exitAnimated:(BOOL)animated;	// 0x336dec19
- (void)_setCell:(id)cell isChecked:(BOOL)checked;	// 0x336dec39
- (void)addLoadingUI;	// 0x336de6f5
- (void)dealloc;	// 0x336dd545
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x336dd62d
- (void)loadView;	// 0x336dd939
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x336ddf75
- (void)reloadData;	// 0x336de6b1
- (void)removeLoadingUI;	// 0x336debc9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x336ddfc1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x336de24d
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x336de371
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x336de379
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x336de3a5
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x336de651
- (void)viewWillAppear:(BOOL)view;	// 0x336dd8c5
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x336dd6b5
@end
