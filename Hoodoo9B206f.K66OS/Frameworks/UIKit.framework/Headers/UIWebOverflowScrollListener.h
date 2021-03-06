/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollViewDelegate.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {
@private
	UIWebOverflowScrollView *_scrollView;	// 4 = 0x4
}
- (id)initWithScrollView:(id)scrollView;	// 0x356c727d
- (void)_didCompleteScrolling;	// 0x356c732d
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x356c73e9
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x356c73c9
- (void)scrollViewDidScrollToTop:(id)scrollView;	// 0x356c73f9
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x356c72d5
@end

