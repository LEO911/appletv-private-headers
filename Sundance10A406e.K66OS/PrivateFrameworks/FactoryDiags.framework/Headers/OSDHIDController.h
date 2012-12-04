/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library

@class NSString, OSDHIDEventSystemClient;

@interface OSDHIDController : NSObject {
	OSDHIDEventSystemClient *_hidClient;	// 4 = 0x4
	NSString *_deviceName;	// 8 = 0x8
}
@property(assign) float brightness;	// G=0x3739d0c5; S=0x3739d149; @dynamic
@property(assign) BOOL brightnessAutoAdjustment;	// G=0x3739d1ed; S=0x3739d22d; @dynamic
@property(assign) float brightnessFactor;	// G=0x3739d289; S=0x3739d2c9; @dynamic
@property(readonly, retain) OSDHIDEventSystemClient *hidClient;	// G=0x3739d0b5; converted property
+ (id)sharedInstance;	// 0x3739cef1
- (id)init;	// 0x3739cfc1
// declared property getter: - (float)brightness;	// 0x3739d0c5
// declared property getter: - (BOOL)brightnessAutoAdjustment;	// 0x3739d1ed
// declared property getter: - (float)brightnessFactor;	// 0x3739d289
- (void)dealloc;	// 0x3739d061
// converted property getter: - (id)hidClient;	// 0x3739d0b5
// declared property setter: - (void)setBrightness:(float)brightness;	// 0x3739d149
// declared property setter: - (void)setBrightnessAutoAdjustment:(BOOL)adjustment;	// 0x3739d22d
// declared property setter: - (void)setBrightnessFactor:(float)factor;	// 0x3739d2c9
@end
