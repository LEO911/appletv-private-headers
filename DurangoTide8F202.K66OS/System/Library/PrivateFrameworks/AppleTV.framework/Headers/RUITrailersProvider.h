/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface RUITrailersProvider : NSObject <BRProvider> {
@private
	NSArray *_trailers;	// 4 = 0x4
	id<BRControlFactory> _factory;	// 8 = 0x8
}
- (id)initWithData:(id)data controlFactory:(id)factory;	// 0x337301d9
- (id)controlFactory;	// 0x337300fd
- (id)dataAtIndex:(long)index;	// 0x3373013d
- (long)dataCount;	// 0x3373015d
- (void)dealloc;	// 0x3373017d
- (id)hashForDataAtIndex:(long)index;	// 0x3373010d
@end
