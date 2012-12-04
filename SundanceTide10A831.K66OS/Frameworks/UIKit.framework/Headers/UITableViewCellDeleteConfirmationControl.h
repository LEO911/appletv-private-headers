/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UITableViewCellDeleteConfirmationGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UITableViewCellDeleteConfirmationControl : UIControl {
	BOOL _visible;	// 106 = 0x6a
	UITableViewCellDeleteConfirmationGestureRecognizer *_deleteConfirmationGesture;	// 108 = 0x6c
}
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x31e90609; S=0x31d9c6e5; 
+ (CGSize)defaultSizeForTitle:(id)title;	// 0x31d9b7fd
- (id)initWithTitle:(id)title;	// 0x31d9b5f1
- (void)_confirmationAnimationDidEnd;	// 0x31d9c3f5
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31d9c499
- (void)cancelDeleteConfirmationWithGesture:(id)gesture;	// 0x31e90539
- (void)cancelTrackingWithEvent:(id)event;	// 0x31e905d5
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31e905a1
- (void)dealloc;	// 0x31e904a1
- (CGSize)defaultSize;	// 0x31d9bd29
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31d9c519
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31d9c445
// declared property getter: - (BOOL)isVisible;	// 0x31e90609
- (void)layoutSubviews;	// 0x31d9c049
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x31d9c6e5
- (void)setVisible:(BOOL)visible animated:(BOOL)animated;	// 0x31d9be19
- (void)touchUpInside:(id)inside;	// 0x31e90511
- (void)touchUpOutside:(id)outside;	// 0x31e90525
@end
