/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class ABPeoplePickerNavigationController, NSMutableArray;

@interface ABPeoplePickerNavigationControllerPromptHandler : NSObject {
	ABPeoplePickerNavigationController *_ppnc;	// 4 = 0x4
	NSMutableArray *_prompts;	// 8 = 0x8
}
- (id)initWithNavigationController:(id)navigationController;	// 0x308ee901
- (BOOL)_shouldShowPromptForOrientation:(int)orientation;	// 0x308ff90d
- (void)dealloc;	// 0x30937849
- (unsigned)indexForViewControllerType:(int)viewControllerType;	// 0x308ff949
- (id)promptForViewControllerType:(int)viewControllerType orientation:(int)orientation;	// 0x308ff87d
- (void)setPrompt:(id)prompt forViewControllerType:(int)viewControllerType;	// 0x30937895
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30937af9
@end

