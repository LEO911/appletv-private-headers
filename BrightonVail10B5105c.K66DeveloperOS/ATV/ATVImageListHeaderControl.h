/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageListHeaderControl : BRControl {
	BRImageControl *_image;	// 84 = 0x54
}
@property(readonly, assign) BRImageControl *image;	// G=0x11241d; @synthesize=_image
- (id)init;	// 0x112225
- (id)accessibilityLabel;	// 0x1123fd
- (void)dealloc;	// 0x1122a9
// declared property getter: - (id)image;	// 0x11241d
- (void)layoutSubcontrols;	// 0x11236d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x1122f5
@end

