/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>
#import "_UISettingsKeyObserver.h"

@class UIWindow, UIView, _UIViewerRelativeDevicePose, UILabel, _UIMotionAnalyzerSettings;

__attribute__((visibility("hidden")))
@interface _UIMotionAnalyzer : NSObject <_UISettingsKeyObserver> {
	_UIMotionAnalyzerSettings *_settings;	// 4 = 0x4
	float _smoothingDegree;	// 8 = 0x8
	float _referenceShiftSpeed;	// 12 = 0xc
	float _distanceMultiplier;	// 16 = 0x10
	BOOL _hasReferenceQuaternion;	// 20 = 0x14
	GLKQuaternion _referenceQuaternion;	// 32 = 0x20
	GLKQuaternion _absoluteQuaternion;	// 48 = 0x30
	double _lastUpdate;	// 64 = 0x40
	double _idleStartTime;	// 72 = 0x48
	UIOffset _idleStartOffset;	// 80 = 0x50
	float _jumpThreshold;	// 88 = 0x58
	float _idleLeeway;	// 92 = 0x5c
	float _secondsBeforeIdle;	// 96 = 0x60
	float _lockValue;	// 100 = 0x64
	float _lockStrength;	// 104 = 0x68
	UIWindow *_diagnosticsWindow;	// 108 = 0x6c
	UILabel *_idleIndicator;	// 112 = 0x70
	UIView *_horizontalLockIndicator;	// 116 = 0x74
	UIView *_verticalLockIndicator;	// 120 = 0x78
	_UIViewerRelativeDevicePose *_viewerRelativeDevicePose;	// 124 = 0x7c
}
@property(readonly, assign, nonatomic) _UIViewerRelativeDevicePose *viewerRelativeDevicePose;	// G=0x2f989b35; @synthesize=_viewerRelativeDevicePose
- (id)init;	// 0x2f987bc9
- (id)initWithSettings:(id)settings;	// 0x2f987ae1
- (void)_createDiagnosticsWindow;	// 0x2f9899f1
- (void)_createDirectionLockIndicators;	// 0x2f9896a9
- (void)_createIdleIndicator;	// 0x2f9893f1
- (UIOffset)_currentRawOffset:(GLKQuaternion)offset;	// 0x2f9883f1
- (int)_directionLockStatus;	// 0x2f988d81
- (float)_directionLockStrength;	// 0x2f988ddd
- (float)_referenceShiftRadiansPerSecondForAngle:(float)angle;	// 0x2f988aa9
- (GLKQuaternion)_relativeQuaternion;	// 0x2f988b01
- (void)_shiftReferenceToYieldRelativeQuaternion:(GLKQuaternion)yieldRelativeQuaternion;	// 0x2f988c21
- (void)_showIdleUI:(BOOL)ui;	// 0x2f989219
- (void)_tearDownDiagnosticsWindow;	// 0x2f989af5
- (void)_tearDownDirectionLockIndicators;	// 0x2f989981
- (void)_tearDownIdleIndicator;	// 0x2f98966d
- (void)_updateAcceleratedOutputRangeFixingOffset:(UIOffset)offset;	// 0x2f988371
- (void)_updateDirectionalLockIndicators;	// 0x2f989245
- (void)_updateIdleStateForRawOffset:(UIOffset)rawOffset timestamp:(double)timestamp;	// 0x2f988ded
- (void)_updateReferenceAttitude:(GLKQuaternion)attitude timestamp:(double)timestamp;	// 0x2f988571
- (void)_updateSettings;	// 0x2f988ef1
- (void)_updateSmoothedOffsetForRawOffset:(UIOffset)rawOffset;	// 0x2f9880f1
- (void)dealloc;	// 0x2f987c25
- (id)description;	// 0x2f987d01
- (BOOL)isIdleGivenTimestamp:(double)timestamp;	// 0x2f988e9d
- (void)reset;	// 0x2f988041
- (void)settings:(id)settings changedValueForKey:(id)key;	// 0x2f988ee1
- (void)updateWithDeviceMotion:(id)deviceMotion;	// 0x2f987d71
- (void)updateWithDeviceMotionStruct:(const XXStruct_cN_7IB *)deviceMotionStruct timestamp:(double)timestamp;	// 0x2f987e21
// declared property getter: - (id)viewerRelativeDevicePose;	// 0x2f989b35
@end
