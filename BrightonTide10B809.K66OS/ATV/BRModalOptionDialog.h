/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BROptionDialog.h"
#import "ATVAutoDismissable.h"


__attribute__((visibility("hidden")))
@interface BRModalOptionDialog : BROptionDialog <ATVAutoDismissable> {
	long _cancelIdx;	// 168 = 0xa8
	long _autoDismissIdx;	// 172 = 0xac
	BOOL _allowMenuButton;	// 176 = 0xb0
	BOOL _allowAutoDismiss;	// 177 = 0xb1
}
- (id)init;	// 0x2cb769
- (id)initAllowingMenuButton:(BOOL)button;	// 0x2cb77d
- (void)_done:(id)done;	// 0x2cb9e1
- (BOOL)autoDismiss;	// 0x2cb98d
- (BOOL)brEventAction:(id)action;	// 0x2cb8dd
- (long)runModal;	// 0x2cb7ed
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x2cb96d
- (void)setCancelIndex:(long)index;	// 0x2cb8cd
@end
