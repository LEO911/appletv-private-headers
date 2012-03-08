/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ECUtils : NSObject {
}
+ (id)dateFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x34dd69b9
+ (void)incrementFormulaCellCount:(unsigned *)count;	// 0x34d669f5
+ (void)incrementTotalCellCount:(unsigned *)count;	// 0x34c6fd09
+ (BOOL)isRenameFunction:(id)function;	// 0x34dd6f89
+ (bool)isValidDateTime:(double)time edWorkbook:(id)workbook;	// 0x34dd6a41
+ (id)lassoStyleTableReferenceFromTableId:(id)tableId;	// 0x34dd6989
+ (id)renameFunction:(id)function;	// 0x34dd6f51
+ (double)timeIntervalFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x34dd6aa5
@end
