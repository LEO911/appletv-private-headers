/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTextWithSpinnerController.h"

@class BRMediaHost;
@protocol BRMediaProvider, BRMediaLoading;

__attribute__((visibility("hidden")))
@interface BRMediaHostConnectionDialog : BRTextWithSpinnerController {
@private
	BRMediaHost *_mediaHost;	// 108 = 0x6c
	id<BRMediaProvider, BRMediaLoading> _providerNeedingAuth;	// 112 = 0x70
	BRController *_controllerUnderneath;	// 116 = 0x74
	BOOL _timerSatisfied;	// 120 = 0x78
	BOOL _wasBuried;	// 121 = 0x79
	BOOL _passwordWasEntered;	// 122 = 0x7a
	BOOL _authAlreadyAttempted;	// 123 = 0x7b
}
@property(retain) BRMediaHost *mediaHost;	// G=0x32a4b081; S=0x32a4b041; converted property
- (id)initWithHost:(id)host;	// 0x32a4add1
- (void)_authRequired:(id)required;	// 0x32a4bdd5
- (void)_checkMountStatus:(id)status;	// 0x32a4b695
- (void)_hostsChanged:(id)changed;	// 0x32a4c19d
- (void)_waitForHostReset:(id)hostReset;	// 0x32a4bab9
- (BOOL)brEventAction:(id)action;	// 0x32a4b091
- (void)dealloc;	// 0x32a4af0d
// converted property getter: - (id)mediaHost;	// 0x32a4b081
// converted property setter: - (void)setMediaHost:(id)host;	// 0x32a4b041
- (void)textDidChange:(id)text;	// 0x32a4b4a1
- (void)textDidEndEditing:(id)text;	// 0x32a4b4a5
- (void)wasBuried;	// 0x32a4b461
- (void)wasPushed;	// 0x32a4b1d5
@end
