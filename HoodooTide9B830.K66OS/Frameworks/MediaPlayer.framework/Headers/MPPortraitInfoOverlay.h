/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "MPPlaybackControlsDelegate.h"

@class MPTextView, MPAVController, MPNowPlayingItemQueueInfoButton, MPAVItem, UIImage, MPPortraitControlsOverlay;

@interface MPPortraitInfoOverlay : UIView <MPPlaybackControlsDelegate> {
	id _delegate;	// 48 = 0x30
	MPAVItem *_item;	// 52 = 0x34
	MPAVController *_player;	// 56 = 0x38
	UIImage *_artworkImage;	// 60 = 0x3c
	unsigned _visibleParts;	// 64 = 0x40
	MPPortraitControlsOverlay *_controlsView;	// 68 = 0x44
	MPTextView *_displayableTextView;	// 72 = 0x48
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 76 = 0x4c
	unsigned _transitioning : 1;	// 80 = 0x50
	unsigned _allowsDetailScrubbing : 1;	// 80 = 0x50
}
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x346672d1; S=0x346672e5; 
@property(retain, nonatomic) UIImage *artworkImage;	// G=0x34666fd5; S=0x3466700d; @synthesize=_artworkImage
@property(assign, nonatomic) id delegate;	// G=0x34668949; S=0x34668959; @synthesize=_delegate
@property(retain, nonatomic) MPAVItem *item;	// G=0x34668969; S=0x34667109; @synthesize=_item
@property(retain, nonatomic) MPAVController *player;	// G=0x34668979; S=0x346675dd; @synthesize=_player
@property(assign, nonatomic) unsigned visibleParts;	// G=0x34668989; S=0x34667271; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x34666a3d
- (BOOL)_configureNowPlayingQueueInfoButton:(id)button item:(id)item time:(double)time;	// 0x34668271
- (id)_controlsView;	// 0x346676e9
- (void)_crossedTimeMarkerNotification:(id)notification;	// 0x346674ed
- (void)_displayableTextAvailable:(id)available;	// 0x346673e1
- (void)_displayableTextRemovalAnimationDidStop;	// 0x34667309
- (id)_displayableTextView;	// 0x346677dd
- (void)_hideControlsAndTextView;	// 0x346678d1
- (void)_hideSnapshotAnimationFinished;	// 0x34667349
- (id)_itemQueueInfoButton:(BOOL)button;	// 0x34667695
- (void)_playbackStateChanged:(id)changed;	// 0x34667435
- (void)_reloadDisplayableTextViewForItem:(id)item animate:(BOOL)animate;	// 0x34667de1
- (void)_reloadTextViewArtwork;	// 0x34667d55
- (void)_reloadViews;	// 0x3466813d
- (void)_removeDisplayableTextWithAnimation:(BOOL)animation;	// 0x34668005
- (void)_updateAllItemDependenciesForItem:(id)item animate:(BOOL)animate;	// 0x346688a1
- (void)_updateDisplayableTextViewForItem:(id)item animate:(BOOL)animate;	// 0x34668195
- (void)_updateItemQueueInfoButtonForItem:(id)item atTime:(double)time animate:(BOOL)animate;	// 0x34668321
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x346672d1
// declared property getter: - (id)artworkImage;	// 0x34666fd5
- (BOOL)controlsOverlay:(id)overlay shouldUseDetailScrubberForItem:(id)item;	// 0x346675c9
- (void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)controlsOverlayDetailSliderInstructionOverlay;	// 0x34667bf1
- (void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)controlsOverlayDetailSliderInstructionOverlay;	// 0x34667c75
- (void)controlsOverlayDetailSliderTrackingDidBegin:(id)controlsOverlayDetailSliderTracking;	// 0x34667cb5
- (void)controlsOverlayDetailSliderTrackingDidEnd:(id)controlsOverlayDetailSliderTracking;	// 0x34667cd5
- (void)dealloc;	// 0x34666b31
// declared property getter: - (id)delegate;	// 0x34668949
- (void)didMoveToSuperview;	// 0x34666c65
- (void)didTransition;	// 0x34666ca1
- (BOOL)hide;	// 0x34666cdd
// declared property getter: - (id)item;	// 0x34668969
- (void)layoutSubviews;	// 0x34666de1
// declared property getter: - (id)player;	// 0x34668979
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x346672e5
- (void)setAlpha:(float)alpha;	// 0x34667065
// declared property setter: - (void)setArtworkImage:(id)image;	// 0x3466700d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34668959
// declared property setter: - (void)setItem:(id)item;	// 0x34667109
// declared property setter: - (void)setPlayer:(id)player;	// 0x346675dd
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x34667271
- (void)startTicking;	// 0x34666f4d
- (void)stopTicking;	// 0x34666f6d
// declared property getter: - (unsigned)visibleParts;	// 0x34668989
- (void)willTransition;	// 0x34666f8d
@end

