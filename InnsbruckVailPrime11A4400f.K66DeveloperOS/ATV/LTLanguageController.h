/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface LTLanguageController : BRViewController {
	BOOL _useVoiceOverGreeting;	// 104 = 0x68
	BOOL _scanningForBluetoothDevicesDisabled;	// 105 = 0x69
	BOOL _promptForAutomaticSetupDisabled;	// 106 = 0x6a
}
@property(assign, nonatomic) BOOL promptForAutomaticSetupDisabled;	// G=0x45b3f1; S=0x45b225; @synthesize=_promptForAutomaticSetupDisabled
@property(assign, nonatomic) BOOL scanningForBluetoothDevicesDisabled;	// G=0x45b3e1; S=0x45b2f1; @synthesize=_scanningForBluetoothDevicesDisabled
@property(assign, nonatomic) BOOL useVoiceOverGreeting;	// G=0x45b3c1; S=0x45b3d1; @synthesize=_useVoiceOverGreeting
- (id)init;	// 0x45b04d
- (void)_showLanguageChooser;	// 0x45b401
- (BOOL)brEventAction:(id)action;	// 0x45b199
- (void)dealloc;	// 0x45b0ed
- (void)languageSelected:(id)selected;	// 0x45b1b9
// declared property getter: - (BOOL)promptForAutomaticSetupDisabled;	// 0x45b3f1
// declared property getter: - (BOOL)scanningForBluetoothDevicesDisabled;	// 0x45b3e1
// declared property setter: - (void)setPromptForAutomaticSetupDisabled:(BOOL)automaticSetupDisabled;	// 0x45b225
// declared property setter: - (void)setScanningForBluetoothDevicesDisabled:(BOOL)bluetoothDevicesDisabled;	// 0x45b2f1
// declared property setter: - (void)setUseVoiceOverGreeting:(BOOL)greeting;	// 0x45b3d1
// declared property getter: - (BOOL)useVoiceOverGreeting;	// 0x45b3c1
- (void)wasPushed;	// 0x45b159
@end

