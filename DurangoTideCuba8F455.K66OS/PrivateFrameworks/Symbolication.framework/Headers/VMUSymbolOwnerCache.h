/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUSymbolOwnerCache : NSObject {
}
+ (void)addSymbolOwner:(id)owner;	// 0x34133bb1
+ (void)flush;	// 0x34133729
+ (void)initialize;	// 0x341335a9
+ (unsigned)memoryLimit;	// 0x34133701
+ (void)removeSignature:(id)signature;	// 0x34133a35
+ (void)setMemoryLimit:(unsigned)limit;	// 0x3413364d
+ (void)shrinkCacheToSize:(unsigned long long)size;	// 0x341337f5
+ (id)symbolOwnerForSignature:(id)signature;	// 0x34133e59
+ (id)symbolOwners;	// 0x34133929
@end

