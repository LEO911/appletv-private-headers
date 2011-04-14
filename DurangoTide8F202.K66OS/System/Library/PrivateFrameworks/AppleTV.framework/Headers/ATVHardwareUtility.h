/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library


@interface ATVHardwareUtility : BRSingleton {
@private
	BOOL _isEmbeddedHardwareDevice;	// 4 = 0x4
}
+ (BOOL)bootedFromRecoveryPartition;	// 0x3368909d
+ (id)configurationInfo;	// 0x3368910d
+ (BOOL)isEmbeddedHardwareDevice;	// 0x33689429
+ (id)mediaFolderPath;	// 0x336893e5
+ (BOOL)pushSeedData;	// 0x336890a1
+ (BOOL)pushSeedFileAtPath:(id)path;	// 0x336890a9
+ (BOOL)pushSeedSyslog;	// 0x336890a5
+ (BOOL)reboot;	// 0x33689535
+ (void)setSILState_HardwareProblem;	// 0x33689459
+ (void)setSILState_Off;	// 0x33689509
+ (void)setSILState_On;	// 0x336894dd
+ (void)setSILState_RejectedCommand;	// 0x33689485
+ (void)setSILState_Starting;	// 0x336894b1
+ (void)setSingleton:(id)singleton;	// 0x33689091
+ (id)singleton;	// 0x33689085
- (id)init;	// 0x336890c1
- (BOOL)_determineIfEmbeddedHardwareDevice;	// 0x336890bd
- (BOOL)_isEmbeddedHardwareDevice;	// 0x336890ad
@end
