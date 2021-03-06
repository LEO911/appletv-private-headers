/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import "TLVibratorController.h"

@class NSDictionary;

@interface TLVibratorAsynchronousController : TLVibratorController {
	dispatch_queue_s *_avControllerAccessQueue;	// 12 = 0xc
	NSDictionary *_vibrationPattern;	// 16 = 0x10
	int _nextIterationScheduledStatus;	// 20 = 0x14
}
@property(retain, setter=_setVibrationPattern:) NSDictionary *_vibrationPattern;	// G=0x31f18885; S=0x31f18899; @synthesize
- (id)initWithAVController:(id)avcontroller;	// 0x31f182cd
- (void)_processNextIteration;	// 0x31f187ed
- (void)_scheduleNextIterationIfNeeded;	// 0x31f18755
// declared property setter: - (void)_setVibrationPattern:(id)pattern;	// 0x31f18899
// declared property getter: - (id)_vibrationPattern;	// 0x31f18885
- (id)avController;	// 0x31f18451
- (void)dealloc;	// 0x31f183dd
- (void)setAVController:(id)controller;	// 0x31f18591
- (void)turnOff;	// 0x31f18725
- (void)turnOnWithVibrationPattern:(id)vibrationPattern;	// 0x31f186f5
- (void)uninterruptAVControllerIfAppropriate;	// 0x31f18659
@end

