/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPActionSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport> {
@private
	NSMutableArray *_actions;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *actions;	// G=0x331dbac5; converted property
+ (id)actionGroup;	// 0x331db7e5
- (id)init;	// 0x331db821
- (id)initWithCoder:(id)coder;	// 0x331db88d
// converted property getter: - (id)actions;	// 0x331dbac5
- (void)addAction:(id)action;	// 0x331dbad5
- (void)addActions:(id)actions;	// 0x331dbb5d
- (void)configureAction:(id)action atIndex:(int)index;	// 0x331dbdb9
- (void)configureTarget;	// 0x331dc02d
- (void)copyActions:(id)actions;	// 0x331dbcf1
- (id)copyWithZone:(NSZone *)zone;	// 0x331dba41
- (void)dealloc;	// 0x331db99d
- (void)encodeWithCoder:(id)coder;	// 0x331db9e9
- (void)insertAction:(id)action atIndex:(int)index;	// 0x331dbb25
- (void)insertActions:(id)actions atIndex:(int)index;	// 0x331dbb95
- (unsigned)numberOfActions;	// 0x331dbaa5
- (void)removeActionsAtIndices:(id)indices;	// 0x331dbcb1
- (void)removeAllActions;	// 0x331dbcd1
- (void)setAction:(id)action;	// 0x331dc105
@end

