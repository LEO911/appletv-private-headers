/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BROptionDialog.h"


@interface BRModalOptionDialog : BROptionDialog {
@private
	long _cancelIdx;	// 128 = 0x80
	BOOL _allowMenuButton;	// 132 = 0x84
}
- (id)init;	// 0x3292bb9d
- (id)initAllowingMenuButton:(BOOL)button;	// 0x32961995
- (void)_done:(id)done;	// 0x3292bce5
- (BOOL)brEventAction:(id)action;	// 0x3292bc59
- (long)runModal;	// 0x3292bbb5
- (void)setCancelIndex:(long)index;	// 0x32961985
@end
