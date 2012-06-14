/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <NSObject.h> // Unknown library
#import "VideoProcessing-Structs.h"

@class CMMotionManager, NSOperationQueue;

@interface VPCoreMotionDelegate : NSObject {
@private
	CMMotionManager *motionManager;	// 4 = 0x4
	NSOperationQueue *operationQueue;	// 8 = 0x8
	XXStruct_N5B6hD quaternionBuffer[64];	// 12 = 0xc
	double timestampBuffer[64];	// 2060 = 0x80c
	int quaternionBufferIndex;	// 2572 = 0xa0c
	opaque_pthread_mutex_t ringMutex;	// 2576 = 0xa10
	XXStruct_N5B6hD lastReadQuaternion;	// 2620 = 0xa3c
	VPCoreMotionDelegate *weakSelf;	// 2652 = 0xa5c
	FILE *gyroFile;	// 2656 = 0xa60
}
- (id)init;	// 0x344c0bf1
- (void)dealloc;	// 0x344c0cd1
- (XXStruct_N5B6hD)getQuaternionByTimestamp:(double)timestamp;	// 0x344c10a1
- (void)processGyroData:(id)data withError:(id)error;	// 0x344c0d71
- (void)start;	// 0x344c0fb1
- (void)stop;	// 0x344c107d
@end
