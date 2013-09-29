/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class BRTextControl, BRImageControl, BRHeaderControl;

__attribute__((visibility("hidden")))
@interface RUIYTCenteredMenuView : BRMenuView {
	BRHeaderControl *_headerControl;	// 112 = 0x70
	BRTextControl *_descriptionControl;	// 116 = 0x74
	BRImageControl *_backgroundImageControl;	// 120 = 0x78
}
@property(retain) id backgroundImage;	// G=0x297049; S=0x297069; converted property
- (id)init;	// 0x296e3d
- (void).cxx_destruct;	// 0x297669
// converted property getter: - (id)backgroundImage;	// 0x297049
- (void)layoutSubcontrols;	// 0x29732d
// converted property setter: - (void)setBackgroundImage:(id)image;	// 0x297069
- (void)setListHeader:(id)header;	// 0x296ecd
- (void)setMenuDescription:(id)description;	// 0x296f45
@end
