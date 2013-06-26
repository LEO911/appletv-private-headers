/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import </libobjc.A.h>
#import "CoreUI-Structs.h"

@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject {
	CUIPSDLayerRef *_layerRef;	// 4 = 0x4
	BOOL _isVectorMask;	// 8 = 0x8
}
@property(readonly, retain) CUIPSDLayerRef *layerRef;	// G=0x3076e291; converted property
- (id)initLayerMaskWithLayerRef:(id)layerRef;	// 0x3076e17d
- (id)initVectorMaskWithLayerRef:(id)layerRef;	// 0x3076e1e1
- (CGRect)bounds;	// 0x3076e351
- (CGImageRef)createCGImageMask;	// 0x3076e641
- (void)dealloc;	// 0x3076e245
- (BOOL)isEnabled;	// 0x3076e2d9
- (BOOL)isInvertedWhenBlending;	// 0x3076e315
- (BOOL)isLinked;	// 0x3076e2a1
// converted property getter: - (id)layerRef;	// 0x3076e291
- (CGPathRef)newBezierPath;	// 0x3076e3fd
- (CGPathRef)newBezierPathAtScale:(float)scale;	// 0x3076e411
@end
