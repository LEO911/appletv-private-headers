/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import "TLVibrationRecorderRippleView.h"

@class TLVibrationPattern;
@protocol TLVibrationRecorderTouchSurfaceDelegate;

@interface TLVibrationRecorderTouchSurface : TLVibrationRecorderRippleView {
	id<TLVibrationRecorderTouchSurfaceDelegate> _delegate;	// 160 = 0xa0
	BOOL _recordingMode;	// 164 = 0xa4
	id _recordingContextObject;	// 168 = 0xa8
	BOOL _shouldIgnoreCurrentTouch;	// 172 = 0xac
	BOOL _replayMode;	// 173 = 0xad
	TLVibrationPattern *_vibrationPatternToReplay;	// 176 = 0xb0
	double _replayModeWasEnteredStartTime;	// 180 = 0xb4
	double _vibrationPatternMaximumDuration;	// 188 = 0xbc
}
@property(retain, nonatomic, setter=_setVibrationPatternToReplay:) TLVibrationPattern *_vibrationPatternToReplay;	// G=0x31f14331; S=0x31f14341; @synthesize
@property(assign, nonatomic) id<TLVibrationRecorderTouchSurfaceDelegate> delegate;	// G=0x31f14311; S=0x31f14321; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;	// 0x31f139b5
// declared property setter: - (void)_setVibrationPatternToReplay:(id)replay;	// 0x31f14341
- (void)_updateTouchLocationForReplayMode:(id)replayMode;	// 0x31f141c1
// declared property getter: - (id)_vibrationPatternToReplay;	// 0x31f14331
- (void)currentVibrationComponentShouldEnd;	// 0x31f14059
- (void)dealloc;	// 0x31f13ad5
// declared property getter: - (id)delegate;	// 0x31f14311
- (void)enterRecordingMode;	// 0x31f13f3d
- (void)enterReplayModeWithVibrationPattern:(id)vibrationPattern;	// 0x31f1409d
- (void)exitRecordingMode;	// 0x31f13fc1
- (void)exitReplayMode;	// 0x31f14139
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31f14321
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31f13b59
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31f13f2d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31f13e21
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31f13cad
@end

