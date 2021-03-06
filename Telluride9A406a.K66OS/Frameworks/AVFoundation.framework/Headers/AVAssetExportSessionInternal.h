/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVAudioMix, AVWeakReference, AVVideoComposition, NSArray, NSURL, NSError, AVURLAsset, NSString, AVAssetTrack;

@interface AVAssetExportSessionInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	dispatch_queue_s *readWriteQueue;	// 8 = 0x8
	OpaqueFigRemaker *remaker;	// 12 = 0xc
	int status;	// 16 = 0x10
	NSError *error;	// 20 = 0x14
	float progress;	// 24 = 0x18
	AVURLAsset *asset;	// 28 = 0x1c
	AVAssetTrack *firstVideoTrack;	// 32 = 0x20
	NSString *preset;	// 36 = 0x24
	NSString *preset16x9;	// 40 = 0x28
	NSURL *outputURL;	// 44 = 0x2c
	NSString *outputFileType;	// 48 = 0x30
	AVAudioMix *audioMix;	// 52 = 0x34
	AVVideoComposition *videoComposition;	// 56 = 0x38
	NSArray *metadata;	// 60 = 0x3c
	XXStruct_yD8eWC timeRange;	// 64 = 0x40
	long long maxFileSize;	// 112 = 0x70
	id handler;	// 120 = 0x78
	BOOL optimizeForNetworkUse;	// 124 = 0x7c
	BOOL outputFileCreatedByRemaker;	// 125 = 0x7d
	dispatch_queue_s *remakerNotificationSerializationQueue;	// 128 = 0x80
}
@end

