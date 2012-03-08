/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSURL, NSNumber, SSAuthenticationContext, ISDialog;

@interface ISServerAuthenticationOperation : ISOperation {
	NSNumber *_authenticatedAccountDSID;	// 60 = 0x3c
	SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
	ISDialog *_dialog;	// 68 = 0x44
	NSURL *_redirectURL;	// 72 = 0x48
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x341e0069; S=0x341e007d; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x341e0031; S=0x341e0045; @synthesize=_authenticationContext
@property(retain) ISDialog *dialog;	// G=0x341e00a1; S=0x341e00b5; @synthesize=_dialog
@property(retain) NSURL *redirectURL;	// G=0x341e00d9; S=0x341e00ed; @synthesize=_redirectURL
- (BOOL)_copyAccountIdentifier:(id *)identifier returningError:(id *)error;	// 0x341dfaf1
- (id)_copyAuthenticationContext;	// 0x341dfb99
- (id)_copyButtonForDialogSkip;	// 0x341dfd19
- (BOOL)_copySelectedButton:(id *)button returningError:(id *)error;	// 0x341dfdcd
- (BOOL)_handleSelectedButton:(id)button;	// 0x341dfec5
- (BOOL)_shouldAuthenticateForButton:(id)button;	// 0x341dffb1
// declared property getter: - (id)authenticatedAccountDSID;	// 0x341e0069
// declared property getter: - (id)authenticationContext;	// 0x341e0031
- (void)dealloc;	// 0x341df6ad
// declared property getter: - (id)dialog;	// 0x341e00a1
// declared property getter: - (id)redirectURL;	// 0x341e00d9
- (void)run;	// 0x341df759
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x341e007d
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x341e0045
// declared property setter: - (void)setDialog:(id)dialog;	// 0x341e00b5
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x341e00ed
@end
