/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVAutoDismissable.h"
#import "BROptionDialog.h"


__attribute__((visibility("hidden")))
@interface BRModalOptionDialog : BROptionDialog <ATVAutoDismissable> {
	long _cancelIdx;	// 168 = 0xa8
	long _autoDismissIdx;	// 172 = 0xac
	BOOL _allowMenuButton;	// 176 = 0xb0
	BOOL _allowAutoDismiss;	// 177 = 0xb1
}
- (id)init;	// 0x2a85d5
- (id)initAllowingMenuButton:(BOOL)button;	// 0x2a85e9
- (void)_done:(id)done;	// 0x2a881d
- (BOOL)autoDismiss;	// 0x2a87c9
- (BOOL)brEventAction:(id)action;	// 0x2a8719
- (long)runModal;	// 0x2a8659
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x2a87a9
- (void)setCancelIndex:(long)index;	// 0x2a8709
@end

