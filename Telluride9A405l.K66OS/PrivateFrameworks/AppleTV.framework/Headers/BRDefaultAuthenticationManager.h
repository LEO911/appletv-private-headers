/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticationManager.h"

@class BRAccountType;

@interface BRDefaultAuthenticationManager : BRAuthenticationManager {
@private
	BRAccountType *_accountType;	// 12 = 0xc
}
@property(readonly, assign) BRAccountType *accountType;	// G=0x35e83b45; @synthesize=_accountType
- (id)initWithAccountType:(id)accountType;	// 0x35e83931
- (id)initWithAccountType:(id)accountType authenticatorCreation:(id)creation;	// 0x35e83945
- (id)_basicAccount;	// 0x35e83a39
- (void)_markAsPreferredAccount:(id)account;	// 0x35e83ae5
- (void)_preferredAccountRemoved:(id)removed;	// 0x35e83aad
// declared property getter: - (id)accountType;	// 0x35e83b45
- (void)dealloc;	// 0x35e8399d
- (id)preferredAccount;	// 0x35e839e9
@end
