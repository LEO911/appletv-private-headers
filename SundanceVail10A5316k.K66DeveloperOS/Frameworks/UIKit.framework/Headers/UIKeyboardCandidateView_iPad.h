/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollViewDelegate.h"
#import "UIKit-Structs.h"
#import "UIKeyboardCandidateView.h"

@class UIKeyboardCandidatePageControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UIScrollViewDelegate> {
@private
	UIKeyboardCandidatePageControl *_pageControl;	// 180 = 0xb4
}
+ (float)defaultExtendedControlHeight;	// 0x304c0715
- (id)initWithFrame:(CGRect)frame;	// 0x304c0731
- (float)_additionalClipHeight;	// 0x304c1195
- (void)dealloc;	// 0x304c09c1
- (void)didEndSplitTransition;	// 0x304c1241
- (void)layoutSubviews;	// 0x304c0a0d
- (void)scrollViewDidScroll:(id)scrollView;	// 0x304c1231
- (void)setCandidateBarExtended:(BOOL)extended;	// 0x304c0cb5
- (void)updatePageControlStatus;	// 0x304c119d
@end

