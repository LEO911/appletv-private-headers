/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"
#import "ATVSlideshow-Structs.h"

@class NSArray, NSSet, NSMutableDictionary, NSString;

@interface MCContainerParallelizer : MCContainer {
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSArray *mCachedZOrderedPlugs;	// 32 = 0x20
	CGColorRef mBackgroundColor;	// 36 = 0x24
	NSString *mPageIDAtStart;	// 40 = 0x28
}
@property(assign) CGColorRef backgroundColor;	// G=0x31ba1751; S=0x31ba1815; 
@property(readonly, assign) unsigned countOfPlugs;	// G=0x31ba1ae1; 
@property(copy) NSString *pageIDAtStart;	// G=0x31ba22e5; S=0x31ba22f9; @synthesize=mPageIDAtStart
@property(readonly, assign) NSSet *plugs;	// G=0x31ba199d; 
@property(readonly, assign) NSArray *zOrderedPlugs;	// G=0x31ba2119; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x31ba0e31
- (id)init;	// 0x31ba0eb1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31ba0f15
// declared property getter: - (CGColorRef)backgroundColor;	// 0x31ba1751
// declared property getter: - (unsigned)countOfPlugs;	// 0x31ba1ae1
- (void)demolish;	// 0x31ba11ed
- (id)imprint;	// 0x31ba1449
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31ba1625
// declared property getter: - (id)pageIDAtStart;	// 0x31ba22e5
- (id)plugForID:(id)anId;	// 0x31ba1b9d
// declared property getter: - (id)plugs;	// 0x31ba199d
- (void)removePlug:(id)plug;	// 0x31ba1ee9
- (void)removePlugForID:(id)anId;	// 0x31ba20e5
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x31ba1815
// declared property setter: - (void)setPageIDAtStart:(id)start;	// 0x31ba22f9
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x31ba1c8d
// declared property getter: - (id)zOrderedPlugs;	// 0x31ba2119
@end

