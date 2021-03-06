/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerComponent : NSObject {
	unsigned _equivalentUnit;	// 4 = 0x4
	NSString *_formatString;	// 8 = 0x8
	unsigned _calendarUnit;	// 12 = 0xc
	float _width;	// 16 = 0x10
	NSRange _unitRange;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) unsigned calendarUnit;	// G=0x30a60db1; @synthesize=_calendarUnit
@property(readonly, assign, nonatomic) unsigned equivalentUnit;	// G=0x30d11f15; 
@property(readonly, assign, nonatomic) NSString *formatString;	// G=0x30a60dc1; @synthesize=_formatString
@property(assign, nonatomic) NSRange unitRange;	// G=0x30d11f45; S=0x30d11f5d; @synthesize=_unitRange
@property(assign, nonatomic) float width;	// G=0x30d11f25; S=0x30d11f35; @synthesize=_width
+ (id)componentsFromDateFormatString:(id)dateFormatString locale:(id)locale;	// 0x30a607bd
+ (id)componentsFromDateFormatString:(id)dateFormatString locale:(id)locale desiredUnits:(int)units;	// 0x30a607e1
- (id)_initWithFormatString:(id)formatString calendarUnit:(unsigned)unit;	// 0x30a60ce5
// declared property getter: - (unsigned)calendarUnit;	// 0x30a60db1
- (void)dealloc;	// 0x30a66351
- (id)description;	// 0x30d11e89
// declared property getter: - (unsigned)equivalentUnit;	// 0x30d11f15
// declared property getter: - (id)formatString;	// 0x30a60dc1
// declared property setter: - (void)setUnitRange:(NSRange)range;	// 0x30d11f5d
// declared property setter: - (void)setWidth:(float)width;	// 0x30d11f35
// declared property getter: - (NSRange)unitRange;	// 0x30d11f45
// declared property getter: - (float)width;	// 0x30d11f25
@end

