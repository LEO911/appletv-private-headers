/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVCalendarServerResourceChangeElement.h"

@class NSMutableSet, CoreDAVItem;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement {
	BOOL _content;	// 36 = 0x24
	CoreDAVItem *_prop;	// 40 = 0x28
	NSMutableSet *_calendarChanges;	// 44 = 0x2c
}
@property(retain) NSMutableSet *calendarChanges;	// G=0x335a8c39; S=0x335a8c4d; @synthesize=_calendarChanges
@property(assign) BOOL content;	// G=0x335a8be5; S=0x335a8bfd; @synthesize=_content
@property(retain) CoreDAVItem *prop;	// G=0x335a8c15; S=0x335a8c29; @synthesize=_prop
- (id)init;	// 0x335a8845
- (void)addCalendarChange:(id)change;	// 0x335a88e9
- (void)addContentItem:(id)item;	// 0x335a88d5
// declared property getter: - (id)calendarChanges;	// 0x335a8c39
// declared property getter: - (BOOL)content;	// 0x335a8be5
- (id)copyParseRules;	// 0x335a8959
- (void)dealloc;	// 0x335a8871
// declared property getter: - (id)prop;	// 0x335a8c15
// declared property setter: - (void)setCalendarChanges:(id)changes;	// 0x335a8c4d
// declared property setter: - (void)setContent:(BOOL)content;	// 0x335a8bfd
// declared property setter: - (void)setProp:(id)prop;	// 0x335a8c29
@end

