/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import <__objc_empty_cache.h> // Unknown library


@interface SKLayer : __objc_empty_cache {
	id _context;	// 48 = 0x30
	BOOL _drawsBorder;	// 52 = 0x34
}
@property(retain) id context;	// G=0x35a9e905; S=0x35a9e8c1; converted property
+ (void)createColors;	// 0x35a9f0f5
+ (void)initialize;	// 0x35a9e599
- (id)init;	// 0x35a9e5a9
// converted property getter: - (id)context;	// 0x35a9e905
- (void)dealloc;	// 0x35a9e6c5
- (void)drawInContext:(CGContextRef)context;	// 0x35a9f009
- (void)drawLineInContext:(CGContextRef)context from:(CGPoint)from to:(CGPoint)to thickness:(float)thickness color:(CGColorRef)color;	// 0x35a9ef39
- (void)drawRectInContext:(CGContextRef)context rect:(CGRect)rect thickness:(float)thickness strokeColor:(CGColorRef)color fillColor:(CGColorRef)color5;	// 0x35a9ef81
- (void)flipHorizontal;	// 0x35a9ecd1
- (void)flipVertical;	// 0x35a9ee05
- (void)logBounds;	// 0x35a9e839
- (void)logFrame;	// 0x35a9e7b1
- (void)rotate180;	// 0x35a9eb9d
- (void)rotateC;	// 0x35a9e935
- (void)rotateCC;	// 0x35a9ea69
- (void)setBounds:(CGRect)bounds;	// 0x35a9e711
// converted property setter: - (void)setContext:(id)context;	// 0x35a9e8c1
- (void)setDrawsBorder:(BOOL)border;	// 0x35a9e915
@end

