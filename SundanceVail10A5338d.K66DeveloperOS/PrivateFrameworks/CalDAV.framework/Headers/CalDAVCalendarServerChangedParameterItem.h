/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItemWithNoChildren.h> // Unknown library

@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren {
	NSString *_nameAttribute;	// 28 = 0x1c
	NSString *_typeAttribute;	// 32 = 0x20
}
@property(retain) NSString *nameAttribute;	// G=0x338e8a35; S=0x338e8a49; @synthesize=_nameAttribute
@property(retain) NSString *typeAttribute;	// G=0x338e8a59; S=0x338e8a6d; @synthesize=_typeAttribute
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x338e8895
- (void)dealloc;	// 0x338e88dd
// declared property getter: - (id)nameAttribute;	// 0x338e8a35
- (void)parserFoundAttributes:(id)attributes;	// 0x338e8921
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x338e8a49
// declared property setter: - (void)setTypeAttribute:(id)attribute;	// 0x338e8a6d
// declared property getter: - (id)typeAttribute;	// 0x338e8a59
@end

