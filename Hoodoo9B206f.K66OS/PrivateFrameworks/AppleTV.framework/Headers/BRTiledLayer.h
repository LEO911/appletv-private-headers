/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <CALayer.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRTiledLayer : CALayer {
@private
	CGSize _tileSize;	// 48 = 0x30
}
@property(assign) CGSize tileSize;	// G=0x367105bd; S=0x3671053d; converted property
+ (id)defaultActionForKey:(id)key;	// 0x367104e5
- (id)init;	// 0x367104f5
- (void)display;	// 0x367105d9
// converted property setter: - (void)setTileSize:(CGSize)size;	// 0x3671053d
// converted property getter: - (CGSize)tileSize;	// 0x367105bd
@end
