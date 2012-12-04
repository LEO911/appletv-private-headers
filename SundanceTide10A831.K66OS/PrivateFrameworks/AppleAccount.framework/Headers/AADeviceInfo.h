/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class APSConnection, NSData;
@protocol OS_dispatch_semaphore;

@interface AADeviceInfo : NSObject {
	APSConnection *_apsConnection;	// 4 = 0x4
	BOOL _tokenDone;	// 8 = 0x8
	NSData *_token;	// 12 = 0xc
	NSObject<OS_dispatch_semaphore> *_tokenSema;	// 16 = 0x10
}
+ (id)apnsToken;	// 0x35aeae49
+ (id)appleIDClientIdentifier;	// 0x35aeae99
+ (id)clientInfoHeader;	// 0x35aeaee9
+ (id)infoDictionary;	// 0x35aead05
+ (id)osVersion;	// 0x35aeada9
+ (id)productVersion;	// 0x35aeb281
+ (id)serialNumber;	// 0x35aeadf9
+ (id)signatureWithDictionary:(id)dictionary;	// 0x35aead55
+ (id)udid;	// 0x35aead59
+ (id)userAgentHeader;	// 0x35aeb1a9
- (id)init;	// 0x35aeacc9
- (void).cxx_destruct;	// 0x35aeb2d1
- (id)apnsToken;	// 0x35aeb5e5
- (id)appleIDClientIdentifier;	// 0x35aeb66d
- (id)buildVersion;	// 0x35aeb585
- (id)deviceClass;	// 0x35aeb651
- (id)deviceInfoDictionary;	// 0x35aeb319
- (id)osName;	// 0x35aeb529
- (id)osVersion;	// 0x35aeb425
- (id)productType;	// 0x35aeb4fd
- (id)productVersion;	// 0x35aeb4d1
- (id)regionCode;	// 0x35aeb5e1
- (id)serialNumber;	// 0x35aeb489
- (id)udid;	// 0x35aeb45d
- (id)wifiMacAddress;	// 0x35aeb4b5
@end
