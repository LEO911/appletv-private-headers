/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface RUITrailersProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_trailers;	// 4 = 0x4
	id<BRControlFactory> _factory;	// 8 = 0x8
}
- (id)initWithData:(id)data controlFactory:(id)factory;	// 0xb7b31
- (id)controlFactory;	// 0xb7c0d
- (id)dataAtIndex:(long)index;	// 0xb7c3d
- (long)dataCount;	// 0xb7c1d
- (void)dealloc;	// 0xb7ba9
- (id)hashForDataAtIndex:(long)index;	// 0xb7c5d
@end
