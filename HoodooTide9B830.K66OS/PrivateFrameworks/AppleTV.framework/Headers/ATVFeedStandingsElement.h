/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedStandingsElement : ATVFeedRootElement {
@private
	ATVFeedHeaderElement *_header;	// 52 = 0x34
	NSArray *_standingsItems;	// 56 = 0x38
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x32b192c1; S=0x32b192d1; @synthesize=_header
@property(retain, nonatomic) NSArray *standingsItems;	// G=0x32b192f5; S=0x32b19305; @synthesize=_standingsItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32b1908d
- (void)dealloc;	// 0x32b19261
// declared property getter: - (id)header;	// 0x32b192c1
// declared property setter: - (void)setHeader:(id)header;	// 0x32b192d1
// declared property setter: - (void)setStandingsItems:(id)items;	// 0x32b19305
// declared property getter: - (id)standingsItems;	// 0x32b192f5
@end
