/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


@interface NSBezierPathStub : NSObject <NSCopying> {
	int _segmentCount;	// 4 = 0x4
	int _segmentMax;	// 8 = 0x8
	PATHSEGMENT *_head;	// 12 = 0xc
	int _lastSubpathIndex;	// 16 = 0x10
	int _elementCount;	// 20 = 0x14
	float _lineWidth;	// 24 = 0x18
	CGRect _controlPointBounds;	// 28 = 0x1c
	float _miterLimit;	// 44 = 0x2c
	float _flatness;	// 48 = 0x30
	float *_dashedLinePattern;	// 52 = 0x34
	unsigned _dashedLineCount;	// 56 = 0x38
	float _dashedLinePhase;	// 60 = 0x3c
	void *_path;	// 64 = 0x40
	id _private[4];	// 68 = 0x44
	struct {
		unsigned _flags : 8;
		unsigned _pathState : 2;
		unsigned _unused : 22;
	} _bpFlags;	// 84 = 0x54
}
@property(assign) BOOL cachesBezierPath;	// G=0x34ae3055; S=0x34ae3059; converted property
@property(readonly, assign) CGRect controlPointBounds;	// G=0x34ae195d; converted property
@property(readonly, assign) int elementCount;	// G=0x34ae1bc1; converted property
@property(assign) float flatness;	// G=0x34ae0d45; S=0x34ae0d55; converted property
@property(assign) unsigned lineCapStyle;	// G=0x34ae0c89; S=0x34ae0c9d; converted property
@property(assign) unsigned lineJoinStyle;	// G=0x34ae0cbd; S=0x34ae0cd1; converted property
@property(assign) float lineWidth;	// G=0x34ae0c69; S=0x34ae0c79; converted property
@property(assign) float miterLimit;	// G=0x34ae0d25; S=0x34ae0d35; converted property
@property(assign) unsigned windingRule;	// G=0x34ae0cf1; S=0x34ae0d05; converted property
+ (id)bezierPath;	// 0x34adfee1
+ (id)bezierPathWithOvalInRect:(CGRect)rect;	// 0x34adff59
+ (id)bezierPathWithRect:(CGRect)rect;	// 0x34adff19
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect xRadius:(float)radius yRadius:(float)radius3;	// 0x34adff99
+ (void)clipRect:(CGRect)rect;	// 0x34ae015d
+ (CGContextRef)currentCGContext;	// 0x34adfe91
+ (float)defaultFlatness;	// 0x34ae02c9
+ (unsigned)defaultLineCapStyle;	// 0x34ae0309
+ (unsigned)defaultLineJoinStyle;	// 0x34ae0329
+ (float)defaultLineWidth;	// 0x34ae0349
+ (float)defaultMiterLimit;	// 0x34ae02a9
+ (unsigned)defaultWindingRule;	// 0x34ae02e9
+ (void)drawPackedGlyphs:(const char *)glyphs atPoint:(CGPoint)point;	// 0x34ae0245
+ (void)drawString:(id)string atPoint:(CGPoint)point withFontName:(id)fontName andHeight:(float)height color:(id)color alignToTop:(BOOL)top currentTransformStruct:(CGAffineTransform)aStruct;	// 0x34ae03a5
+ (void)fillRect:(CGRect)rect;	// 0x34adffed
+ (float)flatness;	// 0x34ae34c9
+ (void)initialize;	// 0x34adfdf9
+ (unsigned)lineCapStyle;	// 0x34ae3509
+ (unsigned)lineJoinStyle;	// 0x34ae3529
+ (float)lineWidth;	// 0x34ae3549
+ (float)miterLimit;	// 0x34ae34a9
+ (void)setCurrentCGContext:(CGContextRef)context;	// 0x34adfe3d
+ (void)setDefaultFlatness:(float)flatness;	// 0x34ae02b9
+ (void)setDefaultLineCapStyle:(unsigned)style;	// 0x34ae02f9
+ (void)setDefaultLineJoinStyle:(unsigned)style;	// 0x34ae0319
+ (void)setDefaultLineWidth:(float)width;	// 0x34ae0339
+ (void)setDefaultMiterLimit:(float)limit;	// 0x34ae0299
+ (void)setDefaultWindingRule:(unsigned)rule;	// 0x34ae02d9
+ (void)setFlatness:(float)flatness;	// 0x34ae34b9
+ (void)setLineCapStyle:(unsigned)style;	// 0x34ae34f9
+ (void)setLineJoinStyle:(unsigned)style;	// 0x34ae3519
+ (void)setLineWidth:(float)width;	// 0x34ae3539
+ (void)setMiterLimit:(float)limit;	// 0x34ae3499
+ (void)setWindingRule:(unsigned)rule;	// 0x34ae34d9
+ (void)strokeLineFromPoint:(CGPoint)point toPoint:(CGPoint)point2;	// 0x34ae01bd
+ (void)strokeRect:(CGRect)rect;	// 0x34ae004d
+ (unsigned)windingRule;	// 0x34ae34e9
- (id)init;	// 0x34ae0561
- (id).cxx_construct;	// 0x34ae305d
- (void)_addPathSegment:(int)segment point:(CGPoint)point;	// 0x34ae3061
- (void)_appendArcSegmentWithCenter:(CGPoint)center radius:(double)radius angle1:(double)a1 angle2:(double)a2;	// 0x34ae21d5
- (id)_copyFlattenedPath;	// 0x34ae15b9
- (void)_deviceClosePath;	// 0x34ae32ed
- (void)_deviceCurveToPoint:(CGPoint)point controlPoint1:(CGPoint)a1 controlPoint2:(CGPoint)a2;	// 0x34ae3269
- (void)_deviceLineToPoint:(CGPoint)point;	// 0x34ae3219
- (void)_deviceMoveToPoint:(CGPoint)point;	// 0x34ae3141
- (void)_doPath;	// 0x34ae0ed1
- (void)_doUserPathWithOp:(unsigned char)op inContext:(CGContextRef)context;	// 0x34ae33ad
- (int)_locationOfPoint:(CGPoint)point;	// 0x34ae2bbd
- (int)_segmentIndexForElementIndex:(int)elementIndex;	// 0x34ae1c39
- (void)addClip;	// 0x34ae1149
- (void)appendBezierPath:(id)path;	// 0x34ae1e69
- (void)appendBezierPathWithArcFromPoint:(CGPoint)point toPoint:(CGPoint)point2 radius:(float)radius;	// 0x34ae2619
- (void)appendBezierPathWithArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4;	// 0x34ae25d9
- (void)appendBezierPathWithArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x34ae2359
- (void)appendBezierPathWithOvalInRect:(CGRect)rect;	// 0x34ae207d
- (void)appendBezierPathWithPoints:(CGPoint *)points count:(int)count;	// 0x34ae2001
- (void)appendBezierPathWithRect:(CGRect)rect;	// 0x34ae1f75
- (void)appendBezierPathWithRoundedRect:(CGRect)roundedRect xRadius:(float)radius yRadius:(float)radius3;	// 0x34ae2939
- (id)bezierPathByFlatteningPath;	// 0x34ae1521
- (id)bezierPathByReversingPath;	// 0x34ae160d
- (CGRect)bounds;	// 0x34ae1ae5
// converted property getter: - (BOOL)cachesBezierPath;	// 0x34ae3055
- (void)closePath;	// 0x34ae0a59
- (BOOL)containsPoint:(CGPoint)point;	// 0x34ae2fc5
// converted property getter: - (CGRect)controlPointBounds;	// 0x34ae195d
- (id)copyWithZone:(NSZone *)zone;	// 0x34ae07c1
- (CGPoint)currentPoint;	// 0x34ae18d9
- (void)curveToPoint:(CGPoint)point controlPoint1:(CGPoint)a1 controlPoint2:(CGPoint)a2;	// 0x34ae09c5
- (void)dealloc;	// 0x34ae06b1
- (id)description;	// 0x34ae3559
- (unsigned)elementAtIndex:(int)index;	// 0x34ae1c25
- (unsigned)elementAtIndex:(int)index associatedPoints:(CGPoint *)points;	// 0x34ae1d21
// converted property getter: - (int)elementCount;	// 0x34ae1bc1
- (void)fill;	// 0x34ae10d1
- (void)finalize;	// 0x34ae0739
// converted property getter: - (float)flatness;	// 0x34ae0d45
- (void)flattenIntoPath:(id)path;	// 0x34ae1419
- (void)getLineDash:(float *)dash count:(int *)count phase:(float *)phase;	// 0x34ae0e4d
- (BOOL)isEmpty;	// 0x34ae18c1
- (BOOL)isHitByPath:(id)path;	// 0x34ae3045
- (BOOL)isHitByPoint:(CGPoint)point;	// 0x34ae3029
- (BOOL)isHitByRect:(CGRect)rect;	// 0x34ae3041
- (BOOL)isStrokeHitByPath:(id)path;	// 0x34ae3051
- (BOOL)isStrokeHitByPoint:(CGPoint)point;	// 0x34ae3049
- (BOOL)isStrokeHitByRect:(CGRect)rect;	// 0x34ae304d
// converted property getter: - (unsigned)lineCapStyle;	// 0x34ae0c89
// converted property getter: - (unsigned)lineJoinStyle;	// 0x34ae0cbd
- (void)lineToPoint:(CGPoint)point;	// 0x34ae0955
// converted property getter: - (float)lineWidth;	// 0x34ae0c69
// converted property getter: - (float)miterLimit;	// 0x34ae0d25
- (void)moveToPoint:(CGPoint)point;	// 0x34ae0945
- (void)relativeCurveToPoint:(CGPoint)point controlPoint1:(CGPoint)a1 controlPoint2:(CGPoint)a2;	// 0x34ae0bb5
- (void)relativeLineToPoint:(CGPoint)point;	// 0x34ae0b4d
- (void)relativeMoveToPoint:(CGPoint)point;	// 0x34ae0ae5
- (void)removeAllPoints;	// 0x34ae0a69
- (void)setAssociatedPoints:(CGPoint *)points atIndex:(int)index;	// 0x34ae1db1
// converted property setter: - (void)setCachesBezierPath:(BOOL)path;	// 0x34ae3059
- (void)setClip;	// 0x34ae11c9
// converted property setter: - (void)setFlatness:(float)flatness;	// 0x34ae0d55
// converted property setter: - (void)setLineCapStyle:(unsigned)style;	// 0x34ae0c9d
- (void)setLineDash:(const float *)dash count:(int)count phase:(float)phase;	// 0x34ae0d65
// converted property setter: - (void)setLineJoinStyle:(unsigned)style;	// 0x34ae0cd1
// converted property setter: - (void)setLineWidth:(float)width;	// 0x34ae0c79
// converted property setter: - (void)setMiterLimit:(float)limit;	// 0x34ae0d35
// converted property setter: - (void)setWindingRule:(unsigned)rule;	// 0x34ae0d05
- (void)stroke;	// 0x34ae0fe5
- (void)subdivideBezierWithFlatness:(float)flatness startPoint:(CGPoint)point controlPoint1:(CGPoint)a1 controlPoint2:(CGPoint)a2 endPoint:(CGPoint)point5;	// 0x34ae1221
- (void)transformUsingAffineTransform:(id)transform;	// 0x34ae1801
// converted property getter: - (unsigned)windingRule;	// 0x34ae0cf1
@end

