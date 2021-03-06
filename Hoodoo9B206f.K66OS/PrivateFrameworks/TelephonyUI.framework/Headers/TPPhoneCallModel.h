/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <NSObject.h> // Unknown library
#import "TelephonyUI-Structs.h"

@class NSRecursiveLock;

@interface TPPhoneCallModel : NSObject {
	CFDictionaryRef _callManagementState;	// 4 = 0x4
	NSRecursiveLock *_lock;	// 8 = 0x8
}
+ (id)sharedInstance;	// 0x33d97bdd
- (id)init;	// 0x33d97f9d
- (BOOL)_booleanValueForKey:(CFStringRef)key;	// 0x33d97da5
- (CFDictionaryRef)_callManagementDictionary;	// 0x33d97dd5
- (int)_intValueForKey:(CFStringRef)key;	// 0x33d97d71
- (void)_invalidateCachedState;	// 0x33d97c25
- (BOOL)_isAmbiguousCallList;	// 0x33d979e5
- (BOOL)_isAmbiguousMultiPartyCall;	// 0x33d979c1
- (int)ambiguityState;	// 0x33d97981
- (int)cellTelephonyType;	// 0x33d97d39
- (void)dealloc;	// 0x33d97f35
- (id)description;	// 0x33d97a91
- (BOOL)isAddCallAllowed;	// 0x33d9793d
- (BOOL)isAmbiguous;	// 0x33d97961
- (BOOL)isEndAndAnswerAllowed;	// 0x33d97a6d
- (BOOL)isHardPauseAvailable;	// 0x33d97a49
- (BOOL)isHoldAllowed;	// 0x33d97919
- (BOOL)isMergeable;	// 0x33d978f5
- (BOOL)isSwappable;	// 0x33d978d1
- (int)maxMultiPartyCallCount;	// 0x33d97a09
- (int)maxSupportedCallCount;	// 0x33d97a29
@end

