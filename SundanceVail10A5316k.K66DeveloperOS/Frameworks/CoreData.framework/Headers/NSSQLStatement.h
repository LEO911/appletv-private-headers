/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLEntity, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLStatement : NSObject {
@private
	NSSQLEntity *_entity;	// 4 = 0x4
	NSMutableArray *_bindVariables;	// 8 = 0x8
	NSString *_sqlString;	// 12 = 0xc
	BOOL _isImpossibleCondition;	// 16 = 0x10
	NSSQLEntity *_fakeEntityForFetch;	// 20 = 0x14
}
@property(retain) NSMutableArray *bindVariables;	// G=0x32d11b59; S=0x32d1edc9; converted property
@property(readonly, retain) NSSQLEntity *entity;	// G=0x32d121a5; converted property
@property(readonly, retain) NSSQLEntity *fakeEntityForFetch;	// G=0x32d31ea1; converted property
@property(assign, getter=isImpossibleCondition) BOOL impossibleCondition;	// G=0x32d1f1e5; S=0x32ddde1d; converted property
@property(readonly, retain) NSString *sqlString;	// G=0x32d11251; converted property
- (id)initWithEntity:(id)entity;	// 0x32d1a0e9
- (id)initWithEntity:(id)entity sqlString:(id)string;	// 0x32d10a99
- (unsigned)addBindVariable:(id)variable;	// 0x32dddda1
// converted property getter: - (id)bindVariables;	// 0x32d11b59
- (void)cacheFakeEntityForFetch:(id)fetch;	// 0x32d31e0d
- (void)clearCaches;	// 0x32dddd9d
- (void)dealloc;	// 0x32d130e5
- (id)description;	// 0x32dddd1d
// converted property getter: - (id)entity;	// 0x32d121a5
// converted property getter: - (id)fakeEntityForFetch;	// 0x32d31ea1
// converted property getter: - (BOOL)isImpossibleCondition;	// 0x32d1f1e5
- (BOOL)isReadOnly;	// 0x32ddde2d
- (void)removeAllBindVariables;	// 0x32ddddfd
// converted property setter: - (void)setBindVariables:(id)variables;	// 0x32d1edc9
// converted property setter: - (void)setImpossibleCondition:(BOOL)condition;	// 0x32ddde1d
- (void)setSQLString:(id)string;	// 0x32d1ed75
// converted property getter: - (id)sqlString;	// 0x32d11251
@end

