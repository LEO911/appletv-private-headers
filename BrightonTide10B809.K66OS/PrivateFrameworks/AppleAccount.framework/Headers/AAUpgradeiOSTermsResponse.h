/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSData;

@interface AAUpgradeiOSTermsResponse : AAResponse {
	NSData *_xmlUIData;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSData *xmlUIData;	// G=0x334627a9; @synthesize=_xmlUIData
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x334626d5
- (void).cxx_destruct;	// 0x334627b9
- (BOOL)bodyIsPlist;	// 0x334627a5
- (id)responseXMLData;	// 0x33462795
// declared property getter: - (id)xmlUIData;	// 0x334627a9
@end

