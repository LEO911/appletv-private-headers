/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSMutableDictionary, NSManagedObject, NSSQLRow, NSMutableArray;

@interface NSSQLOperation : NSObject {
	unsigned _databaseOperator;	// 4 = 0x4
	NSSQLRow *_rowForUpdate;	// 8 = 0x8
	NSMutableArray *_adapterOps;	// 12 = 0xc
	NSManagedObject *_object;	// 16 = 0x10
	NSSQLRow *_dbSnapshot;	// 20 = 0x14
	NSMutableDictionary *_mtmDeltas;	// 24 = 0x18
}
@property(assign) unsigned databaseOperator;	// G=0x2d122e29; S=0x2d122e39; converted property
@property(readonly, retain) NSSQLRow *dbSnapshot;	// G=0x2d122d6d; converted property
@property(readonly, retain) NSManagedObject *object;	// G=0x2d122e19; converted property
@property(retain) NSSQLRow *rowForUpdate;	// G=0x2d122dc1; S=0x2d122dd1; converted property
- (id)initWithObject:(id)object entity:(id)entity;	// 0x2d122c91
- (id)adapterOperations;	// 0x2d122f69
- (void)addAdapterOperation:(id)operation;	// 0x2d122f79
- (void)addDelta:(id)delta forManyToManyKey:(id)manyKey;	// 0x2d1231e9
// converted property getter: - (unsigned)databaseOperator;	// 0x2d122e29
// converted property getter: - (id)dbSnapshot;	// 0x2d122d6d
- (void)dealloc;	// 0x2d122ce1
- (id)description;	// 0x2d123029
- (id)manyToManyDeltas;	// 0x2d123249
// converted property getter: - (id)object;	// 0x2d122e19
- (id)objectID;	// 0x2d122df9
- (void)removeAdapterOperation:(id)operation;	// 0x2d122fd5
// converted property getter: - (id)rowForUpdate;	// 0x2d122dc1
- (void)setDBSnapshot:(id)snapshot;	// 0x2d122d7d
// converted property setter: - (void)setDatabaseOperator:(unsigned)anOperator;	// 0x2d122e39
// converted property setter: - (void)setRowForUpdate:(id)update;	// 0x2d122dd1
@end
