/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol _UIQueuingScrollViewDelegate <NSObject>
- (void)queuingScrollView:(id)view didBailoutOfScrollAndRevealedView:(id)scrollAndRevealedView;
- (void)queuingScrollView:(id)view didCommitManualScroll:(BOOL)scroll toRevealView:(id)revealView concealView:(id)view4 direction:(int)direction animated:(BOOL)animated canComplete:(BOOL)complete;
- (void)queuingScrollView:(id)view didEndManualScroll:(BOOL)scroll toRevealView:(id)revealView direction:(int)direction animated:(BOOL)animated didFinish:(BOOL)finish didComplete:(BOOL)complete;
- (void)queuingScrollView:(id)view willManuallyScroll:(BOOL)scroll toRevealView:(id)revealView concealView:(id)view4 animated:(BOOL)animated;
- (BOOL)queuingScrollViewShouldLayoutSubviews:(id)queuingScrollView;
@end
