/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIWindow, NSString;

__attribute__((visibility("hidden")))
@interface UISpringBoardHostedView : UIView {
	NSString *_remoteViewIdentifier;	// 84 = 0x54
	UIWindow *_remoteWindow;	// 88 = 0x58
	BOOL _remoteViewOpaque;	// 92 = 0x5c
}
@property(readonly, retain) NSString *remoteViewIdentifier;	// G=0x304c7f91; converted property
- (void)dealloc;	// 0x304c7e21
- (void)registerWithIdentifier:(id)identifier;	// 0x304c7b0d
// converted property getter: - (id)remoteViewIdentifier;	// 0x304c7f91
- (void)setRemoteViewOpaque:(BOOL)opaque;	// 0x304c7afd
- (void)unregister;	// 0x304c7e61
@end

