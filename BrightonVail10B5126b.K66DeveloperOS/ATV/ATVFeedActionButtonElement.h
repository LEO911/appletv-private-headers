/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedActionButtonElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_subtitle;	// 8 = 0x8
	ATVFeedImageElement *_image;	// 12 = 0xc
	ATVFeedImageElement *_focusedImage;	// 16 = 0x10
	NSString *_badge;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *badge;	// G=0x160e4d; S=0x160e5d; @synthesize=_badge
@property(retain, nonatomic) ATVFeedImageElement *focusedImage;	// G=0x160e2d; S=0x160e3d; @synthesize=_focusedImage
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x160e0d; S=0x160e1d; @synthesize=_image
@property(copy, nonatomic) NSString *subtitle;	// G=0x160de9; S=0x160dfd; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x160dc5; S=0x160dd9; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x160b95
// declared property getter: - (id)badge;	// 0x160e4d
- (void)dealloc;	// 0x160d25
// declared property getter: - (id)focusedImage;	// 0x160e2d
// declared property getter: - (id)image;	// 0x160e0d
// declared property setter: - (void)setBadge:(id)badge;	// 0x160e5d
// declared property setter: - (void)setFocusedImage:(id)image;	// 0x160e3d
// declared property setter: - (void)setImage:(id)image;	// 0x160e1d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x160dfd
// declared property setter: - (void)setTitle:(id)title;	// 0x160dd9
// declared property getter: - (id)subtitle;	// 0x160de9
// declared property getter: - (id)title;	// 0x160dc5
@end

