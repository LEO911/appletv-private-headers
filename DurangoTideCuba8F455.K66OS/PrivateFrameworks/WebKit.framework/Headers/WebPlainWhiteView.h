/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebDocumentView.h"
#import "WebDocumentElement.h"


__attribute__((visibility("hidden")))
@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement> {
}
- (void)dataSourceUpdated:(id)updated;	// 0x3054160d
- (void)drawRect:(CGRect)rect;	// 0x3054162d
- (id)elementAtPoint:(CGPoint)point;	// 0x30541621
- (id)elementAtPoint:(CGPoint)point allowShadowContent:(BOOL)content;	// 0x30541625
- (void)layout;	// 0x30541615
- (void)setDataSource:(id)source;	// 0x30541609
- (void)setNeedsLayout:(BOOL)layout;	// 0x30541611
- (void)viewDidMoveToHostWindow;	// 0x3054161d
- (void)viewWillMoveToHostWindow:(id)view;	// 0x30541619
@end
