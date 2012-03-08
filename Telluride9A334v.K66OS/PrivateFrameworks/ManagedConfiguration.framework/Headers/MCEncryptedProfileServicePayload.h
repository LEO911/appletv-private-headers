/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload {
@private
	NSString *_urlString;	// 40 = 0x28
}
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3475cdb1
+ (id)typeStrings;	// 0x3475cc55
- (id)initWithURLString:(id)urlstring profile:(id)profile;	// 0x3475cc7d
- (void)dealloc;	// 0x3475ceb1
- (id)description;	// 0x3475ce31
- (id)subtitle1Description;	// 0x3475cc45
- (id)subtitle1Label;	// 0x3475ce11
- (id)title;	// 0x3475ce21
@end
