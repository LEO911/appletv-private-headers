/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIWindow, UIPDFMagnifiedView, UIPDFPageView;

@interface UIPDFViewMagnifyController : NSObject {
	CGPoint _magnifierPoint;	// 4 = 0x4
	CGPoint _touchPoint;	// 12 = 0xc
	float _loupeRadius;	// 20 = 0x14
	float _power;	// 24 = 0x18
	CGSize _magnifierSize;	// 28 = 0x1c
	BOOL _showingLoupe;	// 36 = 0x24
	UIPDFMagnifiedView *_magnifiedView;	// 40 = 0x28
	UIWindow *_textEffectsWindow;	// 44 = 0x2c
	UIPDFPageView *_pageView;	// 48 = 0x30
	int _lock;	// 52 = 0x34
	float _magnification;	// 56 = 0x38
	BOOL needImage;	// 60 = 0x3c
}
@property(assign, nonatomic) float magnification;	// G=0x33a6fd61; S=0x33a6fd71; @synthesize=_magnification
@property(assign) BOOL needImage;	// G=0x33a6fd81; S=0x33a6fd99; @synthesize
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x33a6fd41; S=0x33a6fd51; @synthesize=_pageView
- (id)init;	// 0x33a6eb21
- (void)_makeMagnifiedImage;	// 0x33a6f32d
- (void)hide;	// 0x33a6fcc5
// declared property getter: - (float)magnification;	// 0x33a6fd61
- (void)move;	// 0x33a6fb9d
// declared property getter: - (BOOL)needImage;	// 0x33a6fd81
- (CGImageRef)newBackingImage;	// 0x33a6ee59
- (CGImageRef)newBitMap:(CGRect)map source:(CGRect)source;	// 0x33a6ebc9
// declared property getter: - (id)pageView;	// 0x33a6fd41
- (void)selectPower;	// 0x33a6f209
// declared property setter: - (void)setMagnification:(float)magnification;	// 0x33a6fd71
// declared property setter: - (void)setNeedImage:(BOOL)image;	// 0x33a6fd99
// declared property setter: - (void)setPageView:(id)view;	// 0x33a6fd51
- (void)setPosition:(CGPoint)position viewPoint:(CGPoint)point loupe:(BOOL)loupe;	// 0x33a6fab9
- (void)setSelectionPath;	// 0x33a6f6c1
- (void)showGlass:(BOOL)glass size:(CGSize)size;	// 0x33a6f3e1
- (void)showLoupe;	// 0x33a6f5f9
- (void)showMagnifier;	// 0x33a6f67d
- (CGPoint)transformPointToTSpace:(CGPoint)tspace transform:(CGAffineTransform *)transform;	// 0x33a6f0d5
@end

