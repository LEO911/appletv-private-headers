/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ODDFillColorList : NSObject {
@private
	NSArray *mColors;	// 4 = 0x4
	int mHueDirection;	// 8 = 0x8
	int mMethod;	// 12 = 0xc
}
- (id)colorAtIndex:(unsigned)index count:(unsigned)count state:(id)state;	// 0x32902b45
- (id)cycleColorAtIndex:(unsigned)index;	// 0x3293a63d
- (void)dealloc;	// 0x329048a9
- (void)getComponentsForIndex:(unsigned)index hue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness state:(id)state;	// 0x329e3401
- (id)repeatColorAtIndex:(unsigned)index;	// 0x32902bd1
- (void)setColors:(id)colors;	// 0x328fc639
- (void)setHueDirection:(int)direction;	// 0x328fc591
- (void)setMethod:(int)method;	// 0x328fc629
- (id)spanColorAtIndex:(unsigned)index count:(unsigned)count state:(id)state;	// 0x32925db1
@end
