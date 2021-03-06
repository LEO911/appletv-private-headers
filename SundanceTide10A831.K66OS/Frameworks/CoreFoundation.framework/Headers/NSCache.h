/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library


@interface NSCache : NSObject {
	id _delegate;	// 4 = 0x4
	void *_private[5];	// 8 = 0x8
	void *_reserved;	// 28 = 0x1c
}
@property(assign) unsigned countLimit;	// G=0x34620041; S=0x34595d21; converted property
@property(assign) id delegate;	// G=0x3461ff99; S=0x34595c85; converted property
@property(assign) BOOL evictsObjectsWhenApplicationEntersBackground;	// G=0x34620071; S=0x34620089; converted property
@property(assign) BOOL evictsObjectsWithDiscardedContent;	// G=0x34592405; S=0x34620055; converted property
@property(retain) id name;	// G=0x3461ff55; S=0x34592159; converted property
@property(assign) unsigned totalCostLimit;	// G=0x3462002d; S=0x34595cf9; converted property
- (id)init;	// 0x34592095
- (id)allObjects;	// 0x34620121
// converted property getter: - (unsigned)countLimit;	// 0x34620041
- (void)dealloc;	// 0x345a3a2d
// converted property getter: - (id)delegate;	// 0x3461ff99
// converted property getter: - (BOOL)evictsObjectsWhenApplicationEntersBackground;	// 0x34620071
// converted property getter: - (BOOL)evictsObjectsWithDiscardedContent;	// 0x34592405
- (void)finalize;	// 0x3461fecd
// converted property getter: - (id)name;	// 0x3461ff55
- (id)objectForKey:(id)key;	// 0x34592331
- (void)removeAllObjects;	// 0x345a39e1
- (void)removeObjectForKey:(id)key;	// 0x345a392d
// converted property setter: - (void)setCountLimit:(unsigned)limit;	// 0x34595d21
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x34595c85
// converted property setter: - (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)background;	// 0x34620089
// converted property setter: - (void)setEvictsObjectsWithDiscardedContent:(BOOL)discardedContent;	// 0x34620055
// converted property setter: - (void)setName:(id)name;	// 0x34592159
- (void)setObject:(id)object forKey:(id)key;	// 0x3459241d
- (void)setObject:(id)object forKey:(id)key cost:(unsigned)cost;	// 0x3459244d
// converted property setter: - (void)setTotalCostLimit:(unsigned)limit;	// 0x34595cf9
// converted property getter: - (unsigned)totalCostLimit;	// 0x3462002d
@end

