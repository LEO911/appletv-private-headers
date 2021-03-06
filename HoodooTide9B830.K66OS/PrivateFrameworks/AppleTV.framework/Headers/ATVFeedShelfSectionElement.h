/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfSectionElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSArray *_shelfItems;	// 32 = 0x20
}
@property(retain, nonatomic) NSArray *shelfItems;	// G=0x32b03bed; S=0x32b03bfd; @synthesize=_shelfItems
@property(copy, nonatomic) NSString *title;	// G=0x32b03bb9; S=0x32b03bc9; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32b039bd
- (void)dealloc;	// 0x32b03b59
// declared property setter: - (void)setShelfItems:(id)items;	// 0x32b03bfd
// declared property setter: - (void)setTitle:(id)title;	// 0x32b03bc9
// declared property getter: - (id)shelfItems;	// 0x32b03bed
// declared property getter: - (id)title;	// 0x32b03bb9
@end

