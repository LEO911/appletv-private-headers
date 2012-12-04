/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {
	NSManagedObjectID *_objectID;	// 4 = 0x4
	unsigned long long _versionNumber;	// 8 = 0x8
	id _propertyCache;	// 16 = 0x10
	void *_reserved1;	// 20 = 0x14
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x33dbe319; converted property
+ (void)initialize;	// 0x33dbddad
- (id)initWithObjectID:(id)objectID withValues:(id)values version:(unsigned long long)version;	// 0x33dbddc9
- (id)_propertyCache;	// 0x33dbe429
- (id)_snapshot_;	// 0x33dbe361
- (unsigned)_versionNumber;	// 0x33dbe365
- (void)dealloc;	// 0x33dbe07d
- (const id *)knownKeyValuesPointer;	// 0x33dbe341
// converted property getter: - (id)objectID;	// 0x33dbe319
- (void)updateWithValues:(id)values version:(unsigned long long)version;	// 0x33dbe0f5
- (id)valueForPropertyDescription:(id)propertyDescription;	// 0x33dbe375
- (unsigned long long)version;	// 0x33dbe329
@end
