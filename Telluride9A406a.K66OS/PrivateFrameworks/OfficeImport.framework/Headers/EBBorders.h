/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBBorders : NSObject {
}
+ (int)convertXlBorderEnumToED:(int)ed;	// 0x328fc735
+ (int)convertXlDiagStyleEnumToED:(int)ed;	// 0x328fc87d
+ (id)edBordersFromXlDXf:(XlDXf *)xlDXf edResources:(id)resources;	// 0x3292b9cd
+ (id)edBordersFromXlXf:(XlXf *)xlXf edResources:(id)resources;	// 0x328fc531
@end
