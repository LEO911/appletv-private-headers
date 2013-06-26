/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsAccessibilityCaptioningStyleBaseController.h"
#import "AppleTV-Structs.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface SettingsAccessibilityCaptioningTextHighlightController : SettingsAccessibilityCaptioningStyleBaseController {
	CGColorRef _selectedHighlightColor;	// 108 = 0x6c
	NSNumber *_selectedHighlightOpacity;	// 112 = 0x70
}
- (id)initWithTitle:(id)title andProfileID:(id)anId;	// 0x2aee75
- (void).cxx_destruct;	// 0x2af555
- (void)_reload;	// 0x2af4dd
- (void)dealloc;	// 0x2aeefd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2af3d5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2aeff5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2aef45
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2aef5d
- (long)numberOfSectionsInList:(id)list;	// 0x2aef41
@end
