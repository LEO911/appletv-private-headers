/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIAlertView.h> // Unknown library
#import "UIModalViewDelegate.h"

@class NSString;

@interface MPVolumeAlertView : UIAlertView <UIModalViewDelegate> {
	NSString *_volumeAudioCategory;	// 156 = 0x9c
}
- (void)dealloc;	// 0x346772b9
- (void)layout;	// 0x3467743d
- (void)setVolumeAudioCategory:(id)category;	// 0x346773d1
- (id)volumeView;	// 0x34677305
@end
