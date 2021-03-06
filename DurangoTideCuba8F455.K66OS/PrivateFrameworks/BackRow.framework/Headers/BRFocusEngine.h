/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library


@interface BRFocusEngine : NSObject {
}
+ (BRFocusEdge)focusEdgeForEvent:(id)event elementPosition:(CGPoint)position elementBounds:(CGSize)bounds;	// 0x32fcf25d
+ (id)initalFocusForPoint:(CGPoint)point container:(id)container searchDownwardOnly:(BOOL)only;	// 0x32fceba1
+ (id)newFocusForCandidate:(id)candidate container:(id)container event:(id)event;	// 0x32fcea2d
+ (id)newFocusForEdge:(BRFocusEdge)edge currentCandidate:(id)candidate container:(id)container event:(id)event;	// 0x32fcedd5
+ (BRFocusEdge)oppositeFocusEdgeForEvent:(id)event elementPosition:(CGPoint)position elementBounds:(CGSize)bounds;	// 0x32fce995
@end

