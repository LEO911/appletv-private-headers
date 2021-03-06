/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UITableViewCell.h> // Unknown library

@class MPTimeMarker, MPImageCache, MPVideoChapterCellContentView;

@interface MPVideoChapterCell : UITableViewCell {
	MPVideoChapterCellContentView *_chapterContentView;	// 300 = 0x12c
}
@property(retain, nonatomic) MPImageCache *artworkImageCache;	// G=0x36cc8379; S=0x36cc8359; 
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x36cc8231; S=0x36cc8255; 
@property(assign, nonatomic) unsigned index;	// G=0x36cc8211; S=0x36cc8275; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x36cc82f5; S=0x36cc8295; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x36cc8319; S=0x36cc82b5; 
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x36cc8339; S=0x36cc82d5; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x36cc8039
// declared property getter: - (id)artworkImageCache;	// 0x36cc8379
- (void)dealloc;	// 0x36cc816d
// declared property getter: - (unsigned)index;	// 0x36cc8211
// declared property getter: - (BOOL)isCurrent;	// 0x36cc8231
- (void)prepareForReuse;	// 0x36cc83b9
// declared property setter: - (void)setArtworkImageCache:(id)cache;	// 0x36cc8359
- (void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;	// 0x36cc8399
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x36cc8255
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x36cc8275
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x36cc81bd
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x36cc8295
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x36cc82b5
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x36cc82d5
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x36cc82f5
// declared property getter: - (float)timeColumnWidth;	// 0x36cc8319
// declared property getter: - (id)timeMarker;	// 0x36cc8339
@end

