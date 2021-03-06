/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITable, UITableCell;

__attribute__((visibility("hidden")))
@interface UITableSeparatorView : UIView {
@private
	UITableCell *_tableCell;	// 44 = 0x2c
	UITable *_table;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame withTable:(id)table;	// 0x3215d3a5
- (id)initWithTableCell:(id)tableCell;	// 0x32160e41
- (void)drawRect:(CGRect)rect;	// 0x3215cf79
@end

