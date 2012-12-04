/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class UIPopoverController;
@protocol UIPrintStatusDelegate;

@interface UIPrintStatusViewController : UINavigationController {
	UIPopoverController *_poverController;	// 288 = 0x120
	id<UIPrintStatusDelegate> _printStatusDelegate;	// 292 = 0x124
}
@property(assign, nonatomic) id<UIPrintStatusDelegate> printStatusDelegate;	// G=0x31f4b5d5; S=0x31f4b5e5; @synthesize=_printStatusDelegate
- (void)dealloc;	// 0x31f4b209
- (void)dismissAnimated:(BOOL)animated;	// 0x31f4b521
- (void)jobDidCancel;	// 0x31f4b58d
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x31f4b541
- (void)presentPrintStatusFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x31f4b479
// declared property getter: - (id)printStatusDelegate;	// 0x31f4b5d5
- (id)printStatusView;	// 0x31f4b445
// declared property setter: - (void)setPrintStatusDelegate:(id)delegate;	// 0x31f4b5e5
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x31f4b255
- (void)viewDidLoad;	// 0x31f4b2bd
- (void)viewWillAppear:(BOOL)view;	// 0x31f4b369
@end
