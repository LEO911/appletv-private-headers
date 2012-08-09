/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSAccounts : MSMailDefaultService {
}
+ (void)accountValuesForKeys:(id)keys completionBlock:(id)block;	// 0x33467cb1
+ (void)accountValuesForKeys:(id)keys launchMobileMail:(BOOL)mail completionBlock:(id)block;	// 0x33467cd1
+ (BOOL)canSendMail;	// 0x33467e35
+ (id)customSignatureForSendingEmailAddress:(id)sendingEmailAddress;	// 0x33468075
+ (BOOL)deleteAccountsWithUniqueIdentifiers:(id)uniqueIdentifiers error:(id *)error;	// 0x33468345
+ (BOOL)hasActiveAccounts;	// 0x33467a81
- (void)_listAccountKeys:(id)keys handler:(id)handler;	// 0x33467d49
- (void)_simulateServicesMethod:(id)method arguments:(id)arguments callback:(id)callback;	// 0x33468669
@end
