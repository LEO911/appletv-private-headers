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
@property(retain) NSMutableSet *calendarChanges;	// G=0x3471ac39; S=0x3471ac4d; @synthesize=_calendarChanges
@property(assign) BOOL content;	// G=0x3471abe5; S=0x3471abfd; @synthesize=_content
@property(retain) CoreDAVItem *prop;	// G=0x3471ac15; S=0x3471ac29; @synthesize=_prop
- (id)init;	// 0x3471a845
- (void)addCalendarChange:(id)change;	// 0x3471a8e9
- (void)addContentItem:(id)item;	// 0x3471a8d5
// declared property getter: - (id)calendarChanges;	// 0x3471ac39
// declared property getter: - (BOOL)content;	// 0x3471abe5
- (id)copyParseRules;	// 0x3471a959
- (void)dealloc;	// 0x3471a871
// declared property getter: - (id)prop;	// 0x3471ac15
// declared property setter: - (void)setCalendarChanges:(id)changes;	// 0x3471ac4d
// declared property setter: - (void)setContent:(BOOL)content;	// 0x3471abfd
// declared property setter: - (void)setProp:(id)prop;	// 0x3471ac29
@end
