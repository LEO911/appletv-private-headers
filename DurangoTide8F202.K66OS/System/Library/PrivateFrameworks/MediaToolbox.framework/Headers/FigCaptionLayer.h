/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

#import <CALayer.h> // Unknown library
#import "MediaToolbox-Structs.h"

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : CALayer {
@private
	FigCaptionLayerPrivate *_priv;	// 48 = 0x30
}
- (id)init;	// 0x32008219
- (void)_renderer:(OpaqueFigCFCaptionRenderer *)renderer didChangeRows:(XXStruct_K5nmsA)rows;	// 0x32008651
- (void)dealloc;	// 0x32008465
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x32008999
- (void)finalize;	// 0x320084e9
- (void)layoutSublayers;	// 0x3200875d
- (void)processCaptionCommand:(unsigned)command data:(id)data;	// 0x32008629
- (void)resetCaptions;	// 0x32008539
- (void)setFontName:(const char *)name;	// 0x32008421
@end

