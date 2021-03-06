/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSArray;

@interface BRImageProxyProvider : NSObject <BRProvider> {
@private
	NSArray *_images;	// 4 = 0x4
}
+ (id)providerWithAssets:(id)assets;	// 0x329a5f69
+ (id)providerWithImageProxies:(id)imageProxies;	// 0x329a5ed5
- (id)initWithAssets:(id)assets;	// 0x329a5fa5
- (id)initWithImageProxies:(id)imageProxies;	// 0x329a5f11
- (id)controlFactory;	// 0x329a6049
- (id)dataAtIndex:(long)index;	// 0x329a606d
- (long)dataCount;	// 0x329a604d
- (void)dealloc;	// 0x329a5ffd
- (id)hashForDataAtIndex:(long)index;	// 0x329a610d
@end

