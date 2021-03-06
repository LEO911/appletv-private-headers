/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"

@class NSMutableArray, WebNodeHighlight;

@interface WebNodeHighlightView : WAKView {
	WebNodeHighlight *_webNodeHighlight;	// 40 = 0x28
	NSMutableArray *_layers;	// 44 = 0x2c
}
@property(readonly, retain) WebNodeHighlight *webNodeHighlight;	// G=0x316ba83d; converted property
- (id)initWithWebNodeHighlight:(id)webNodeHighlight;	// 0x316b98c1
- (void)_attach:(id)attach numLayers:(unsigned)layers;	// 0x316b99f5
- (void)_layoutForNodeHighlight:(Highlight *)nodeHighlight parent:(id)parent;	// 0x316b9af5
- (void)_layoutForRectsHighlight:(Highlight *)rectsHighlight parent:(id)parent;	// 0x316ba575
- (void)_removeAllLayers;	// 0x316b97e5
- (void)dealloc;	// 0x316b9955
- (void)detachFromWebNodeHighlight;	// 0x316b99c5
- (BOOL)isFlipped;	// 0x316b99f1
- (void)layoutSublayers:(id)sublayers;	// 0x316ba67d
// converted property getter: - (id)webNodeHighlight;	// 0x316ba83d
@end

