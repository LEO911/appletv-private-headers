/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import </libobjc.A.h>


@interface AAKeychainManager : NSObject {
}
+ (void)initialize;	// 0x3001f179
+ (id)passwordForServiceName:(id)serviceName username:(id)username accessGroup:(id)group;	// 0x3001f1c1
+ (void)removePasswordForService:(id)service username:(id)username accessGroup:(id)group;	// 0x3001f63d
+ (void)setPassword:(id)password forServiceName:(id)serviceName username:(id)username accessGroup:(id)group;	// 0x3001f37d
@end

