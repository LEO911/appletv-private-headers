/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"


@interface UIDateLabel : UILabel {
	BOOL _forceTimeOnly;	// 144 = 0x90
	double _date;	// 148 = 0x94
	CFDateRef _dateKey;	// 156 = 0x9c
	BOOL _boldForAllLocales;	// 160 = 0xa0
}
@property(assign, nonatomic) BOOL boldForAllLocales;	// G=0x302a2bc9; S=0x3044ab0d; @synthesize=_boldForAllLocales
@property(retain) id font;	// G=0x302a4039; S=0x302a1ad9; converted property
@property(assign, nonatomic) BOOL forceTimeOnly;	// G=0x3044aafd; S=0x3044aad1; @synthesize=_forceTimeOnly
@property(assign) double timeInterval;	// G=0x302fab39; S=0x302a2259; converted property
+ (id)defaultFont;	// 0x302a1ab5
- (id)initWithFrame:(CGRect)frame;	// 0x302a1979
- (CFDateRef)_dateKey;	// 0x302a2479
- (id)_dateLabelCache;	// 0x302faacd
- (void)_didUpdateDate;	// 0x302a2ef9
- (void)_invalidateDateKey;	// 0x302a22ad
- (void)_updateDateStrings;	// 0x302a22e5
// declared property getter: - (BOOL)boldForAllLocales;	// 0x302a2bc9
- (void)dealloc;	// 0x303819c5
- (void)drawRect:(CGRect)rect;	// 0x302a4579
- (void)drawTextInRect:(CGRect)rect;	// 0x302a45c5
// converted property getter: - (id)font;	// 0x302a4039
// declared property getter: - (BOOL)forceTimeOnly;	// 0x3044aafd
// declared property setter: - (void)setBoldForAllLocales:(BOOL)allLocales;	// 0x3044ab0d
- (void)setDate:(id)date;	// 0x302a2225
// converted property setter: - (void)setFont:(id)font;	// 0x302a1ad9
- (void)setFontWithoutInvalidation:(id)invalidation;	// 0x3044aaa5
// declared property setter: - (void)setForceTimeOnly:(BOOL)only;	// 0x3044aad1
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x302a2259
- (void)sizeToFit;	// 0x302a3a0d
- (id)text;	// 0x302a3c2d
- (id)timeDesignator;	// 0x302a2bd9
- (id)timeDesignatorFont;	// 0x302a4151
// converted property getter: - (double)timeInterval;	// 0x302fab39
@end

