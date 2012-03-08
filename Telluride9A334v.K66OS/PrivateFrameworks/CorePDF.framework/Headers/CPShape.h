/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPGraphicObject.h"


@interface CPShape : CPGraphicObject <CPDisposable> {
	unsigned pdfObjectID;	// 104 = 0x68
	CGPathRef path;	// 108 = 0x6c
	BOOL isUprightRectangle;	// 112 = 0x70
	int windingRule;	// 116 = 0x74
	float lineWidth;	// 120 = 0x78
	float miterLimit;	// 124 = 0x7c
	int lineCap;	// 128 = 0x80
	int lineJoin;	// 132 = 0x84
	CGColorRef fillColor;	// 136 = 0x88
	CGColorRef strokeColor;	// 140 = 0x8c
	CGPDFObject *fillObject;	// 144 = 0x90
	CGPDFObject *strokeObject;	// 148 = 0x94
	CGAffineTransform paintTransform;	// 152 = 0x98
	BOOL boundsComputed;	// 176 = 0xb0
	BOOL renderedBoundsComputed;	// 177 = 0xb1
}
@property(assign) CGColorRef fillColor;	// G=0x307979c5; S=0x30798571; converted property
@property(assign) CGPDFObject *fillObject;	// G=0x307979d5; S=0x307979e5; converted property
@property(readonly, assign) BOOL isUprightRectangle;	// G=0x307985dd; converted property
@property(assign) int lineCap;	// G=0x30797b19; S=0x30797b29; converted property
@property(assign) int lineJoin;	// G=0x30797b39; S=0x30797b49; converted property
@property(assign) float lineWidth;	// G=0x30797a7d; S=0x30797a8d; converted property
@property(assign) float miterLimit;	// G=0x30797af9; S=0x30797b09; converted property
@property(assign) CGAffineTransform paintTransform;	// G=0x30797b59; S=0x30797b89; converted property
@property(assign) CGPathRef path;	// G=0x30797995; S=0x30798a31; converted property
@property(assign) unsigned pdfObjectID;	// G=0x30797975; S=0x30797985; converted property
@property(assign) CGColorRef strokeColor;	// G=0x30797a21; S=0x30798541; converted property
@property(assign) CGPDFObject *strokeObject;	// G=0x30797a31; S=0x30797a41; converted property
@property(assign) int windingRule;	// G=0x307979a5; S=0x307979b5; converted property
- (id)init;	// 0x30797bb5
- (id)initWithPDFShape:(CPPDFShape *)pdfshape;	// 0x30798d15
- (void)accept:(id)accept;	// 0x307985b5
- (void)addShape:(id)shape;	// 0x30797cfd
- (id)attributes;	// 0x307985cd
- (CGRect)bounds;	// 0x30798b49
- (BOOL)canCombineWith:(id)with;	// 0x30798225
- (id)copyWithZone:(NSZone *)zone;	// 0x30798bc1
- (void)dealloc;	// 0x30798c45
- (void)dispose;	// 0x30798cc5
// converted property getter: - (CGColorRef)fillColor;	// 0x307979c5
// converted property getter: - (CGPDFObject *)fillObject;	// 0x307979d5
- (void)finalize;	// 0x30798c85
- (BOOL)hasFill;	// 0x307979f5
- (BOOL)hasSamePathAs:(id)as;	// 0x3079848d
- (BOOL)hasStroke;	// 0x30797a51
- (CGRect)innerBounds;	// 0x3079860d
- (BOOL)isStrokeFor:(id)aFor;	// 0x30798431
// converted property getter: - (BOOL)isUprightRectangle;	// 0x307985dd
- (BOOL)isVisible;	// 0x307983b5
// converted property getter: - (int)lineCap;	// 0x30797b19
// converted property getter: - (int)lineJoin;	// 0x30797b39
// converted property getter: - (float)lineWidth;	// 0x30797a7d
- (void)makeLineFromVertex:(CGPoint)vertex toVertex:(CGPoint)vertex2;	// 0x30797c6d
// converted property getter: - (float)miterLimit;	// 0x30797af9
// converted property getter: - (CGAffineTransform)paintTransform;	// 0x30797b59
// converted property getter: - (CGPathRef)path;	// 0x30797995
- (unsigned)pathElementCount;	// 0x30797c59
// converted property getter: - (unsigned)pdfObjectID;	// 0x30797975
- (void)recomputeBounds;	// 0x30798ad5
- (void)recomputeRenderedBounds;	// 0x307986ad
- (CGRect)renderedBounds;	// 0x30798949
// converted property setter: - (void)setFillColor:(CGColorRef)color;	// 0x30798571
// converted property setter: - (void)setFillObject:(CGPDFObject *)object;	// 0x307979e5
// converted property setter: - (void)setLineCap:(int)cap;	// 0x30797b29
// converted property setter: - (void)setLineJoin:(int)join;	// 0x30797b49
// converted property setter: - (void)setLineWidth:(float)width;	// 0x30797a8d
// converted property setter: - (void)setMiterLimit:(float)limit;	// 0x30797b09
// converted property setter: - (void)setPaintTransform:(CGAffineTransform)transform;	// 0x30797b89
// converted property setter: - (void)setPath:(CGPathRef)path;	// 0x30798a31
// converted property setter: - (void)setPdfObjectID:(unsigned)anId;	// 0x30797985
// converted property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x30798541
// converted property setter: - (void)setStrokeObject:(CGPDFObject *)object;	// 0x30797a41
// converted property setter: - (void)setWindingRule:(int)rule;	// 0x307979b5
- (id)string;	// 0x30797ccd
// converted property getter: - (CGColorRef)strokeColor;	// 0x30797a21
// converted property getter: - (CGPDFObject *)strokeObject;	// 0x30797a31
// converted property getter: - (int)windingRule;	// 0x307979a5
- (long)zOrder;	// 0x307985a5
@end
