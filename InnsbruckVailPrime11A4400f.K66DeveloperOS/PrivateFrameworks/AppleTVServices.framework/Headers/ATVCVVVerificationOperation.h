/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import <iTunesStore/ISOperation.h>

@class NSString, NSURL;

@interface ATVCVVVerificationOperation : ISOperation {
	NSString *_customerTitle;	// 60 = 0x3c
	NSString *_customerMessage;	// 64 = 0x40
	NSURL *_verifyURL;	// 68 = 0x44
}
@property(retain, nonatomic) NSString *customerMessage;	// G=0x300b096d; S=0x300b097d; @synthesize=_customerMessage
@property(retain, nonatomic) NSString *customerTitle;	// G=0x300b0935; S=0x300b0945; @synthesize=_customerTitle
@property(retain, nonatomic) NSURL *verifyURL;	// G=0x300b09a5; S=0x300b09b5; @synthesize=_verifyURL
- (void).cxx_destruct;	// 0x300b09dd
- (id)_copyCVVCodeFromUser;	// 0x300b0025
- (id)_copyResponseWithCode:(id)code error:(id *)error;	// 0x300b065d
- (BOOL)_verifyCVVCode:(id)code error:(id *)error;	// 0x300b0255
// declared property getter: - (id)customerMessage;	// 0x300b096d
// declared property getter: - (id)customerTitle;	// 0x300b0935
- (void)presentAlertWithTitle:(id)title message:(id)message completion:(id)completion;	// 0x300afe85
- (void)presentFailureAlertWithTitle:(id)title message:(id)message completion:(id)completion;	// 0x300afe89
- (void)run;	// 0x300afe8d
// declared property setter: - (void)setCustomerMessage:(id)message;	// 0x300b097d
// declared property setter: - (void)setCustomerTitle:(id)title;	// 0x300b0945
// declared property setter: - (void)setVerifyURL:(id)url;	// 0x300b09b5
// declared property getter: - (id)verifyURL;	// 0x300b09a5
@end
