/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"
#import "ATVSlideshow-Structs.h"

@class NSArray, NSSet, NSMutableDictionary;

@interface MCContainerParallelizer : MCContainer {
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSArray *mCachedZOrderedPlugs;	// 32 = 0x20
	CGColorRef mBackgroundColor;	// 36 = 0x24
}
@property(assign) CGColorRef backgroundColor;	// G=0x3630cf0d; S=0x3630cfe1; 
@property(readonly, assign, nonatomic) unsigned countOfPlugs;	// G=0x3630d2e5; 
@property(readonly, assign) NSSet *plugs;	// G=0x3630d199; 
@property(readonly, assign) NSArray *zOrderedPlugs;	// G=0x3630df79; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3630c5c1
- (id)init;	// 0x3630c641
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3630c6a5
// declared property getter: - (CGColorRef)backgroundColor;	// 0x3630cf0d
- (void)changeIDOfPlug:(id)plug toID:(id)anId;	// 0x3630d951
// declared property getter: - (unsigned)countOfPlugs;	// 0x3630d2e5
- (void)demolish;	// 0x3630c971
- (id)imprint;	// 0x3630cbf5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3630cdc9
- (id)plugForID:(id)anId;	// 0x3630d3b1
// declared property getter: - (id)plugs;	// 0x3630d199
- (void)removeAllPlugs;	// 0x3630dce9
- (void)removePlug:(id)plug;	// 0x3630dac1
- (void)removePlugForID:(id)anId;	// 0x3630dcb1
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x3630cfe1
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x3630d4ad
- (id)setPlugProxyForPlug:(id)plug;	// 0x3630d701
// declared property getter: - (id)zOrderedPlugs;	// 0x3630df79
@end
