/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class BRMediaMenuView, NSTimer, NSArray;

__attribute__((visibility("hidden")))
@interface PodcastsMainController : BRViewController {
	BRMediaMenuView *_mediaMenuView;	// 100 = 0x64
	NSArray *_unvalidatedRootMenus;	// 104 = 0x68
	BOOL _waitPromptShowing;	// 108 = 0x6c
	NSTimer *_waitPromptTimer;	// 112 = 0x70
	NSArray *_rootMenus;	// 116 = 0x74
}
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x208655; converted property
@property(retain, nonatomic) NSArray *rootMenus;	// G=0x2090ed; S=0x2090fd; @synthesize=_rootMenus
+ (void)initialize;	// 0x208539
- (id)init;	// 0x208669
- (void).cxx_destruct;	// 0x209125
- (void)_favoriteAdded:(id)added;	// 0x209d91
- (void)_favoriteRemoved:(id)removed;	// 0x209f25
- (void)_reload;	// 0x209919
- (void)_showWaitPrompt;	// 0x209561
- (void)_storeMenuLoaded:(id)loaded;	// 0x209689
- (void)_updateRootMenus;	// 0x2093ad
- (id)_validatedRootMenus:(id)menus;	// 0x209181
- (void)_waitForStore;	// 0x2094a5
- (void)dealloc;	// 0x208875
- (id)favorites;	// 0x209a85
- (id)favoritesArtwork;	// 0x209ad9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x208bbd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x208d35
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x208a61
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x208b9d
// converted property getter: - (id)mediaMenuView;	// 0x208655
// declared property getter: - (id)rootMenus;	// 0x2090ed
// declared property setter: - (void)setRootMenus:(id)menus;	// 0x2090fd
- (void)wasPushed;	// 0x208961
@end

