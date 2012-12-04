/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMenuSavedState : BRSingleton {
	NSMutableDictionary *_cachedMenuState;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
}
@property(assign) BOOL enabled;	// G=0x3a9e91; S=0x3a9ea1; converted property
+ (void)clearSavedSelectionForOwnerKey:(id)ownerKey;	// 0x3a9bf1
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey;	// 0x3a99b5
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x3a99d9
+ (void)saveSelection:(id)selection atIndexPath:(id)indexPath forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x3a9ae5
+ (id)selectionInfoForOwnerKey:(id)ownerKey;	// 0x3a9c31
+ (void)setSingleton:(id)singleton;	// 0x3a99a5
+ (id)singleton;	// 0x3a9995
- (id)init;	// 0x3a9c69
- (void)dealloc;	// 0x3a9ce5
// converted property getter: - (BOOL)enabled;	// 0x3a9e91
- (id)objectForKey:(id)key;	// 0x3a9dad
- (void)purge;	// 0x3a9e3d
- (void)removeObjectForKey:(id)key;	// 0x3a9df5
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3a9ea1
- (void)setObject:(id)object forKey:(id)key;	// 0x3a9d61
@end
