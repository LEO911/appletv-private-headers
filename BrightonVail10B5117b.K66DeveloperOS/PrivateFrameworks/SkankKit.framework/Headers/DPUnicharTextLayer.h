/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"


@interface DPUnicharTextLayer : SKLayer {
	CGFontRef _font;	// 56 = 0x38
	int _fontSize;	// 60 = 0x3c
	CGColorRef _fontColor;	// 64 = 0x40
	unsigned short *_unichars;	// 68 = 0x44
	unsigned long _numUnichars;	// 72 = 0x48
}
- (id)init;	// 0x3561fd61
- (void)dealloc;	// 0x3561fdbd
- (void)drawInContext:(CGContextRef)context;	// 0x3561ff1d
- (void)setFont:(id)font;	// 0x3561fe79
- (void)setFontColor:(CGColorRef)color;	// 0x3561feb5
- (void)setFontColorRed:(float)red green:(float)green blue:(float)blue;	// 0x3561fec5
- (void)setFontSize:(int)size;	// 0x3561fea5
- (void)setUnichars:(unsigned short *)unichars count:(unsigned long)count;	// 0x3561fe15
@end
