/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class ATVMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVSignInSignOutMenuItem : BRMenuItem {
	ATVMerchant *_merchant;	// 184 = 0xb8
	BOOL _signOutExitsApp;	// 188 = 0xbc
	NSString *_confirmationTitle;	// 192 = 0xc0
	NSString *_confirmationDescription;	// 196 = 0xc4
	NSString *_signInPageURL;	// 200 = 0xc8
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x135af1; S=0x135b05; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x135acd; S=0x135ae1; @synthesize=_confirmationTitle
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x135a8d; S=0x135a9d; @synthesize=_merchant
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x135b15; S=0x135b29; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x135aad; S=0x135abd; @synthesize=_signOutExitsApp
- (void)_update;	// 0x135565
- (BOOL)brEventAction:(id)action;	// 0x13569d
// declared property getter: - (id)confirmationDescription;	// 0x135af1
// declared property getter: - (id)confirmationTitle;	// 0x135acd
- (void)controlWasActivated;	// 0x13565d
- (void)dealloc;	// 0x1354d9
// declared property getter: - (id)merchant;	// 0x135a8d
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x135b05
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x135ae1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x135a9d
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x135b29
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x135abd
// declared property getter: - (id)signInPageURL;	// 0x135b15
// declared property getter: - (BOOL)signOutExitsApp;	// 0x135aad
@end

