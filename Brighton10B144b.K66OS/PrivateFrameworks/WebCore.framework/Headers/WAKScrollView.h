/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCoreFrameScrollView.h"
#import "WebCore-Structs.h"
#import "WAKView.h"

@class WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
	WAKView *_documentView;	// 40 = 0x28
	WAKClipView *_contentView;	// 44 = 0x2c
	id _delegate;	// 48 = 0x30
	CGPoint _scrollOrigin;	// 52 = 0x34
}
@property(readonly, retain) WAKClipView *contentView;	// G=0x35c6e659; converted property
@property(assign) id delegate;	// G=0x35e80b89; S=0x35c5ebb1; converted property
@property(retain) WAKView *documentView;	// G=0x35c6f079; S=0x35c6efa5; converted property
@property(assign) BOOL drawsBackground;	// G=0x3648cf0d; S=0x35c5ebc1; converted property
@property(assign) BOOL hasHorizontalScroller;	// G=0x3648cf05; S=0x35c5ebd1; converted property
@property(assign) BOOL hasVerticalScroller;	// G=0x3648cefd; S=0x35c5ebc9; converted property
@property(assign) int horizontalScrollingMode;	// G=0x3648cf31; S=0x3648cf25; converted property
@property(readonly, assign) CGPoint scrollOrigin;	// G=0x35e91931; converted property
@property(assign) int verticalScrollingMode;	// G=0x3648cf35; S=0x3648cf29; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x35c5e629
- (id).cxx_construct;	// 0x35c5e621
- (void)_adjustScrollers;	// 0x35cb44e5
- (BOOL)_selfHandleEvent:(id)event;	// 0x3648cebd
- (CGRect)actualDocumentVisibleRect;	// 0x35e106ed
// converted property getter: - (id)contentView;	// 0x35c6e659
- (void)dealloc;	// 0x35e470b9
// converted property getter: - (id)delegate;	// 0x35e80b89
- (id)description;	// 0x3648d051
// converted property getter: - (id)documentView;	// 0x35c6f079
- (CGRect)documentVisibleRect;	// 0x35cbac31
- (void)drawRect:(CGRect)rect;	// 0x35ce7299
// converted property getter: - (BOOL)drawsBackground;	// 0x3648cf0d
// converted property getter: - (BOOL)hasHorizontalScroller;	// 0x3648cf05
// converted property getter: - (BOOL)hasVerticalScroller;	// 0x3648cefd
- (float)horizontalLineScroll;	// 0x3648cf19
// converted property getter: - (int)horizontalScrollingMode;	// 0x3648cf31
- (BOOL)inProgrammaticScroll;	// 0x3648d209
- (void)reflectScrolledClipView:(id)view;	// 0x3648cf1d
// converted property getter: - (CGPoint)scrollOrigin;	// 0x35e91931
- (void)scrollPoint:(CGPoint)point;	// 0x35e80a61
- (void)scrollWheel:(id)wheel;	// 0x3648cf79
- (void)scrollingModes:(int *)modes vertical:(int *)vertical;	// 0x35c700ad
- (void)setActualScrollPosition:(CGPoint)position;	// 0x35e80999
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35c5ebb1
// converted property setter: - (void)setDocumentView:(id)view;	// 0x35c6efa5
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x35c5ebc1
// converted property setter: - (void)setHasHorizontalScroller:(BOOL)scroller;	// 0x35c5ebd1
// converted property setter: - (void)setHasVerticalScroller:(BOOL)scroller;	// 0x35c5ebc9
// converted property setter: - (void)setHorizontalScrollingMode:(int)mode;	// 0x3648cf25
- (void)setLineScroll:(float)scroll;	// 0x35c5ec21
- (void)setScrollBarsSuppressed:(BOOL)suppressed repaintOnUnsuppress:(BOOL)unsuppress;	// 0x35cba6b1
- (void)setScrollOrigin:(CGPoint)origin updatePositionAtAll:(BOOL)all immediately:(BOOL)immediately;	// 0x3648cf3d
- (void)setScrollingMode:(int)mode;	// 0x3648cf2d
- (void)setScrollingModes:(int)modes vertical:(int)vertical andLock:(BOOL)lock;	// 0x35c702c1
// converted property setter: - (void)setVerticalScrollingMode:(int)mode;	// 0x3648cf29
- (float)verticalLineScroll;	// 0x3648cf15
// converted property getter: - (int)verticalScrollingMode;	// 0x3648cf35
@end
