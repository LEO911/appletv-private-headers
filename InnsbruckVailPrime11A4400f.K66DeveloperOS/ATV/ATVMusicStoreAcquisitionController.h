/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "BRSecureResource.h"

@class BRWaitPromptControl, BRMediaPlayerWaitControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreAcquisitionController : BRController <BRSecureResource> {
	NSDictionary *_offer;	// 100 = 0x64
	BRMediaPlayerWaitControl *_loadingControl;	// 104 = 0x68
	BRWaitPromptControl *_waitPrompt;	// 108 = 0x6c
	BOOL _initiatePlaybackOnCompletion;	// 112 = 0x70
}
@property(assign, nonatomic) BOOL initiatePlaybackOnCompletion;	// G=0x1b5f61; S=0x1b5f71; @synthesize=_initiatePlaybackOnCompletion
+ (void)_acquireWithOffer:(id)offer;	// 0x1b56b1
- (id)initWithOffer:(id)offer;	// 0x1b5abd
- (id)initWithOffer:(id)offer initiatePlaybackOnCompletion:(BOOL)completion;	// 0x1b5ad1
- (void)_acquire;	// 0x1b5f81
- (void)_acquisitionFailed:(id)failed;	// 0x1b62ad
- (BOOL)_attemptPlaybackInsteadOfAcquistion;	// 0x1b6609
- (void)_attemptPlaybackOfPurchase:(id)purchase;	// 0x1b6855
- (void)_dismiss:(id)dismiss;	// 0x1b646d
- (void)_dismissAfterPlayerIsActivated;	// 0x1b64e9
- (void)_enablePrompt:(id)prompt;	// 0x1b6189
- (void)_mediaPlayerControllerActivated:(id)activated;	// 0x1b6561
- (void)_purchaseAcquired:(id)acquired;	// 0x1b627d
- (void)_redownloadAcquired:(id)acquired;	// 0x1b65bd
- (void)_rentalAcquired:(id)acquired;	// 0x1b61dd
- (void)dealloc;	// 0x1b5d55
// declared property getter: - (BOOL)initiatePlaybackOnCompletion;	// 0x1b5f61
- (id)secureResourceAuthenticator;	// 0x1b5de5
// declared property setter: - (void)setInitiatePlaybackOnCompletion:(BOOL)completion;	// 0x1b5f71
- (void)wasPopped;	// 0x1b5f05
- (void)wasPushed;	// 0x1b5ed5
@end
