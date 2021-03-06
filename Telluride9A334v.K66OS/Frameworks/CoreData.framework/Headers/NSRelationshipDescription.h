/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPropertyDescription.h"

@class NSString, NSEntityDescription;

@interface NSRelationshipDescription : NSPropertyDescription {
@private
	void *_reserved5;	// 48 = 0x30
	void *_reserved6;	// 52 = 0x34
	NSEntityDescription *_destinationEntity;	// 56 = 0x38
	NSString *_lazyDestinationEntityName;	// 60 = 0x3c
	NSRelationshipDescription *_inverseRelationship;	// 64 = 0x40
	NSString *_lazyInverseRelationshipName;	// 68 = 0x44
	unsigned long _maxCount;	// 72 = 0x48
	unsigned long _minCount;	// 76 = 0x4c
	unsigned _deleteRule;	// 80 = 0x50
}
@property(assign) unsigned deleteRule;	// G=0x31ee7e65; S=0x31ee7e89; converted property
@property(retain) NSEntityDescription *destinationEntity;	// G=0x31e6ee1d; S=0x31ee7f01; converted property
@property(retain) NSRelationshipDescription *inverseRelationship;	// G=0x31e6e095; S=0x31e6e0e9; converted property
@property(assign) unsigned maxCount;	// G=0x31e6eb11; S=0x31ee7eb1; converted property
@property(assign) unsigned minCount;	// G=0x31ee7e75; S=0x31ee7ed9; converted property
@property(assign, getter=isOrdered) BOOL ordered;	// G=0x31e6ea89; S=0x31ee7f4d; converted property
+ (void)initialize;	// 0x31e6dd4d
- (id)init;	// 0x31ee7e9d
- (id)initWithCoder:(id)coder;	// 0x31e6dd69
- (void)_createCachesAndOptimizeState;	// 0x31e6dff5
- (id)_initWithName:(id)name;	// 0x31ee85dd
- (BOOL)_isRelationship;	// 0x31ee7e99
- (BOOL)_isToManyRelationship;	// 0x31ee7f5d
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x31ee872d
- (unsigned)_propertyType;	// 0x31e6ea6d
- (void)_setLazyDestinationEntityName:(id)name;	// 0x31ee7f75
- (void)_updateInverse:(id)inverse;	// 0x31ee7fbd
- (BOOL)_validateValuesAreOfDestinationEntity:(id)destinationEntity source:(id)source;	// 0x31ee8639
- (void)_versionHash:(char *)hash;	// 0x31e6f629
- (void)_versionHash:(char *)hash proxyContext:(id)context;	// 0x31e6f63d
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots fetchRequests:(id)requests;	// 0x31ee9185
- (id)copyWithZone:(NSZone *)zone;	// 0x31ee8319
- (void)dealloc;	// 0x31ee7fe9
// converted property getter: - (unsigned)deleteRule;	// 0x31ee7e65
- (id)description;	// 0x31ee80ad
// converted property getter: - (id)destinationEntity;	// 0x31e6ee1d
- (void)encodeWithCoder:(id)coder;	// 0x31ee8419
// converted property getter: - (id)inverseRelationship;	// 0x31e6e095
- (BOOL)isEqual:(id)equal;	// 0x31ee81ad
- (BOOL)isIndexed;	// 0x31ee7e85
// converted property getter: - (BOOL)isOrdered;	// 0x31e6ea89
- (BOOL)isToMany;	// 0x31e6ea71
// converted property getter: - (unsigned)maxCount;	// 0x31e6eb11
// converted property getter: - (unsigned)minCount;	// 0x31ee7e75
// converted property setter: - (void)setDeleteRule:(unsigned)rule;	// 0x31ee7e89
// converted property setter: - (void)setDestinationEntity:(id)entity;	// 0x31ee7f01
// converted property setter: - (void)setInverseRelationship:(id)relationship;	// 0x31e6e0e9
// converted property setter: - (void)setMaxCount:(unsigned)count;	// 0x31ee7eb1
// converted property setter: - (void)setMinCount:(unsigned)count;	// 0x31ee7ed9
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x31ee7f4d
- (id)versionHash;	// 0x31ee8081
@end

