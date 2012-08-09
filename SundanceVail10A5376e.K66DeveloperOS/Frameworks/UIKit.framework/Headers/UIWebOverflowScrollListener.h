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
	UIWebOverflowScrollView *_scrollView;	// 4 = 0x4
}
- (id)initWithScrollView:(id)scrollView;	// 0x305ebe79
- (void)_didCompleteScrolling;	// 0x305ebf25
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x305ebfd5
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x305ebfbd
- (void)scrollViewDidScrollToTop:(id)scrollView;	// 0x305ebfe5
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x305ebed1
@end
