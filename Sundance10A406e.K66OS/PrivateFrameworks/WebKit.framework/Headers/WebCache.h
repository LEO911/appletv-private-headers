/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"


@interface WebCache : NSObject {
}
+ (bool)addImageToCache:(CGImageRef)cache forURL:(id)url;	// 0x307fcf95
+ (void)clearCachedCredentials;	// 0x307fcf91
+ (void)empty;	// 0x307f85e5
+ (void)emptyInMemoryResources;	// 0x307fcded
+ (void)initialize;	// 0x307f85e1
+ (BOOL)isDisabled;	// 0x307fd2b1
+ (void)removeImageFromCacheForURL:(id)url;	// 0x307fd11d
+ (void)setDisabled:(BOOL)disabled;	// 0x307fd265
+ (void)sizeOfDeadResources:(int *)deadResources;	// 0x307fcf45
+ (id)statistics;	// 0x307fc9f5
@end

