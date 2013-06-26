/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVCalendarServerResourceChangeElement.h"


@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement {
	int _created;	// 36 = 0x24
	int _updated;	// 40 = 0x28
	int _deleted;	// 44 = 0x2c
}
@property(assign) int created;	// G=0x3028b5a1; S=0x3028b5b5; @synthesize=_created
@property(assign) int deleted;	// G=0x3028b5f9; S=0x3028b60d; @synthesize=_deleted
@property(assign) int updated;	// G=0x3028b5cd; S=0x3028b5e1; @synthesize=_updated
- (id)init;	// 0x3028b245
- (id)copyParseRules;	// 0x3028b335
// declared property getter: - (int)created;	// 0x3028b5a1
// declared property getter: - (int)deleted;	// 0x3028b5f9
// declared property setter: - (void)setCreated:(int)created;	// 0x3028b5b5
- (void)setCreatedItem:(id)item;	// 0x3028b275
// declared property setter: - (void)setDeleted:(int)deleted;	// 0x3028b60d
- (void)setDeletedItem:(id)item;	// 0x3028b2f5
// declared property setter: - (void)setUpdated:(int)updated;	// 0x3028b5e1
- (void)setUpdatedItem:(id)item;	// 0x3028b2b5
// declared property getter: - (int)updated;	// 0x3028b5cd
@end
