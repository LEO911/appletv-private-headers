/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface UIBezierPath : NSObject <NSCopying, NSCoding> {
	CGPathRef _path;	// 4 = 0x4
	float *_lineDashPattern;	// 8 = 0x8
	unsigned _lineDashPatternCount;	// 12 = 0xc
	float _lineWidth;	// 16 = 0x10
	float _miterLimit;	// 20 = 0x14
	float _flatness;	// 24 = 0x18
	float _lineDashPhase;	// 28 = 0x1c
	int _lineCapStyle;	// 32 = 0x20
	int _lineJoinStyle;	// 36 = 0x24
	BOOL _usesEvenOddFillRule;	// 40 = 0x28
	CGPathRef _immutablePath;	// 44 = 0x2c
	BOOL _immutablePathIsValid;	// 48 = 0x30
}
@property(assign, nonatomic) CGPathRef CGPath;	// G=0x30395069; S=0x303e8f69; 
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x303e8fed; 
@property(readonly, assign, nonatomic) CGPoint currentPoint;	// G=0x303e9005; 
@property(readonly, assign, getter=isEmpty) BOOL empty;	// G=0x303e8fd5; 
@property(assign, nonatomic) float flatness;	// G=0x303e9e8d; S=0x303e9e9d; @synthesize=_flatness
@property(assign, nonatomic) int lineCapStyle;	// G=0x303e9e2d; S=0x303e9e3d; @synthesize=_lineCapStyle
@property(assign, nonatomic) int lineJoinStyle;	// G=0x303e9e4d; S=0x303e9e5d; @synthesize=_lineJoinStyle
@property(assign, nonatomic) float lineWidth;	// G=0x303e9e0d; S=0x303e9e1d; @synthesize=_lineWidth
@property(assign, nonatomic) float miterLimit;	// G=0x303e9e6d; S=0x303e9e7d; @synthesize=_miterLimit
@property(assign, nonatomic) BOOL usesEvenOddFillRule;	// G=0x303e9ead; S=0x303e9ebd; @synthesize=_usesEvenOddFillRule
+ (id)_bezierPathWithRoundedRect:(CGRect)roundedRect byRoundingCorners:(unsigned)corners cornerRadius:(float)radius;	// 0x302f3145
+ (id)_roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners cornerRadius:(float)radius segments:(int)segments;	// 0x302f317d
+ (id)bezierPath;	// 0x302e0d79
+ (id)bezierPathForBottomOfRect:(CGRect)rect withCornerRadius:(float)cornerRadius;	// 0x303e939d
+ (id)bezierPathForTopOfRect:(CGRect)rect withCornerRadius:(float)cornerRadius;	// 0x303e9261
+ (id)bezierPathWithArcCenter:(CGPoint)arcCenter radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x303e8925
+ (id)bezierPathWithCGPath:(CGPathRef)cgpath;	// 0x303e89e1
+ (id)bezierPathWithOvalInRect:(CGRect)rect;	// 0x303e88d1
+ (id)bezierPathWithRect:(CGRect)rect;	// 0x302e0d25
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect byRoundingCorners:(unsigned)corners cornerRadii:(CGSize)radii;	// 0x303dd715
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect cornerRadius:(float)radius;	// 0x3037ab29
+ (id)roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners withCornerRadii:(id)cornerRadii;	// 0x303e9981
+ (id)roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners withCornerRadius:(float)cornerRadius;	// 0x302f3109
+ (id)roundedRectBezierPath:(CGRect)path withRoundedEdges:(int)roundedEdges;	// 0x303538b9
+ (id)roundedRectBezierPath:(CGRect)path withTopCornerRadius:(float)topCornerRadius withBottomCornerRadius:(float)bottomCornerRadius;	// 0x303e94d1
+ (id)shadowBezierPath:(CGRect)path withRoundedEdges:(int)roundedEdges;	// 0x3038685d
- (id)init;	// 0x303e8249
- (id)initWithCoder:(id)coder;	// 0x303e8275
// declared property getter: - (CGPathRef)CGPath;	// 0x30395069
- (CGPathRef)_createMutablePathByDecodingData:(id)data;	// 0x303e95a5
- (id)_initWithCGMutablePath:(CGPathRef)cgmutablePath;	// 0x302e0dd1
- (CGPathRef)_mutablePath;	// 0x302e0ea5
- (CGPathRef)_pathRef;	// 0x30386a75
- (void)addArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x303e8b09
- (void)addClip;	// 0x302e0eb5
- (void)addCurveToPoint:(CGPoint)point controlPoint1:(CGPoint)a1 controlPoint2:(CGPoint)a2;	// 0x303e8a85
- (void)addLineToPoint:(CGPoint)point;	// 0x302f4b6d
- (void)addQuadCurveToPoint:(CGPoint)point controlPoint:(CGPoint)point2;	// 0x303e8acd
- (void)appendBezierPath:(id)path;	// 0x303e9879
- (void)appendBezierPathWithArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x30386a85
- (void)appendBezierPathWithOvalInRect:(CGRect)rect;	// 0x303e98f5
- (void)appendBezierPathWithOvalInRect:(CGRect)rect transform:(CGAffineTransform)transform;	// 0x303e992d
- (void)appendBezierPathWithRect:(CGRect)rect;	// 0x303e98bd
- (void)appendPath:(id)path;	// 0x303e8b69
- (void)applyTransform:(CGAffineTransform)transform;	// 0x303e8bad
- (id)bezierPathByReversingPath;	// 0x303e8c61
// declared property getter: - (CGRect)bounds;	// 0x303e8fed
- (void)clip;	// 0x302f376d
- (void)closePath;	// 0x303e8c05
- (BOOL)containsPoint:(CGPoint)point;	// 0x303e901d
- (id)copyWithZone:(NSZone *)zone;	// 0x303e87c1
// declared property getter: - (CGPoint)currentPoint;	// 0x303e9005
- (void)dealloc;	// 0x302e0ef9
- (void)encodeWithCoder:(id)coder;	// 0x303e8529
- (void)fill;	// 0x30353b05
- (void)fillWithBlendMode:(int)blendMode alpha:(float)alpha;	// 0x3037acd1
// declared property getter: - (float)flatness;	// 0x303e9e8d
- (void)getLineDash:(float *)dash count:(int *)count phase:(float *)phase;	// 0x303e90f5
// declared property getter: - (BOOL)isEmpty;	// 0x303e8fd5
// declared property getter: - (int)lineCapStyle;	// 0x303e9e2d
// declared property getter: - (int)lineJoinStyle;	// 0x303e9e4d
- (void)lineToPoint:(CGPoint)point;	// 0x302f4b5d
// declared property getter: - (float)lineWidth;	// 0x303e9e0d
// declared property getter: - (float)miterLimit;	// 0x303e9e6d
- (void)moveToPoint:(CGPoint)point;	// 0x302f4b31
- (void)removeAllPoints;	// 0x303e8c31
// declared property setter: - (void)setCGPath:(CGPathRef)path;	// 0x303e8f69
// declared property setter: - (void)setFlatness:(float)flatness;	// 0x303e9e9d
// declared property setter: - (void)setLineCapStyle:(int)style;	// 0x303e9e3d
- (void)setLineDash:(const float *)dash count:(int)count phase:(float)phase;	// 0x303e9055
// declared property setter: - (void)setLineJoinStyle:(int)style;	// 0x303e9e5d
// declared property setter: - (void)setLineWidth:(float)width;	// 0x303e9e1d
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x303e9e7d
// declared property setter: - (void)setUsesEvenOddFillRule:(BOOL)rule;	// 0x303e9ebd
- (void)stroke;	// 0x302f36a1
- (void)strokeWithBlendMode:(int)blendMode alpha:(float)alpha;	// 0x303e9179
// declared property getter: - (BOOL)usesEvenOddFillRule;	// 0x303e9ead
@end
