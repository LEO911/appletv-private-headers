/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library

@class SBDeviceLockTitle, SBDeviceLockEntryField, NSString;

@interface SBDeviceLockView : UIView {
	int _style;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
	SBDeviceLockTitle *_statusView;	// 92 = 0x5c
	SBDeviceLockEntryField *_entryView;	// 96 = 0x60
	id _delegate;	// 100 = 0x64
}
@property(assign, nonatomic) id delegate;	// G=0x3547d539; S=0x3547d549; @synthesize=_delegate
@property(readonly, assign, nonatomic) UIView *entryView;	// G=0x3547d1c1; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x3547d529; S=0x3547d4a5; @synthesize=_interfaceOrientation
@property(readonly, assign, nonatomic, getter=isKeypadMinimized) BOOL keypadMinimized;	// G=0x3547d34d; 
@property(readonly, assign, nonatomic) UIView *keypadView;	// G=0x3547d1d1; 
@property(retain, nonatomic) NSString *passcode;	// G=0x3547d2b9; S=0x3547d2d9; 
@property(assign, nonatomic) BOOL playsKeyboardClicks;	// G=0x3547d33d; S=0x3547d341; 
@property(assign, nonatomic, getter=isShowingEntryStatusWarning) BOOL showingEntryStatusWarning;	// G=0x3547d2f9; S=0x3547d31d; 
@property(assign, nonatomic, getter=isShowingStatusWarning) BOOL showingStatusWarning;	// G=0x3547d255; S=0x3547d279; 
@property(assign, nonatomic) BOOL showsEmergencyCallButton;	// G=0x3547d345; S=0x3547d349; 
@property(retain, nonatomic) NSString *statusSubtitle;	// G=0x3547d215; S=0x3547d235; 
@property(retain, nonatomic) NSString *statusTitle;	// G=0x3547d1d5; S=0x3547d1f5; 
@property(readonly, assign, nonatomic) UIView *statusView;	// G=0x3547d1b1; 
@property(readonly, assign, nonatomic) int style;	// G=0x3547d519; @synthesize=_style
+ (int)defaultStyle;	// 0x3547cde9
+ (int)defaultStyleForSiri;	// 0x3547cdc9
+ (int)defaultStyleForSiri:(BOOL)siri;	// 0x3547cd49
+ (double)deviceLockAnimationDuration;	// 0x3547ccd1
+ (id)newWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x3547ce09
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x3547cf51
- (void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;	// 0x3547d505
- (BOOL)becomeFirstResponder;	// 0x3547d091
- (void)blinkStatusView;	// 0x3547d299
- (BOOL)canBecomeFirstResponder;	// 0x3547d06d
- (void)dealloc;	// 0x3547d0fd
// declared property getter: - (id)delegate;	// 0x3547d539
- (BOOL)deviceLockEntryField:(id)field shouldInsertText:(id)text;	// 0x3547d371
- (void)deviceLockEntryFieldDidAcceptEntry:(id)deviceLockEntryField;	// 0x3547d351
- (void)deviceLockEntryFieldDidCancelEntry:(id)deviceLockEntryField;	// 0x3547d361
- (void)deviceLockEntryFieldTextDidChange:(id)deviceLockEntryFieldText;	// 0x3547d375
- (void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3547d515
// declared property getter: - (id)entryView;	// 0x3547d1c1
// declared property getter: - (int)interfaceOrientation;	// 0x3547d529
- (BOOL)isFirstResponder;	// 0x3547d0b5
// declared property getter: - (BOOL)isKeypadMinimized;	// 0x3547d34d
// declared property getter: - (BOOL)isShowingEntryStatusWarning;	// 0x3547d2f9
// declared property getter: - (BOOL)isShowingStatusWarning;	// 0x3547d255
// declared property getter: - (id)keypadView;	// 0x3547d1d1
- (void)notifyDelegateThatCancelButtonWasPressed;	// 0x3547d415
- (void)notifyDelegateThatEmergencyCallButtonWasPressed;	// 0x3547d45d
- (void)notifyDelegateThatPasscodeDidChange;	// 0x3547d385
- (void)notifyDelegateThatPasscodeWasEntered;	// 0x3547d3cd
// declared property getter: - (id)passcode;	// 0x3547d2b9
// declared property getter: - (BOOL)playsKeyboardClicks;	// 0x3547d33d
- (BOOL)resignFirstResponder;	// 0x3547d0d9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3547d549
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x3547d4a5
// declared property setter: - (void)setPasscode:(id)passcode;	// 0x3547d2d9
// declared property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x3547d341
// declared property setter: - (void)setShowingEntryStatusWarning:(BOOL)warning;	// 0x3547d31d
// declared property setter: - (void)setShowingStatusWarning:(BOOL)warning;	// 0x3547d279
// declared property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x3547d349
// declared property setter: - (void)setStatusSubtitle:(id)subtitle;	// 0x3547d235
// declared property setter: - (void)setStatusTitle:(id)title;	// 0x3547d1f5
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x3547d161
// declared property getter: - (BOOL)showsEmergencyCallButton;	// 0x3547d345
// declared property getter: - (id)statusSubtitle;	// 0x3547d215
// declared property getter: - (id)statusTitle;	// 0x3547d1d5
// declared property getter: - (id)statusView;	// 0x3547d1b1
// declared property getter: - (int)style;	// 0x3547d519
- (void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3547d501
@end
