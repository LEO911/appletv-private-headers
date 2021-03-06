/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSData, NSString, NSDictionary;

@interface AAGenericTermsUIResponse : AAResponse {
	NSDictionary *_responseTermsDictionary;	// 16 = 0x10
	NSString *_responseAgreeURL;	// 20 = 0x14
	NSData *_responseData;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *agreeURL;	// G=0x334709a1; 
@property(readonly, assign, nonatomic) NSData *responseData;	// G=0x3347098d; 
@property(readonly, assign, nonatomic) NSDictionary *termsDictionary;	// G=0x33470979; 
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x33470841
- (void).cxx_destruct;	// 0x334709b5
// declared property getter: - (id)agreeURL;	// 0x334709a1
// declared property getter: - (id)responseData;	// 0x3347098d
// declared property getter: - (id)termsDictionary;	// 0x33470979
@end

