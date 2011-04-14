/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIThreePartButton.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UILabeledPushButton : UIThreePartButton {
@private
	UILabel *_textLabel;	// 168 = 0xa8
	float _labelFontSize;	// 172 = 0xac
	float _labelOffset;	// 176 = 0xb0
}
@property(retain) id label;	// G=0x3085a441; S=0x3085a461; converted property
@property(assign, nonatomic) float labelFontSize;	// G=0x3085a3f1; S=0x3085a411; 
@property(assign, nonatomic) float labelOffset;	// G=0x30859c89; S=0x30859c99; @synthesize=_labelOffset
- (void)_drawImageAndTextPartInRect:(CGRect)rect;	// 0x3085af3d
- (void)dealloc;	// 0x3085ac2d
- (void)drawTitleAtPoint:(CGPoint)point width:(float)width;	// 0x3085ab65
// converted property getter: - (id)label;	// 0x3085a441
// declared property getter: - (float)labelFontSize;	// 0x3085a3f1
// declared property getter: - (float)labelOffset;	// 0x30859c89
- (void)layoutSubviews;	// 0x3085ba55
- (void)setHighlighted:(BOOL)highlighted;	// 0x3085abe5
// converted property setter: - (void)setLabel:(id)label;	// 0x3085a461
// declared property setter: - (void)setLabelFontSize:(float)size;	// 0x3085a411
// declared property setter: - (void)setLabelOffset:(float)offset;	// 0x30859c99
@end
