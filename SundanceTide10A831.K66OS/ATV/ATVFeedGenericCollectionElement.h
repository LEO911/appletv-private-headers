/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedHeaderElement, NSString, ATVFeedMenuElement;

__attribute__((visibility("hidden")))
@interface ATVFeedGenericCollectionElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 8 = 0x8
	ATVFeedElement *_preview;	// 12 = 0xc
	ATVFeedMenuElement *_menu;	// 16 = 0x10
	NSString *_listDescription;	// 20 = 0x14
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x157cad; S=0x157cbd; @synthesize=_header
@property(retain, nonatomic) NSString *listDescription;	// G=0x157d0d; S=0x157d1d; @synthesize=_listDescription
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x157ced; S=0x157cfd; @synthesize=_menu
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x157ccd; S=0x157cdd; @synthesize=_preview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x157a79
- (void)dealloc;	// 0x157c35
// declared property getter: - (id)header;	// 0x157cad
// declared property getter: - (id)listDescription;	// 0x157d0d
// declared property getter: - (id)menu;	// 0x157ced
// declared property getter: - (id)preview;	// 0x157ccd
// declared property setter: - (void)setHeader:(id)header;	// 0x157cbd
// declared property setter: - (void)setListDescription:(id)description;	// 0x157d1d
// declared property setter: - (void)setMenu:(id)menu;	// 0x157cfd
// declared property setter: - (void)setPreview:(id)preview;	// 0x157cdd
@end

