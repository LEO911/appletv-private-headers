/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class NSString, BRControl, NSArray;

__attribute__((visibility("hidden")))
@interface MusicMainController : MusicController {
	BRControl *_allSongsPreview;	// 156 = 0x9c
	BOOL _displayNowPlaying;	// 160 = 0xa0
	NSArray *_controllerMenuItems;	// 164 = 0xa4
	NSString *_textEntryClient;	// 168 = 0xa8
}
@property(retain, nonatomic) NSArray *controllerMenuItems;	// G=0x1abf0d; S=0x1abf1d; @synthesize=_controllerMenuItems
@property(retain, nonatomic) NSString *textEntryClient;	// G=0x1abf2d; S=0x1abf3d; @synthesize=_textEntryClient
+ (void)initialize;	// 0x1ab069
- (id)_indexPathForTitleKey:(id)titleKey;	// 0x1abff1
- (unsigned)_menuItemForRow:(unsigned)row;	// 0x1abf4d
- (id)_menuItemTitleKeyForIndexPath:(id)indexPath;	// 0x1abf85
- (void)_networkStateChanged:(id)changed;	// 0x1ac2b9
- (void)_playerStateChanged:(id)changed;	// 0x1ac271
- (void)_updateNowPlaying;	// 0x1ac0ed
- (void)controlWasActivated;	// 0x1ab239
// declared property getter: - (id)controllerMenuItems;	// 0x1abf0d
- (void)dealloc;	// 0x1ab195
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1ab59d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1ab7cd
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1ab591
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x1ab545
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1abca5
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1abc91
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1ab3e5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1ab4c9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x1ab509
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1abd8d
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1abcb9
- (long)numberOfSectionsInList:(id)list;	// 0x1ab4c5
- (void)playQueryComplete:(id)complete;	// 0x1abe09
// declared property setter: - (void)setControllerMenuItems:(id)items;	// 0x1abf1d
// declared property setter: - (void)setTextEntryClient:(id)client;	// 0x1abf3d
// declared property getter: - (id)textEntryClient;	// 0x1abf2d
- (void)wasPopped;	// 0x1ab379
- (void)wasPushed;	// 0x1ab279
@end
