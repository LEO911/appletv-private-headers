/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePadInlineFloatingBackgroundView : UIView {
@private
	float _rowHeight;	// 48 = 0x30
	unsigned _highlightedRowIndex;	// 52 = 0x34
}
@property(assign, nonatomic) unsigned highlightedRowIndex;	// G=0x3545cce9; S=0x3545ccf9; @synthesize=_highlightedRowIndex
@property(assign, nonatomic) float rowHeight;	// G=0x3545ccc9; S=0x3545ccd9; @synthesize=_rowHeight
- (id)initWithFrame:(CGRect)frame;	// 0x3545ca05
- (void)drawRect:(CGRect)rect;	// 0x3545ca55
// declared property getter: - (unsigned)highlightedRowIndex;	// 0x3545cce9
// declared property getter: - (float)rowHeight;	// 0x3545ccc9
// declared property setter: - (void)setHighlightedRowIndex:(unsigned)index;	// 0x3545ccf9
// declared property setter: - (void)setRowHeight:(float)height;	// 0x3545ccd9
@end

