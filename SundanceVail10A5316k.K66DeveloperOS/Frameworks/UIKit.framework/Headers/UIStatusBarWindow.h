/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"

@class UIStatusBarCorners, UIStatusBar;

@interface UIStatusBarWindow : UIWindow {
	UIStatusBar *_statusBar;	// 188 = 0xbc
	int _orientation;	// 192 = 0xc0
	UIStatusBarCorners *_topCorners;	// 196 = 0xc4
	float _topCornersOffset;	// 200 = 0xc8
	UIStatusBarCorners *_bottomCorners;	// 204 = 0xcc
	BOOL _cornersHidden;	// 208 = 0xd0
}
@property(readonly, assign) int orientation;	// G=0x300986fd; converted property
+ (CGRect)statusBarWindowFrame;	// 0x300bbed9
- (id)initWithFrame:(CGRect)frame;	// 0x300bbe65
- (BOOL)_disableGroupOpacity;	// 0x300bcb81
- (BOOL)_disableViewScaling;	// 0x3038422d
- (void)_fadeAnimationStopped:(id)stopped finished:(id)finished context:(void *)context;	// 0x30383a49
- (BOOL)_isStatusBarWindow;	// 0x30384235
- (void)_rotate;	// 0x300bfd0d
- (void)_styleAnimationDidStop:(id)_styleAnimation finished:(id)finished completion:(void *)completion;	// 0x303841f1
- (void)_updateTransformLayerForClassicPresentation;	// 0x30384239
- (void)dealloc;	// 0x303839b9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x300a0c01
// converted property getter: - (int)orientation;	// 0x300986fd
- (void)setCornersHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x301e5165
- (void)setOrientation:(int)orientation animationParameters:(id)parameters;	// 0x300bfa7d
- (void)setStatusBar:(id)bar;	// 0x300bcdad
- (void)setTopCornerStyle:(int)style topCornersOffset:(float)offset bottomCornerStyle:(int)style3 animationParameters:(id)parameters;	// 0x30383b49
@end

