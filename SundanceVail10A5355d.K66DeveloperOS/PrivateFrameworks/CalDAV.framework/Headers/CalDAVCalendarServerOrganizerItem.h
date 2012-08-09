/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVLeafItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 28 = 0x1c
	CoreDAVLeafItem *_commonName;	// 32 = 0x20
}
@property(retain) CoreDAVLeafItem *commonName;	// G=0x3141c7f9; S=0x3141c80d; @synthesize=_commonName
@property(retain) CoreDAVHrefItem *href;	// G=0x3141c7d5; S=0x3141c7e9; @synthesize=_href
- (id)init;	// 0x3141c525
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3141c551
// declared property getter: - (id)commonName;	// 0x3141c7f9
- (id)copyParseRules;	// 0x3141c631
- (void)dealloc;	// 0x3141c5ad
- (id)description;	// 0x3141c605
// declared property getter: - (id)href;	// 0x3141c7d5
// declared property setter: - (void)setCommonName:(id)name;	// 0x3141c80d
// declared property setter: - (void)setHref:(id)href;	// 0x3141c7e9
@end
