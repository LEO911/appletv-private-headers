/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsAccessibilityCaptioningStyleBaseController.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface SettingsAccessibilityCaptioningColorController : SettingsAccessibilityCaptioningStyleBaseController {
	int _colorType;	// 108 = 0x6c
	CGColorRef _selectedColor;	// 112 = 0x70
}
- (id)initWithTitle:(id)title andProfileID:(id)anId andColorType:(int)type;	// 0x2c99b9
- (CGColorRef)_colorRefForCaptionColor:(long)captionColor;	// 0x2c9f79
- (void)_reloadList;	// 0x2c9e61
- (void)_toggleVideoOverridesStyle;	// 0x2c9ed5
- (BOOL)_videoOverridesStyle;	// 0x2c9e19
- (void)dealloc;	// 0x2c9a3d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2c9d5d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2c9b15
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2c9a85
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2c9a9d
- (long)numberOfSectionsInList:(id)list;	// 0x2c9a81
@end

