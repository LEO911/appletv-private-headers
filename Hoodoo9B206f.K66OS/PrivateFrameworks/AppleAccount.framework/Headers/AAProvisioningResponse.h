/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAAuthenticationResponse.h"

@class NSString, NSDictionary, NSNumber, NSArray;

@interface AAProvisioningResponse : AAAuthenticationResponse {
	NSDictionary *_icloud;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *appleID;	// G=0x359428ed; 
@property(readonly, assign, nonatomic) NSArray *appleIDAliases;	// G=0x35942919; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x359427a5; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x35942945; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x35942971; 
@property(readonly, assign, nonatomic) NSString *primaryEmail;	// G=0x3594299d; 
@property(readonly, assign, nonatomic) NSNumber *primaryEmailVerified;	// G=0x359429c9; 
@property(readonly, assign, nonatomic) NSArray *provisionedDataclasses;	// G=0x35942779; 
- (id)initWithDictionary:(id)dictionary;	// 0x35942615
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x3594254d
// declared property getter: - (id)appleID;	// 0x359428ed
// declared property getter: - (id)appleIDAliases;	// 0x35942919
// declared property getter: - (id)dataclassProperties;	// 0x359427a5
- (void)dealloc;	// 0x3594272d
// declared property getter: - (id)firstName;	// 0x35942945
// declared property getter: - (id)lastName;	// 0x35942971
// declared property getter: - (id)primaryEmail;	// 0x3594299d
// declared property getter: - (id)primaryEmailVerified;	// 0x359429c9
// declared property getter: - (id)provisionedDataclasses;	// 0x35942779
@end

