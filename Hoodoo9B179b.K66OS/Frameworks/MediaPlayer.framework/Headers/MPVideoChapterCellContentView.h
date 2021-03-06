/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UIImage, MPImageCache, MPImageCacheRequest, MPTimeMarker;

@interface MPVideoChapterCellContentView : UIView {
	unsigned _current : 1;	// 46 = 0x2e
	unsigned _index;	// 48 = 0x30
	unsigned _selected : 1;	// 52 = 0x34
	unsigned _showThumbnailColumn : 1;	// 52 = 0x34
	float _timeColumnWidth;	// 56 = 0x38
	MPTimeMarker *_timeMarker;	// 60 = 0x3c
	UIImage *_artwork;	// 64 = 0x40
	MPImageCache *_artworkImageCache;	// 68 = 0x44
	MPImageCacheRequest *_artworkImageRequest;	// 72 = 0x48
}
@property(retain, nonatomic) UIImage *artwork;	// G=0x30972bf9; S=0x30972c09; @synthesize=_artwork
@property(retain, nonatomic) MPImageCache *artworkImageCache;	// G=0x30972c2d; S=0x30972c3d; @synthesize=_artworkImageCache
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x3097289d; S=0x309728c5; 
@property(assign, nonatomic) unsigned index;	// G=0x30972bc9; S=0x30972911; @synthesize=_index
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x309728b1; S=0x3097293d; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x30972a55; S=0x30972989; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x30972bd9; S=0x30972a19; @synthesize=_timeColumnWidth
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x30972be9; S=0x309729c1; @synthesize=_timeMarker
// declared property getter: - (id)artwork;	// 0x30972bf9
// declared property getter: - (id)artworkImageCache;	// 0x30972c2d
- (void)dealloc;	// 0x309723b1
- (void)drawRect:(CGRect)rect;	// 0x30972459
// declared property getter: - (unsigned)index;	// 0x30972bc9
// declared property getter: - (BOOL)isCurrent;	// 0x3097289d
// declared property getter: - (BOOL)isSelected;	// 0x309728b1
// declared property setter: - (void)setArtwork:(id)artwork;	// 0x30972c09
// declared property setter: - (void)setArtworkImageCache:(id)cache;	// 0x30972c3d
- (void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;	// 0x30972a69
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x309728c5
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x30972911
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x3097293d
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x30972989
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x30972a19
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x309729c1
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x30972a55
// declared property getter: - (float)timeColumnWidth;	// 0x30972bd9
// declared property getter: - (id)timeMarker;	// 0x30972be9
@end

