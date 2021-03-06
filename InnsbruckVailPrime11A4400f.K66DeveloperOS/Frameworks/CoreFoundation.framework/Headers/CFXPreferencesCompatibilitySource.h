/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "CFXPreferencesSource.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesCompatibilitySource : CFXPreferencesSource {
	opaque_pthread_mutex_t accessLock;	// 16 = 0x10
}
- (id)init;	// 0x2d2e5f5d
- (CFDictionaryRef)copyDictionary;	// 0x2d2e6c71
- (CFArrayRef)copyKeyList;	// 0x2d2e6c25
- (void)dealloc;	// 0x2d2e6041
- (void)finalize;	// 0x2d2e6001
- (void *)getValueForKey:(CFStringRef)key;	// 0x2d2e6081
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x2d2e6bd1
- (unsigned char)synchronize;	// 0x2d2e6bd5
@end

