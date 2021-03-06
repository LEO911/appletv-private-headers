/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFDeviceDriver.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver> {
	CGRect m_canvas;	// 4 = 0x4
	CGRect m_viewBox;	// 20 = 0x14
	CGAffineTransform m_viewBoxTransform;	// 36 = 0x24
	CGAffineTransform m_worldToDeviceTransform;	// 60 = 0x3c
	CGAffineTransform m_combinedTransform;	// 84 = 0x54
}
+ (int)getROP:(id)rop;	// 0x31cd5301
- (id)initWithCanvas:(CGRect)canvas;	// 0x31c4c811
- (id).cxx_construct;	// 0x31c4c80d
- (int)activateTransform:(CGAffineTransform)transform;	// 0x31c4ef89
- (int)angleArc:(id)arc :(int)arg2 :(int)arg3 :(unsigned long)arg4 :(double)arg5 :(double)arg6;	// 0x31e77f01
- (int)arc:(id)arc :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x31e77c99
- (int)arcTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x31e77da1
- (int)bezier:(id)bezier :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x31d289f1
- (int)bezierTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;	// 0x31d27c59
- (int)bitBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(unsigned long)arg9 :(CGAffineTransform *)arg10 :(unsigned long)arg11;	// 0x31d10321
- (int)chord:(id)chord :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x31e7805d
- (void)concatTransforms;	// 0x31c4eaad
- (id)createBitmap:(id)bitmap :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned)arg7;	// 0x31e78439
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x31cd6fb1
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(const char *)arg4 :(unsigned)arg5 :(int)arg6;	// 0x31c4f439
- (id)createFont:(int)font;	// 0x31c4ccb5
- (id)createFont:(long)font :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x31cd5ce1
- (id)createFontIndirectW:(long)w :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22;	// 0x31cda739
- (id)createHatchBrush:(id)brush :(int)arg2;	// 0x31e78419
- (id)createNullBrush;	// 0x31c50a21
- (id)createPath;	// 0x31c4d3e9
- (id)createPatternBrush:(id)brush usePaletteForBilevel:(BOOL)bilevel;	// 0x31d28d85
- (id)createPen;	// 0x31c50a75
- (id)createPen:(int)pen :(long)arg2 :(id)arg3 :(double *)arg4;	// 0x31c4d121
- (id)createRegionWithPath:(id)path;	// 0x31d2876d
- (id)createRegionWithRects:(id)rects :(id)arg2;	// 0x31d0fcdd
- (id)createSolidBrush:(id)brush;	// 0x31c4d2ed
- (void)dealloc;	// 0x31c51619
- (void)drawBezierPath:(CGPathRef)path dc:(id)dc fill:(BOOL)fill stroke:(BOOL)stroke;	// 0x31cd5101
- (int)ellipse:(id)ellipse :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x31d11a29
- (int)excludeClipRect:(CGRect)rect;	// 0x31cdc2dd
- (int)extTextOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int *)arg10 :(int)arg11;	// 0x31cdb5e1
- (CGRect)getCanvas;	// 0x31c4d86d
- (int)intersectClipRect:(CGRect)rect;	// 0x31cda965
- (int)lineTo:(id)to :(double)arg2 :(double)arg3;	// 0x31cdae41
- (int)maskBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(id)arg9 :(int)arg10 :(int)arg11 :(unsigned long)arg12 :(CGAffineTransform *)arg13 :(unsigned long)arg14;	// 0x31e783c9
- (int)patBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(unsigned long)arg6;	// 0x31d11af1
- (int)pie:(id)pie :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x31d4a4b1
- (int)plgBlt:(id)blt :(CGPoint *)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12;	// 0x31e78415
- (int)polyPolygon:(id)polygon :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x31d0fc2d
- (int)polyPolyline:(id)polyline :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x31d36329
- (int)polygon:(id)polygon :(CGPoint *)arg2 :(int)arg3;	// 0x31cd50a5
- (int)polyline:(id)polyline :(CGPoint *)arg2 :(int)arg3;	// 0x31cd57dd
- (int)rectangle:(id)rectangle :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x31cdc481
- (int)removeClip;	// 0x31c51069
- (int)roundRect:(id)rect :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(double)arg6 :(double)arg7;	// 0x31e78171
- (int)setMetaRgn;	// 0x31d0c1c5
- (void)setTransform:(CGAffineTransform)transform;	// 0x31cd7655
- (int)setViewBox:(double)box :(double)arg2 :(double)arg3 :(double)arg4;	// 0x31c4e8b9
- (int)stretchBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int)arg10 :(unsigned long)arg11 :(CGAffineTransform *)arg12 :(unsigned long)arg13;	// 0x31c4fb71
- (int)textOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4;	// 0x31d3c1f5
- (void)updateViewBoxTransform;	// 0x31c4ea1d
@end

