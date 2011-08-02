/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAUpdateAccountRequest : AARequest {
	AAAccount *_account;	// 8 = 0x8
}
@property(retain, nonatomic) AAAccount *account;	// G=0x33838ced; S=0x3383a51d; @synthesize=_account
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x338393fd
// declared property getter: - (id)account;	// 0x33838ced
- (void)dealloc;	// 0x338393b5
// declared property setter: - (void)setAccount:(id)account;	// 0x3383a51d
- (id)urlRequest;	// 0x33839fbd
@end
