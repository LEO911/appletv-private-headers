/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIKit/_UIReflectingView.h>

@class UIImageView, UIImage;

@interface MPReflectionImageView : _UIReflectingView {
	UIImageView *_imageView;	// 108 = 0x6c
	BOOL _squareImage;	// 112 = 0x70
}
@property(retain, nonatomic) UIImage *image;	// G=0x2e288199; S=0x2e287e69; 
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x2e288335; @synthesize=_imageView
@property(assign, nonatomic) BOOL squareImage;	// G=0x2e288345; S=0x2e288355; @synthesize=_squareImage
+ (float)defaultReflectionHeight;	// 0x2e287bf9
- (id)initWithFrame:(CGRect)frame;	// 0x2e287ac1
- (void).cxx_destruct;	// 0x2e288365
- (id)albumArtImage;	// 0x2e287c01
// declared property getter: - (id)image;	// 0x2e288199
// declared property getter: - (id)imageView;	// 0x2e288335
- (void)setAlbumVisible:(BOOL)visible reflectionVisible:(BOOL)visible2;	// 0x2e287c21
- (void)setFrame:(CGRect)frame withReflectionHeight:(float)reflectionHeight;	// 0x2e2881b9
// declared property setter: - (void)setImage:(id)image;	// 0x2e287e69
- (void)setReflectionVisible:(BOOL)visible withDuration:(float)duration;	// 0x2e288279
// declared property setter: - (void)setSquareImage:(BOOL)image;	// 0x2e288355
// declared property getter: - (BOOL)squareImage;	// 0x2e288345
@end
