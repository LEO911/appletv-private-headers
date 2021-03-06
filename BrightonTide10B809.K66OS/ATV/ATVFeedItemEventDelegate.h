/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRSelectionHandler.h"
#import "BREventDelegate.h"

@class BRMerchant, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedItemEventDelegate : XXUnknownSuperclass <BREventDelegate, BRSelectionHandler> {
	NSDictionary *_eventDictionary;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) BRMerchant *merchant;	// G=0x199ca5; S=0x199cb9; @synthesize=_merchant
+ (id)feedItemDelegateWithEventHandlers:(id)eventHandlers;	// 0x199825
- (id)_initWithEventDictionary:(id)eventDictionary;	// 0x1998ad
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x19997d
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x199c21
- (void)dealloc;	// 0x19991d
- (BOOL)handlePlayForControl:(id)control;	// 0x199c65
- (BOOL)handleSelectionForControl:(id)control;	// 0x199c25
// declared property getter: - (id)merchant;	// 0x199ca5
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x199cb9
@end

