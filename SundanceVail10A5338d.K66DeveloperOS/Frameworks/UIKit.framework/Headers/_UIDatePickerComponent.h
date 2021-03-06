/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerComponent : NSObject {
	unsigned _equivalentUnit;	// 4 = 0x4
	NSString *_formatString;	// 8 = 0x8
	unsigned _calendarUnit;	// 12 = 0xc
	float _width;	// 16 = 0x10
	NSRange _unitRange;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) unsigned calendarUnit;	// G=0x3105d139; @synthesize=_calendarUnit
@property(readonly, assign, nonatomic) unsigned equivalentUnit;	// G=0x3105d119; 
@property(readonly, assign, nonatomic) NSString *formatString;	// G=0x3105d129; @synthesize=_formatString
@property(assign, nonatomic) NSRange unitRange;	// G=0x3105d169; S=0x3105d181; @synthesize=_unitRange
@property(assign, nonatomic) float width;	// G=0x3105d149; S=0x3105d159; @synthesize=_width
+ (id)componentsFromDateFormatString:(id)dateFormatString locale:(id)locale;	// 0x3105cc69
+ (id)componentsFromDateFormatString:(id)dateFormatString locale:(id)locale desiredUnits:(int)units;	// 0x3105cc8d
- (id)_initWithFormatString:(id)formatString calendarUnit:(unsigned)unit;	// 0x3105cbe1
// declared property getter: - (unsigned)calendarUnit;	// 0x3105d139
- (void)dealloc;	// 0x3105d041
- (id)description;	// 0x3105d08d
// declared property getter: - (unsigned)equivalentUnit;	// 0x3105d119
// declared property getter: - (id)formatString;	// 0x3105d129
// declared property setter: - (void)setUnitRange:(NSRange)range;	// 0x3105d181
// declared property setter: - (void)setWidth:(float)width;	// 0x3105d159
// declared property getter: - (NSRange)unitRange;	// 0x3105d169
// declared property getter: - (float)width;	// 0x3105d149
@end

