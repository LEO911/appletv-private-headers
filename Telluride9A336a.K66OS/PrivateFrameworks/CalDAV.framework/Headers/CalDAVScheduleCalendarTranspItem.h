/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_transparent;	// 24 = 0x18
}
@property(readonly, assign) BOOL isScheduleTransparent;	// G=0x338c7079; 
@property(retain) CoreDAVItemWithNoChildren *transparent;	// G=0x338c6f59; S=0x338c6f35; @synthesize=_transparent
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x338c6ee9
- (id)copyParseRules;	// 0x338c6f71
- (void)dealloc;	// 0x338c7099
// declared property getter: - (BOOL)isScheduleTransparent;	// 0x338c7079
// declared property setter: - (void)setTransparent:(id)transparent;	// 0x338c6f35
// declared property getter: - (id)transparent;	// 0x338c6f59
@end

