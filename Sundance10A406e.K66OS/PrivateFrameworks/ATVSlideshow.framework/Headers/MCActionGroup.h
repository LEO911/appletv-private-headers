/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSArray, NSMutableArray;

@interface MCActionGroup : MCAction {
	NSMutableArray *_actions;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x3613868d; @synthesize=_actions
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x36138779; 
+ (id)actionGroup;	// 0x36138189
- (id)init;	// 0x361381cd
- (id)initWithImprint:(id)imprint;	// 0x36138231
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x36138e65
- (id)actionAtIndex:(unsigned)index;	// 0x36138875
// declared property getter: - (id)actions;	// 0x3613868d
- (void)addAction:(id)action;	// 0x361389a1
- (void)addActions:(id)actions;	// 0x361389f1
// declared property getter: - (unsigned)countOfActions;	// 0x36138779
- (void)demolish;	// 0x36138369
- (id)description;	// 0x36138f79
- (id)imprint;	// 0x36138539
- (void)insertAction:(id)action atIndex:(unsigned)index;	// 0x36138a25
- (void)insertActions:(id)actions atIndex:(unsigned)index;	// 0x36138a65
- (void)moveActionsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x36138d0d
- (void)removeActionsAtIndices:(id)indices;	// 0x36138b79
- (void)removeAllActions;	// 0x36138c45
@end
