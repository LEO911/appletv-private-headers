/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMainMenuShelfErrorControl : BRControl {
	BRTextControl *_text;	// 80 = 0x50
	BRTextControl *_subtext;	// 84 = 0x54
}
@property(retain) BRTextControl *subtext;	// G=0x2bd6e1; S=0x2bd68d; converted property
@property(retain) BRTextControl *text;	// G=0x2bd655; S=0x2bd601; converted property
- (id)init;	// 0x2bd4e9
- (id)_subtextAttributes;	// 0x2bd94d
- (id)_textAttributes;	// 0x2bd7d5
- (id)accessibilityLabel;	// 0x2bdac5
- (void)dealloc;	// 0x2bd59d
- (void)layoutSubcontrols;	// 0x2bd719
// converted property setter: - (void)setSubtext:(id)subtext;	// 0x2bd68d
// converted property setter: - (void)setText:(id)text;	// 0x2bd601
// converted property getter: - (id)subtext;	// 0x2bd6e1
// converted property getter: - (id)text;	// 0x2bd655
@end
