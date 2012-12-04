/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UICalloutBarDelegate.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface UIMenuController : NSObject <UICalloutBarDelegate> {
	CGRect _targetRect;	// 4 = 0x4
	int _arrowDirection;	// 20 = 0x14
}
@property(assign, nonatomic) int arrowDirection;	// G=0x32f72075; S=0x32f72085; @synthesize=_arrowDirection
@property(readonly, assign, nonatomic) CGRect menuFrame;	// G=0x32f72015; 
@property(copy, nonatomic) NSArray *menuItems;	// G=0x32f71fcd; S=0x32df4c1d; 
@property(assign, nonatomic, getter=isMenuVisible) BOOL menuVisible;	// G=0x32db0e3d; S=0x32f71ce5; 
+ (id)sharedMenuController;	// 0x32dae161
- (id)init;	// 0x32dae1a9
- (BOOL)_menuHidden;	// 0x32e19491
- (void)_setTargetRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x32f71f6d
- (BOOL)_updateAnimated:(BOOL)animated checkVisible:(BOOL)visible;	// 0x32f72095
- (void)_windowWillRotate:(id)_window;	// 0x32f71cf9
// declared property getter: - (int)arrowDirection;	// 0x32f72075
- (void)calloutBar:(id)bar didFinishAnimation:(id)animation;	// 0x32e082f5
- (void)calloutBar:(id)bar willStartAnimation:(id)animation;	// 0x32e07799
- (void)dealloc;	// 0x32f71c89
// declared property getter: - (BOOL)isMenuVisible;	// 0x32db0e3d
// declared property getter: - (CGRect)menuFrame;	// 0x32f72015
// declared property getter: - (id)menuItems;	// 0x32f71fcd
// declared property setter: - (void)setArrowDirection:(int)direction;	// 0x32f72085
// declared property setter: - (void)setMenuItems:(id)items;	// 0x32df4c1d
// declared property setter: - (void)setMenuVisible:(BOOL)visible;	// 0x32f71ce5
- (void)setMenuVisible:(BOOL)visible animated:(BOOL)animated;	// 0x32e19235
- (void)setTargetRect:(CGRect)rect inView:(id)view;	// 0x32f71d0d
- (void)update;	// 0x32f72001
@end
