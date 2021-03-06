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
	MPAudioVideoRoutingTableViewController *_tableViewController;	// 156 = 0x9c
	id<MPAudioVideoRoutingViewControllerDelegate> _delegate;	// 160 = 0xa0
}
@property(assign, nonatomic) id<MPAudioVideoRoutingViewControllerDelegate> delegate;	// G=0x3019ee81; S=0x3019ee91; @synthesize=_delegate
+ (BOOL)hasWirelessDisplayRoutes;	// 0x3019edc1
- (id)init;	// 0x3019eb69
- (void)_doneAction:(id)action;	// 0x3019ed51
- (void)dealloc;	// 0x3019ec61
// declared property getter: - (id)delegate;	// 0x3019ee81
- (void)loadView;	// 0x3019ecad
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3019ee91
@end

