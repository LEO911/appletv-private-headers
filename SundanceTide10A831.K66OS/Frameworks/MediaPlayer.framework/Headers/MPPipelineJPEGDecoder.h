/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface MPPipelineJPEGDecoder : NSObject {
	StackItem *stackTopBGRA;	// 4 = 0x4
	StackItem *stackTop420;	// 8 = 0x8
	StackItem *stackTopJPEG;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *stackQueueBGRA;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *stackQueue420;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *stackQueueJPEG;	// 24 = 0x18
	CFDictionaryRef acceleratorOptions;	// 28 = 0x1c
	CFDictionaryRef surfaceBGRAOptions;	// 32 = 0x20
	CGSize imageSize;	// 36 = 0x24
	unsigned requestedImageCount;	// 44 = 0x2c
	int currentBGRASurfaceCount;	// 48 = 0x30
	unsigned maxJPEGSize;	// 52 = 0x34
}
@property(assign) unsigned maxJPEGSize;	// G=0x36f81dc5; S=0x36f81dd9; @synthesize
+ (IOSurfaceAcceleratorRef)_createAccelerator;	// 0x36f81491
+ (IOSurfaceAcceleratorRef)_popSurfaceAccelerator;	// 0x36f81529
+ (void)_pushSurfaceAccelerator:(IOSurfaceAcceleratorRef)accelerator;	// 0x36f814b9
+ (id)_stackQueueTransferSession;	// 0x36f81439
- (id)initWithSize:(CGSize)size cachedCount:(int)count;	// 0x36f80c1d
- (IOSurfaceRef)_create420Surface;	// 0x36f815cd
- (IOSurfaceRef)_createBGRASurface;	// 0x36f8170d
- (IOSurfaceRef)_createJPEGSurface;	// 0x36f815fd
- (void)_decodeJPEG:(id)jpeg withInputSurface:(IOSurfaceRef)inputSurface toIOSurface:(IOSurfaceRef)iosurface;	// 0x36f81c51
- (id)_newImageFrom420Surface:(IOSurfaceRef)a420Surface;	// 0x36f81b7d
- (IOSurfaceRef)_pop420Surface;	// 0x36f817d9
- (IOSurfaceRef)_popBGRASurface;	// 0x36f81a65
- (IOSurfaceRef)_popJPEGSurfaceOfSize:(unsigned)size;	// 0x36f818f1
- (void)_push420Surface:(IOSurfaceRef)surface;	// 0x36f81879
- (void)_pushBGRASurface:(IOSurfaceRef)surface;	// 0x36f81b05
- (void)_pushJPEGSurface:(IOSurfaceRef)surface;	// 0x36f819ed
- (void)_receivedMemoryWarning:(id)warning;	// 0x36f81d01
- (BOOL)_removeBGRASurface;	// 0x36f81741
- (void)dealloc;	// 0x36f812f5
// declared property getter: - (unsigned)maxJPEGSize;	// 0x36f81dc5
- (id)newImageFrom420Data:(id)a420Data;	// 0x36f81131
- (id)newImageFromJPEGData:(id)jpegdata;	// 0x36f81249
// declared property setter: - (void)setMaxJPEGSize:(unsigned)size;	// 0x36f81dd9
@end
