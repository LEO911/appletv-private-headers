/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAudioDeviceControllerDelegate.h"
#import <UIAlertView.h> // Unknown library
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "MediaPlayer-Structs.h"

@class MPAudioDeviceController, NSArray;

@interface MPAudioRoutingPicker : UIAlertView <MPAudioDeviceControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
	MPAudioDeviceController *_audioDeviceController;	// 192 = 0xc0
	BOOL _ignoringInteractionEvents;	// 196 = 0xc4
	NSArray *_routes;	// 200 = 0xc8
}
- (id)initWithAVPlayer:(id)avplayer;	// 0x31dbb779
- (BOOL)_pickRouteAtIndex:(unsigned)index withPassword:(id)password;	// 0x31dbbf21
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x31dbb981
- (void)dealloc;	// 0x31dbb921
- (BOOL)requiresPortraitOrientation;	// 0x31dbbf1d
- (void)setAVPlayer:(id)player;	// 0x31dbb8d5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31dbba51
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31dbbb71
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31dbb9e1
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x31dbbb2d
- (void)willMoveToSuperview:(id)superview;	// 0x31dbbe7d
@end

