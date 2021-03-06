/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <NSObject.h> // Unknown library
#import "CoreImage-Structs.h"


@interface CIContext : NSObject {
	CIContextInternal *_priv;	// 4 = 0x4
}
+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)render toBitmap:(void *)bitmap rowBytes:(int)bytes bounds:(CGRect)bounds format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x36b24cc5
+ (id)_singletonContext;	// 0x36b24791
+ (BOOL)applicationIsInForegroundState;	// 0x36b262a1
+ (id)clContextOptions:(id)options;	// 0x36b264d1
+ (id)context;	// 0x36b247fd
+ (id)contextWithEAGLContext:(id)eaglcontext;	// 0x36b24909
+ (id)contextWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x36b24951
+ (id)contextWithOptions:(id)options;	// 0x36b2481d
+ (id)glesContextOptions:(id)options;	// 0x36b26469
+ (Context *)glesInternalContextOptions:(id)options;	// 0x36b262ad
- (id)init;	// 0x36b24bdd
- (id)initWithEAGLContext:(id)eaglcontext;	// 0x36b2499d
- (id)initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x36b249b1
- (CGColorSpaceRef)_colorspace;	// 0x36b266f9
- (void)_gpuContextCheck;	// 0x36b2670d
- (id)_initWithInternalRepresentation:(void *)internalRepresentation;	// 0x36b26681
- (void)_insertEventMarker:(const char *)marker;	// 0x36b25449
- (bool)_isEAGLBackedContext;	// 0x36b25419
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect;	// 0x36b25f41
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect format:(int)format;	// 0x36b25fa1
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x36b25ff1
- (IOSurfaceRef)createIOSurface:(id)surface;	// 0x36b25931
- (IOSurfaceRef)createIOSurface:(id)surface fromRect:(CGRect)rect;	// 0x36b25985
- (void)dealloc;	// 0x36b24c55
- (void)drawImage:(id)image atPoint:(CGPoint)point fromRect:(CGRect)rect;	// 0x36b25479
- (void)drawImage:(id)image inRect:(CGRect)rect fromRect:(CGRect)rect3;	// 0x36b25531
- (CGSize)inputImageMaximumSize;	// 0x36b26239
- (void)lock;	// 0x36b24769
- (unsigned long)maximumInputImageSize;	// 0x36b26209
- (unsigned long)maximumOutputImageSize;	// 0x36b26221
- (CGSize)outputImageMaximumSize;	// 0x36b2626d
- (void)render:(id)render toBitmap:(void *)bitmap rowBytes:(int)bytes bounds:(CGRect)bounds format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x36b24ced
- (void)render:(id)render toCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x36b2508d
- (void)render:(id)render toCVPixelBuffer:(CVBufferRef)cvpixelBuffer bounds:(CGRect)bounds colorSpace:(CGColorSpaceRef)space;	// 0x36b25101
- (void)render:(id)render toIOSurface:(IOSurfaceRef)iosurface bounds:(CGRect)bounds colorSpace:(CGColorSpaceRef)space;	// 0x36b25b05
- (void)render:(id)render toTexture:(unsigned)texture bounds:(CGRect)bounds colorSpace:(CGColorSpaceRef)space;	// 0x36b25839
- (void)unlock;	// 0x36b2477d
@end

