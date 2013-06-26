/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class NSArray, ATVImagePreviewView, BRControl, NSString;

__attribute__((visibility("hidden")))
@interface MusicMainController : MusicController {
	BRControl *_allSongsPreview;	// 164 = 0xa4
	BOOL _displayNowPlaying;	// 168 = 0xa8
	BOOL _displayUpNext;	// 169 = 0xa9
	ATVImagePreviewView *_matchPreivew;	// 172 = 0xac
	NSArray *_controllerMenuItems;	// 176 = 0xb0
	NSString *_textEntryClient;	// 180 = 0xb4
}
@property(retain, nonatomic) NSArray *controllerMenuItems;	// G=0x1d7f39; S=0x1d7f49; @synthesize=_controllerMenuItems
@property(retain, nonatomic) NSString *textEntryClient;	// G=0x1d7f59; S=0x1d7f69; @synthesize=_textEntryClient
+ (void)initialize;	// 0x1d6d29
- (id)_indexPathForTitleKey:(id)titleKey;	// 0x1d802d
- (unsigned)_menuItemForRow:(unsigned)row;	// 0x1d7f79
- (id)_menuItemTitleKeyForIndexPath:(id)indexPath;	// 0x1d7fb1
- (void)_networkStateChanged:(id)changed;	// 0x1d83e9
- (void)_playerStateChanged:(id)changed;	// 0x1d83a1
- (void)_updateHeaderItems;	// 0x1d8175
- (void)controlWasActivated;	// 0x1d6efd
// declared property getter: - (id)controllerMenuItems;	// 0x1d7f39
- (void)dealloc;	// 0x1d6e59
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1d730d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1d7c8d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1d7791
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1d7301
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x1d72b5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1d7b8d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1d7b79
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1d710d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1d7229
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x1d7279
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1d7d61
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1d7ba1
- (long)numberOfSectionsInList:(id)list;	// 0x1d7225
- (void)playQueryComplete:(id)complete;	// 0x1d7e35
// declared property setter: - (void)setControllerMenuItems:(id)items;	// 0x1d7f49
// declared property setter: - (void)setTextEntryClient:(id)client;	// 0x1d7f69
// declared property getter: - (id)textEntryClient;	// 0x1d7f59
- (void)wasPopped;	// 0x1d70a1
- (void)wasPushed;	// 0x1d6f9d
@end
