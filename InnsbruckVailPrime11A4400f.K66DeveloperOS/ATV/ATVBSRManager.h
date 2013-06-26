/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVBSRManager : BRSingleton {
	BOOL _performingBSR;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0xf3531
+ (id)singleton;	// 0xf3521
- (id)init;	// 0xf3541
- (void)_performResetFromIR;	// 0xf3695
- (void)_showBSRScreenWithController:(id)controller;	// 0xf379d
- (void)dealloc;	// 0xf35c1
- (void)enterBSRModeWithCompletionBlock:(id)completionBlock;	// 0xf361d
- (void)enterWithModes:(id)modes withCompletionBlock:(id)completionBlock;	// 0xf3659
@end
