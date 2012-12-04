/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface NSSQLAliasGenerator : NSObject {
	unsigned _nextTableAlias;	// 4 = 0x4
	unsigned _nextVariableAlias;	// 8 = 0x8
	NSString *_tableBase;	// 12 = 0xc
	NSString *_variableBase;	// 16 = 0x10
}
- (id)init;	// 0x362d8ca9
- (id)initWithNestingLevel:(unsigned)nestingLevel;	// 0x3624eb85
- (void)dealloc;	// 0x36254659
- (id)generateSubqueryVariableAlias;	// 0x362d8cbd
- (id)generateTableAlias;	// 0x3625070d
@end
