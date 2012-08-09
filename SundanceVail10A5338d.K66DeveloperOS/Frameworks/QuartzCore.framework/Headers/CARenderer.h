/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CALayer, CAContext;
@protocol CARendererDelegate;

@interface CARenderer : NSObject {
	CARendererPriv *_priv;	// 4 = 0x4
}
@property(assign) CGRect bounds;	// G=0x3210fcd5; S=0x3210fcb5; 
@property(retain) CAContext *context;	// G=0x32110221; S=0x32110235; 
@property(assign) id<CARendererDelegate> delegate;	// G=0x3211031d; S=0x32110331; 
@property(retain) CALayer *layer;	// G=0x3210fc95; S=0x3210fc75; 
+ (id)rendererWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x3210fac5
- (id)_initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x3210f8d5
- (id)_initWithOptions:(id)options;	// 0x3210f7d1
- (void)addUpdateRect:(CGRect)rect;	// 0x3210ffa9
- (void)beginFrameAtTime:(double)time timeStamp:(XXStruct_soD7RD *)stamp;	// 0x3210fcf9
// declared property getter: - (CGRect)bounds;	// 0x3210fcd5
// declared property getter: - (id)context;	// 0x32110221
- (void)dealloc;	// 0x3210fb05
// declared property getter: - (id)delegate;	// 0x3211031d
- (void)endFrame;	// 0x3211015d
- (BOOL)hasMissingContent;	// 0x32110039
// declared property getter: - (id)layer;	// 0x3210fc95
- (double)nextFrameTime;	// 0x32110009
- (void)render;	// 0x32110059
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x3210fcb5
// declared property setter: - (void)setContext:(id)context;	// 0x32110235
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32110331
// declared property setter: - (void)setLayer:(id)layer;	// 0x3210fc75
- (CGRect)updateBounds;	// 0x3210fef1
@end
