/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCPasscodeManager : NSObject {
}
+ (BOOL)_passcodeCharacteristics:(id)characteristics compliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x33651101
+ (id)characteristicsDictionaryFromPasscode:(id)passcode;	// 0x3365221d
+ (id)generateSalt;	// 0x3364fc35
+ (id)hashForPasscode:(id)passcode usingMethod:(int)method salt:(id)salt;	// 0x33652645
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)restrictions;	// 0x33650999
+ (BOOL)passcode:(id)passcode compliesWithPolicyFromRestrictions:(id)restrictions checkHistory:(BOOL)history outError:(id *)error;	// 0x33650ed1
+ (BOOL)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions;	// 0x336520ad
+ (id)sharedManager;	// 0x3364f865
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)passcodeCharacteristics;	// 0x33650799
+ (int)unlockScreenTypeForRestrictions:(id)restrictions;	// 0x33650841
- (BOOL)_checkPasscode:(id)passcode againstHistoryWithRestrictions:(id)restrictions outError:(id *)error;	// 0x33651881
- (id)_init;	// 0x3364f829
- (id)_passcodeCharacteristics;	// 0x3365061d
- (id)_privatePasscodeDict;	// 0x3364f979
- (id)_publicPasscodeDict;	// 0x3364f8b9
- (void)_sendPasscodeChangedNotification;	// 0x3364fc65
- (void)_setPrivatePasscodeDict:(id)dict;	// 0x3364fa01
- (id)_wrongPasscodeError;	// 0x3364fb1d
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x3364fca5
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x336503a5
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x33650f9d
- (int)currentUnlockScreenType;	// 0x3365066d
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)error;	// 0x33651089
- (BOOL)isDeviceLocked;	// 0x3364fb01
- (BOOL)isPasscodeSet;	// 0x3364facd
- (id)localizedDescriptionOfPasscodePolicy;	// 0x33650919
- (void)lockDevice;	// 0x3364fae5
- (int)newPasscodeEntryScreenType;	// 0x336506d5
- (BOOL)passcode:(id)passcode compliesWithPolicyCheckHistory:(BOOL)policyCheckHistory outError:(id *)error;	// 0x33650e35
- (void)passcodeExpiryDateCompletionBlock:(id)block;	// 0x33651e0d
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x33651bc9
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x3364fba1
@end

