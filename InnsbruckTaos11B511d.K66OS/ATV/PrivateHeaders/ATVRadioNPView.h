/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAudioVisualizerControl.h"

@class ATVRadioNPTransitioningController, ATVRadioNPAdView, ATVDataQuery, ATVDataCollection, ATVRadioNPHistoryView, ATVDataItem, NSArray, ATVRadioNPTrackView;

__attribute__((visibility("hidden")))
@interface ATVRadioNPView : BRAudioVisualizerControl {
	BOOL _ignoreUpdateViews;	// 84 = 0x54
	ATVRadioNPTrackView *_trackView;	// 88 = 0x58
	ATVRadioNPHistoryView *_historyView;	// 92 = 0x5c
	ATVRadioNPAdView *_audioAdView;	// 96 = 0x60
	int _activeView;	// 100 = 0x64
	ATVRadioNPTransitioningController *_transitioningController;	// 104 = 0x68
	ATVDataCollection *_playbackStation;	// 108 = 0x6c
	ATVDataQuery *_historyQuery;	// 112 = 0x70
	NSArray *_historyItems;	// 116 = 0x74
	ATVDataItem *_trackForOutro;	// 120 = 0x78
	double _transitioningEndTimeStamp;	// 124 = 0x7c
}
@property(assign, nonatomic) int activeView;	// G=0x8b721; S=0x8b731; @synthesize=_activeView
@property(retain, nonatomic) ATVRadioNPAdView *audioAdView;	// G=0x8b6e9; S=0x8b6f9; @synthesize=_audioAdView
@property(retain, nonatomic) NSArray *historyItems;	// G=0x8b815; S=0x8b825; @synthesize=_historyItems
@property(retain, nonatomic) ATVDataQuery *historyQuery;	// G=0x8b7dd; S=0x8b7ed; @synthesize=_historyQuery
@property(retain, nonatomic) ATVRadioNPHistoryView *historyView;	// G=0x8b6b1; S=0x8b6c1; @synthesize=_historyView
@property(assign, nonatomic) BOOL ignoreUpdateViews;	// G=0x8b885; S=0x8b895; @synthesize=_ignoreUpdateViews
@property(retain, nonatomic) ATVDataCollection *playbackStation;	// G=0x8b7a5; S=0x8b7b5; @synthesize=_playbackStation
@property(retain, nonatomic) ATVDataItem *trackForOutro;	// G=0x8b84d; S=0x8b85d; @synthesize=_trackForOutro
@property(retain, nonatomic) ATVRadioNPTrackView *trackView;	// G=0x8b679; S=0x8b689; @synthesize=_trackView
@property(retain, nonatomic) ATVRadioNPTransitioningController *transitioningController;	// G=0x8b741; S=0x8b751; @synthesize=_transitioningController
@property(assign, nonatomic) double transitioningEndTimeStamp;	// G=0x8b779; S=0x8b791; @synthesize=_transitioningEndTimeStamp
+ (id)posterWithDataItem:(id)dataItem;	// 0x890c9
- (id)init;	// 0x8920d
- (void).cxx_destruct;	// 0x8b8a5
- (void)_fetchHistoryItems;	// 0x8b051
- (void)_historyCleared:(id)cleared;	// 0x8a971
- (BOOL)_isCurrentPlayingTrackAudioAd;	// 0x8b56d
- (void)_playbackAssetChanged:(id)changed;	// 0x8aaa1
- (void)_switchToAudioAdView;	// 0x8a84d
- (void)_switchToHistoryViewWithEvent:(id)event;	// 0x8a461
- (void)_switchToTrackView;	// 0x8a0b5
- (void)_willAddStation:(id)station;	// 0x89799
- (id)accessibilityScreenContent;	// 0x8a0b1
// declared property getter: - (int)activeView;	// 0x8b721
// declared property getter: - (id)audioAdView;	// 0x8b6e9
- (BOOL)brEventAction:(id)action;	// 0x89ca9
- (void)controlWasActivated;	// 0x89a7d
- (void)dealloc;	// 0x89451
- (BOOL)displayTrackPopup;	// 0x894f5
// declared property getter: - (id)historyItems;	// 0x8b815
// declared property getter: - (id)historyQuery;	// 0x8b7dd
// declared property getter: - (id)historyView;	// 0x8b6b1
// declared property getter: - (BOOL)ignoreUpdateViews;	// 0x8b885
- (BOOL)isAccessibilityElement;	// 0x8a0ad
- (void)layoutSubcontrols;	// 0x89f81
// declared property getter: - (id)playbackStation;	// 0x8b7a5
// declared property setter: - (void)setActiveView:(int)view;	// 0x8b731
// declared property setter: - (void)setAudioAdView:(id)view;	// 0x8b6f9
// declared property setter: - (void)setHistoryItems:(id)items;	// 0x8b825
// declared property setter: - (void)setHistoryQuery:(id)query;	// 0x8b7ed
// declared property setter: - (void)setHistoryView:(id)view;	// 0x8b6c1
// declared property setter: - (void)setIgnoreUpdateViews:(BOOL)views;	// 0x8b895
// declared property setter: - (void)setPlaybackStation:(id)station;	// 0x8b7b5
- (void)setPlayer:(id)player;	// 0x89829
// declared property setter: - (void)setTrackForOutro:(id)outro;	// 0x8b85d
// declared property setter: - (void)setTrackView:(id)view;	// 0x8b689
// declared property setter: - (void)setTransitioningController:(id)controller;	// 0x8b751
// declared property setter: - (void)setTransitioningEndTimeStamp:(double)stamp;	// 0x8b791
- (BOOL)shouldShowExplanatoryText;	// 0x89531
- (BOOL)shouldUseMusicContextMenu;	// 0x894f9
// declared property getter: - (id)trackForOutro;	// 0x8b84d
// declared property getter: - (id)trackView;	// 0x8b679
// declared property getter: - (id)transitioningController;	// 0x8b741
// declared property getter: - (double)transitioningEndTimeStamp;	// 0x8b779
- (void)updateBoundPlaybackStation;	// 0x89535
@end

