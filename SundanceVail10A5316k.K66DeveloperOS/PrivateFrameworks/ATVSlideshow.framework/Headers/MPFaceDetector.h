/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSOperationQueue, NSMutableSet, MPDocument, NSTimer, NSLock;
@protocol MRMarimbaPlayback;

@interface MPFaceDetector : NSObject {
	MPDocument *mDocument;	// 4 = 0x4
	NSObject<MRMarimbaPlayback> *mRenderer;	// 8 = 0x8
	NSOperationQueue *mDetectionQueue;	// 12 = 0xc
	BOOL mIsCancelled;	// 16 = 0x10
	NSMutableSet *mPathsInQueue;	// 20 = 0x14
	NSLock *mPathQueueLock;	// 24 = 0x18
	NSMutableSet *mPlayingSlides;	// 28 = 0x1c
	NSLock *mPlayingSlidesLock;	// 32 = 0x20
	NSLock *mStartStopLock;	// 36 = 0x24
	NSTimer *mCheckTimer;	// 40 = 0x28
}
@property(retain, nonatomic) MPDocument *document;	// G=0x365a4bb5; S=0x365a4bc5; @synthesize=mDocument
@property(retain, nonatomic) NSObject<MRMarimbaPlayback> *renderer;	// G=0x365a4be9; S=0x365a4bf9; @synthesize=mRenderer
- (id)init;	// 0x365a3db1
- (void)_addPathToQueue:(id)queue;	// 0x365a40c1
- (void)_checkPlayingSlides;	// 0x365a47d1
- (BOOL)_pathIsInQueue:(id)queue;	// 0x365a4179
- (void)_removePathToQueue:(id)queue;	// 0x365a411d
- (void)_setupTimer;	// 0x365a4759
- (void)_start;	// 0x365a41d9
- (void)checkPlayingSlides;	// 0x365a4831
- (void)dealloc;	// 0x365a3f41
- (void)detectFaces:(id)faces;	// 0x365a450d
// declared property getter: - (id)document;	// 0x365a4bb5
// declared property getter: - (id)renderer;	// 0x365a4be9
- (void)resume;	// 0x365a44c9
// declared property setter: - (void)setDocument:(id)document;	// 0x365a4bc5
// declared property setter: - (void)setRenderer:(id)renderer;	// 0x365a4bf9
- (void)start;	// 0x365a4071
- (void)stop;	// 0x365a4af9
- (void)suspend;	// 0x365a44a9
- (BOOL)suspended;	// 0x365a44e9
@end

