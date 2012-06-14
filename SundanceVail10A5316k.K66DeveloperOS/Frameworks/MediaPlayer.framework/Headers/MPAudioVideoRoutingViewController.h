/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library

@class MPAudioVideoRoutingTableViewController;
@protocol MPAudioVideoRoutingViewControllerDelegate;

@interface MPAudioVideoRoutingViewController : UIViewController {
	MPAudioVideoRoutingTableViewController *_tableViewController;	// 180 = 0xb4
	id<MPAudioVideoRoutingViewControllerDelegate> _delegate;	// 184 = 0xb8
}
@property(assign, nonatomic) id<MPAudioVideoRoutingViewControllerDelegate> delegate;	// G=0x348cf9c5; S=0x348cf9d5; @synthesize=_delegate
+ (BOOL)hasWirelessDisplayRoutes;	// 0x348cf8f5
- (id)init;	// 0x348cf699
- (void)_doneAction:(id)action;	// 0x348cf879
- (void)dealloc;	// 0x348cf78d
// declared property getter: - (id)delegate;	// 0x348cf9c5
- (void)loadView;	// 0x348cf7d9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x348cf9d5
@end
