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
	UILabel *_textLabel;	// 172 = 0xac
	float _labelFontSize;	// 176 = 0xb0
	float _labelOffset;	// 180 = 0xb4
}
@property(retain) id label;	// G=0x33cc63d9; S=0x33cc6135; converted property
@property(assign, nonatomic) float labelFontSize;	// G=0x33cc6425; S=0x33cc63f9; 
@property(assign, nonatomic) float labelOffset;	// G=0x33cc6981; S=0x33cc6991; @synthesize=_labelOffset
- (void)_drawImageAndTextPartInRect:(CGRect)rect;	// 0x33cc664d
- (void)dealloc;	// 0x33cc60e9
- (void)drawTitleAtPoint:(CGPoint)point width:(float)width;	// 0x33cc65c1
// converted property getter: - (id)label;	// 0x33cc63d9
// declared property getter: - (float)labelFontSize;	// 0x33cc6425
// declared property getter: - (float)labelOffset;	// 0x33cc6981
- (void)layoutSubviews;	// 0x33cc6445
- (void)setHighlighted:(BOOL)highlighted;	// 0x33cc6579
// converted property setter: - (void)setLabel:(id)label;	// 0x33cc6135
// declared property setter: - (void)setLabelFontSize:(float)size;	// 0x33cc63f9
// declared property setter: - (void)setLabelOffset:(float)offset;	// 0x33cc6991
@end

