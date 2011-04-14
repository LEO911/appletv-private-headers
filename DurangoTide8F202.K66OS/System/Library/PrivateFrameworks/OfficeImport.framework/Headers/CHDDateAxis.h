/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


__attribute__((visibility("hidden")))
@interface CHDDateAxis : CHDAxis {
@private
	bool mAutomatic;	// 128 = 0x80
	double mMajorUnitValue;	// 132 = 0x84
	double mMinorUnitValue;	// 140 = 0x8c
	int mMinorTimeUnit;	// 148 = 0x94
	int mMajorTimeUnit;	// 152 = 0x98
	int mBaseTimeUnit;	// 156 = 0x9c
}
@property(assign, getter=isAutomatic) bool automatic;	// G=0x31aeb41d; S=0x31a83839; converted property
@property(assign) int baseTimeUnit;	// G=0x31aeb46d; S=0x31a79c3d; converted property
@property(assign) int majorTimeUnit;	// G=0x31aeb44d; S=0x31a79c2d; converted property
@property(assign) double majorUnitValue;	// G=0x31aeb42d; S=0x31a79be9; converted property
@property(assign) int minorTimeUnit;	// G=0x31aeb45d; S=0x31a79c1d; converted property
@property(assign) double minorUnitValue;	// G=0x31aeb43d; S=0x31a79c09; converted property
- (id)initWithResources:(id)resources;	// 0x31a79b49
// converted property getter: - (int)baseTimeUnit;	// 0x31aeb46d
// converted property getter: - (bool)isAutomatic;	// 0x31aeb41d
- (bool)isDate;	// 0x31aeb419
// converted property getter: - (int)majorTimeUnit;	// 0x31aeb44d
// converted property getter: - (double)majorUnitValue;	// 0x31aeb42d
// converted property getter: - (int)minorTimeUnit;	// 0x31aeb45d
// converted property getter: - (double)minorUnitValue;	// 0x31aeb43d
// converted property setter: - (void)setAutomatic:(bool)automatic;	// 0x31a83839
// converted property setter: - (void)setBaseTimeUnit:(int)unit;	// 0x31a79c3d
// converted property setter: - (void)setMajorTimeUnit:(int)unit;	// 0x31a79c2d
// converted property setter: - (void)setMajorUnitValue:(double)value;	// 0x31a79be9
// converted property setter: - (void)setMinorTimeUnit:(int)unit;	// 0x31a79c1d
// converted property setter: - (void)setMinorUnitValue:(double)value;	// 0x31a79c09
@end
