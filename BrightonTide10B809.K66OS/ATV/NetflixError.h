/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixError : XXUnknownSuperclass {
}
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x4c3925
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x4c3a55
+ (id)errorWithDomain:(id)domain code:(int)code underlyingError:(id)error;	// 0x4c3a19
+ (id)localizedDescriptionForNetflixError:(int)netflixError;	// 0x4c3d6d
+ (id)localizedMessageForNRDPErrorCode:(int)nrdperrorCode;	// 0x4c42a9
+ (id)localizedMessageForNetflixInternalErrorCode:(int)netflixInternalErrorCode;	// 0x4c4239
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x4c3a91
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x4c3be5
+ (id)netflixErrorWithCode:(int)code underlyingError:(id)error;	// 0x4c3bb5
+ (id)netflixInternalErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x4c3c41
+ (id)netflixInternalErrorWithCode:(int)code underlyingError:(id)error;	// 0x4c3c15
+ (id)nrdpErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x4c3ced
+ (id)nrdpErrorWithCode:(int)code underlyingError:(id)error;	// 0x4c3cc1
- (id)initWithDomain:(id)domain code:(int)code localizedDescription:(id)description extraUserInfo:(id)info underlyingError:(id)error;	// 0x4c364d
@end

