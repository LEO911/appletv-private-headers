/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISURLOperation.h"

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

__attribute__((visibility("hidden")))
@interface ISStoreURLOperation : ISURLOperation {
@private
	NSNumber *_authenticatedDSID;	// 100 = 0x64
	BOOL _canSendGUIDParameter;	// 104 = 0x68
	BOOL _needsAuthentication;	// 105 = 0x69
	BOOL _needsURLBag;	// 106 = 0x6a
	BOOL _urlKnownToBeTrusted;	// 107 = 0x6b
	BOOL _useUserSpecificURLBag;	// 108 = 0x6c
}
@property(retain) NSNumber *authenticatedDSID;	// G=0x33358531; S=0x33358545; @synthesize=_authenticatedDSID
@property(assign) BOOL canSendGUIDParameter;	// G=0x33356de9; S=0x33356e25; 
@property(assign) id<ISStoreURLOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x33358569; S=0x33358579; @synthesize=_needsAuthentication
@property(assign) BOOL needsURLBag;	// G=0x33358589; S=0x33358599; @synthesize=_needsURLBag
@property(assign) BOOL urlKnownToBeTrusted;	// G=0x333585a9; S=0x333585b9; @synthesize=_urlKnownToBeTrusted
@property(assign) BOOL useUserSpecificURLBag;	// G=0x333585c9; S=0x333585d9; @synthesize=_useUserSpecificURLBag
+ (void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext;	// 0x333574cd
+ (id)_restrictionsHeaderValue;	// 0x33357905
+ (void)addITunesStoreHeadersToRequest:(id)request;	// 0x3335697d
+ (void)handleITunesStoreResponseHeaders:(id)headers;	// 0x333569bd
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;	// 0x33356ac5
+ (id)pingOperationWithUrl:(id)url;	// 0x33356c5d
+ (id)propertyListOperationWithURLBagKey:(id)urlbagKey;	// 0x33356d0d
- (id)init;	// 0x333568dd
- (void)_addStandardQueryParametersForURL:(id)url;	// 0x33357c25
- (BOOL)_authenticateReturningError:(id *)error;	// 0x33357e7d
- (BOOL)_canSendTokenToURL:(id)url;	// 0x33357f55
- (id)_copyAuthenticationContext;	// 0x33356ea9
- (id)_copyURLBagContext;	// 0x33357fb9
- (void)_runURLOperation;	// 0x333580d5
- (id)_storeFrontIdentifier;	// 0x333583fd
- (id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;	// 0x333584d1
- (id)authenticatedAccountDSID;	// 0x33356e65
// declared property getter: - (id)authenticatedDSID;	// 0x33358531
// declared property getter: - (BOOL)canSendGUIDParameter;	// 0x33356de9
- (void)dealloc;	// 0x33356929
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x33357015
- (void)handleResponse:(id)response;	// 0x33357085
// declared property getter: - (BOOL)needsAuthentication;	// 0x33358569
// declared property getter: - (BOOL)needsURLBag;	// 0x33358589
- (id)newRequestWithURL:(id)url;	// 0x333570f5
- (void)run;	// 0x333572c1
// declared property setter: - (void)setAuthenticatedDSID:(id)dsid;	// 0x33358545
// declared property setter: - (void)setCanSendGUIDParameter:(BOOL)parameter;	// 0x33356e25
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x33358579
// declared property setter: - (void)setNeedsURLBag:(BOOL)bag;	// 0x33358599
// declared property setter: - (void)setUrlKnownToBeTrusted:(BOOL)beTrusted;	// 0x333585b9
// declared property setter: - (void)setUseUserSpecificURLBag:(BOOL)bag;	// 0x333585d9
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x333573ed
// declared property getter: - (BOOL)urlKnownToBeTrusted;	// 0x333585a9
// declared property getter: - (BOOL)useUserSpecificURLBag;	// 0x333585c9
@end
