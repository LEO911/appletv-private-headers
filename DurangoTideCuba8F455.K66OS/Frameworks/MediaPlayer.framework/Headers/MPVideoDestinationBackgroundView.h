/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIImageView.h> // Unknown library

@class UILabel;

@interface MPVideoDestinationBackgroundView : UIImageView {
@private
	UIImageView *_videosImageView;	// 48 = 0x30
	UILabel *_destinationTitleLabel;	// 52 = 0x34
	UILabel *_destinationSubtitleLabel;	// 56 = 0x38
}
- (void)dealloc;	// 0x335fdbb5
- (void)layoutSubviews;	// 0x335feb51
- (void)setFrame:(CGRect)frame;	// 0x335fdb59
@end
