/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSString, CoreDAVItemWithHrefChildItem, ICSDocument, CoreDAVErrorItem;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem {
	CoreDAVItemWithHrefChildItem *_recipientHREF;	// 28 = 0x1c
	CoreDAVLeafItem *_requestStatus;	// 32 = 0x20
	ICSDocument *_calendarData;	// 36 = 0x24
	CoreDAVErrorItem *_topLevelErrorItem;	// 40 = 0x28
	NSString *_responseDescription;	// 44 = 0x2c
}
@property(retain) ICSDocument *calendarData;	// G=0x3026b339; S=0x3026b34d; @synthesize=_calendarData
@property(retain) CoreDAVItemWithHrefChildItem *recipientHREF;	// G=0x3026b2f1; S=0x3026b305; @synthesize=_recipientHREF
@property(readonly, assign) NSString *recipientString;	// G=0x3026b1f9; 
@property(retain) CoreDAVLeafItem *requestStatus;	// G=0x3026b315; S=0x3026b329; @synthesize=_requestStatus
@property(retain) NSString *responseDescription;	// G=0x3026b381; S=0x3026b395; @synthesize=_responseDescription
@property(retain) CoreDAVErrorItem *topLevelErrorItem;	// G=0x3026b35d; S=0x3026b371; @synthesize=_topLevelErrorItem
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3026adad
- (void)_setCalendarDataWithLeafItem:(id)leafItem;	// 0x3026ae45
// declared property getter: - (id)calendarData;	// 0x3026b339
- (id)copyParseRules;	// 0x3026aec5
- (void)dealloc;	// 0x3026ad19
- (id)description;	// 0x3026b231
// declared property getter: - (id)recipientHREF;	// 0x3026b2f1
// declared property getter: - (id)recipientString;	// 0x3026b1f9
// declared property getter: - (id)requestStatus;	// 0x3026b315
// declared property getter: - (id)responseDescription;	// 0x3026b381
// declared property setter: - (void)setCalendarData:(id)data;	// 0x3026b34d
// declared property setter: - (void)setRecipientHREF:(id)href;	// 0x3026b305
// declared property setter: - (void)setRequestStatus:(id)status;	// 0x3026b329
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x3026b395
// declared property setter: - (void)setTopLevelErrorItem:(id)item;	// 0x3026b371
// declared property getter: - (id)topLevelErrorItem;	// 0x3026b35d
@end
