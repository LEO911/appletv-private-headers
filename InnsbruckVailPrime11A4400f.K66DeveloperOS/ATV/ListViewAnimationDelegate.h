/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRListView;

__attribute__((visibility("hidden")))
@interface ListViewAnimationDelegate : XXUnknownSuperclass {
	BRListView *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x33ce51
- (void).cxx_destruct;	// 0x33cfa1
- (void)animationDidStart:(id)animation;	// 0x33cf81
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x33cf91
- (void)clearScroll;	// 0x33ceb9
- (void)decrementBalance;	// 0x33cf1d
- (void)incrementBalance;	// 0x33cecd
- (BOOL)scrolling;	// 0x33cf69
@end
