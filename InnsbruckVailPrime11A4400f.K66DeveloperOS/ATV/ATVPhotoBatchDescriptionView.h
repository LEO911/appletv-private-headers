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
	NSAttributedString *_dimmedTitle;	// 84 = 0x54
	NSAttributedString *_title;	// 88 = 0x58
	NSAttributedString *_boldTitle;	// 92 = 0x5c
	NSDateFormatter *_dayMonthFormatter;	// 96 = 0x60
	NSDateFormatter *_dayMonthYearFormatter;	// 100 = 0x64
}
@property(retain, nonatomic) NSAttributedString *boldTitle;	// G=0xc88f5; S=0xc8905; @synthesize=_boldTitle
@property(retain, nonatomic) NSDateFormatter *dayMonthFormatter;	// G=0xc85c5; S=0xc892d; @synthesize=_dayMonthFormatter
@property(retain, nonatomic) NSDateFormatter *dayMonthYearFormatter;	// G=0xc86b9; S=0xc8955; @synthesize=_dayMonthYearFormatter
@property(retain, nonatomic) NSAttributedString *dimmedTitle;	// G=0xc8885; S=0xc8895; @synthesize=_dimmedTitle
@property(retain, nonatomic) NSAttributedString *title;	// G=0xc88bd; S=0xc88cd; @synthesize=_title
- (id)init;	// 0xc78bd
- (void).cxx_destruct;	// 0xc897d
- (id)_boldTitleAttributes;	// 0xc8535
- (id)_dimmedTitleAttributes;	// 0xc857d
- (id)_titleAttributes;	// 0xc84ed
- (id)accessibilityLabel;	// 0xc87ad
// declared property getter: - (id)boldTitle;	// 0xc88f5
// declared property getter: - (id)dayMonthFormatter;	// 0xc85c5
// declared property getter: - (id)dayMonthYearFormatter;	// 0xc86b9
// declared property getter: - (id)dimmedTitle;	// 0xc8885
- (void)drawRect:(CGRect)rect;	// 0xc8265
// declared property setter: - (void)setBoldTitle:(id)title;	// 0xc8905
// declared property setter: - (void)setDayMonthFormatter:(id)formatter;	// 0xc892d
// declared property setter: - (void)setDayMonthYearFormatter:(id)formatter;	// 0xc8955
// declared property setter: - (void)setDimmedTitle:(id)title;	// 0xc8895
// declared property setter: - (void)setTitle:(id)title;	// 0xc88cd
- (void)setTitle:(id)title boldTitle:(id)title2 dimmedTitle:(id)title3;	// 0xc7e81
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xc80f5
// declared property getter: - (id)title;	// 0xc88bd
- (void)updatePhotoCount:(id)count albumName:(id)name modifiedDate:(id)date;	// 0xc7aa5
- (void)updatePhotoCount:(id)count description:(id)description;	// 0xc7905
@end

