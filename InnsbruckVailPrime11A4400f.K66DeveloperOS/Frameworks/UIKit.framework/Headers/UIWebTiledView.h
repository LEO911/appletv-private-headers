/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class WAKWindow;

@interface UIWebTiledView : UIView {
	WAKWindow *_wakWindow;	// 96 = 0x60
	int _inGestureType;	// 100 = 0x64
	int _tilingArea;	// 104 = 0x68
	BOOL _didFirstTileLayout;	// 108 = 0x6c
	BOOL _layoutTilesInMainThread;	// 109 = 0x6d
	BOOL _tilingModeIsLocked;	// 110 = 0x6e
	BOOL _allowsPaintingAndScriptsWhilePanning;	// 111 = 0x6f
}
@property(assign) BOOL allowsPaintingAndScriptsWhilePanning;	// G=0x2f723e65; S=0x2f723e75; converted property
@property(assign) BOOL drawsGrid;	// G=0x2f723f35; S=0x2f723f31; converted property
@property(assign) BOOL keepsZoomedOutTiles;	// G=0x2f723fa1; S=0x2f48a18d; converted property
@property(assign) BOOL layoutTilesInMainThread;	// G=0x2f724005; S=0x2f4f63e1; converted property
@property(assign) BOOL logsTilingChanges;	// G=0x2f723f49; S=0x2f723f45; converted property
@property(assign) unsigned maxTileCount;	// G=0x2f723f39; S=0x2f45b921; converted property
@property(assign) BOOL tileDrawingEnabled;	// G=0x2f723f79; S=0x2f723f4d; converted property
@property(assign) CGSize tileSize;	// G=0x2f723f25; S=0x2f45b91d; converted property
@property(assign) BOOL tilesOpaque;	// G=0x2f723f7d; S=0x2f45bbf1; converted property
@property(assign) int tilingArea;	// G=0x2f723e21; S=0x2f48a3d1; converted property
@property(assign, getter=isTilingEnabled) BOOL tilingEnabled;	// G=0x2f723f41; S=0x2f45b925; converted property
@property(readonly, retain) WAKWindow *wakWindow;	// G=0x2f724015; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x2f459d01
- (void)_didScroll;	// 0x2f514de9
- (void)_screenChanged:(id)changed;	// 0x2f723d8d
- (void)_updateForScreen:(id)screen;	// 0x2f45a165
- (unsigned)adjustedMaxTileCount;	// 0x2f723f3d
// converted property getter: - (BOOL)allowsPaintingAndScriptsWhilePanning;	// 0x2f723e65
- (void)dealloc;	// 0x2f51bdbd
- (void)drawImageIntoTiles:(CGImageRef)tiles;	// 0x2f723cad
// converted property getter: - (BOOL)drawsGrid;	// 0x2f723f35
- (void)dumpTiles;	// 0x2f723fe5
// converted property getter: - (BOOL)isTilingEnabled;	// 0x2f723f41
// converted property getter: - (BOOL)keepsZoomedOutTiles;	// 0x2f723fa1
- (void)layoutSubviews;	// 0x2f45dbb1
// converted property getter: - (BOOL)layoutTilesInMainThread;	// 0x2f724005
- (void)layoutTilesNow;	// 0x2f48ea01
- (void)layoutTilesNowForRect:(CGRect)rect;	// 0x2f723c6d
- (void)layoutTilesNowOnWebThread;	// 0x2f723c4d
- (void)lockTilingMode;	// 0x2f723e31
// converted property getter: - (BOOL)logsTilingChanges;	// 0x2f723f49
// converted property getter: - (unsigned)maxTileCount;	// 0x2f723f39
- (void)removeAllNonVisibleTiles;	// 0x2f48f2dd
- (void)removeAllTiles;	// 0x2f48a485
- (void)removeForegroundTiles;	// 0x2f723fc5
// converted property setter: - (void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)panning;	// 0x2f723e75
// converted property setter: - (void)setDrawsGrid:(BOOL)grid;	// 0x2f723f31
- (void)setInGesture:(int)gesture;	// 0x2f517ad1
// converted property setter: - (void)setKeepsZoomedOutTiles:(BOOL)tiles;	// 0x2f48a18d
// converted property setter: - (void)setLayoutTilesInMainThread:(BOOL)mainThread;	// 0x2f4f63e1
// converted property setter: - (void)setLogsTilingChanges:(BOOL)changes;	// 0x2f723f45
// converted property setter: - (void)setMaxTileCount:(unsigned)count;	// 0x2f45b921
- (void)setNeedsDisplay;	// 0x2f45d4a1
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x2f723ea1
- (void)setNeedsLayout;	// 0x2f45a0d5
// converted property setter: - (void)setTileDrawingEnabled:(BOOL)enabled;	// 0x2f723f4d
// converted property setter: - (void)setTileSize:(CGSize)size;	// 0x2f45b91d
// converted property setter: - (void)setTilesOpaque:(BOOL)opaque;	// 0x2f45bbf1
// converted property setter: - (void)setTilingArea:(int)area;	// 0x2f48a3d1
// converted property setter: - (void)setTilingEnabled:(BOOL)enabled;	// 0x2f45b925
- (void)setTransform:(CGAffineTransform)transform;	// 0x2f723edd
- (void)setWAKWindow:(id)window;	// 0x2f723be1
// converted property getter: - (BOOL)tileDrawingEnabled;	// 0x2f723f79
// converted property getter: - (CGSize)tileSize;	// 0x2f723f25
// converted property getter: - (BOOL)tilesOpaque;	// 0x2f723f7d
// converted property getter: - (int)tilingArea;	// 0x2f723e21
- (void)unlockTilingMode;	// 0x2f723e45
- (void)updateTilingMode;	// 0x2f48a409
- (CGRect)visibleRect;	// 0x2f723c1d
// converted property getter: - (id)wakWindow;	// 0x2f724015
- (void)willMoveToWindow:(id)window;	// 0x2f45d711
@end

