/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import </libobjc.A.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTileEditionUpdate : NSObject {
	NSMutableArray *_entries;	// 4 = 0x4
	BOOL _flushEverything;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL flushEverything;	// G=0x30f7617d; S=0x30f7618d; @synthesize=_flushEverything
- (id)init;	// 0x30f75f8d
- (void)addTileset:(unsigned)tileset edition:(unsigned)edition provider:(unsigned)provider;	// 0x30f75ff1
- (void)dealloc;	// 0x30f76131
// declared property getter: - (BOOL)flushEverything;	// 0x30f7617d
// declared property setter: - (void)setFlushEverything:(BOOL)everything;	// 0x30f7618d
- (void)tileset:(unsigned *)tileset edition:(unsigned *)edition provider:(unsigned *)provider atIndex:(unsigned)index;	// 0x30f760c5
- (unsigned)tilesetCount;	// 0x30f760a5
@end
