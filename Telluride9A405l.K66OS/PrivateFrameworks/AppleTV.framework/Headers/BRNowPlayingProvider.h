/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSSet, NSString;
@protocol BRControlFactory;

@interface BRNowPlayingProvider : NSObject <BRProvider> {
@private
	id<BRControlFactory> _factory;	// 4 = 0x4
	NSSet *_types;	// 8 = 0x8
	NSString *_playerMediaAssetID;	// 12 = 0xc
}
+ (id)providerForTypes:(id)types;	// 0x35e798fd
- (void)_checkPlayerState;	// 0x35e79d41
- (id)_initWithTypes:(id)types;	// 0x35e79aa5
- (void)_playerStateChanged:(id)changed;	// 0x35e79cf1
- (id)controlFactory;	// 0x35e799ed
- (id)dataAtIndex:(long)index;	// 0x35e79a55
- (long)dataCount;	// 0x35e79a3d
- (void)dealloc;	// 0x35e79949
- (id)hashForDataAtIndex:(long)index;	// 0x35e79a99
@end

