/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedMenuItemElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedImageTextImageMenuItemElement : ATVFeedMenuItemElement {
	NSString *_imageSeparatorText;	// 4 = 0x4
	ATVFeedImageElement *_leftImage;	// 8 = 0x8
	ATVFeedImageElement *_rightImage;	// 12 = 0xc
	BOOL _dimmed;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL dimmed;	// G=0x1570ed; S=0x1570fd; @synthesize=_dimmed
@property(copy, nonatomic) NSString *imageSeparatorText;	// G=0x157089; S=0x15709d; @synthesize=_imageSeparatorText
@property(retain, nonatomic) ATVFeedImageElement *leftImage;	// G=0x1570ad; S=0x1570bd; @synthesize=_leftImage
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x1570cd; S=0x1570dd; @synthesize=_rightImage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x156ea1
- (void)dealloc;	// 0x157011
// declared property getter: - (BOOL)dimmed;	// 0x1570ed
// declared property getter: - (id)imageSeparatorText;	// 0x157089
// declared property getter: - (id)leftImage;	// 0x1570ad
// declared property getter: - (id)rightImage;	// 0x1570cd
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x1570fd
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x15709d
// declared property setter: - (void)setLeftImage:(id)image;	// 0x1570bd
// declared property setter: - (void)setRightImage:(id)image;	// 0x1570dd
@end

