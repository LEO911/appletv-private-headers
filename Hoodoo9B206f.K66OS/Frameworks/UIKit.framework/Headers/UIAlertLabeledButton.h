/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAlertButton.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIAlertLabeledButton : UIAlertButton {
@private
	UILabel *_typeLabel;	// 144 = 0x90
	float _titleOffset;	// 148 = 0x94
}
@property(assign, nonatomic) float titleOffset;	// G=0x356591e9; S=0x35441e55; @synthesize=_titleOffset
@property(readonly, assign, nonatomic) UILabel *typeLabel;	// G=0x354412cd; 
- (void)dealloc;	// 0x354427f1
- (void)layoutSubviews;	// 0x35441535
- (void)setHighlighted:(BOOL)highlighted;	// 0x35441eb1
// declared property setter: - (void)setTitleOffset:(float)offset;	// 0x35441e55
// declared property getter: - (float)titleOffset;	// 0x356591e9
// declared property getter: - (id)typeLabel;	// 0x354412cd
@end
