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
@property(assign, nonatomic) id<UIWebRotatingNodePopoverDelegate> dismissDelegate;	// G=0x30cb5029; S=0x30cb5039; @synthesize=_dismissDelegate
@property(retain, nonatomic) DOMNode *node;	// G=0x30cb4fcd; S=0x30cb4fdd; @synthesize=_node
@property(retain, nonatomic) UIPopoverController *popoverController;	// G=0x30cb5019; S=0x30cb4c41; @synthesize=_popoverController
@property(assign, nonatomic) CGPoint presentationPoint;	// G=0x30cb4fed; S=0x30cb5005; @synthesize=_presentationPoint
- (id)initWithDOMNode:(id)domnode;	// 0x30cb4a55
- (void)dealloc;	// 0x30cb4b49
- (void)didRotate:(id)rotate;	// 0x30cb4f75
// declared property getter: - (id)dismissDelegate;	// 0x30cb5029
- (void)dismissPopoverAnimated:(BOOL)animated;	// 0x30cb4f25
// declared property getter: - (id)node;	// 0x30cb4fcd
- (unsigned)popoverArrowDirections;	// 0x30cb4cb5
// declared property getter: - (id)popoverController;	// 0x30cb5019
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x30cb4f99
- (void)presentPopoverAnimated:(BOOL)animated;	// 0x30cb4cb9
// declared property getter: - (CGPoint)presentationPoint;	// 0x30cb4fed
// declared property setter: - (void)setDismissDelegate:(id)delegate;	// 0x30cb5039
// declared property setter: - (void)setNode:(id)node;	// 0x30cb4fdd
// declared property setter: - (void)setPopoverController:(id)controller;	// 0x30cb4c41
// declared property setter: - (void)setPresentationPoint:(CGPoint)point;	// 0x30cb5005
- (void)willRotate:(id)rotate;	// 0x30cb4f45
@end

