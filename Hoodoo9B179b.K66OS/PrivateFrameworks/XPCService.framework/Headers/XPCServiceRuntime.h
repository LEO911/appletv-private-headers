/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCService.framework/XPCService
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface XPCServiceRuntime : NSObject {
	NSDictionary *_entitlements;	// 4 = 0x4
}
+ (id)defaultRuntime;	// 0x36794669
- (id)init;	// 0x36794625
- (void)_initializeEntitlements;	// 0x36794695
- (void)dealloc;	// 0x3679475d
- (id)entitlementForKey:(id)key;	// 0x36794731
@end
