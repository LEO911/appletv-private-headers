/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObjectRelation.h"

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface EKObjectToManyRelation : EKObjectRelation {
	NSMutableSet *_loadedItems;	// 20 = 0x14
	NSMutableSet *_effectiveItems;	// 24 = 0x18
	NSMutableSet *_addedItems;	// 28 = 0x1c
	NSMutableSet *_removedItems;	// 32 = 0x20
}
@property(retain, nonatomic) NSMutableSet *addedItems;	// G=0x368230c5; S=0x368230d5; @synthesize=_addedItems
@property(readonly, assign, nonatomic) int count;	// G=0x367b01a1; 
@property(retain, nonatomic) NSMutableSet *effectiveItems;	// G=0x368230a5; S=0x368230b5; @synthesize=_effectiveItems
@property(copy, nonatomic) NSSet *items;	// G=0x367af0e9; S=0x367b1ced; 
@property(readonly, assign, nonatomic) BOOL itemsWereAdded;	// G=0x36822acd; 
@property(readonly, assign, nonatomic) BOOL itemsWereRemoved;	// G=0x36822af9; 
@property(retain, nonatomic) NSMutableSet *loadedItems;	// G=0x36823085; S=0x36823095; @synthesize=_loadedItems
@property(retain, nonatomic) NSMutableSet *removedItems;	// G=0x368230e5; S=0x368230f5; @synthesize=_removedItems
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x367b4b21
- (id)_effectiveItems;	// 0x367af121
- (void)_forgetRelatedObject:(id)object;	// 0x36822ccd
- (id)_loadedItems;	// 0x367af1dd
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x36822b45
- (void)addItem:(id)item;	// 0x367b4b01
// declared property getter: - (id)addedItems;	// 0x368230c5
- (id)committedValue;	// 0x367b1c8d
// declared property getter: - (int)count;	// 0x367b01a1
- (void)dealloc;	// 0x367ae6c9
- (id)description;	// 0x36822f9d
- (void)didCommit;	// 0x367ba8d9
// declared property getter: - (id)effectiveItems;	// 0x368230a5
- (BOOL)isWeak;	// 0x36822ac9
// declared property getter: - (id)items;	// 0x367af0e9
// declared property getter: - (BOOL)itemsWereAdded;	// 0x36822acd
// declared property getter: - (BOOL)itemsWereRemoved;	// 0x36822af9
// declared property getter: - (id)loadedItems;	// 0x36823085
- (void)refresh;	// 0x36822e4d
- (void)removeItem:(id)item;	// 0x36822b25
// declared property getter: - (id)removedItems;	// 0x368230e5
- (void)reset;	// 0x36822d3d
- (void)rollback;	// 0x367b2bb9
// declared property setter: - (void)setAddedItems:(id)items;	// 0x368230d5
// declared property setter: - (void)setEffectiveItems:(id)items;	// 0x368230b5
// declared property setter: - (void)setItems:(id)items;	// 0x367b1ced
// declared property setter: - (void)setLoadedItems:(id)items;	// 0x36823095
// declared property setter: - (void)setRemovedItems:(id)items;	// 0x368230f5
- (void)updatePersistentObject;	// 0x367b770d
- (BOOL)validate:(id *)validate;	// 0x367b57b5
@end
