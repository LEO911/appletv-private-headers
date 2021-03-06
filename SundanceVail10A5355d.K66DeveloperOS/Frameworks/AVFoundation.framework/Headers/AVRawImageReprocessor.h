/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVRawImageReprocessorInternal;

@interface AVRawImageReprocessor : NSObject {
	AVRawImageReprocessorInternal *_internal;	// 4 = 0x4
}
+ (void)initialize;	// 0x326ffd1d
- (id)init;	// 0x326ffd41
- (void)dealloc;	// 0x326ffdf5
- (void)handlePhotoReady:(id)ready;	// 0x32700325
- (void)reprocessRawImageSurface:(IOSurfaceRef)surface andMetadata:(id)metadata withOutputSettings:(id)outputSettings completionHandler:(id)handler;	// 0x326fff7d
@end

