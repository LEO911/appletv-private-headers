/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"


@interface UIDateLabel : UILabel {
@private
	BOOL _forceTimeOnly;	// 107 = 0x6b
	double _date;	// 108 = 0x6c
	CFDateRef _dateKey;	// 116 = 0x74
	BOOL _boldForAllLocales;	// 120 = 0x78
}
@property(assign, nonatomic) BOOL boldForAllLocales;	// G=0x356d7881; S=0x3588743d; @synthesize=_boldForAllLocales
@property(retain) id font;	// G=0x356dbecd; S=0x356d69c5; converted property
@property(assign, nonatomic) BOOL forceTimeOnly;	// G=0x3588742d; S=0x358873fd; @synthesize=_forceTimeOnly
@property(assign) double timeInterval;	// G=0x35755039; S=0x356d6ef1; converted property
+ (id)defaultFont;	// 0x356d69a1
- (id)initWithFrame:(CGRect)frame;	// 0x356d6865
- (CFDateRef)_dateKey;	// 0x356d7115
- (id)_dateLabelCache;	// 0x35754fc9
- (void)_didUpdateDate;	// 0x356d7b85
- (void)_invalidateDateKey;	// 0x356d6f45
- (void)_updateDateStrings;	// 0x356d6f7d
// declared property getter: - (BOOL)boldForAllLocales;	// 0x356d7881
- (void)dealloc;	// 0x357dbc1d
- (void)drawRect:(CGRect)rect;	// 0x356e1e9d
- (void)drawTextInRect:(CGRect)rect;	// 0x356e1ee9
// converted property getter: - (id)font;	// 0x356dbecd
// declared property getter: - (BOOL)forceTimeOnly;	// 0x3588742d
// declared property setter: - (void)setBoldForAllLocales:(BOOL)allLocales;	// 0x3588743d
- (void)setDate:(id)date;	// 0x356d6ebd
// converted property setter: - (void)setFont:(id)font;	// 0x356d69c5
- (void)setFontWithoutInvalidation:(id)invalidation;	// 0x358873d1
// declared property setter: - (void)setForceTimeOnly:(BOOL)only;	// 0x358873fd
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x356d6ef1
- (void)sizeToFit;	// 0x356dbbe5
- (id)text;	// 0x356dbde1
- (id)timeDesignator;	// 0x356d7891
- (id)timeDesignatorFont;	// 0x356dc02d
// converted property getter: - (double)timeInterval;	// 0x35755039
@end
