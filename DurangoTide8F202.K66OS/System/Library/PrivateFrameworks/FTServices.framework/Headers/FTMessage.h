/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSData, NSDate, NSString, NSArray;

@interface FTMessage : NSObject {
	NSDictionary *_userInfo;	// 4 = 0x4
	NSData *_serviceData;	// 8 = 0x8
	NSDictionary *_clientInfo;	// 12 = 0xc
	NSData *_sessionToken;	// 16 = 0x10
	NSDate *_creationDate;	// 20 = 0x14
}
@property(readonly, assign) NSDictionary *additionalMessageHeaders;	// G=0x3472de41; 
@property(readonly, assign) NSString *bagKey;	// G=0x3472de35; 
@property(copy) NSDictionary *clientInfo;	// G=0x3472e2d5; S=0x3472e335; @synthesize=_clientInfo
@property(readonly, assign) NSDate *creationDate;	// G=0x3472de49; @synthesize=_creationDate
@property(readonly, assign) BOOL hasRequiredKeys;	// G=0x3472e011; 
@property(readonly, assign) BOOL isValidMessage;	// G=0x3472de81; 
@property(readonly, assign) NSDictionary *messageBody;	// G=0x3472e1ad; 
@property(readonly, assign) BOOL payloadCanBeLogged;	// G=0x3472de31; 
@property(readonly, assign) NSArray *requiredKeys;	// G=0x3472de59; 
@property(copy) NSData *serviceData;	// G=0x3472e2ed; S=0x3472e35d; @synthesize=_serviceData
@property(copy) NSData *sessionToken;	// G=0x3472e305; S=0x3472e385; @synthesize=_sessionToken
@property(copy) NSDictionary *userInfo;	// G=0x3472e31d; S=0x3472e3ad; @synthesize=_userInfo
- (id)init;	// 0x3472dfb5
// declared property getter: - (id)additionalMessageHeaders;	// 0x3472de41
// declared property getter: - (id)bagKey;	// 0x3472de35
// declared property getter: - (id)clientInfo;	// 0x3472e2d5
// declared property getter: - (id)creationDate;	// 0x3472de49
- (void)dealloc;	// 0x3472df25
- (void)handleResponseDictionary:(id)dictionary;	// 0x3472de45
// declared property getter: - (BOOL)hasRequiredKeys;	// 0x3472e011
// declared property getter: - (BOOL)isValidMessage;	// 0x3472de81
// declared property getter: - (id)messageBody;	// 0x3472e1ad
// declared property getter: - (BOOL)payloadCanBeLogged;	// 0x3472de31
// declared property getter: - (id)requiredKeys;	// 0x3472de59
// declared property getter: - (id)serviceData;	// 0x3472e2ed
// declared property getter: - (id)sessionToken;	// 0x3472e305
// declared property setter: - (void)setClientInfo:(id)info;	// 0x3472e335
// declared property setter: - (void)setServiceData:(id)data;	// 0x3472e35d
// declared property setter: - (void)setSessionToken:(id)token;	// 0x3472e385
// declared property setter: - (void)setUserInfo:(id)info;	// 0x3472e3ad
// declared property getter: - (id)userInfo;	// 0x3472e31d
@end

