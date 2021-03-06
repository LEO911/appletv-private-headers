/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPopoverControllerDelegate.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class DOMNode, UIPopoverController;
@protocol UIWebRotatingNodePopoverDelegate;

__attribute__((visibility("hidden")))
@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate> {
	BOOL _isRotating;	// 4 = 0x4
	DOMNode *_node;	// 8 = 0x8
	CGPoint _presentationPoint;	// 12 = 0xc
	UIPopoverController *_popoverController;	// 20 = 0x14
	id<UIWebRotatingNodePopoverDelegate> _dismissDelegate;	// 24 = 0x18
}
@property(assign, nonatomic) id<UIWebRotatingNodePopoverDelegate> dismissDelegate;	// G=0x34945d69; S=0x34945d79; @synthesize=_dismissDelegate
@property(retain, nonatomic) DOMNode *node;	// G=0x34945d0d; S=0x34945d1d; @synthesize=_node
@property(retain, nonatomic) UIPopoverController *popoverController;	// G=0x34945d59; S=0x34945981; @synthesize=_popoverController
@property(assign, nonatomic) CGPoint presentationPoint;	// G=0x34945d2d; S=0x34945d45; @synthesize=_presentationPoint
- (id)initWithDOMNode:(id)domnode;	// 0x34945795
- (void)dealloc;	// 0x34945889
- (void)didRotate:(id)rotate;	// 0x34945cb5
// declared property getter: - (id)dismissDelegate;	// 0x34945d69
- (void)dismissPopoverAnimated:(BOOL)animated;	// 0x34945c65
// declared property getter: - (id)node;	// 0x34945d0d
- (unsigned)popoverArrowDirections;	// 0x349459f5
// declared property getter: - (id)popoverController;	// 0x34945d59
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x34945cd9
- (void)presentPopoverAnimated:(BOOL)animated;	// 0x349459f9
// declared property getter: - (CGPoint)presentationPoint;	// 0x34945d2d
// declared property setter: - (void)setDismissDelegate:(id)delegate;	// 0x34945d79
// declared property setter: - (void)setNode:(id)node;	// 0x34945d1d
// declared property setter: - (void)setPopoverController:(id)controller;	// 0x34945981
// declared property setter: - (void)setPresentationPoint:(CGPoint)point;	// 0x34945d45
- (void)willRotate:(id)rotate;	// 0x34945c85
@end

