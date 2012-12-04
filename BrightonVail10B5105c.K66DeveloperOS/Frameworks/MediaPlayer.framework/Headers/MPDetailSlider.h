/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UIImageView, NSString, NSTimer, UILabel;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider {
	UILabel *_currentTimeInverseLabel;	// 176 = 0xb0
	UILabel *_currentTimeLabel;	// 180 = 0xb4
	BOOL _allowsScrubbing;	// 184 = 0xb8
	BOOL _allowsDetailScrubbing;	// 185 = 0xb9
	BOOL _autoscrubActive;	// 186 = 0xba
	NSTimer *_autoscrubTimer;	// 188 = 0xbc
	double _availableDuration;	// 192 = 0xc0
	CGPoint _beginLocationInView;	// 200 = 0xc8
	BOOL _canCommit;	// 208 = 0xd0
	double _currentTime;	// 212 = 0xd4
	id _delegate;	// 220 = 0xdc
	float _detailScrubbingVerticalRange;	// 224 = 0xe0
	BOOL _didBeginTracking;	// 228 = 0xe4
	UIImageView *_downloadingTrackOverlay;	// 232 = 0xe8
	double _duration;	// 236 = 0xec
	BOOL _durationAllowsDetailScrubbing;	// 244 = 0xf4
	UIImageView *_glowDetailScrubImageView;	// 248 = 0xf8
	BOOL _isTracking;	// 252 = 0xfc
	CGPoint _lastCommittedLocationInView;	// 256 = 0x100
	float _minScale;	// 264 = 0x108
	float _minTimeLabelWidth;	// 268 = 0x10c
	float _maxTrackWidth;	// 272 = 0x110
	BOOL _needsCommit;	// 276 = 0x114
	CGPoint _previousLocationInView;	// 280 = 0x118
	int _scrubValue;	// 288 = 0x120
	int _style;	// 292 = 0x124
	UIEdgeInsets _timeLabelInsets;	// 296 = 0x128
	int _timeLabelStyle;	// 312 = 0x138
	UIImageView *_thumbImageView;	// 316 = 0x13c
	float _trackInset;	// 320 = 0x140
}
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x34fe5e1d; S=0x34fe6035; 
@property(assign, nonatomic) BOOL allowsScrubbing;	// G=0x34fe7ca9; S=0x34fe6001; @synthesize=_allowsScrubbing
@property(assign, nonatomic) double availableDuration;	// G=0x34fe7bf5; S=0x34fe6051; @synthesize=_availableDuration
@property(assign, nonatomic) id<MPDetailSliderDelegate> delegate;	// G=0x34fe7c0d; S=0x34fe7c1d; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;	// G=0x34fe5f01; 
@property(assign, nonatomic) float detailScrubbingVerticalRange;	// G=0x34fe7c2d; S=0x34fe7c3d; @synthesize=_detailScrubbingVerticalRange
@property(assign, nonatomic) double duration;	// G=0x34fe7c4d; S=0x34fe60c9; @synthesize=_duration
@property(readonly, assign) BOOL isTracking;	// G=0x34fe5de9; converted property
@property(readonly, assign, nonatomic) NSString *localizedScrubSpeedText;	// G=0x34fe5f31; 
@property(assign, nonatomic) float minTimeLabelWidth;	// G=0x34fe7c99; S=0x34fe61f1; @synthesize=_minTimeLabelWidth
@property(assign, nonatomic) UIEdgeInsets timeLabelInsets;	// G=0x34fe7c65; S=0x34fe6229; @synthesize=_timeLabelInsets
@property(assign, nonatomic) int timeLabelStyle;	// G=0x34fe7c89; S=0x34fe62b9; @synthesize=_timeLabelStyle
+ (float)defaultHeight;	// 0x34fe5df9
+ (Class)labelClass;	// 0x34fe5e01
- (id)initWithFrame:(CGRect)frame;	// 0x34fe40a5
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x34fe406d
- (id)initWithFrame:(CGRect)frame style:(int)style maxTrackWidth:(float)width;	// 0x34fe3f99
- (void)_adjustMinScale;	// 0x34fe6a61
- (void)_autoscrubTick:(id)tick;	// 0x34fe50a9
- (void)_commitValue;	// 0x34fe7195
- (void)_resetScrubInfo;	// 0x34fe710d
- (float)_scaleForIdealValueForVerticalPosition:(float)verticalPosition;	// 0x34fe6c29
- (float)_scaleForVerticalPosition:(float)verticalPosition;	// 0x34fe6ad1
- (void)_setValueWhileTracking:(float)tracking animated:(BOOL)animated;	// 0x34fe4e21
- (void)_setupControlsForStyle;	// 0x34fe6475
- (id)_stringForCurrentTime:(double)currentTime;	// 0x34fe6f41
- (id)_stringForInverseCurrentTime:(double)inverseCurrentTime;	// 0x34fe6fe5
- (id)_stringForTime:(double)time;	// 0x34fe6e19
- (CGRect)_thumbHitFrame;	// 0x34fe70b9
- (void)_updateForAvailableDuraton;	// 0x34fe7239
- (void)_updateTimeDisplayForTime:(double)time;	// 0x34fe6d0d
- (void)_updateTimeDisplayForTime:(double)time force:(BOOL)force;	// 0x34fe6d31
- (void)_updateTrackInset;	// 0x34fe66c5
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x34fe5e1d
// declared property getter: - (BOOL)allowsScrubbing;	// 0x34fe7ca9
// declared property getter: - (double)availableDuration;	// 0x34fe7bf5
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x34fe4f81
- (void)cancelTracking;	// 0x34fe5e2d
- (void)cancelTrackingWithEvent:(id)event;	// 0x34fe5dd9
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x34fe5321
- (id)createThumbView;	// 0x34fe47fd
- (id)currentThumbImage;	// 0x34fe48b1
- (void)dealloc;	// 0x34fe40d9
// declared property getter: - (id)delegate;	// 0x34fe7c0d
// declared property getter: - (BOOL)detailScrubbingAvailableForCurrentDuration;	// 0x34fe5f01
// declared property getter: - (float)detailScrubbingVerticalRange;	// 0x34fe7c2d
// declared property getter: - (double)duration;	// 0x34fe7c4d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x34fe5c99
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x34fe4189
// converted property getter: - (BOOL)isTracking;	// 0x34fe5de9
- (void)layoutSubviews;	// 0x34fe4209
// declared property getter: - (id)localizedScrubSpeedText;	// 0x34fe5f31
// declared property getter: - (float)minTimeLabelWidth;	// 0x34fe7c99
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x34fe6035
// declared property setter: - (void)setAllowsScrubbing:(BOOL)scrubbing;	// 0x34fe6001
// declared property setter: - (void)setAvailableDuration:(double)duration;	// 0x34fe6051
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34fe7c1d
// declared property setter: - (void)setDetailScrubbingVerticalRange:(float)range;	// 0x34fe7c3d
// declared property setter: - (void)setDuration:(double)duration;	// 0x34fe60c9
- (void)setFrame:(CGRect)frame;	// 0x34fe4799
// declared property setter: - (void)setMinTimeLabelWidth:(float)width;	// 0x34fe61f1
// declared property setter: - (void)setTimeLabelInsets:(UIEdgeInsets)insets;	// 0x34fe6229
// declared property setter: - (void)setTimeLabelStyle:(int)style;	// 0x34fe62b9
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x34fe4df1
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x34fe4bdd
- (id)timeLabelFontForStyle:(int)style;	// 0x34fe62e1
// declared property getter: - (UIEdgeInsets)timeLabelInsets;	// 0x34fe7c65
- (id)timeLabelShadowColorForStyle:(int)style;	// 0x34fe6389
- (CGSize)timeLabelShadowOffsetForStyle:(int)style;	// 0x34fe63d5
// declared property getter: - (int)timeLabelStyle;	// 0x34fe7c89
- (id)timeLabelTextColorForStyle:(int)style;	// 0x34fe6405
- (float)timeLabelVerticalOffsetForStyle:(int)style;	// 0x34fe6451
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x34fe4b15
@end
