/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITableViewController;

__attribute__((visibility("hidden")))
@interface UITableViewControllerKeyboardSupport : NSObject {
@private
	UITableViewController *_tableViewController;	// 4 = 0x4
	float _adjustmentForKeyboard;	// 8 = 0x8
	unsigned _viewIsDisappearing : 1;	// 12 = 0xc
	unsigned _registeredForNotifications : 1;	// 12 = 0xc
}
@property(assign, nonatomic) float adjustmentForKeyboard;	// G=0x33002e61; S=0x33044bb1; @synthesize=_adjustmentForKeyboard
@property(assign, nonatomic) BOOL registeredForNotifications;	// G=0x33002e1d; S=0x33002e31; 
@property(assign, nonatomic) BOOL viewIsDisappearing;	// G=0x33044b9d; S=0x33002e49; 
- (id)initWithTableViewController:(id)tableViewController;	// 0x33002ddd
- (void)_keyboardDidHide:(id)_keyboard;	// 0x3305721d
- (void)_keyboardDidShow:(id)_keyboard;	// 0x33044c49
- (void)_keyboardWillHide:(id)_keyboard;	// 0x33044c99
- (void)_keyboardWillShow:(id)_keyboard;	// 0x33044a0d
// declared property getter: - (float)adjustmentForKeyboard;	// 0x33002e61
// declared property getter: - (BOOL)registeredForNotifications;	// 0x33002e1d
// declared property setter: - (void)setAdjustmentForKeyboard:(float)keyboard;	// 0x33044bb1
// declared property setter: - (void)setRegisteredForNotifications:(BOOL)notifications;	// 0x33002e31
// declared property setter: - (void)setViewIsDisappearing:(BOOL)disappearing;	// 0x33002e49
// declared property getter: - (BOOL)viewIsDisappearing;	// 0x33044b9d
@end
