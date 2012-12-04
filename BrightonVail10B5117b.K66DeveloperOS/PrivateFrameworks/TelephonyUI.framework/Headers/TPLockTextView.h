/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIView.h> // Unknown library

@class UIFont, NSTimer, UIImage, NSString;

@interface TPLockTextView : UIView {
	NSString *_label;	// 88 = 0x58
	CGImageRef _textCache;	// 92 = 0x5c
	char *_textData;	// 96 = 0x60
	NSTimer *_maskTimer;	// 100 = 0x64
	double _maskStartTime;	// 104 = 0x68
	UIFont *_labelFont;	// 112 = 0x70
	float _deltaFromDefaultTrackWidth;	// 116 = 0x74
	UIImage *_maskImage;	// 120 = 0x78
	float _fps;	// 124 = 0x7c
}
@property(readonly, assign) float deltaFromDefaultTrackWidth;	// G=0x357b6aad; @synthesize=_deltaFromDefaultTrackWidth
@property(readonly, assign) float fps;	// G=0x357b688d; converted property
@property(readonly, retain) NSString *label;	// G=0x357b66a9; converted property
- (id)initWithLabel:(id)label fontSize:(float)size trackWidthDelta:(float)delta;	// 0x357b6489
- (void)_cacheLabel:(id)label size:(CGSize)size;	// 0x357b6305
- (void)dealloc;	// 0x357b6251
// declared property getter: - (float)deltaFromDefaultTrackWidth;	// 0x357b6aad
- (void)drawRect:(CGRect)rect;	// 0x357b68b9
// converted property getter: - (float)fps;	// 0x357b688d
- (BOOL)isAnimating;	// 0x357b689d
// converted property getter: - (id)label;	// 0x357b66a9
- (void)movedFromWindow:(id)window;	// 0x357b6a69
- (void)setFPS:(float)fps;	// 0x357b6801
- (void)startAnimation;	// 0x357b66b9
- (void)stopAnimation;	// 0x357b67b1
@end
