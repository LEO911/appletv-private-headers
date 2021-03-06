/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRAlertController.h"


__attribute__((visibility("hidden")))
@interface BRNetworkAlertController : BRAlertController {
	id _networkRecoveryBlock;	// 132 = 0x84
}
+ (id)_availabilityAlertControllerWithErrorMessage:(id)errorMessage;	// 0x314861
+ (id)internetAvailabilityAlertController;	// 0x3148f1
+ (id)networkAvailabilityAlertController;	// 0x3148c5
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x31491d
- (void)_networkStatusChanged:(id)changed;	// 0x314a6d
- (void)dealloc;	// 0x3149ad
- (void)registerNetworkRecoveryBlock:(id)block;	// 0x314a29
@end

