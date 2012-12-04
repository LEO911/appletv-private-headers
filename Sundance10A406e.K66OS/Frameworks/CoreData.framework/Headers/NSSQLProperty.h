/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSPropertyDescription, NSSQLEntity, NSString;

@interface NSSQLProperty : NSStoreMapping {
	NSString *_name;	// 8 = 0x8
	NSPropertyDescription *_propertyDescription;	// 12 = 0xc
	NSSQLEntity *_entity;	// 16 = 0x10
	unsigned _propertyType;	// 20 = 0x14
}
@property(readonly, retain) NSSQLEntity *entity;	// G=0x33cc7501; converted property
@property(readonly, retain) NSString *name;	// G=0x33cc52c9; converted property
@property(retain) NSPropertyDescription *propertyDescription;	// G=0x33cc7381; S=0x33d8fff9; converted property
@property(readonly, assign) unsigned propertyType;	// G=0x33cc520d; converted property
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x33cc4fc5
- (void)_setName:(id)name;	// 0x33cc503d
- (id)columnName;	// 0x33d90009
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x33d901e9
- (void)dealloc;	// 0x33d8ff8d
- (id)description;	// 0x33d9015d
// converted property getter: - (id)entity;	// 0x33cc7501
- (id)externalName;	// 0x33d9000d
- (BOOL)isAttribute;	// 0x33d90045
- (BOOL)isColumn;	// 0x33d9001d
- (BOOL)isEntityKey;	// 0x33d900bd
- (BOOL)isEqual:(id)equal;	// 0x33d900ed
- (BOOL)isForeignEntityKey;	// 0x33d9008d
- (BOOL)isForeignKey;	// 0x33d90075
- (BOOL)isForeignOrderKey;	// 0x33d900a5
- (BOOL)isManyToMany;	// 0x33cc7391
- (BOOL)isOptLockKey;	// 0x33d900d5
- (BOOL)isPrimaryKey;	// 0x33d9005d
- (BOOL)isRelationship;	// 0x33cc7345
- (BOOL)isToMany;	// 0x33cc7511
- (BOOL)isToOne;	// 0x33cc74e9
// converted property getter: - (id)name;	// 0x33cc52c9
// converted property getter: - (id)propertyDescription;	// 0x33cc7381
// converted property getter: - (unsigned)propertyType;	// 0x33cc520d
- (void)setEntityForReadOnlyFetch:(id)readOnlyFetch;	// 0x33d90289
// converted property setter: - (void)setPropertyDescription:(id)description;	// 0x33d8fff9
- (unsigned)slot;	// 0x33d901e1
@end
