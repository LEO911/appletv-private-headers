/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WDAAnchor : NSObject {
	CGRect mBounds;	// 4 = 0x4
	int mTextWrappingMode;	// 20 = 0x14
	int mTextWrappingModeType;	// 24 = 0x18
	double mWrapDistanceLeft;	// 28 = 0x1c
	double mWrapDistanceTop;	// 36 = 0x24
	double mWrapDistanceRight;	// 44 = 0x2c
	double mWrapDistanceBottom;	// 52 = 0x34
	int mHorizontalPosition;	// 60 = 0x3c
	int mRelativeHorizontalPosition;	// 64 = 0x40
	int mVerticalPosition;	// 68 = 0x44
	int mRelativeVerticalPosition;	// 72 = 0x48
	BOOL mIsBehindText;	// 76 = 0x4c
	BOOL mAllowOverlap;	// 77 = 0x4d
	BOOL mMoveWithText;	// 78 = 0x4e
	int mZIndexTotal;	// 80 = 0x50
	int mZIndex;	// 84 = 0x54
}
@property(assign, nonatomic) BOOL allowOverlap;	// G=0x34aa6e4d; S=0x34927301; @synthesize=mAllowOverlap
@property(assign, getter=isBehindText) BOOL behindText;	// G=0x348fe13d; S=0x348ec631; converted property
@property(assign, nonatomic) CGRect bounds;	// G=0x348ec9e9; S=0x348eca0d; @synthesize=mBounds
@property(assign) int horizontalPosition;	// G=0x34aa6dfd; S=0x348f6ef5; converted property
@property(assign) int relativeHorizontalPosition;	// G=0x348fe0fd; S=0x348ec661; converted property
@property(assign) int relativeVerticalPosition;	// G=0x34905471; S=0x348eca29; converted property
@property(assign, nonatomic) int textWrappingMode;	// G=0x348fe0ad; S=0x348ecc6d; @synthesize=mTextWrappingMode
@property(assign, nonatomic) int textWrappingModeType;	// G=0x34aa6e3d; S=0x348f7371; @synthesize=mTextWrappingModeType
@property(assign) int verticalPosition;	// G=0x34aa6e0d; S=0x348f70c9; converted property
@property(assign) double wrapDistanceBottom;	// G=0x34aa6de5; S=0x348f72b1; converted property
@property(assign) double wrapDistanceLeft;	// G=0x34aa6d9d; S=0x348f71f9; converted property
@property(assign) double wrapDistanceRight;	// G=0x34aa6dcd; S=0x348f7271; converted property
@property(assign) double wrapDistanceTop;	// G=0x34aa6db5; S=0x348f7239; converted property
@property(assign) int zIndex;	// G=0x348fe12d; S=0x348ec641; converted property
@property(assign) int zIndexTotal;	// G=0x34aa6e1d; S=0x34aa6e2d; converted property
- (id)init;	// 0x348ec4e9
- (id).cxx_construct;	// 0x348ec4e5
// declared property getter: - (BOOL)allowOverlap;	// 0x34aa6e4d
// declared property getter: - (CGRect)bounds;	// 0x348ec9e9
// converted property getter: - (int)horizontalPosition;	// 0x34aa6dfd
// converted property getter: - (BOOL)isBehindText;	// 0x348fe13d
// converted property getter: - (int)relativeHorizontalPosition;	// 0x348fe0fd
// converted property getter: - (int)relativeVerticalPosition;	// 0x34905471
// declared property setter: - (void)setAllowOverlap:(BOOL)overlap;	// 0x34927301
// converted property setter: - (void)setBehindText:(BOOL)text;	// 0x348ec631
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x348eca0d
// converted property setter: - (void)setHorizontalPosition:(int)position;	// 0x348f6ef5
// converted property setter: - (void)setRelativeHorizontalPosition:(int)position;	// 0x348ec661
// converted property setter: - (void)setRelativeVerticalPosition:(int)position;	// 0x348eca29
// declared property setter: - (void)setTextWrappingMode:(int)mode;	// 0x348ecc6d
// declared property setter: - (void)setTextWrappingModeType:(int)type;	// 0x348f7371
// converted property setter: - (void)setVerticalPosition:(int)position;	// 0x348f70c9
// converted property setter: - (void)setWrapDistanceBottom:(double)bottom;	// 0x348f72b1
// converted property setter: - (void)setWrapDistanceLeft:(double)left;	// 0x348f71f9
// converted property setter: - (void)setWrapDistanceRight:(double)right;	// 0x348f7271
// converted property setter: - (void)setWrapDistanceTop:(double)top;	// 0x348f7239
// converted property setter: - (void)setZIndex:(int)index;	// 0x348ec641
// converted property setter: - (void)setZIndexTotal:(int)total;	// 0x34aa6e2d
// declared property getter: - (int)textWrappingMode;	// 0x348fe0ad
// declared property getter: - (int)textWrappingModeType;	// 0x34aa6e3d
// converted property getter: - (int)verticalPosition;	// 0x34aa6e0d
// converted property getter: - (double)wrapDistanceBottom;	// 0x34aa6de5
// converted property getter: - (double)wrapDistanceLeft;	// 0x34aa6d9d
// converted property getter: - (double)wrapDistanceRight;	// 0x34aa6dcd
// converted property getter: - (double)wrapDistanceTop;	// 0x34aa6db5
// converted property getter: - (int)zIndex;	// 0x348fe12d
// converted property getter: - (int)zIndexTotal;	// 0x34aa6e1d
@end
