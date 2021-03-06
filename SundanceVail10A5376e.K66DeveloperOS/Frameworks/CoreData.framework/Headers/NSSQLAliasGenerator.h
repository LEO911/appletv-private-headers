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
- (id)init;	// 0x35c75f59
- (id)initWithNestingLevel:(unsigned)nestingLevel;	// 0x35becb3d
- (void)dealloc;	// 0x35bf2611
- (id)generateSubqueryVariableAlias;	// 0x35c75f6d
- (id)generateTableAlias;	// 0x35bee6c5
@end

