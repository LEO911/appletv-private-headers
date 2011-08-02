/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWindow.h"
#import "UIKit-Structs.h"

@class UIStatusBar, UIStatusBarCorners;

@interface UIStatusBarWindow : UIWindow {
	UIStatusBar *_statusBar;	// 124 = 0x7c
	int _orientation;	// 128 = 0x80
	UIStatusBarCorners *_topCorners;	// 132 = 0x84
	UIStatusBarCorners *_bottomCorners;	// 136 = 0x88
	BOOL _cornersHidden;	// 140 = 0x8c
}
@property(readonly, assign) int orientation;	// G=0x31f88479; converted property
+ (CGRect)statusBarWindowFrame;	// 0x31fa45d5
- (id)initWithFrame:(CGRect)frame;	// 0x31fa4561
- (BOOL)_disableGroupOpacity;	// 0x31fa5125
- (BOOL)_disableViewScaling;	// 0x322097a9
- (void)_fadeAnimationStopped:(id)stopped finished:(id)finished context:(void *)context;	// 0x322097d5
- (BOOL)_isStatusBarWindow;	// 0x322097ad
- (void)_rotate;	// 0x31fa9009
- (void)_updateTransformLayerForClassicPresentation;	// 0x322097b1
- (void)dealloc;	// 0x322098a1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31f8e0b9
// converted property getter: - (int)orientation;	// 0x31f88479
- (void)setCornersHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x32074e99
- (void)setOrientation:(int)orientation animationParameters:(id)parameters;	// 0x31fa8ddd
- (void)setStatusBar:(id)bar;	// 0x31fa5649
- (void)setTopCornerStyle:(int)style bottomCornerStyle:(int)style2 animationParameters:(id)parameters;	// 0x31f96dc5
@end
