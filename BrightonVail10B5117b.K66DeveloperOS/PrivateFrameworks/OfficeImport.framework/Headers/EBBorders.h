/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EBBorders : NSObject {
}
+ (int)convertEDBorderEnumToXl:(int)xl;	// 0x34be3f09
+ (int)convertEDDiagonalEnumToXl:(int)xl;	// 0x34be3f59
+ (int)convertXlBorderEnumToED:(int)ed;	// 0x34a75399
+ (int)convertXlDiagStyleEnumToED:(int)ed;	// 0x34a754e1
+ (id)edBordersFromXlDXf:(XlDXf *)xlDXf edResources:(id)resources;	// 0x34be3cc5
+ (id)edBordersFromXlXf:(XlXf *)xlXf edResources:(id)resources;	// 0x34a751dd
@end
