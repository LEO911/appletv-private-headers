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
+ (id)defaultRuntime;	// 0x3708112d
- (id)init;	// 0x370811a1
- (void)_initializeEntitlements;	// 0x3708125d
- (void)dealloc;	// 0x370811e9
- (id)entitlementForKey:(id)key;	// 0x37081235
@end

