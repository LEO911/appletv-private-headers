/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CATiledLayer.h> // Unknown library
#import "CorePDF-Structs.h"

@class CALayer;

@interface UIPDFPageContentTiledLayer : CATiledLayer {
	CALayer *selectionLayer;	// 48 = 0x30
}
- (id)init;	// 0x34a2fe6d
- (void)dealloc;	// 0x34a2fd31
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x34a2fd5d
- (void)layoutSublayers;	// 0x34a2fd91
- (void)setNeedsDisplay;	// 0x34a2fe29
@end

