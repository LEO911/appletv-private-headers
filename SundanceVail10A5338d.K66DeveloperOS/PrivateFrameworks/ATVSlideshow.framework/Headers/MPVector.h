/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MPVector : NSObject {
	float _vector[4];	// 4 = 0x4
	int _length;	// 20 = 0x14
}
@property(retain) id values;	// G=0x33359d85; S=0x33359e1d; converted property
@property(assign) XXStruct_Te64nB vector;	// G=0x33359fe5; S=0x33359f8d; converted property
+ (id)vectorFromCGColor:(CGColorRef)cgcolor;	// 0x333599a5
+ (id)vectorFromMCVector:(XXStruct_Te64nB)mcvector;	// 0x33359f29
+ (id)vectorFromString:(id)string;	// 0x333598ed
+ (id)vectorWithValues:(id)values;	// 0x33359955
- (id)init;	// 0x33359a0d
- (id)initWithCoder:(id)coder;	// 0x33359ad9
- (CGColorRef)CGColor;	// 0x33359d35
- (id)CIColorString;	// 0x33359bb9
- (id)copyWithZone:(NSZone *)zone;	// 0x33359a39
- (int)count;	// 0x33359b51
- (void)encodeWithCoder:(id)coder;	// 0x33359aa1
- (BOOL)isEqualTo:(id)to;	// 0x33359ea5
// converted property setter: - (void)setValues:(id)values;	// 0x33359e1d
// converted property setter: - (void)setVector:(XXStruct_Te64nB)vector;	// 0x33359f8d
- (id)string;	// 0x33359b61
- (float)valueAtIndex:(int)index;	// 0x33359b3d
// converted property getter: - (id)values;	// 0x33359d85
// converted property getter: - (XXStruct_Te64nB)vector;	// 0x33359fe5
@end
