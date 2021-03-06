/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRHorizontalDividerControl, NSString, BRCyclerControl, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreview : BRControl {
	BRHorizontalDividerControl *_topDivider;	// 84 = 0x54
	BRHorizontalDividerControl *_bottomDivider;	// 88 = 0x58
	BRCyclerControl *_cycler;	// 92 = 0x5c
	NSString *_text;	// 96 = 0x60
	NSString *_rightJustifiedText;	// 100 = 0x64
	NSString *_topTableLabel;	// 104 = 0x68
	NSString *_bottomTableLabel;	// 108 = 0x6c
	BRCyclerControl *_inningsCycler;	// 112 = 0x70
	BRTableView *_summaryTable;	// 116 = 0x74
}
@property(copy, nonatomic) NSString *bottomTableLabel;	// G=0x189fb1; S=0x189fc5; @synthesize=_bottomTableLabel
@property(readonly, assign, nonatomic) BRCyclerControl *cycler;	// G=0x189f35; @synthesize=_cycler
@property(readonly, assign, nonatomic) BRCyclerControl *inningsCycler;	// G=0x189fd5; @synthesize=_inningsCycler
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x189f69; S=0x189f7d; @synthesize=_rightJustifiedText
@property(readonly, assign, nonatomic) BRTableView *summaryTable;	// G=0x189fe5; @synthesize=_summaryTable
@property(copy, nonatomic) NSString *text;	// G=0x189f45; S=0x189f59; @synthesize=_text
@property(copy, nonatomic) NSString *topTableLabel;	// G=0x189f8d; S=0x189fa1; @synthesize=_topTableLabel
- (id)init;	// 0x189545
- (id)accessibilityLabel;	// 0x189e5d
// declared property getter: - (id)bottomTableLabel;	// 0x189fb1
- (void)controlWasActivated;	// 0x189815
// declared property getter: - (id)cycler;	// 0x189f35
- (void)dealloc;	// 0x189725
- (void)drawRect:(CGRect)rect;	// 0x189879
// declared property getter: - (id)inningsCycler;	// 0x189fd5
- (void)layoutSubcontrols;	// 0x189d55
// declared property getter: - (id)rightJustifiedText;	// 0x189f69
// declared property setter: - (void)setBottomTableLabel:(id)label;	// 0x189fc5
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x189f7d
// declared property setter: - (void)setText:(id)text;	// 0x189f59
// declared property setter: - (void)setTopTableLabel:(id)label;	// 0x189fa1
// declared property getter: - (id)summaryTable;	// 0x189fe5
// declared property getter: - (id)text;	// 0x189f45
// declared property getter: - (id)topTableLabel;	// 0x189f8d
@end

