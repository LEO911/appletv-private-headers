/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import </libobjc.A.h>


@interface EBGraphic : NSObject {
}
+ (int)objectTypeForShape:(id)shape;	// 0x318c3371
+ (void)readChart:(id)chart chartIndex:(short)index state:(id)state;	// 0x317e8251
+ (id)readGraphicWithDictionary:(id)dictionary state:(id)state;	// 0x317b589d
+ (void)readGraphicsInChart:(id)chart state:(id)state;	// 0x317eadf9
+ (void)readGraphicsWithState:(id)state;	// 0x317a0ac1
+ (void)readImage:(id)image xlGraphicsInfo:(XlGraphicsInfo *)info state:(id)state;	// 0x3189e7b5
+ (id)readMainChartWithState:(id)state;	// 0x317e7ebd
+ (void)readNotesWithDictionary:(id)dictionary state:(id)state;	// 0x317a0ce9
+ (void)readOle:(id)ole xlGraphicsInfo:(XlGraphicsInfo *)info state:(id)state;	// 0x31805f65
@end
