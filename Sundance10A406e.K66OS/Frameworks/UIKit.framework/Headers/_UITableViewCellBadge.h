/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge : UIView {
	BOOL _isSelected;	// 84 = 0x54
	NSString *_text;	// 88 = 0x58
	CGSize _textSize;	// 92 = 0x5c
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x30d116ed; S=0x30d116dd; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x30d11a35; S=0x30d11a45; @synthesize=_isSelected
@property(copy, nonatomic) NSString *text;	// G=0x309963bd; S=0x30d11665; @synthesize=_text
- (id)initWithFrame:(CGRect)frame;	// 0x30996285
- (void)_sizeToFit;	// 0x30d11505
- (void)drawRect:(CGRect)rect;	// 0x30d11729
// converted property getter: - (BOOL)isHighlighted;	// 0x30d116ed
// declared property getter: - (BOOL)isSelected;	// 0x30d11a35
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x30d116dd
- (void)setIsSelected:(BOOL)selected;	// 0x30d116fd
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x30d11a45
// declared property setter: - (void)setText:(id)text;	// 0x30d11665
// declared property getter: - (id)text;	// 0x309963bd
@end
