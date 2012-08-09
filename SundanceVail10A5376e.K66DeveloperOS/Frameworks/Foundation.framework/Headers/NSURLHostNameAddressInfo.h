/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSURLHostNameAddressInfo : NSObject {
	double timestamp;	// 4 = 0x4
	addrinfo *addressInfo;	// 12 = 0xc
}
+ (id)addressInfoForHost:(id)host;	// 0x34def6c1
+ (void)asyncResolveWithCallbackClient:(id)callbackClient;	// 0x34def805
- (id)_initWithAddressInfo:(addrinfo *)addressInfo;	// 0x34def94d
- (double)_timestamp;	// 0x34def9b5
- (addrinfo *)addrinfo;	// 0x34def9a5
- (void)dealloc;	// 0x34def9cd
- (void)finalize;	// 0x34defa11
@end
