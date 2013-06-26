/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EBWorkbook : NSObject {
}
+ (ChVector<OcText> *)createSheetNamesFromWorkbook:(id)workbook;	// 0x34a0c5f5
+ (void)readDocumentPresentation:(id)presentation state:(id)state;	// 0x3489326d
+ (void)readDocumentProperties:(id)properties state:(id)state;	// 0x34892fbd
+ (id)readWithState:(id)state reader:(id)reader;	// 0x34891251
+ (void)setupProcessors:(id)processors;	// 0x34892cd9
+ (int)xlSheetTypeEnumFromEDSheet:(id)edsheet;	// 0x34a0c76d
@end
