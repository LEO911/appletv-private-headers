/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "WAKResponder.h"

@class NSMutableSet;

@interface WAKView : WAKResponder {
	WKViewContext viewContext;	// 4 = 0x4
	WKView *viewRef;	// 28 = 0x1c
	NSMutableSet *subviewReferences;	// 32 = 0x20
	BOOL _isHidden;	// 36 = 0x24
	BOOL _drawsOwnDescendants;	// 37 = 0x25
}
@property(assign) unsigned autoresizingMask;	// G=0x31f9e1dd; S=0x31770229; converted property
@property(assign) CGRect frame;	// G=0x3176fafd; S=0x318ac8d5; converted property
@property(assign) BOOL needsDisplay;	// G=0x31f9e0b5; S=0x317d97f1; converted property
@property(retain) id nextKeyView;	// G=0x317c3f79; S=0x31770279; converted property
@property(assign) float scale;	// G=0x318fe5cd; S=0x317c6059; converted property
+ (void)_setInterpolationQuality:(int)quality;	// 0x317c5809
+ (id)_wrapperForViewRef:(WKView *)viewRef;	// 0x31f9deb5
+ (id)focusView;	// 0x31f9e0fd
- (id)init;	// 0x318861a1
- (id)initWithFrame:(CGRect)frame;	// 0x3176f341
- (id).cxx_construct;	// 0x3176f339
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x31f9e381
- (void)_drawRect:(CGRect)rect context:(CGContextRef)context lockFocus:(bool)focus;	// 0x317f923d
- (BOOL)_handleResponderCall:(int)call;	// 0x3180a815
- (id)_initWithViewRef:(WKView *)viewRef;	// 0x3176f421
- (void)_lockFocusViewInContext:(CGContextRef)context;	// 0x317f94e9
- (BOOL)_selfHandleEvent:(id)event;	// 0x319fce51
- (void)_setDrawsOwnDescendants:(BOOL)descendants;	// 0x317805d9
- (id)_subviewReferences;	// 0x317700d5
- (void)_unlockFocusViewInContext:(CGContextRef)context;	// 0x317ff0a9
- (WKView *)_viewRef;	// 0x3177004d
- (BOOL)accessibilityIsIgnored;	// 0x31a2aca1
- (void)addSubview:(id)subview;	// 0x3176fda5
// converted property getter: - (unsigned)autoresizingMask;	// 0x31f9e1dd
- (CGRect)bounds;	// 0x3178055d
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x317f2319
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x317f2fd5
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x31924af1
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x317eedf5
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x319fb411
- (void)dealloc;	// 0x318aeea5
- (id)description;	// 0x31f9e299
- (void)display;	// 0x31f9e0b9
- (void)displayIfNeeded;	// 0x31f9e0f9
- (void)displayRect:(CGRect)rect;	// 0x317f91d1
- (void)displayRectIgnoringOpacity:(CGRect)opacity;	// 0x31f9e141
- (void)displayRectIgnoringOpacity:(CGRect)opacity inContext:(CGContextRef)context;	// 0x31927ed5
- (void)drawRect:(CGRect)rect;	// 0x317f9605
// converted property getter: - (CGRect)frame;	// 0x3176fafd
- (void)frameSizeChanged;	// 0x317c609d
- (void)handleEvent:(id)event;	// 0x319fce09
- (id)hitTest:(CGPoint)test;	// 0x319fcc51
- (BOOL)inLiveResize;	// 0x31f9e1d5
- (void)invalidateGState;	// 0x317d587d
- (BOOL)isDescendantOf:(id)of;	// 0x3180bc31
- (id)lastScrollableAncestor;	// 0x31f9df41
- (void)layout;	// 0x31f9e291
- (void)layoutIfNeeded;	// 0x31f9e295
- (void)lockFocus;	// 0x31f9e169
- (BOOL)mouse:(CGPoint)mouse inRect:(CGRect)rect;	// 0x319fcd89
// converted property getter: - (BOOL)needsDisplay;	// 0x31f9e0b5
- (BOOL)needsPanelToBecomeKey;	// 0x31f9e1b5
// converted property getter: - (id)nextKeyView;	// 0x317c3f79
- (id)nextResponder;	// 0x31f9dea5
- (id)nextValidKeyView;	// 0x31f9e1c5
- (id)previousKeyView;	// 0x31f9e1c9
- (id)previousValidKeyView;	// 0x31f9e1bd
- (void)releaseGState;	// 0x31f9e1d1
- (void)removeFromSuperview;	// 0x3176fe39
// converted property getter: - (float)scale;	// 0x318fe5cd
- (void)scrollPoint:(CGPoint)point;	// 0x319a60a1
- (BOOL)scrollRectToVisible:(CGRect)visible;	// 0x31f9e1f5
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x31770229
- (void)setBoundsOrigin:(CGPoint)origin;	// 0x31f9e129
- (void)setBoundsSize:(CGSize)size;	// 0x317d57b9
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x318ac8d5
- (void)setFrameOrigin:(CGPoint)origin;	// 0x31f9e111
- (void)setFrameSize:(CGSize)size;	// 0x317c6131
- (void)setHidden:(BOOL)hidden;	// 0x3190f279
// converted property setter: - (void)setNeedsDisplay:(BOOL)display;	// 0x317d97f1
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x317d777d
- (void)setNeedsLayout:(BOOL)layout;	// 0x31f9e28d
// converted property setter: - (void)setNextKeyView:(id)view;	// 0x31770279
// converted property setter: - (void)setScale:(float)scale;	// 0x317c6059
- (id)subviews;	// 0x317f80cd
- (id)superview;	// 0x3176feb5
- (void)unlockFocus;	// 0x31f9e18d
- (void)viewDidMoveToWindow;	// 0x317c5c79
- (void)viewWillDraw;	// 0x317f8099
- (CGRect)visibleRect;	// 0x317cc53d
- (void)willRemoveSubview:(id)subview;	// 0x318af2fd
- (id)window;	// 0x317750fd
@end

