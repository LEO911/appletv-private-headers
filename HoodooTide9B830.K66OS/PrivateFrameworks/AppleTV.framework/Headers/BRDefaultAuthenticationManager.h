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
@property(readonly, assign) BRAccountType *accountType;	// G=0x32a6511d; @synthesize=_accountType
- (id)initWithAccountType:(id)accountType;	// 0x32a64f09
- (id)initWithAccountType:(id)accountType authenticatorCreation:(id)creation;	// 0x32a64f1d
- (id)_basicAccount;	// 0x32a65011
- (void)_markAsPreferredAccount:(id)account;	// 0x32a650bd
- (void)_preferredAccountRemoved:(id)removed;	// 0x32a65085
// declared property getter: - (id)accountType;	// 0x32a6511d
- (void)dealloc;	// 0x32a64f75
- (id)preferredAccount;	// 0x32a64fc1
@end

