/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CoreDAVItemParserMapping : NSObject {
	NSString *_nameSpace;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	Class _parseClass;	// 12 = 0xc
}
@property(retain) NSString *name;	// G=0x36019751; S=0x36019765; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x3601972d; S=0x36019741; @synthesize=_nameSpace
@property(assign) Class parseClass;	// G=0x36019775; S=0x36019789; @synthesize=_parseClass
- (id)initWithNameSpace:(id)nameSpace name:(id)name parseClass:(Class)aClass;	// 0x36019595
- (void)dealloc;	// 0x36019621
- (id)description;	// 0x36019685
// declared property getter: - (id)name;	// 0x36019751
// declared property getter: - (id)nameSpace;	// 0x3601972d
// declared property getter: - (Class)parseClass;	// 0x36019775
// declared property setter: - (void)setName:(id)name;	// 0x36019765
// declared property setter: - (void)setNameSpace:(id)space;	// 0x36019741
// declared property setter: - (void)setParseClass:(Class)aClass;	// 0x36019789
@end
