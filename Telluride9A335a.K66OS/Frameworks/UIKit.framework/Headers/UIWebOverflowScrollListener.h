/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "UIKit-Structs.h"

@class UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {
@private
	UIWebOverflowScrollView *_scrollView;	// 4 = 0x4
}
- (id)initWithScrollView:(id)scrollView;	// 0x33d32ac9
- (void)_didCompleteScrolling;	// 0x33d32b79
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x33d32c35
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x33d32c15
- (void)scrollViewDidScrollToTop:(id)scrollView;	// 0x33d32c45
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x33d32b21
@end
