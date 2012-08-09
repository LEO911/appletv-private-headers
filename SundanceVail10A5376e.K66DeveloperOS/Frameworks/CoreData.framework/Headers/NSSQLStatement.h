/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSSQLEntity, NSString;

@interface NSSQLStatement : NSObject {
	NSSQLEntity *_entity;	// 4 = 0x4
	NSMutableArray *_bindVariables;	// 8 = 0x8
	NSString *_sqlString;	// 12 = 0xc
	BOOL _isImpossibleCondition;	// 16 = 0x10
	NSSQLEntity *_fakeEntityForFetch;	// 20 = 0x14
}
@property(retain) NSMutableArray *bindVariables;	// G=0x35be4801; S=0x35bf25cd; converted property
@property(readonly, retain) NSSQLEntity *entity;	// G=0x35be4e4d; converted property
@property(readonly, retain) NSSQLEntity *fakeEntityForFetch;	// G=0x35cae339; converted property
@property(assign, getter=isImpossibleCondition) BOOL impossibleCondition;	// G=0x35bf299d; S=0x35cae329; converted property
@property(readonly, retain) NSString *sqlString;	// G=0x35be3ef9; converted property
- (id)initWithEntity:(id)entity;	// 0x35bee16d
- (id)initWithEntity:(id)entity sqlString:(id)string;	// 0x35be3741
- (unsigned)addBindVariable:(id)variable;	// 0x35cae2ad
// converted property getter: - (id)bindVariables;	// 0x35be4801
- (void)cacheFakeEntityForFetch:(id)fetch;	// 0x35cae349
- (void)clearCaches;	// 0x35cae2a9
- (void)dealloc;	// 0x35be5dc5
- (id)description;	// 0x35cae229
// converted property getter: - (id)entity;	// 0x35be4e4d
// converted property getter: - (id)fakeEntityForFetch;	// 0x35cae339
// converted property getter: - (BOOL)isImpossibleCondition;	// 0x35bf299d
- (BOOL)isReadOnly;	// 0x35cae38d
- (void)removeAllBindVariables;	// 0x35cae309
// converted property setter: - (void)setBindVariables:(id)variables;	// 0x35bf25cd
// converted property setter: - (void)setImpossibleCondition:(BOOL)condition;	// 0x35cae329
- (void)setSQLString:(id)string;	// 0x35bf2579
// converted property getter: - (id)sqlString;	// 0x35be3ef9
@end
