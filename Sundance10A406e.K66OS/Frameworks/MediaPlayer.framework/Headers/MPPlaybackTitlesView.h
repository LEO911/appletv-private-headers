/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIControl.h> // Unknown library

@class NSArray, UIView;

@interface MPPlaybackTitlesView : UIControl {
	UIView *_contentView;	// 108 = 0x6c
	NSArray *_labels;	// 112 = 0x70
	NSArray *_titles;	// 116 = 0x74
	BOOL _showingLoadingUI;	// 120 = 0x78
	unsigned _marqueeScrollableIndex;	// 124 = 0x7c
	BOOL _marqueeScrollingActive;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x35d2d105; 
@property(assign, nonatomic) unsigned marqueeScrollableIndex;	// G=0x35d2e075; S=0x35d2d14d; @synthesize=_marqueeScrollableIndex
@property(assign, nonatomic) BOOL marqueeScrollingActive;	// G=0x35d2e085; S=0x35d2d115; @synthesize=_marqueeScrollingActive
@property(assign, nonatomic) BOOL showingLoadingUI;	// G=0x35d2e065; S=0x35d2d279; @synthesize=_showingLoadingUI
@property(retain, nonatomic) NSArray *titles;	// G=0x35d2e055; S=0x35d2d211; @synthesize=_titles
- (id)init;	// 0x35d2cb29
- (id)initWithFrame:(CGRect)frame;	// 0x35d2cc49
- (id)_addLabel:(unsigned)label;	// 0x35d2d445
- (id)_addLoadingLabel;	// 0x35d2d2c5
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x35d2d2a5
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x35d2d2b5
- (void)_layoutLabels;	// 0x35d2d9e1
- (void)_layoutLoadingUI;	// 0x35d2d65d
- (void)_tearDownLabels;	// 0x35d2df91
- (void)_updateLabelMarqueeScrolling;	// 0x35d2de65
// declared property getter: - (id)contentView;	// 0x35d2d105
- (void)dealloc;	// 0x35d2ce11
- (void)layoutSubviews;	// 0x35d2cef5
// declared property getter: - (unsigned)marqueeScrollableIndex;	// 0x35d2e075
// declared property getter: - (BOOL)marqueeScrollingActive;	// 0x35d2e085
// declared property setter: - (void)setMarqueeScrollableIndex:(unsigned)index;	// 0x35d2d14d
// declared property setter: - (void)setMarqueeScrollingActive:(BOOL)active;	// 0x35d2d115
// declared property setter: - (void)setShowingLoadingUI:(BOOL)ui;	// 0x35d2d279
// declared property setter: - (void)setTitles:(id)titles;	// 0x35d2d211
// declared property getter: - (BOOL)showingLoadingUI;	// 0x35d2e065
// declared property getter: - (id)titles;	// 0x35d2e055
@end

