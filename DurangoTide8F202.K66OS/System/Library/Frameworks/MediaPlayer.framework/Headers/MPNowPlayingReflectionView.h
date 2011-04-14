/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UIGradient, UIImage;

@interface MPNowPlayingReflectionView : UIView {
	UIGradient *_gradient;	// 44 = 0x2c
	UIImage *_image;	// 48 = 0x30
}
@property(retain, nonatomic) UIGradient *gradient;	// G=0x31d9d335; S=0x31d9db91; @synthesize=_gradient
- (void)dealloc;	// 0x31d9d3ad
- (void)drawRect:(CGRect)rect;	// 0x31d9dbe1
// declared property getter: - (id)gradient;	// 0x31d9d335
// declared property setter: - (void)setGradient:(id)gradient;	// 0x31d9db91
- (void)setImage:(id)image;	// 0x31d9d2fd
@end
