/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIButton.h> // Unknown library

@class UIImageView, CADisplayLink;

@interface MPDownloadProgressIndicator : UIButton {
	float _animatedStartValue;	// 180 = 0xb4
	float _animatedValue;	// 184 = 0xb8
	BOOL _animating;	// 188 = 0xbc
	BOOL _canCancel;	// 189 = 0xbd
	double _animationEndTime;	// 192 = 0xc0
	double _animationStartTime;	// 200 = 0xc8
	CADisplayLink *_displayLink;	// 208 = 0xd0
	UIImageView *_centerImageView;	// 212 = 0xd4
	BOOL _mpExternalHidden;	// 216 = 0xd8
	BOOL _mpInternalHidden;	// 217 = 0xd9
	int _style;	// 220 = 0xdc
	float _value;	// 224 = 0xe0
}
@property(assign, nonatomic) BOOL canCancel;	// G=0x31d7496d; S=0x31d73d31; @synthesize=_canCancel
@property(readonly, assign, nonatomic) int style;	// G=0x31d7497d; @synthesize=_style
@property(assign, nonatomic) float value;	// G=0x31d7498d; S=0x31d73db9; @synthesize=_value
+ (id)_baseImageForStyle:(int)style;	// 0x31d740e9
+ (id)_fillImageForStyle:(int)style;	// 0x31d7428d
+ (id)_nonstopImageForStyle:(int)style;	// 0x31d74471
+ (CGSize)_sizeForStyle:(int)style;	// 0x31d744c9
+ (id)_stopImageForStyle:(int)style;	// 0x31d74539
- (id)initWithStyle:(int)style;	// 0x31d73551
- (void)_animateValueOnDisplayLink:(id)link;	// 0x31d746dd
- (CGRect)_baseFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x31d74825
- (CGRect)_centerImageViewFrame:(CGRect)frame inBounds:(CGRect)bounds forStyle:(int)style;	// 0x31d74865
- (CGRect)_fillFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x31d748d9
- (void)_setInternalHidden:(BOOL)hidden;	// 0x31d74919
// declared property getter: - (BOOL)canCancel;	// 0x31d7496d
- (void)dealloc;	// 0x31d73709
- (void)drawRect:(CGRect)rect;	// 0x31d73771
- (void)layoutSubviews;	// 0x31d73ba1
// declared property setter: - (void)setCanCancel:(BOOL)cancel;	// 0x31d73d31
- (void)setHidden:(BOOL)hidden;	// 0x31d73c95
// declared property setter: - (void)setValue:(float)value;	// 0x31d73db9
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x31d73dd1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31d73ce9
// declared property getter: - (int)style;	// 0x31d7497d
- (void)updateFromObserver:(id)observer;	// 0x31d73ff1
- (void)updateFromObserver:(id)observer animated:(BOOL)animated;	// 0x31d74009
// declared property getter: - (float)value;	// 0x31d7498d
@end

