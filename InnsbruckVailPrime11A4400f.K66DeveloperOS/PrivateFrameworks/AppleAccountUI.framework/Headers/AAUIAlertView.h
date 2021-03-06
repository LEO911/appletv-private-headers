/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIAlertView.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AAUIAlertView : UIAlertView {
	NSObject<OS_dispatch_semaphore> *_buttonChosenSemaphore;	// 256 = 0x100
	int _chosenButtonIndex;	// 260 = 0x104
	id _action;	// 264 = 0x108
	id _actionWithText;	// 268 = 0x10c
}
@property(readonly, assign) int chosenButtonIndex;	// G=0x30049a2d; converted property
- (id)initWithTitle:(id)title message:(id)message buttonTitle:(id)title3 action:(id)action;	// 0x300496bd
- (id)initWithTitle:(id)title message:(id)message buttonTitle:(id)title3 otherButtonTitle:(id)title4 action:(id)action;	// 0x30049789
- (id)initWithTitle:(id)title message:(id)message buttonTitle:(id)title3 otherButtonTitle:(id)title4 textFieldTitle:(id)title5 action:(id)action;	// 0x30049865
- (id)initWithTitle:(id)title message:(id)message cancelButtonTitle:(id)title3 otherButtonTitle:(id)title4;	// 0x300495fd
- (void).cxx_destruct;	// 0x30049a5d
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x30049975
// converted property getter: - (int)chosenButtonIndex;	// 0x30049a2d
@end

