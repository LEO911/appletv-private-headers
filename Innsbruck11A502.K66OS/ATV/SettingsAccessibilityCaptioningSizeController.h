/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsAccessibilityCaptioningStyleBaseController.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface SettingsAccessibilityCaptioningSizeController : SettingsAccessibilityCaptioningStyleBaseController {
	NSNumber *_selectedRelativeSize;	// 108 = 0x6c
}
- (id)initWithTitle:(id)title andProfileID:(id)anId;	// 0x2cd531
- (void).cxx_destruct;	// 0x2cdac1
- (void)_reloadList;	// 0x2cd9c9
- (void)_toggleVideoOverridesStyle;	// 0x2cda51
- (BOOL)_videoOverridesStyle;	// 0x2cda21
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2cd8c9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2cd639
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2cd5a9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2cd5c1
- (long)numberOfSectionsInList:(id)list;	// 0x2cd5a5
@end
