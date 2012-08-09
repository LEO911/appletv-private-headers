/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library

@class UIImageView, UITableView;

@interface UIMovieChapterListView : UIView {
	UIImageView *_backgroundImageView;	// 84 = 0x54
	unsigned _pinnedRow;	// 88 = 0x58
	UITableView *_tableView;	// 92 = 0x5c
	float _topPadding;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) UITableView *tableView;	// G=0x34174d65; @synthesize=_tableView
@property(assign, nonatomic) float topPadding;	// G=0x34174d75; S=0x34174d2d; @synthesize=_topPadding
- (id)init;	// 0x34174975
- (void)layoutSubviews;	// 0x34174bd9
- (void)pinVisibleRow:(unsigned)row;	// 0x34174cc9
// declared property setter: - (void)setTopPadding:(float)padding;	// 0x34174d2d
// declared property getter: - (id)tableView;	// 0x34174d65
// declared property getter: - (float)topPadding;	// 0x34174d75
@end
