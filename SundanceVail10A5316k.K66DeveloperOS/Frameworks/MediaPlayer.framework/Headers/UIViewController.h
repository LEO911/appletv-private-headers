/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library

@class NSString;

@interface UIViewController (MPMoviePlayerViewController)
- (void)dismissMoviePlayerViewControllerAnimated;	// 0x3485aa19
- (void)presentMoviePlayerViewControllerAnimated:(id)animated;	// 0x3485a9bd
@end

@interface UIViewController (MPAdditions)
+ (void)_beginAppearanceTransitionFromViewController:(id)viewController toViewController:(id)viewController2 animated:(BOOL)animated;	// 0x348d3741
+ (void)_endAppearanceTransitionFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x348d3849
- (void)_addChildViewAndViewController:(id)controller;	// 0x348d3689
- (void)_addChildViewAndViewController:(id)controller asSubviewOfView:(id)view;	// 0x348d3665
- (void)_addChildViewAndViewController:(id)controller asSubviewOfView:(id)view addSubviewBlock:(id)block;	// 0x348d3529
- (BOOL)_hasAncestorViewController:(id)controller;	// 0x348d34f5
- (void)_removeFromParentViewAndViewController;	// 0x348d36c5
@end

@interface UIViewController (MPUsageStatistics)
@property(retain, nonatomic) NSString *aggregateStatisticsDisplayCountKey;	// G=0x348fae55; S=0x348fae45; 
// declared property getter: - (id)aggregateStatisticsDisplayCountKey;	// 0x348fae55
// declared property setter: - (void)setAggregateStatisticsDisplayCountKey:(id)key;	// 0x348fae45
@end

