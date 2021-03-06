/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRUserPasswordAccount.h> // Unknown library
#import "ATVReadOnlyFeedResource.h"

@class NSString;

@interface ATVFlagstaffAccount : BRUserPasswordAccount <ATVReadOnlyFeedResource> {
@private
	NSString *ipid;	// 28 = 0x1c
	NSString *fingerprint;	// 32 = 0x20
	int statusCode;	// 36 = 0x24
	NSString *statusMessage;	// 40 = 0x28
}
@property(retain, nonatomic) NSString *fingerprint;	// G=0x307a2b91; S=0x307a2d5d; @synthesize
@property(retain, nonatomic) NSString *ipid;	// G=0x307a2ba1; S=0x307a2d35; @synthesize
@property(assign, nonatomic) int statusCode;	// G=0x307a2b71; S=0x307a2b81; @synthesize
@property(retain, nonatomic) NSString *statusMessage;	// G=0x307a2b61; S=0x307a2d85; @synthesize
- (void)clearAllProperties;	// 0x307a2c45
- (void)dealloc;	// 0x307a2cd1
- (id)feedResourceNamed:(id)named;	// 0x307a2bb1
// declared property getter: - (id)fingerprint;	// 0x307a2b91
// declared property getter: - (id)ipid;	// 0x307a2ba1
- (BOOL)isAuthenticated;	// 0x307a2c09
- (void)resetAccountOptions;	// 0x307a2c95
// declared property setter: - (void)setFingerprint:(id)fingerprint;	// 0x307a2d5d
// declared property setter: - (void)setIpid:(id)ipid;	// 0x307a2d35
// declared property setter: - (void)setStatusCode:(int)code;	// 0x307a2b81
// declared property setter: - (void)setStatusMessage:(id)message;	// 0x307a2d85
// declared property getter: - (int)statusCode;	// 0x307a2b71
// declared property getter: - (id)statusMessage;	// 0x307a2b61
- (id)type;	// 0x307a2c25
@end

