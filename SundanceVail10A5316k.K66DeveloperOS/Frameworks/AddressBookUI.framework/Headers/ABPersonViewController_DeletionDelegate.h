/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library
#import "UIActionSheetDelegate.h"

@class ABPersonViewControllerHelper;

@interface ABPersonViewController_DeletionDelegate : NSObject <UIActionSheetDelegate> {
@private
	ABPersonViewControllerHelper *_controller;	// 4 = 0x4
}
- (id)initWithPersonViewController:(id)personViewController;	// 0x34c91881
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x34c918c1
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x34ca53f9
@end
