/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDefaultAuthenticationManager.h"

@class MEITunesStoreAccount, NSNumber;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAuthenticationManager : BRDefaultAuthenticationManager {
	NSNumber *_lastActiveAccountUniqueIdentifier;	// 4 = 0x4
	MEITunesStoreAccount *_currentAccount;	// 8 = 0x8
}
- (id)init;	// 0x4ac761
- (void).cxx_destruct;	// 0x4aca99
- (void)_accountRemoved:(id)removed;	// 0x4aca95
- (id)_basicAccount;	// 0x4aca25
- (id)_currentAccount;	// 0x4ac85d
- (void)_setCurrentAccount:(id)account;	// 0x4ac859
@end
