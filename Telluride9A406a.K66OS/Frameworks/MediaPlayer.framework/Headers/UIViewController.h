/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library


@interface UIViewController (MPMoviePlayerViewController)
- (void)dismissMoviePlayerViewControllerAnimated;	// 0x31a00e55
- (void)presentMoviePlayerViewControllerAnimated:(id)animated;	// 0x31a00dfd
@end

@interface UIViewController (MPAdditions)
+ (void)_beginAppearanceTransitionFromViewController:(id)viewController toViewController:(id)viewController2 animated:(BOOL)animated;	// 0x31a6ed59
+ (void)_endAppearanceTransitionFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x31a6ee51
- (void)_addChildViewAndViewController:(id)controller;	// 0x31a6eca5
- (void)_addChildViewAndViewController:(id)controller asSubviewOfView:(id)view;	// 0x31a6ec81
- (void)_addChildViewAndViewController:(id)controller asSubviewOfView:(id)view addSubviewBlock:(id)block;	// 0x31a6eb5d
- (BOOL)_hasAncestorViewController:(id)controller;	// 0x31a6eb29
- (void)_removeFromParentViewAndViewController;	// 0x31a6ece1
@end
