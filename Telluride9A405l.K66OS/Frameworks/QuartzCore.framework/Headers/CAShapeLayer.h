/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString, NSArray;

@interface CAShapeLayer : CALayer {
}
@property(assign) CGColorRef fillColor;	// G=0x31355df5; S=0x31355ded; 
@property(copy) NSString *fillRule;	// G=0x31355de5; S=0x31355ddd; 
@property(copy) NSString *lineCap;	// G=0x31355d75; S=0x31355d6d; 
@property(copy) NSArray *lineDashPattern;	// G=0x31355d65; S=0x31355d5d; 
@property(assign) float lineDashPhase;	// G=0x31355d55; S=0x31355d4d; 
@property(copy) NSString *lineJoin;	// G=0x31355d85; S=0x31355d7d; 
@property(assign) float lineWidth;	// G=0x31355da5; S=0x31355d9d; 
@property(assign) float miterLimit;	// G=0x31355d95; S=0x31355d8d; 
@property(assign) CGPathRef path;	// G=0x31355e05; S=0x31355dfd; 
@property(assign) CGColorRef strokeColor;	// G=0x31355dd5; S=0x31355dcd; 
@property(assign) float strokeEnd;	// G=0x31355db5; S=0x31355dad; 
@property(assign) float strokeStart;	// G=0x31355dc5; S=0x31355dbd; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x31355c05
+ (id)defaultValueForKey:(id)key;	// 0x31355c5d
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x31355ea5
- (void)_renderForegroundInContext:(CGContextRef)context;	// 0x31356419
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x31355e59
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x31355e0d
- (void)didChangeValueForKey:(id)key;	// 0x31355ba5
// declared property getter: - (CGColorRef)fillColor;	// 0x31355df5
// declared property getter: - (id)fillRule;	// 0x31355de5
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x313569dd
// declared property getter: - (id)lineCap;	// 0x31355d75
// declared property getter: - (id)lineDashPattern;	// 0x31355d65
// declared property getter: - (float)lineDashPhase;	// 0x31355d55
// declared property getter: - (id)lineJoin;	// 0x31355d85
// declared property getter: - (float)lineWidth;	// 0x31355da5
// declared property getter: - (float)miterLimit;	// 0x31355d95
// declared property getter: - (CGPathRef)path;	// 0x31355e05
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x31355ded
// declared property setter: - (void)setFillRule:(id)rule;	// 0x31355ddd
// declared property setter: - (void)setLineCap:(id)cap;	// 0x31355d6d
// declared property setter: - (void)setLineDashPattern:(id)pattern;	// 0x31355d5d
// declared property setter: - (void)setLineDashPhase:(float)phase;	// 0x31355d4d
// declared property setter: - (void)setLineJoin:(id)join;	// 0x31355d7d
// declared property setter: - (void)setLineWidth:(float)width;	// 0x31355d9d
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x31355d8d
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x31355dfd
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x31355dcd
// declared property setter: - (void)setStrokeEnd:(float)end;	// 0x31355dad
// declared property setter: - (void)setStrokeStart:(float)start;	// 0x31355dbd
// declared property getter: - (CGColorRef)strokeColor;	// 0x31355dd5
// declared property getter: - (float)strokeEnd;	// 0x31355db5
// declared property getter: - (float)strokeStart;	// 0x31355dc5
@end
