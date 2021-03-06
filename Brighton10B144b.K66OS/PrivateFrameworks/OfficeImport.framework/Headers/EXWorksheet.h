/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXWorksheet : NSObject {
}
+ (id)edSheetWithState:(id)state;	// 0x3490ca91
+ (void)readColumnInfosFrom:(xmlNode *)from state:(id)state;	// 0x349847c1
+ (void)readCommentTextFrom:(id)from;	// 0x3490dcf1
+ (void)readConditionalFormattingsFrom:(xmlNode *)from state:(id)state;	// 0x34a329e9
+ (void)readDataValidationsFrom:(xmlNode *)from state:(id)state;	// 0x349b8dd1
+ (bool)readDistinctSheetElementsFrom:(xmlTextReader *)from state:(id)state;	// 0x3490e449
+ (void)readHyperlinksFrom:(xmlNode *)from state:(id)state;	// 0x34a32a4d
+ (void)readOleObjectsFrom:(xmlNode *)from state:(id)state;	// 0x349c7829
+ (void)readOtherSheetComponentsWithState:(id)state;	// 0x3490dcbd
+ (void)readPivotTables:(id)tables;	// 0x3490e085
+ (void)readTables:(id)tables;	// 0x3490ce59
+ (void)readWorksheetFormatPropertiesFrom:(xmlNode *)from state:(id)state;	// 0x3490eaa5
+ (void)readWorksheetViewsFrom:(xmlNode *)from state:(id)state;	// 0x3490e8fd
+ (void)setupProcessors:(id)processors;	// 0x3490cb1d
@end

