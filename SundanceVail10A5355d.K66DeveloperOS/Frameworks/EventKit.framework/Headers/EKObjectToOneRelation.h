/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObjectRelation.h"

@class EKObject;

__attribute__((visibility("hidden")))
@interface EKObjectToOneRelation : EKObjectRelation {
	EKObject *_relatedObject;	// 20 = 0x14
	BOOL _weak;	// 24 = 0x18
}
@property(retain) EKObject *relatedObject;	// G=0x31f618b9; S=0x31f6b629; converted property
@property(readonly, assign, getter=isWeak) BOOL weak;	// G=0x31f6f639; converted property
- (id)initWithObject:(id)object relationName:(id)name inverseRelationName:(id)name3 weak:(BOOL)weak;	// 0x31f617e9
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x31f6c8fd
- (void)_clear;	// 0x31f73789
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x31f7706d
- (void)_setRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x31f6b649
- (void)_unload;	// 0x31f6aa19
- (id)committedValue;	// 0x31fdae71
- (void)dealloc;	// 0x31f737fd
- (id)description;	// 0x31fdaf75
- (void)didCommit;	// 0x31f72e01
// converted property getter: - (BOOL)isWeak;	// 0x31f6f639
- (void)refresh;	// 0x31f73cb5
// converted property getter: - (id)relatedObject;	// 0x31f618b9
- (void)reset;	// 0x31fdaee9
- (void)rollback;	// 0x31f6a9a9
// converted property setter: - (void)setRelatedObject:(id)object;	// 0x31f6b629
- (void)updatePersistentObject;	// 0x31f6ed99
- (BOOL)validate:(id *)validate;	// 0x31f6dbd1
@end
