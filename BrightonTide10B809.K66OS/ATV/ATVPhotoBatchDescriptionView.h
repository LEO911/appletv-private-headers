/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchDescriptionView : BRControl {
	NSDateFormatter *_dayMonthYearFormatter;	// 84 = 0x54
	NSAttributedString *_title;	// 88 = 0x58
	NSAttributedString *_boldTitle;	// 92 = 0x5c
	NSAttributedString *_dimmedTitle;	// 96 = 0x60
	NSDateFormatter *_dayMonthFormatter;	// 100 = 0x64
}
@property(retain, nonatomic) NSAttributedString *boldTitle;	// G=0x3e2725; S=0x3e2735; @synthesize=_boldTitle
@property(retain, nonatomic) NSDateFormatter *dayMonthFormatter;	// G=0x3e250d; S=0x3e2795; @synthesize=_dayMonthFormatter
@property(retain, nonatomic) NSDateFormatter *dayMonthYearFormatter;	// G=0x3e2599; S=0x3e26c5; @synthesize=_dayMonthYearFormatter
@property(retain, nonatomic) NSAttributedString *dimmedTitle;	// G=0x3e275d; S=0x3e276d; @synthesize=_dimmedTitle
@property(retain, nonatomic) NSAttributedString *title;	// G=0x3e26ed; S=0x3e26fd; @synthesize=_title
- (id)init;	// 0x3e1735
- (void).cxx_destruct;	// 0x3e27bd
- (id)_boldTitleAttributes;	// 0x3e2465
- (id)_dimmedTitleAttributes;	// 0x3e24ad
- (id)_titleAttributes;	// 0x3e241d
- (id)accessibilityLabel;	// 0x3e2625
// declared property getter: - (id)boldTitle;	// 0x3e2725
// declared property getter: - (id)dayMonthFormatter;	// 0x3e250d
// declared property getter: - (id)dayMonthYearFormatter;	// 0x3e2599
// declared property getter: - (id)dimmedTitle;	// 0x3e275d
- (void)drawRect:(CGRect)rect;	// 0x3e2175
// declared property setter: - (void)setBoldTitle:(id)title;	// 0x3e2735
// declared property setter: - (void)setDayMonthFormatter:(id)formatter;	// 0x3e2795
// declared property setter: - (void)setDayMonthYearFormatter:(id)formatter;	// 0x3e26c5
// declared property setter: - (void)setDimmedTitle:(id)title;	// 0x3e276d
// declared property setter: - (void)setTitle:(id)title;	// 0x3e26fd
- (void)setTitle:(id)title boldTitle:(id)title2 dimmedTitle:(id)title3;	// 0x3e1d79
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3e2005
// declared property getter: - (id)title;	// 0x3e26ed
- (void)updatePhotoCount:(int)count description:(id)description;	// 0x3e1785
- (void)updatePhotoCount:(int)count modifiedDate:(id)date;	// 0x3e1979
@end
