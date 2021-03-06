/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebThreadCaller : NSObject {
@private
	TileCache *_tileCache;	// 4 = 0x4
	bool _hasPendingDoLayoutTiles;	// 8 = 0x8
	bool _hasPendingUpdateTilingMode;	// 9 = 0x9
}
- (id)initWithTileCache:(TileCache *)tileCache;	// 0x313f98c9
- (void)doLayoutTiles;	// 0x314974d1
- (void)resetTileCache;	// 0x3195c1f1
- (void)updateTilingMode;	// 0x3148eba9
@end

