/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIImage.h> // Unknown library


@interface UIImage (MPUtilities)
+ (id)imageFromAlbumArtData:(id)albumArtData artworkInfo:(MLArtworkInstanceInfo *)info;	// 0x3462949d
- (CGRect)bitmapRectFromImageRect:(CGRect)imageRect;	// 0x346296c5
@end

@interface UIImage (MMPAdditions)
- (BOOL)isCoverflowPlaceholder;	// 0x346c28d1
@end

@interface UIImage (MPImageCacheAdditions)
@property(assign, nonatomic) BOOL isPlaceholder;	// G=0x346d4129; S=0x346d40e1; 
@property(assign, nonatomic) CGRect mediaImageSubRect;	// G=0x346d3f5d; S=0x346d4051; 
@property(assign, nonatomic) double mediaImageTime;	// G=0x346d4015; S=0x346d40a5; 
// declared property getter: - (BOOL)isPlaceholder;	// 0x346d4129
// declared property getter: - (CGRect)mediaImageSubRect;	// 0x346d3f5d
// declared property getter: - (double)mediaImageTime;	// 0x346d4015
// declared property setter: - (void)setIsPlaceholder:(BOOL)placeholder;	// 0x346d40e1
// declared property setter: - (void)setMediaImageSubRect:(CGRect)rect;	// 0x346d4051
// declared property setter: - (void)setMediaImageTime:(double)time;	// 0x346d40a5
@end
