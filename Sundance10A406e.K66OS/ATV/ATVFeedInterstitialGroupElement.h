/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class BRXMLElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedInterstitialGroupElement : ATVFeedRootElement {
	NSArray *_interstitials;	// 8 = 0x8
	BRXMLElement *_xml;	// 12 = 0xc
}
@property(retain, nonatomic) NSArray *interstitials;	// G=0x158815; S=0x158825; @synthesize=_interstitials
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x158835; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x158625
- (void)dealloc;	// 0x1587b1
// declared property getter: - (id)interstitials;	// 0x158815
// declared property setter: - (void)setInterstitials:(id)interstitials;	// 0x158825
// declared property getter: - (id)xml;	// 0x158835
@end

