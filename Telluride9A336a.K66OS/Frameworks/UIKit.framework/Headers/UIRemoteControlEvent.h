/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"


__attribute__((visibility("hidden")))
@interface UIRemoteControlEvent : UIInternalEvent {
@private
	int _subtype;	// 16 = 0x10
}
@property(readonly, assign) int subtype;	// G=0x352e64ed; converted property
- (id)_init;	// 0x350e44b1
- (void)_setSubtype:(int)subtype;	// 0x352e64fd
- (void)_simpleRemoteActionNotification:(id)notification;	// 0x352e650d
- (void)dealloc;	// 0x352e646d
// converted property getter: - (int)subtype;	// 0x352e64ed
- (int)type;	// 0x352e64e9
@end

