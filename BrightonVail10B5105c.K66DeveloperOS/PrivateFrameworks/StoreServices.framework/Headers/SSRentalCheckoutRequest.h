/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSNumber, NSArray;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {
	NSNumber *_accountIdentifier;	// 28 = 0x1c
	long long _downloadIdentifier;	// 32 = 0x20
	NSNumber *_rentalKeyIdentifier;	// 40 = 0x28
	NSArray *_sinfs;	// 44 = 0x2c
}
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x3584781d; 
@property(readonly, assign) long long downloadIdentifier;	// G=0x35847855; 
@property(readonly, assign) NSNumber *rentalKeyIdentifier;	// G=0x3584786d; 
@property(readonly, assign) NSArray *sinfs;	// G=0x358478a5; 
- (id)init;	// 0x35847521
- (id)initWithAccountIdentifier:(id)accountIdentifier rentalKeyIdentifier:(id)identifier;	// 0x35847535
- (id)initWithDownloadIdentifier:(long long)downloadIdentifier;	// 0x3584765d
- (id)initWithSinfs:(id)sinfs;	// 0x358476f1
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x35847c35
// declared property getter: - (id)accountIdentifier;	// 0x3584781d
- (id)copyXPCEncoding;	// 0x35847ba1
- (void)dealloc;	// 0x358477a5
// declared property getter: - (long long)downloadIdentifier;	// 0x35847855
// declared property getter: - (id)rentalKeyIdentifier;	// 0x3584786d
// declared property getter: - (id)sinfs;	// 0x358478a5
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x358478dd
- (void)startWithConnectionResponseBlock:(id)connectionResponseBlock;	// 0x35847955
@end

