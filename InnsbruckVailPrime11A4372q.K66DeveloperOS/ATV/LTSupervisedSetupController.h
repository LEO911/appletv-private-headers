/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVAPTestResultDelegate.h"
#import "BRTextWithSpinnerController.h"

@class NSTimer;
@protocol LTWirelessSetupResultDelegate;

__attribute__((visibility("hidden")))
@interface LTSupervisedSetupController : BRTextWithSpinnerController <ATVAPTestResultDelegate> {
	NSTimer *_waitForNetworkTimer;	// 120 = 0x78
	BOOL _completed;	// 124 = 0x7c
	id<LTWirelessSetupResultDelegate> _delegate;	// 128 = 0x80
}
@property(assign, nonatomic) __weak id<LTWirelessSetupResultDelegate> delegate;	// G=0x2033bd; S=0x2033dd; @synthesize=_delegate
- (void).cxx_destruct;	// 0x2033f1
- (void)_finishedSetupWithStatus:(BOOL)status;	// 0x20355d
- (void)_installStoredProfile;	// 0x203911
- (void)_networkStateChanged:(id)changed;	// 0x2037a1
- (void)_networkTimedOut:(id)anOut;	// 0x203759
- (void)_runNetworkTest;	// 0x20386d
- (void)_startSetup;	// 0x203421
- (void)_validateNetwork;	// 0x2037e9
- (void)_waitForNetwork;	// 0x203689
- (void)dealloc;	// 0x203211
// declared property getter: - (id)delegate;	// 0x2033bd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2033dd
- (void)testCompleted:(BOOL)completed;	// 0x2032a9
- (void)wasPopped;	// 0x203189
- (void)wasPushed;	// 0x20310d
@end

