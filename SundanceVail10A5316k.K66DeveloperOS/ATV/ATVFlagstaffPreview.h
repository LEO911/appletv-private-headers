/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSString, BRHorizontalDividerControl, BRCyclerControl, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreview : BRControl {
	BRHorizontalDividerControl *_topDivider;	// 80 = 0x50
	BRHorizontalDividerControl *_bottomDivider;	// 84 = 0x54
	BRCyclerControl *_cycler;	// 88 = 0x58
	NSString *_text;	// 92 = 0x5c
	NSString *_rightJustifiedText;	// 96 = 0x60
	NSString *_topTableLabel;	// 100 = 0x64
	NSString *_bottomTableLabel;	// 104 = 0x68
	BRCyclerControl *_inningsCycler;	// 108 = 0x6c
	BRTableView *_summaryTable;	// 112 = 0x70
}
@property(copy, nonatomic) NSString *bottomTableLabel;	// G=0x16fa21; S=0x16fa35; @synthesize=_bottomTableLabel
@property(readonly, assign, nonatomic) BRCyclerControl *cycler;	// G=0x16f9a5; @synthesize=_cycler
@property(readonly, assign, nonatomic) BRCyclerControl *inningsCycler;	// G=0x16fa45; @synthesize=_inningsCycler
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x16f9d9; S=0x16f9ed; @synthesize=_rightJustifiedText
@property(readonly, assign, nonatomic) BRTableView *summaryTable;	// G=0x16fa55; @synthesize=_summaryTable
@property(copy, nonatomic) NSString *text;	// G=0x16f9b5; S=0x16f9c9; @synthesize=_text
@property(copy, nonatomic) NSString *topTableLabel;	// G=0x16f9fd; S=0x16fa11; @synthesize=_topTableLabel
- (id)init;	// 0x16efad
- (id)accessibilityLabel;	// 0x16f8cd
// declared property getter: - (id)bottomTableLabel;	// 0x16fa21
- (void)controlWasActivated;	// 0x16f27d
// declared property getter: - (id)cycler;	// 0x16f9a5
- (void)dealloc;	// 0x16f18d
- (void)drawRect:(CGRect)rect;	// 0x16f2e1
// declared property getter: - (id)inningsCycler;	// 0x16fa45
- (void)layoutSubcontrols;	// 0x16f7c5
// declared property getter: - (id)rightJustifiedText;	// 0x16f9d9
// declared property setter: - (void)setBottomTableLabel:(id)label;	// 0x16fa35
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x16f9ed
// declared property setter: - (void)setText:(id)text;	// 0x16f9c9
// declared property setter: - (void)setTopTableLabel:(id)label;	// 0x16fa11
// declared property getter: - (id)summaryTable;	// 0x16fa55
// declared property getter: - (id)text;	// 0x16f9b5
// declared property getter: - (id)topTableLabel;	// 0x16f9fd
@end
