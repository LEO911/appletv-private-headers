/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

#import "MediaToolbox-Structs.h"
#import <NSObject.h> // Unknown library

@class FigCaptionRendererPrivate;

@interface FigCaptionRenderer : NSObject {
@private
	FigCaptionRendererPrivate *_priv;	// 4 = 0x4
}
@property(assign) id delegate;	// G=0x3205c751; S=0x3205c939; converted property
+ (CGRect)captionRectForRect:(CGRect)rect;	// 0x3205c6e1
+ (CGSize)cellSizeForRect:(CGRect)rect;	// 0x3205cce9
- (id)init;	// 0x3205ca85
- (void)_addCommandData:(id)data forRow:(unsigned)row;	// 0x3205c76d
- (void)dealloc;	// 0x3205c9b5
// converted property getter: - (id)delegate;	// 0x3205c751
- (void)drawRow:(unsigned)row inContext:(CGContextRef)context forRect:(CGRect)rect orientation:(int)orientation;	// 0x3205cd55
- (void)drawUnichar:(unsigned short)unichar color:(CGColorRef)color italics:(BOOL)italics underline:(BOOL)underline inRect:(CGRect)rect inContext:(CGContextRef)context orientation:(int)orientation;	// 0x3205cbb9
- (void)eraseCommandsForRow:(unsigned)row;	// 0x3205c7ad
- (void)finalize;	// 0x3205c9f1
- (BOOL)hasCommandsForRow:(unsigned)row;	// 0x3205c8a5
- (void)processCaptionCommand:(unsigned)command data:(id)data;	// 0x3205c7e9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3205c939
- (void)setFontName:(id)name;	// 0x3205c8e5
- (void)tearDown;	// 0x3205ca2d
@end
