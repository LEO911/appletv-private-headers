/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPImageCacheRequest.h"

@class NSString, MPMediaItem, UIImage;

@interface MPMediaItemImageRequest : MPImageCacheRequest {
	NSString *_artworkCacheID;	// 60 = 0x3c
	int _artworkFormat;	// 64 = 0x40
	MPMediaItem *_mediaItem;	// 68 = 0x44
	int _placeHolderMediaType;	// 72 = 0x48
	double _retrievalTime;	// 76 = 0x4c
	BOOL _usePlaceholderAsFallback;	// 84 = 0x54
	BOOL _crop;	// 85 = 0x55
	BOOL _fillToSquareAspectRatio;	// 86 = 0x56
	BOOL _canUseSurfaceBackedImage;	// 87 = 0x57
}
@property(copy, nonatomic) NSString *artworkCacheID;	// G=0x36f648d5; S=0x36f648e9; @synthesize=_artworkCacheID
@property(assign, nonatomic) int artworkFormat;	// G=0x36f648f9; S=0x36f64909; @synthesize=_artworkFormat
@property(assign, nonatomic) BOOL canUseSurfaceBackedImage;	// G=0x36f649d5; S=0x36f649e5; @synthesize=_canUseSurfaceBackedImage
@property(assign, nonatomic) BOOL crop;	// G=0x36f64919; S=0x36f64929; @synthesize=_crop
@property(assign, nonatomic) BOOL fillToSquareAspectRatio;	// G=0x36f64939; S=0x36f64949; @synthesize=_fillToSquareAspectRatio
@property(readonly, assign, nonatomic) MPMediaItem *mediaItem;	// G=0x36f64959; @synthesize=_mediaItem
@property(assign, nonatomic) int placeHolderMediaType;	// G=0x36f649b5; S=0x36f649c5; @synthesize=_placeHolderMediaType
@property(assign, nonatomic) double retrievalTime;	// G=0x36f64969; S=0x36f64981; @synthesize=_retrievalTime
@property(readonly, assign, nonatomic) UIImage *unscaledPlaceholderImage;	// G=0x36f63e81; 
@property(assign, nonatomic) BOOL usePlaceholderAsFallback;	// G=0x36f64995; S=0x36f649a5; @synthesize=_usePlaceholderAsFallback
- (id)initWithMediaItem:(id)mediaItem;	// 0x36f6398d
// declared property getter: - (id)artworkCacheID;	// 0x36f648d5
// declared property getter: - (int)artworkFormat;	// 0x36f648f9
- (BOOL)canRequestSynchronously;	// 0x36f63ed5
// declared property getter: - (BOOL)canUseSurfaceBackedImage;	// 0x36f649d5
- (void)composeUniqueKey;	// 0x36f6473d
- (id)copyRawImageReturningError:(id *)error;	// 0x36f63f2d
// declared property getter: - (BOOL)crop;	// 0x36f64919
- (void)dealloc;	// 0x36f63a91
// declared property getter: - (BOOL)fillToSquareAspectRatio;	// 0x36f64939
// declared property getter: - (id)mediaItem;	// 0x36f64959
// declared property getter: - (int)placeHolderMediaType;	// 0x36f649b5
- (id)placeholderImage;	// 0x36f63af5
// declared property getter: - (double)retrievalTime;	// 0x36f64969
// declared property setter: - (void)setArtworkCacheID:(id)anId;	// 0x36f648e9
// declared property setter: - (void)setArtworkFormat:(int)format;	// 0x36f64909
// declared property setter: - (void)setCanUseSurfaceBackedImage:(BOOL)image;	// 0x36f649e5
// declared property setter: - (void)setCrop:(BOOL)crop;	// 0x36f64929
// declared property setter: - (void)setFillToSquareAspectRatio:(BOOL)squareAspectRatio;	// 0x36f64949
// declared property setter: - (void)setPlaceHolderMediaType:(int)type;	// 0x36f649c5
// declared property setter: - (void)setRetrievalTime:(double)time;	// 0x36f64981
- (void)setRetrievalTimeForPlaybackTime:(double)playbackTime;	// 0x36f63a19
// declared property setter: - (void)setUsePlaceholderAsFallback:(BOOL)fallback;	// 0x36f649a5
- (id)uniqueKey;	// 0x36f646a9
// declared property getter: - (id)unscaledPlaceholderImage;	// 0x36f63e81
// declared property getter: - (BOOL)usePlaceholderAsFallback;	// 0x36f64995
@end

