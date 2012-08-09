/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureInput.h"

@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
	AVCaptureDeviceInputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) AVCaptureDevice *device;	// G=0x326a0151; 
+ (id)deviceInputWithDevice:(id)device error:(id *)error;	// 0x3269ff65
- (id)init;	// 0x326a005d
- (id)initWithDevice:(id)device error:(id *)error;	// 0x3269ffb5
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x326a07f9
- (void)_setDevice:(id)device;	// 0x326a0175
- (void)dealloc;	// 0x326a0075
- (id)description;	// 0x326a00d9
// declared property getter: - (id)device;	// 0x326a0151
- (void)didStartForSession:(id)session;	// 0x326a0789
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x326a0851
- (id)notReadyError;	// 0x326a0331
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x326a02e1
- (id)ports;	// 0x326a0499
- (void)setDevice:(id)device;	// 0x326a0171
- (void)willStartForSession:(id)session;	// 0x326a072d
@end
