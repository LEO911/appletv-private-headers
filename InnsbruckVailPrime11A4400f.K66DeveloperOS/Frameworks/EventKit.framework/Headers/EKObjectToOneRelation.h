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
@property(retain) EKObject *relatedObject;	// G=0x2da87bfd; S=0x2da999f5; converted property
@property(readonly, assign, getter=isWeak) BOOL weak;	// G=0x2da94c31; converted property
- (id)initWithObject:(id)object relationName:(id)name inverseRelationName:(id)name3 weak:(BOOL)weak;	// 0x2da87b31
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x2da95a19
- (void)_clear;	// 0x2da94c41
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x2db11781
- (void)_setRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x2da95a3d
- (void)_unload;	// 0x2da94c51
- (id)committedValue;	// 0x2db117a1
- (void)dealloc;	// 0x2da946d1
- (id)description;	// 0x2db1191d
- (void)didCommit;	// 0x2daa03d5
// converted property getter: - (BOOL)isWeak;	// 0x2da94c31
- (void)refresh;	// 0x2db118a5
// converted property getter: - (id)relatedObject;	// 0x2da87bfd
- (void)reset;	// 0x2db11819
- (void)rollback;	// 0x2da98d75
// converted property setter: - (void)setRelatedObject:(id)object;	// 0x2da999f5
- (void)updatePersistentObject;	// 0x2da9cc35
- (BOOL)validate:(id *)validate;	// 0x2da9b8c5
@end
