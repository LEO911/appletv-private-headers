/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedStandingsElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 8 = 0x8
	NSArray *_standingsItems;	// 12 = 0xc
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x15ccbd; S=0x15cccd; @synthesize=_header
@property(retain, nonatomic) NSArray *standingsItems;	// G=0x15ccdd; S=0x15cced; @synthesize=_standingsItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15ca69
- (void)dealloc;	// 0x15cc59
// declared property getter: - (id)header;	// 0x15ccbd
// declared property setter: - (void)setHeader:(id)header;	// 0x15cccd
// declared property setter: - (void)setStandingsItems:(id)items;	// 0x15cced
// declared property getter: - (id)standingsItems;	// 0x15ccdd
@end
