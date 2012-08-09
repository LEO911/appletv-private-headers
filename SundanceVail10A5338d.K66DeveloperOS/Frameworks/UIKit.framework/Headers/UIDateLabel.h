/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"


@interface UIDateLabel : UILabel {
	BOOL _forceTimeOnly;	// 160 = 0xa0
	double _date;	// 164 = 0xa4
	CFDateRef _dateKey;	// 172 = 0xac
	BOOL _boldForAllLocales;	// 176 = 0xb0
}
@property(assign, nonatomic) BOOL boldForAllLocales;	// G=0x30c6ba49; S=0x30e16425; @synthesize=_boldForAllLocales
@property(retain) id font;	// G=0x30c70269; S=0x30c6ab51; converted property
@property(assign, nonatomic) BOOL forceTimeOnly;	// G=0x30e16415; S=0x30e163e9; @synthesize=_forceTimeOnly
@property(assign) double timeInterval;	// G=0x30ce0be1; S=0x30c6b0d5; converted property
+ (id)defaultFont;	// 0x30c6ab2d
- (id)initWithFrame:(CGRect)frame;	// 0x30c6a9f1
- (CFDateRef)_dateKey;	// 0x30c6b2f5
- (id)_dateLabelCache;	// 0x30ce0b75
- (void)_didUpdateDate;	// 0x30c6bd39
- (void)_invalidateDateKey;	// 0x30c6b129
- (void)_updateDateStrings;	// 0x30c6b161
// declared property getter: - (BOOL)boldForAllLocales;	// 0x30c6ba49
- (void)dealloc;	// 0x30d60ca5
- (void)drawRect:(CGRect)rect;	// 0x30c76039
- (void)drawTextInRect:(CGRect)rect;	// 0x30c76085
// converted property getter: - (id)font;	// 0x30c70269
// declared property getter: - (BOOL)forceTimeOnly;	// 0x30e16415
// declared property setter: - (void)setBoldForAllLocales:(BOOL)allLocales;	// 0x30e16425
- (void)setDate:(id)date;	// 0x30c6b0a1
// converted property setter: - (void)setFont:(id)font;	// 0x30c6ab51
- (void)setFontWithoutInvalidation:(id)invalidation;	// 0x30e163bd
// declared property setter: - (void)setForceTimeOnly:(BOOL)only;	// 0x30e163e9
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x30c6b0d5
- (void)sizeToFit;	// 0x30c6ff45
- (id)text;	// 0x30c70165
- (id)timeDesignator;	// 0x30c6ba59
- (id)timeDesignatorFont;	// 0x30c703b9
// converted property getter: - (double)timeInterval;	// 0x30ce0be1
@end
