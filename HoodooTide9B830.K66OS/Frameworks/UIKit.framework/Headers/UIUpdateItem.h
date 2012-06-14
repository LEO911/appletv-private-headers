/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITableViewUpdateGap, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject {
@private
	int _action;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
	int _animation;	// 12 = 0xc
	float _offset;	// 16 = 0x10
	UITableViewUpdateGap *_gap;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) int action;	// G=0x300d2389; @synthesize=_action
@property(assign, nonatomic) int animation;	// G=0x300d0ea1; S=0x301b004d; @synthesize=_animation
@property(assign, nonatomic) UITableViewUpdateGap *gap;	// G=0x302b44b1; S=0x302b44c1; @synthesize=_gap
@property(readonly, assign, nonatomic) NSIndexPath *indexPath;	// G=0x300d0e91; @synthesize=_indexPath
@property(assign, nonatomic) float offset;	// G=0x302b4491; S=0x302b44a1; @synthesize=_offset
- (id)initWithAction:(int)action forIndexPath:(id)indexPath animation:(int)animation;	// 0x300cea09
- (id)_actionDescription;	// 0x302b4439
// declared property getter: - (int)action;	// 0x300d2389
// declared property getter: - (int)animation;	// 0x300d0ea1
- (int)compareIndexPaths:(id)paths;	// 0x30147331
- (void)dealloc;	// 0x300dbfbd
// declared property getter: - (id)gap;	// 0x302b44b1
// declared property getter: - (id)indexPath;	// 0x300d0e91
- (int)inverseCompareIndexPaths:(id)paths;	// 0x3014c1ed
- (BOOL)isSectionOperation;	// 0x300d0eb1
// declared property getter: - (float)offset;	// 0x302b4491
// declared property setter: - (void)setAnimation:(int)animation;	// 0x301b004d
// declared property setter: - (void)setGap:(id)gap;	// 0x302b44c1
// declared property setter: - (void)setOffset:(float)offset;	// 0x302b44a1
@end
