/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"


__attribute__((visibility("hidden")))
@interface ATVOptionListController : ATVFeedController {
	BOOL _eventHandled;	// 104 = 0x68
	BOOL _shouldDismissAfterEvent;	// 105 = 0x69
}
- (id)initWithDictionary:(id)dictionary;	// 0x128279
- (id)initWithFeedElement:(id)feedElement;	// 0x127f89
- (BOOL)brEventAction:(id)action;	// 0x128609
- (void)controlWasActivated;	// 0x1286bd
- (void)controlWasDeactivated;	// 0x128649
@end
