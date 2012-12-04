/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicyManager.h"

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager {
	NSString *_powerAssertionGroupIdentifier;	// 12 = 0xc
}
- (id)initWithAccount:(id)account;	// 0x36c36995
- (void)dealloc;	// 0x36c369c1
- (void)policyKeyChanged:(id)changed;	// 0x36c36a79
- (void)requestPolicyUpdate;	// 0x36c36b49
- (void)setDelegate:(id)delegate;	// 0x36c36c49
@end
