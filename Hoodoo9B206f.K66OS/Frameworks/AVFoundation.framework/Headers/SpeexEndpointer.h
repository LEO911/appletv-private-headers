/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "Endpointer.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface SpeexEndpointer : NSObject <Endpointer> {
	double mStartWaitTime;	// 4 = 0x4
	double mInterspeechWaitTime;	// 12 = 0xc
	double mEndWaitTime;	// 20 = 0x14
	int mEndpointMode;	// 28 = 0x1c
	unsigned long mFrameRate;	// 32 = 0x20
	int mLastStatus;	// 36 = 0x24
@private
	void *_impl;	// 40 = 0x28
}
@property(assign) double endWaitTime;	// G=0x3270b8a9; S=0x3270b8c1; 
@property(assign) int endpointMode;	// G=0x3270b70d; S=0x3270b71d; 
@property(assign) double interspeechWaitTime;	// G=0x3270b805; S=0x3270b81d; 
@property(assign) double startWaitTime;	// G=0x3270b761; S=0x3270b779; 
- (id)init;	// 0x3270b3b9
- (BOOL)configureWithSampleRate:(double)sampleRate andFrameRate:(unsigned long)rate;	// 0x3270b5c1
- (void)dealloc;	// 0x3270b541
// declared property getter: - (double)endWaitTime;	// 0x3270b8a9
// declared property getter: - (int)endpointMode;	// 0x3270b70d
- (int)getStatus:(AudioQueueBuffer *)status;	// 0x3270b6c9
- (int)getStatus:(float *)status count:(unsigned long)count;	// 0x3270b94d
// declared property getter: - (double)interspeechWaitTime;	// 0x3270b805
- (void)reset;	// 0x3270b6d9
// declared property setter: - (void)setEndWaitTime:(double)time;	// 0x3270b8c1
// declared property setter: - (void)setEndpointMode:(int)mode;	// 0x3270b71d
// declared property setter: - (void)setInterspeechWaitTime:(double)time;	// 0x3270b81d
// declared property setter: - (void)setStartWaitTime:(double)time;	// 0x3270b779
// declared property getter: - (double)startWaitTime;	// 0x3270b761
@end
