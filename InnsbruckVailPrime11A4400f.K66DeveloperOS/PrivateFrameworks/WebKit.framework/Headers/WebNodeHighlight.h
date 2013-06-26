/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>
#import "WebKit-Structs.h"

@class WebNodeHighlightView, WebHighlightLayer, WAKView;

@interface WebNodeHighlight : NSObject {
	WAKView *_targetView;	// 4 = 0x4
	WebHighlightLayer *_highlightLayer;	// 8 = 0x8
	WebNodeHighlightView *_highlightView;	// 12 = 0xc
	InspectorController *_inspectorController;	// 16 = 0x10
	id _delegate;	// 20 = 0x14
}
@property(assign) id delegate;	// G=0x33987fdd; S=0x339880cd; converted property
@property(readonly, retain) WebNodeHighlightView *highlightView;	// G=0x339880bd; converted property
@property(readonly, assign) InspectorController *inspectorController;	// G=0x33988139; converted property
@property(readonly, retain) WAKView *targetView;	// G=0x33988129; converted property
- (id)initWithTargetView:(id)targetView inspectorController:(InspectorController *)controller;	// 0x33987dcd
- (void)attach;	// 0x33987f31
- (void)dealloc;	// 0x33987f05
// converted property getter: - (id)delegate;	// 0x33987fdd
- (void)detach;	// 0x33987fed
// converted property getter: - (id)highlightView;	// 0x339880bd
// converted property getter: - (InspectorController *)inspectorController;	// 0x33988139
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x339880cd
- (void)setNeedsDisplay;	// 0x339880dd
// converted property getter: - (id)targetView;	// 0x33988129
@end
