/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSManagedObjectContext, NSSQLConnection, NSSQLCore, NSSQLEntity;

@interface NSSQLChannel : NSObject {
	NSSQLConnection *_connection;	// 4 = 0x4
	NSSQLCore *_sqlCore;	// 8 = 0x8
	NSSQLEntity *_currentEntity;	// 12 = 0xc
	NSMutableArray *_fetchProperties;	// 16 = 0x10
	NSManagedObjectContext *_currentMOCon;	// 20 = 0x14
}
@property(readonly, retain) NSSQLConnection *connection;	// G=0x30eae421; converted property
@property(retain) id currentContext;	// G=0x30f316f9; S=0x30eae2f9; converted property
@property(readonly, retain) NSSQLCore *sqlCore;	// G=0x30eae2d9; converted property
- (id)initWithSQLCore:(id)sqlcore;	// 0x30eae141
- (void)_closeChannel;	// 0x30f316d9
- (void)_openChannel;	// 0x30eae309
- (id)_propertiesToFetch;	// 0x30f31429
- (void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)fetchRequest;	// 0x30f31709
// converted property getter: - (id)connection;	// 0x30eae421
// converted property getter: - (id)currentContext;	// 0x30f316f9
- (void)dealloc;	// 0x30f313a9
- (void)endFetch;	// 0x30f31641
- (void)endFetchAndRecycleStatement:(BOOL)statement;	// 0x30f31655
- (void)finalize;	// 0x30f31369
- (BOOL)isFetchInProgress;	// 0x30f31459
- (BOOL)selectCountWithFetchRequest:(id)fetchRequest;	// 0x30f3158d
- (void)selectRowsWithCachedStatement:(id)cachedStatement;	// 0x30f31515
- (void)selectRowsWithFetchRequest:(id)fetchRequest;	// 0x30f3147d
- (void)selectRowsWithStatement:(id)statement;	// 0x30eae34d
// converted property setter: - (void)setCurrentContext:(id)context;	// 0x30eae2f9
- (void)setCurrentEntity:(id)entity;	// 0x30f31449
// converted property getter: - (id)sqlCore;	// 0x30eae2d9
@end

