/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library

@class NSString, BRDividerControl, BRCyclerControl, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreview : BRControl {
@private
	BRDividerControl *_topDivider;	// 44 = 0x2c
	BRDividerControl *_bottomDivider;	// 48 = 0x30
	BRCyclerControl *_cycler;	// 52 = 0x34
	NSString *_text;	// 56 = 0x38
	NSString *_rightJustifiedText;	// 60 = 0x3c
	NSString *_topTableLabel;	// 64 = 0x40
	NSString *_bottomTableLabel;	// 68 = 0x44
	BRCyclerControl *_inningsCycler;	// 72 = 0x48
	BRTableView *_summaryTable;	// 76 = 0x4c
}
@property(copy, nonatomic) NSString *bottomTableLabel;	// G=0x3372550d; S=0x337259a9; @synthesize=_bottomTableLabel
@property(readonly, assign, nonatomic) BRCyclerControl *cycler;	// G=0x3372554d; @synthesize=_cycler
@property(readonly, assign, nonatomic) BRCyclerControl *inningsCycler;	// G=0x337254fd; @synthesize=_inningsCycler
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x3372552d; S=0x33725951; @synthesize=_rightJustifiedText
@property(readonly, assign, nonatomic) BRTableView *summaryTable;	// G=0x337254ed; @synthesize=_summaryTable
@property(copy, nonatomic) NSString *text;	// G=0x3372553d; S=0x33725925; @synthesize=_text
@property(copy, nonatomic) NSString *topTableLabel;	// G=0x3372551d; S=0x3372597d; @synthesize=_topTableLabel
- (id)init;	// 0x33725691
- (id)accessibilityLabel;	// 0x33725859
// declared property getter: - (id)bottomTableLabel;	// 0x3372550d
- (void)controlWasActivated;	// 0x3372555d
// declared property getter: - (id)cycler;	// 0x3372554d
- (void)dealloc;	// 0x337255b9
- (void)drawInContext:(CGContextRef)context;	// 0x33725aad
// declared property getter: - (id)inningsCycler;	// 0x337254fd
- (void)layoutSubcontrols;	// 0x337259d5
// declared property getter: - (id)rightJustifiedText;	// 0x3372552d
// declared property setter: - (void)setBottomTableLabel:(id)label;	// 0x337259a9
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x33725951
// declared property setter: - (void)setText:(id)text;	// 0x33725925
// declared property setter: - (void)setTopTableLabel:(id)label;	// 0x3372597d
// declared property getter: - (id)summaryTable;	// 0x337254ed
// declared property getter: - (id)text;	// 0x3372553d
// declared property getter: - (id)topTableLabel;	// 0x3372551d
@end
