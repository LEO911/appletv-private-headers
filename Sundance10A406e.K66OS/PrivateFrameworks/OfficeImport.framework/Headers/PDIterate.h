/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface PDIterate : NSObject {
	int mType;	// 4 = 0x4
	BOOL mIsBackwards;	// 8 = 0x8
	BOOL mIsPercentage;	// 9 = 0x9
	double mValue;	// 12 = 0xc
}
@property(assign) BOOL isBackwards;	// G=0x350dc441; S=0x350dc451; converted property
@property(assign) BOOL isValuePercentage;	// G=0x350dc461; S=0x350dc471; converted property
@property(assign) int type;	// G=0x350dc431; S=0x34fff775; converted property
@property(assign) double value;	// G=0x350dc481; S=0x350dc499; converted property
// converted property getter: - (BOOL)isBackwards;	// 0x350dc441
// converted property getter: - (BOOL)isValuePercentage;	// 0x350dc461
// converted property setter: - (void)setIsBackwards:(BOOL)backwards;	// 0x350dc451
// converted property setter: - (void)setIsValuePercentage:(BOOL)percentage;	// 0x350dc471
// converted property setter: - (void)setType:(int)type;	// 0x34fff775
// converted property setter: - (void)setValue:(double)value;	// 0x350dc499
// converted property getter: - (int)type;	// 0x350dc431
// converted property getter: - (double)value;	// 0x350dc481
@end
