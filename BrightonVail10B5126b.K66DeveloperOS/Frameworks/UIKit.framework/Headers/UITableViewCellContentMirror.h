/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITableViewCellContentMirror : UIView {
	unsigned _selected : 1;	// 84 = 0x54
}
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x32d8a4b1; S=0x32c252b9; 
- (id)initWithFrame:(CGRect)frame;	// 0x32c25225
- (id)cell;	// 0x32c26b55
- (void)drawRect:(CGRect)rect;	// 0x32c26b01
// declared property getter: - (BOOL)isSelected;	// 0x32d8a4b1
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x32c252b9
@end
