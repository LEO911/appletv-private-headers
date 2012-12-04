/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectModel, NSError, NSEntityMapping;

@interface _NSMappingModelBuilder : NSObject {
	NSManagedObjectModel *_sourceModel;	// 4 = 0x4
	NSManagedObjectModel *_destinationModel;	// 8 = 0x8
	NSEntityMapping *_currentEntityMapping;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
}
+ (int)migrationDebugLevel;	// 0x33ce3375
+ (void)setMigrationDebugLevel:(int)level;	// 0x33ce3391
- (id)initWithSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x33ce33ad
- (BOOL)_canTransformSourceAttributeType:(unsigned)type toDestinationAttributeType:(unsigned)destinationAttributeType;	// 0x33ce46d1
- (void)_resetCaches;	// 0x33ce34b5
- (void)dealloc;	// 0x33ce3425
- (BOOL)inferPropertyMappingsForEntityMapping:(id)entityMapping;	// 0x33ce3af1
- (id)newEntityMappingWithSource:(id)source destination:(id)destination;	// 0x33ce43b5
- (id)newInferredMappingModel:(id *)model;	// 0x33ce34ed
- (id)newInferredPropertyMappingWithSourceAttribute:(id)sourceAttribute destinationAttribute:(id)attribute;	// 0x33ce4785
- (id)newInferredPropertyMappingWithSourceRelationship:(id)sourceRelationship destinationRelationship:(id)relationship;	// 0x33ce5205
@end
