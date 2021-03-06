/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSArray, NSSet, NSMutableSet;

@interface MCContainerSerializer : MCContainer {
	NSMutableSet *mPlugs;	// 28 = 0x1c
	NSArray *mCachedOrderedPlugs;	// 32 = 0x20
	double mCachedDuration;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) unsigned countOfPlugs;	// G=0x32185dd1; 
@property(readonly, assign) double duration;	// G=0x32185a41; 
@property(readonly, assign) NSArray *orderedPlugs;	// G=0x32186d79; 
@property(readonly, assign) NSSet *plugs;	// G=0x32185ca1; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x32185331
- (id)init;	// 0x321853b1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32185431
- (id)addPlugForContainer:(id)container;	// 0x321860a9
- (id)addPlugsForContainers:(id)containers;	// 0x32186139
// declared property getter: - (unsigned)countOfPlugs;	// 0x32185dd1
- (void)demolish;	// 0x321855ed
// declared property getter: - (double)duration;	// 0x32185a41
- (id)imprint;	// 0x32185851
- (id)insertPlugForContainer:(id)container atIndex:(unsigned)index;	// 0x3218616d
- (id)insertPlugsForContainers:(id)containers atIndex:(unsigned)index;	// 0x321861ed
- (void)movePlugsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x32186a41
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3218599d
// declared property getter: - (id)orderedPlugs;	// 0x32186d79
- (id)plugAtIndex:(unsigned)index;	// 0x32185e9d
// declared property getter: - (id)plugs;	// 0x32185ca1
- (void)removeAllPlugs;	// 0x32186d25
- (void)removePlugsAtIndices:(id)indices;	// 0x321866a5
- (double)timeInForPlug:(id)plug;	// 0x32186f69
@end

