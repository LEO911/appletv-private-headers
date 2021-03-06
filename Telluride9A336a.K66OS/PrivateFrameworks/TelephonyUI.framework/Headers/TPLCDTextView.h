/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h> // Unknown library
#import "TelephonyUI-Structs.h"

@class NSString, UIColor, UIFrameAnimation, TPLCDTextViewScrollingView;

@interface TPLCDTextView : UIView {
	NSString *_text;	// 48 = 0x30
	GSFontRef _font;	// 52 = 0x34
	UIColor *_shadowColor;	// 56 = 0x38
	UIColor *_textColor;	// 60 = 0x3c
	TPLCDTextViewScrollingView *_scrollingView;	// 64 = 0x40
	float _fontSize;	// 68 = 0x44
	CGRect _textRect;	// 72 = 0x48
	UIFrameAnimation *_animation;	// 88 = 0x58
	id _delegate;	// 92 = 0x5c
	float _minFontSize;	// 96 = 0x60
	unsigned _textRectIsValid : 1;	// 100 = 0x64
	unsigned _centerText : 1;	// 100 = 0x64
	unsigned _animates : 1;	// 100 = 0x64
	unsigned _isAnimating : 1;	// 100 = 0x64
	unsigned _leftTruncates : 1;	// 100 = 0x64
}
@property(retain) NSString *text;	// G=0x3170de89; S=0x3170ec4d; converted property
@property(readonly, assign) CGRect textRect;	// G=0x3170ef69; converted property
+ (float)defaultMinimumFontSize;	// 0x3170de45
- (id)initWithFrame:(CGRect)frame;	// 0x3170decd
- (id)_automationID;	// 0x31710061
- (void)_drawTextInRect:(CGRect)rect verticallyOffset:(BOOL)offset;	// 0x3170ea09
- (void)_finishedScrolling;	// 0x3170e121
- (void)_scheduleStartScrolling;	// 0x3170e7e5
- (void)_setupForAnimationIfNecessary;	// 0x3170e4e5
- (void)_startScrolling;	// 0x3170e23d
- (void)_tearDownAnimation;	// 0x3170e865
- (BOOL)animates;	// 0x3170de99
- (void)dealloc;	// 0x3170f32d
- (void)drawRect:(CGRect)rect;	// 0x3170e8dd
- (void)resetAnimation;	// 0x3170df5d
- (void)setAnimatesIfTruncated:(BOOL)truncated;	// 0x3170e465
- (void)setCenterText:(BOOL)text;	// 0x3170ee31
- (void)setDelegate:(id)delegate;	// 0x3170dead
- (void)setFont:(GSFontRef)font;	// 0x3170ecfd
- (void)setFrame:(CGRect)frame;	// 0x3170ee85
- (void)setLeftTruncatesText:(BOOL)text;	// 0x3170ed99
- (void)setMinimumFontSize:(float)size;	// 0x3170de4d
- (void)setShadowColor:(id)color;	// 0x3170e959
// converted property setter: - (void)setText:(id)text;	// 0x3170ec4d
- (void)setTextColor:(id)color;	// 0x3170e9b1
- (CGSize)sizeToFit;	// 0x3170ebd9
- (void)startAnimating;	// 0x3170e1ed
- (void)stopAnimating;	// 0x3170e025
// converted property getter: - (id)text;	// 0x3170de89
// converted property getter: - (CGRect)textRect;	// 0x3170ef69
@end

