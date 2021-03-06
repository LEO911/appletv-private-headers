/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPGraphicObject.h"

@class CPImage;

@interface CPShape : CPGraphicObject <CPDisposable> {
	unsigned pdfObjectID;	// 100 = 0x64
	CGPathRef path;	// 104 = 0x68
	BOOL isUprightRectangle;	// 108 = 0x6c
	int windingRule;	// 112 = 0x70
	float lineWidth;	// 116 = 0x74
	CGColorRef fillColor;	// 120 = 0x78
	CGColorRef strokeColor;	// 124 = 0x7c
	CPImage *fillPattern;	// 128 = 0x80
	CPImage *strokePattern;	// 132 = 0x84
}
@property(assign) CGColorRef fillColor;	// G=0x30294811; S=0x3029507d; converted property
@property(retain) CPImage *fillPattern;	// G=0x30294821; S=0x302949b5; converted property
@property(readonly, assign) BOOL isUprightRectangle;	// G=0x302947e1; converted property
@property(assign) float lineWidth;	// G=0x302948a1; S=0x302948b1; converted property
@property(assign) CGPathRef path;	// G=0x302947d1; S=0x30294b61; converted property
@property(assign) unsigned pdfObjectID;	// G=0x302947b1; S=0x302947c1; converted property
@property(assign) CGColorRef strokeColor;	// G=0x30294859; S=0x30295055; converted property
@property(retain) CPImage *strokePattern;	// G=0x30294869; S=0x3029497d; converted property
@property(assign) int windingRule;	// G=0x302947f1; S=0x30294801; converted property
- (id)init;	// 0x30294ad5
- (id)initWithPDFShape:(CPPDFShape *)pdfshape;	// 0x30295629
- (void)accept:(id)accept;	// 0x30294a01
- (void)addShape:(id)shape;	// 0x302950a9
- (id)attributes;	// 0x30294a1d
- (CGRect)bounds;	// 0x30294d29
- (BOOL)canCombineWith:(id)with;	// 0x302948f1
- (id)copyWithZone:(NSZone *)zone;	// 0x30294bc1
- (void)dealloc;	// 0x30294a31
- (void)dispose;	// 0x30294b1d
// converted property getter: - (CGColorRef)fillColor;	// 0x30294811
// converted property getter: - (id)fillPattern;	// 0x30294821
- (void)finalize;	// 0x30294a99
- (BOOL)hasFill;	// 0x30294831
- (BOOL)hasSamePathAs:(id)as;	// 0x30295465
- (BOOL)hasStroke;	// 0x30294879
- (CGRect)innerBounds;	// 0x30294de1
- (BOOL)isStrokeFor:(id)aFor;	// 0x30294929
// converted property getter: - (BOOL)isUprightRectangle;	// 0x302947e1
- (BOOL)isVisible;	// 0x302954f9
// converted property getter: - (float)lineWidth;	// 0x302948a1
- (void)makeLineFromVertex:(CGPoint)vertex toVertex:(CGPoint)vertex2;	// 0x30295599
// converted property getter: - (CGPathRef)path;	// 0x302947d1
- (unsigned)pathElementCount;	// 0x30295611
// converted property getter: - (unsigned)pdfObjectID;	// 0x302947b1
- (void)recomputeBounds;	// 0x30294d81
- (void)recomputeRenderedBounds;	// 0x30294e51
- (CGRect)renderedBounds;	// 0x30294c75
// converted property setter: - (void)setFillColor:(CGColorRef)color;	// 0x3029507d
// converted property setter: - (void)setFillPattern:(id)pattern;	// 0x302949b5
// converted property setter: - (void)setLineWidth:(float)width;	// 0x302948b1
// converted property setter: - (void)setPath:(CGPathRef)path;	// 0x30294b61
// converted property setter: - (void)setPdfObjectID:(unsigned)anId;	// 0x302947c1
// converted property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x30295055
// converted property setter: - (void)setStrokePattern:(id)pattern;	// 0x3029497d
// converted property setter: - (void)setWindingRule:(int)rule;	// 0x30294801
- (id)string;	// 0x302948c1
// converted property getter: - (CGColorRef)strokeColor;	// 0x30294859
// converted property getter: - (id)strokePattern;	// 0x30294869
// converted property getter: - (int)windingRule;	// 0x302947f1
- (long)zOrder;	// 0x302949ed
@end

