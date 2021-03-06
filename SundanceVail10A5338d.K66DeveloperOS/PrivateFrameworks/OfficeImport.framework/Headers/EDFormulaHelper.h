/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EFHelper.h"
#import <NSObject.h> // Unknown library

@class EDWorkbook, EDWorksheet, ECMappingContext;

@interface EDFormulaHelper : NSObject <EFHelper> {
	EDWorkbook *mWorkbook;	// 4 = 0x4
	EDWorksheet *mWorksheet;	// 8 = 0x8
	int mRowNumber;	// 12 = 0xc
	int mColumnNumber;	// 16 = 0x10
	ECMappingContext *mMappingContext;	// 20 = 0x14
}
- (id)initWithWorkbook:(id)workbook worksheet:(id)worksheet rowNumber:(int)number columnNumber:(int)number4;	// 0x33ad96dd
- (int)columnNumber;	// 0x33b7e429
- (unsigned)createIndexWithType:(int)type firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x33af2f41
- (void)dealloc;	// 0x33adcc09
- (BOOL)isCurrentSheet:(id)sheet;	// 0x33af3125
- (bool)isThereContentOutsideOfLassoBoundsForRowMin:(unsigned)rowMin rowMax:(unsigned)max columnMin:(unsigned)min columnMax:(unsigned)max4;	// 0x33b0a229
- (unsigned)resolveFile:(id)file;	// 0x33b7e351
- (unsigned)resolveFirstSheet:(id)sheet lastSheet:(id)sheet2;	// 0x33b7e2e5
- (int)resolveFunctionName:(id)name;	// 0x33adce45
- (unsigned)resolveName:(id)name;	// 0x33af2a31
- (unsigned)resolveSheet:(id)sheet;	// 0x33af2e9d
- (id)resolveTable:(id)table;	// 0x33af2c09
- (unsigned)resolveTableColumn:(id)column columnName:(id)name;	// 0x33b7e379
- (unsigned)resolveTableToSheetId:(id)sheetId;	// 0x33b0a355
- (int)rowNumber;	// 0x33b7e419
- (id)workbook;	// 0x33b7e409
@end

