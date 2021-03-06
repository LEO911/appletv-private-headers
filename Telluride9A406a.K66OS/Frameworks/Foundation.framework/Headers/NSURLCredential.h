/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSCoding, NSCopying> {
@private
	NSURLCredentialInternal *_internal;	// 4 = 0x4
}
+ (id)credentialForTrust:(SecTrust *)trust;	// 0x35e9a69d
+ (id)credentialWithIdentity:(SecIdentity *)identity certificates:(id)certificates persistence:(unsigned)persistence;	// 0x35e9a3a5
+ (id)credentialWithUser:(id)user password:(id)password persistence:(unsigned)persistence;	// 0x35e9a351
- (id)initWithCoder:(id)coder;	// 0x35e9a731
- (id)initWithIdentity:(SecIdentity *)identity certificates:(id)certificates persistence:(unsigned)persistence;	// 0x35e9a2d5
- (id)initWithTrust:(SecTrust *)trust;	// 0x35e9a629
- (id)initWithUser:(id)user password:(id)password persistence:(unsigned)persistence;	// 0x35e9a215
- (CFURLCredentialRef)_cfurlcredential;	// 0x35e9a445
- (id)_initWithCFURLCredential:(CFURLCredentialRef)cfurlcredential;	// 0x35e9a295
- (id)certificates;	// 0x35e9a615
- (id)copyWithZone:(NSZone *)zone;	// 0x35e9a501
- (void)dealloc;	// 0x35e9a3f9
- (id)description;	// 0x35e9a511
- (void)encodeWithCoder:(id)coder;	// 0x35e9a6e5
- (BOOL)hasPassword;	// 0x35e9a4c9
- (unsigned)hash;	// 0x35e9a581
- (SecIdentity *)identity;	// 0x35e9a601
- (BOOL)isEqual:(id)equal;	// 0x35e9a595
- (id)password;	// 0x35e9a491
- (unsigned)persistence;	// 0x35e9a4e5
- (id)user;	// 0x35e9a455
@end

