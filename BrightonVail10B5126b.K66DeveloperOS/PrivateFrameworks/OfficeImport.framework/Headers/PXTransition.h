/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PXTransition : NSObject {
}
+ (void)initialize;	// 0x3493cfbd
+ (int)readDirection:(xmlNode *)direction defaultValue:(int)value;	// 0x349a5109
+ (int)readInOut:(xmlNode *)anOut defaultValue:(int)value;	// 0x349a5175
+ (int)readOrientation:(xmlNode *)orientation attribute:(const char *)attribute defaultValue:(int)value;	// 0x349bf345
+ (int)readReverseDirection:(xmlNode *)direction defaultValue:(int)value;	// 0x349a5201
+ (void)readTransitionFromNode:(xmlNode *)node tgtTransition:(id)transition drawingState:(id)state;	// 0x3493d061
@end
