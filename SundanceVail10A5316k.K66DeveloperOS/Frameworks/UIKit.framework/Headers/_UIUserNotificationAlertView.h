/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAlertView.h"


__attribute__((visibility("hidden")))
@interface _UIUserNotificationAlertView : UIAlertView {
@private
	CFUserNotificationRef _userNotification;	// 192 = 0xc0
	CFRunLoopSourceRef _userNotificationRunLoopSource;	// 196 = 0xc4
	BOOL _runsModal;	// 200 = 0xc8
	BOOL _runningModal;	// 201 = 0xc9
}
@property(assign) BOOL runsModal;	// G=0x304ada81; S=0x304ada91; converted property
+ (void)initialize;	// 0x304ada1d
- (void)_cancelUserNotification;	// 0x304ae4e9
- (int)addButtonWithTitle:(id)title;	// 0x304ae351
- (void)cancelAlertView;	// 0x304ae459
- (void)dealloc;	// 0x304ae651
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x304ae5a1
- (BOOL)isVisible;	// 0x304ae2ed
// converted property getter: - (BOOL)runsModal;	// 0x304ada81
- (void)setRemoteViewController:(id)controller;	// 0x304ae3cd
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x304ada91
- (void)show;	// 0x304adaa1
- (id)textFieldAtIndex:(int)index;	// 0x304ae305
@end

