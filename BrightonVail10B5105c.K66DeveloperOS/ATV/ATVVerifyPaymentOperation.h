/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface ATVVerifyPaymentOperation : XXUnknownSuperclass {
	NSString *_customerTitle;	// 60 = 0x3c
	NSString *_customerMessage;	// 64 = 0x40
	NSURL *_verifyURL;	// 68 = 0x44
}
@property(retain, nonatomic) NSString *customerMessage;	// G=0x3d864d; S=0x3d865d; @synthesize=_customerMessage
@property(retain, nonatomic) NSString *customerTitle;	// G=0x3d8615; S=0x3d8625; @synthesize=_customerTitle
@property(retain, nonatomic) NSURL *verifyURL;	// G=0x3d8685; S=0x3d8695; @synthesize=_verifyURL
- (void).cxx_destruct;	// 0x3d86bd
- (id)_copyCVVCodeFromUser;	// 0x3d79b1
- (id)_copyResponseWithCode:(id)code error:(id *)error;	// 0x3d833d
- (void)_displayCVVDialogWithCompletionHandler:(id)completionHandler;	// 0x3d7bed
- (void)_displayInvalidCVVDialog:(id)dialog withCompletionHandler:(id)completionHandler;	// 0x3d7df5
- (BOOL)_verifyCVVCode:(id)code error:(id *)error;	// 0x3d7f65
// declared property getter: - (id)customerMessage;	// 0x3d864d
// declared property getter: - (id)customerTitle;	// 0x3d8615
- (void)run;	// 0x3d7819
// declared property setter: - (void)setCustomerMessage:(id)message;	// 0x3d865d
// declared property setter: - (void)setCustomerTitle:(id)title;	// 0x3d8625
// declared property setter: - (void)setVerifyURL:(id)url;	// 0x3d8695
// declared property getter: - (id)verifyURL;	// 0x3d8685
@end
