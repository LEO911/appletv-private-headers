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
- (id)initWithData:(id)data controlFactory:(id)factory;	// 0x32ff8fc5
- (id)controlFactory;	// 0x32ff9099
- (id)dataAtIndex:(long)index;	// 0x32ff90c9
- (long)dataCount;	// 0x32ff90a9
- (void)dealloc;	// 0x32ff9039
- (id)hashForDataAtIndex:(long)index;	// 0x32ff90e9
@end
