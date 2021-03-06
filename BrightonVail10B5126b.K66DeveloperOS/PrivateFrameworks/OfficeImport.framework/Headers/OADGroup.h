/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableContainer.h"
#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class NSMutableArray;

@interface OADGroup : OADDrawable <OADDrawableContainer> {
	CGRect mLogicalBounds;	// 24 = 0x18
	NSMutableArray *mChildren;	// 40 = 0x28
}
@property(assign) CGRect logicalBounds;	// G=0x348848ed; S=0x3488341d; converted property
- (id)init;	// 0x34883129
- (id).cxx_construct;	// 0x34883125
- (void)addChild:(id)child;	// 0x348c4639
- (void)addChildren:(id)children;	// 0x3488397d
- (id)childAtIndex:(unsigned)index;	// 0x34884d81
- (unsigned)childCount;	// 0x348848cd
- (id)children;	// 0x34a4c555
- (void)dealloc;	// 0x34887cbd
- (id)groupProperties;	// 0x3493dc65
// converted property getter: - (CGRect)logicalBounds;	// 0x348848ed
- (void)removeUnnecessaryOverrides;	// 0x34883d01
- (void)replaceChild:(id)child with:(id)with;	// 0x34a4c565
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x3488341d
- (void)setParentTextListStyle:(id)style;	// 0x34883a49
@end

