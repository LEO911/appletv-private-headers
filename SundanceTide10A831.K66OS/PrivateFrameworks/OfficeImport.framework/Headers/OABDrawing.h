/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface OABDrawing : NSObject {
}
+ (unsigned long)addShapeIdForObject:(id)object;	// 0x36c02a8d
+ (void)applyRulesFromSolverContainer:(id)solverContainer state:(id)state;	// 0x36a8e729
+ (id)createDrawingWithState:(id)state;	// 0x36c02b25
+ (void)finalizeWritingOfDrawing:(id)drawing state:(id)state;	// 0x36c03025
+ (id)readBackgroundPropertiesFromDrawing:(id)drawing state:(id)state;	// 0x36a38c81
+ (id)readDrawablesFromDrawing:(id)drawing state:(id)state;	// 0x369e9de5
+ (void)writeBackground:(id)background toDrawing:(id)drawing state:(id)state;	// 0x36c0313d
+ (void)writeConnectionsWithDrawing:(id)drawing state:(id)state;	// 0x36c02d71
+ (id)writeDrawables:(id)drawables background:(id)background state:(id)state;	// 0x36c03299
@end

