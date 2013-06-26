/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarAdornmentWindow.h"

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface _UIClassicCornersWindow : UIStatusBarAdornmentWindow {
	int _visibleCorners;	// 148 = 0x94
	UIView *_contentView;	// 152 = 0x98
	unsigned _hiddenStatusBarStyles;	// 156 = 0x9c
	NSArray *_cornerViews;	// 160 = 0xa0
	BOOL _hidesWithStatusBar;	// 164 = 0xa4
	CGRect _cornerFrame;	// 168 = 0xa8
}
@property(assign, nonatomic) CGRect cornerFrame;	// G=0x2f775e0d; S=0x2f7755c9; @synthesize=_cornerFrame
@property(assign, nonatomic) BOOL hidesWithStatusBar;	// G=0x2f775ded; S=0x2f775dfd; @synthesize=_hidesWithStatusBar
@property(readonly, assign, nonatomic) int visibleCorners;	// G=0x2f775ddd; @synthesize=_visibleCorners
- (id)initWithFrame:(CGRect)frame andVisibleCorners:(int)corners;	// 0x2f775489
- (id)_cornerViewWithImage:(id)image forCorner:(int)corner;	// 0x2f7756b9
- (BOOL)_hidesWithStatusBarStyle:(int)statusBarStyle;	// 0x2f77569d
- (void)_setCorners:(unsigned)corners visible:(BOOL)visible;	// 0x2f775a5d
- (BOOL)_shouldZoom;	// 0x2f775dd9
- (void)_updateForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 withStatusBarStyle:(int)statusBarStyle statusBarShouldHide:(BOOL)statusBar;	// 0x2f775b09
// declared property getter: - (CGRect)cornerFrame;	// 0x2f775e0d
- (void)dealloc;	// 0x2f775565
// declared property getter: - (BOOL)hidesWithStatusBar;	// 0x2f775ded
- (void)layoutSubviews;	// 0x2f775831
// declared property setter: - (void)setCornerFrame:(CGRect)frame;	// 0x2f7755c9
// declared property setter: - (void)setHidesWithStatusBar:(BOOL)statusBar;	// 0x2f775dfd
- (void)setHidesWithStatusBarStyle:(int)statusBarStyle;	// 0x2f775681
// declared property getter: - (int)visibleCorners;	// 0x2f775ddd
@end
