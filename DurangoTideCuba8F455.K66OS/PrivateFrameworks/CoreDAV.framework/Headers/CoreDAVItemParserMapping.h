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
@property(retain) NSString *name;	// G=0x3318db61; S=0x3318dba5; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x3318db49; S=0x3318db79; @synthesize=_nameSpace
@property(assign) Class parseClass;	// G=0x3318d9cd; S=0x3318d9dd; @synthesize=_parseClass
- (id)initWithNameSpace:(id)nameSpace name:(id)name parseClass:(Class)aClass;	// 0x3318da3d
- (void)dealloc;	// 0x3318d9ed
- (id)description;	// 0x3318daa5
// declared property getter: - (id)name;	// 0x3318db61
// declared property getter: - (id)nameSpace;	// 0x3318db49
// declared property getter: - (Class)parseClass;	// 0x3318d9cd
// declared property setter: - (void)setName:(id)name;	// 0x3318dba5
// declared property setter: - (void)setNameSpace:(id)space;	// 0x3318db79
// declared property setter: - (void)setParseClass:(Class)aClass;	// 0x3318d9dd
@end
