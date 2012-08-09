/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class CMDrawableMapper, NSMutableArray, NSAffineTransform;

@interface CMDrawingContext : NSObject {
	CMDrawableMapper *_mapper;	// 4 = 0x4
	NSMutableArray *_actions;	// 8 = 0x8
	CGRect _frame;	// 12 = 0xc
	CGRect _finalFrame;	// 28 = 0x1c
	CFDataRef _data;	// 44 = 0x2c
	CGDataConsumerRef _dataConsumer;	// 48 = 0x30
	CGContextRef _cgContext;	// 52 = 0x34
	NSAffineTransform *_currentTransform;	// 56 = 0x38
	NSMutableArray *_transforms;	// 60 = 0x3c
	CGImageRef _fillImage;	// 64 = 0x40
}
@property(readonly, assign) CGRect frame;	// G=0x33b31489; converted property
@property(retain) CMDrawableMapper *mapper;	// G=0x33ab6441; S=0x339cead1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x339ce9c5
- (id).cxx_construct;	// 0x339ce9c1
- (void)_addTransform:(id)transform;	// 0x339da39d
- (void)_applyTransform:(id)transform;	// 0x339d70d9
- (CGContextRef)_cgContext;	// 0x33b31479
- (void)_closeContext;	// 0x339d740d
- (void)_copyCGContext;	// 0x33b31331
- (void)_playbackActions;	// 0x339d7161
- (void)_restoreLastTransform;	// 0x339da4b9
- (CGRect)_transformRect:(CGRect)rect withTransform:(id)transform;	// 0x339cf4a1
- (void)addDebugPath:(CGPathRef)path;	// 0x33b31615
- (void)addPath:(CGPathRef)path;	// 0x339d46b1
- (void)addTransform:(id)transform;	// 0x339da319
- (id)copyPDF;	// 0x33b314ad
- (float)currentScaleFactor;	// 0x33b315b1
- (CGAffineTransform)currentTransform;	// 0x339d40a9
- (void)dealloc;	// 0x339d1771
// converted property getter: - (CGRect)frame;	// 0x33b31489
// converted property getter: - (id)mapper;	// 0x33ab6441
- (CGRect)pdfFrame;	// 0x339d709d
- (void)restoreLastTransform;	// 0x339da439
- (void)setFillColor:(CGColorRef)color;	// 0x339d4641
- (void)setFillImage:(CGImageRef)image;	// 0x33ab6451
- (void)setLineDash:(id)dash;	// 0x33a2419d
- (void)setLineWidth:(float)width;	// 0x339da851
// converted property setter: - (void)setMapper:(id)mapper;	// 0x339cead1
- (void)setStrokeColor:(CGColorRef)color;	// 0x339d456d
- (CGRect)transformRectToGroup:(CGRect)group;	// 0x33b193d9
- (CGRect)transformRectToPage:(CGRect)page;	// 0x339cf44d
@end
