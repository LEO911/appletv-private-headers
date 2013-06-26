/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface ATVSingleCommentView : BRControl {
	XXStruct_qlg9jA _horizontalMargin;	// 84 = 0x54
	BOOL _showsDivider;	// 88 = 0x58
	NSAttributedString *_text;	// 92 = 0x5c
	NSAttributedString *_footer;	// 96 = 0x60
}
@property(retain, nonatomic) NSAttributedString *footer;	// G=0x3c35c1; S=0x3c35d1; @synthesize=_footer
@property(assign, nonatomic) XXStruct_qlg9jA horizontalMargin;	// G=0x3c353d; S=0x3c3559; @synthesize=_horizontalMargin
@property(assign, nonatomic) BOOL showsDivider;	// G=0x3c3569; S=0x3c3579; @synthesize=_showsDivider
@property(retain, nonatomic) NSAttributedString *text;	// G=0x3c3589; S=0x3c3599; @synthesize=_text
- (id)init;	// 0x3c29dd
- (void).cxx_destruct;	// 0x3c35f9
- (id)accessibilityLabel;	// 0x3c349d
// declared property getter: - (id)footer;	// 0x3c35c1
// declared property getter: - (XXStruct_qlg9jA)horizontalMargin;	// 0x3c353d
- (void)layoutSubcontrols;	// 0x3c2ff1
// declared property setter: - (void)setFooter:(id)footer;	// 0x3c35d1
- (void)setFooterString:(id)string;	// 0x3c2c65
- (void)setFooterString:(id)string alignment:(int)alignment;	// 0x3c2d35
// declared property setter: - (void)setHorizontalMargin:(XXStruct_qlg9jA)margin;	// 0x3c3559
// declared property setter: - (void)setShowsDivider:(BOOL)divider;	// 0x3c3579
// declared property setter: - (void)setText:(id)text;	// 0x3c3599
- (void)setTextString:(id)string;	// 0x3c2a39
- (void)setTextString:(id)string alignment:(int)alignment;	// 0x3c2b09
// declared property getter: - (BOOL)showsDivider;	// 0x3c3569
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3c2e91
// declared property getter: - (id)text;	// 0x3c3589
@end
