/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLProperty.h"

@class NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLRelationship : NSSQLProperty {
@private
	NSSQLEntity *_destinationEntity;	// 24 = 0x18
	NSSQLRelationship *_inverse;	// 28 = 0x1c
}
@property(readonly, retain) NSSQLEntity *destinationEntity;	// G=0x362583e1; converted property
- (id)initForReadOnlyFetchWithEntity:(id)entity propertyDescription:(id)description;	// 0x36305f65
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x36257f75
- (void)_setForeignOrderKey:(id)key;	// 0x36305f61
- (void)_setInverseRelationship:(id)relationship;	// 0x36258485
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x36305fa5
- (id)correlationTableName;	// 0x36305f5d
- (void)dealloc;	// 0x3630601d
// converted property getter: - (id)destinationEntity;	// 0x362583e1
- (id)foreignKey;	// 0x36258589
- (id)inverseRelationship;	// 0x36258455
- (BOOL)isOrdered;	// 0x36305ff5
- (id)relationshipDescription;	// 0x36258465
- (id)sourceEntity;	// 0x36258769
@end
