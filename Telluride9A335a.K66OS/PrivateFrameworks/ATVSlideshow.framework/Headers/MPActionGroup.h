/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"
#import "MPActionSupport.h"

@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport> {
@private
	NSMutableArray *_actions;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *actions;	// G=0x31a3e5d5; converted property
+ (id)actionGroup;	// 0x31a3e309
- (id)init;	// 0x31a3e34d
- (id)initWithCoder:(id)coder;	// 0x31a3e3b1
// converted property getter: - (id)actions;	// 0x31a3e5d5
- (void)addAction:(id)action;	// 0x31a3e5e5
- (void)addActions:(id)actions;	// 0x31a3e681
- (void)configureAction:(id)action atIndex:(int)index;	// 0x31a3e9d1
- (void)configureTarget;	// 0x31a3ec95
- (void)copyActions:(id)actions;	// 0x31a3e911
- (id)copyWithZone:(NSZone *)zone;	// 0x31a3e55d
- (void)dealloc;	// 0x31a3e4b5
- (void)encodeWithCoder:(id)coder;	// 0x31a3e501
- (void)insertAction:(id)action atIndex:(int)index;	// 0x31a3e641
- (void)insertActions:(id)actions atIndex:(int)index;	// 0x31a3e6c1
- (unsigned)numberOfActions;	// 0x31a3e5b5
- (void)removeActionsAtIndices:(id)indices;	// 0x31a3e7e5
- (void)removeAllActions;	// 0x31a3e8b1
- (void)setAction:(id)action;	// 0x31a3ed49
@end
