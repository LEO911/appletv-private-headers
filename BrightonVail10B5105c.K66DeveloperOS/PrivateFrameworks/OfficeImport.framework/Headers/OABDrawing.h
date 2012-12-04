/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface OABDrawing : NSObject {
}
+ (unsigned long)addShapeIdForObject:(id)object;	// 0x37adea8d
+ (void)applyRulesFromSolverContainer:(id)solverContainer state:(id)state;	// 0x3796a729
+ (id)createDrawingWithState:(id)state;	// 0x37adeb25
+ (void)finalizeWritingOfDrawing:(id)drawing state:(id)state;	// 0x37adf025
+ (id)readBackgroundPropertiesFromDrawing:(id)drawing state:(id)state;	// 0x37914c81
+ (id)readDrawablesFromDrawing:(id)drawing state:(id)state;	// 0x378c5de5
+ (void)writeBackground:(id)background toDrawing:(id)drawing state:(id)state;	// 0x37adf13d
+ (void)writeConnectionsWithDrawing:(id)drawing state:(id)state;	// 0x37aded71
+ (id)writeDrawables:(id)drawables background:(id)background state:(id)state;	// 0x37adf299
@end
