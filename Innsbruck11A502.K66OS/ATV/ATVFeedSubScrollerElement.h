/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedSubScrollerElement : ATVFeedElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	NSArray *_scrollerItems;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x12d205; S=0x12d215; @synthesize=_header
@property(retain, nonatomic) NSArray *scrollerItems;	// G=0x12d23d; S=0x12d24d; @synthesize=_scrollerItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12cf69
- (void).cxx_destruct;	// 0x12d275
// declared property getter: - (id)header;	// 0x12d205
// declared property getter: - (id)scrollerItems;	// 0x12d23d
// declared property setter: - (void)setHeader:(id)header;	// 0x12d215
// declared property setter: - (void)setScrollerItems:(id)items;	// 0x12d24d
@end
