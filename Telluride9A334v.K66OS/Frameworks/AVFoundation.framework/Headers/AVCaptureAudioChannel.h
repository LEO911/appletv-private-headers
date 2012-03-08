/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {
@private
	AVCaptureAudioChannelInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) float averagePowerLevel;	// G=0x35474a55; 
@property(readonly, assign, nonatomic) float peakHoldLevel;	// G=0x35474a21; 
- (id)initWithConnection:(id)connection;	// 0x35474981
// declared property getter: - (float)averagePowerLevel;	// 0x35474a55
- (void)dealloc;	// 0x35474a89
- (void)invalidate;	// 0x354747b9
// declared property getter: - (float)peakHoldLevel;	// 0x35474a21
@end
