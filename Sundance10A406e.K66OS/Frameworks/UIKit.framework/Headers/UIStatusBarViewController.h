/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class _UIClassicCornersWindow, UIClassicStatusBarView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIStatusBarViewController : UIViewController {
	BOOL _iPhoneWS;	// 197 = 0xc5
	UIWindow *_window;	// 200 = 0xc8
	UIView *_statusBar;	// 204 = 0xcc
	UIClassicStatusBarView *_statusBarBackgroundView;	// 208 = 0xd0
	_UIClassicCornersWindow *_cornersWindow;	// 212 = 0xd4
	BOOL _keyboardVisible;	// 216 = 0xd8
}
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x30bc236d; @synthesize=_window
+ (double)statusBarOrientationAnimationDurationFrom:(int)from to:(int)to;	// 0x30bc1eb1
- (id)init;	// 0x30bc09a5
- (void)_changeStatusBarOrientationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;	// 0x30bc219d
- (void)_changeStatusBarOrientationFrom:(int)from toOrientation:(int)orientation;	// 0x30bc1f2d
- (void)_prepareForZoom:(BOOL)zoom;	// 0x30bc1535
- (void)_setStatusBarBackgroundImageForOrientation:(int)orientation;	// 0x30bc16f1
- (void)_statusBarHideAnimationFinished:(id)finished finished:(BOOL)finished2 hidden:(id)hidden;	// 0x30bc1dbd
- (CGSize)_statusBarSizeForOrientation:(int)orientation;	// 0x30bc1d39
- (void)_statusBarViewControllerKeyboardDidHide:(id)_statusBarViewControllerKeyboard;	// 0x30bc22d9
- (void)_statusBarViewControllerKeyboardWillShow:(id)_statusBarViewControllerKeyboard;	// 0x30bc2245
- (void)_updateCornersForRotationFromOrientation:(int)orientation toOrientation:(int)orientation2 withStatusBarStyle:(int)statusBarStyle statusBarShouldHide:(BOOL)statusBar;	// 0x30bc2111
- (void)_updateStatusBarForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 style:(int)style hidden:(BOOL)hidden slideUp:(BOOL)up;	// 0x30bc1a95
- (void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 hidden:(BOOL)hidden slideUp:(BOOL)up;	// 0x30bc1741
- (void)_zoom:(BOOL)zoom animated:(BOOL)animated;	// 0x30bc1561
- (void)dealloc;	// 0x30bc0a81
- (BOOL)isClassicControlWindow:(id)window;	// 0x30bc0b4d
- (void)loadView;	// 0x30bc0b7d
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x30bc1001
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x30bc1409
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x30bc12a1
// declared property getter: - (id)window;	// 0x30bc236d
@end

