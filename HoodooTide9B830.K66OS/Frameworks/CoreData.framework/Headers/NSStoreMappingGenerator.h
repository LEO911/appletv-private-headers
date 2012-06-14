/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSStoreMappingGenerator : NSObject {
}
+ (id)defaultMappingGenerator;	// 0x3233c9a9
+ (void)invalidate;	// 0x3233c9f1
- (id)externalNameForEntityName:(id)entityName;	// 0x3233c659
- (id)externalNameForPropertyName:(id)propertyName;	// 0x3233c66d
- (id)internalNameForEntityName:(id)entityName version:(int)version;	// 0x3233c681
- (id)internalNameForPropertyName:(id)propertyName version:(int)version;	// 0x3233c6a9
- (id)joinsForRelationship:(id)relationship;	// 0x3233c791
- (id)mappingForAttribute:(id)attribute forConfigurationWithName:(id)name;	// 0x3233c6d1
- (id)mappingForEntity:(id)entity forConfigurationWithName:(id)name;	// 0x3233cc35
- (id)mappingForRelationship:(id)relationship forConfigurationWithName:(id)name;	// 0x3233c82d
- (id)mappingsDictForConfigurationWithName:(id)name inModel:(id)model;	// 0x3233ca19
- (id)mappingsForConfigurationWithName:(id)name inModel:(id)model;	// 0x3233cb2d
- (id)primaryKeyForEntity:(id)entity;	// 0x3233c745
@end
