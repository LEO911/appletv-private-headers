/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library

@class NSString;

@interface UIViewController (MPMoviePlayerViewController)
- (void)dismissMoviePlayerViewControllerAnimated;	// 0x36efdbb9
- (void)presentMoviePlayerViewControllerAnimated:(id)animated;	// 0x36efdb5d
@end

@interface UIViewController (MPAdditions)
+ (void)_beginAppearanceTransitionFromViewController:(id)viewController toViewController:(id)viewController2 animated:(BOOL)animated;	// 0x36f74ac9
+ (void)_endAppearanceTransitionFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x36f74bd1
- (void)_addChildViewAndViewController:(id)controller;	// 0x36f74a11
- (void)_addChildViewAndViewController:(id)controller asSubviewOfView:(id)view;	// 0x36f749ed
- (void)_addChildViewAndViewController:(id)controller asSubviewOfView:(id)view addSubviewBlock:(id)block;	// 0x36f748b1
- (BOOL)_hasAncestorViewController:(id)controller;	// 0x36f7487d
- (void)_removeFromParentViewAndViewController;	// 0x36f74a4d
@end

@interface UIViewController (MPUsageStatistics)
@property(retain, nonatomic) NSString *aggregateStatisticsDisplayCountKey;	// G=0x36f96fd5; S=0x36f96fc5; 
// declared property getter: - (id)aggregateStatisticsDisplayCountKey;	// 0x36f96fd5
// declared property setter: - (void)setAggregateStatisticsDisplayCountKey:(id)key;	// 0x36f96fc5
@end
