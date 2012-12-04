/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDFormula, NSString, EFTableData;
@protocol EFHelper;

@interface EFormula : NSObject {
	id<EFHelper> mHelper;	// 4 = 0x4
	EFLexer *mYylex;	// 8 = 0x8
	Class mFormulaClass;	// 12 = 0xc
	EDFormula *mFormula;	// 16 = 0x10
	EFTableData *mTableData;	// 20 = 0x14
	NSString *mErrMsg;	// 24 = 0x18
}
@property(assign) Class formulaClass;	// G=0x34b63de1; S=0x34b611a9; converted property
@property(retain) id formulaHelper;	// G=0x34b64775; S=0x34b611b9; converted property
@property(retain) id tableData;	// G=0x34bb1f3d; S=0x34bb1f4d; converted property
+ (id)singletonEFormula;	// 0x34b6114d
+ (id)stringToFormula:(id)formula formulaHelper:(id)helper formulaClass:(Class)aClass;	// 0x34b610f1
- (void)dealloc;	// 0x34b64da9
// converted property getter: - (Class)formulaClass;	// 0x34b63de1
// converted property getter: - (id)formulaHelper;	// 0x34b64775
- (unsigned)resolveFirstSheet:(id)sheet lastSheet:(id)sheet2;	// 0x34bb1f1d
- (unsigned)resolveName:(const char *)name;	// 0x34b7a329
- (unsigned)resolveSheet:(const char *)sheet isCurrentSheet:(BOOL *)sheet2;	// 0x34b7a765
- (id)resolveTable:(const char *)table sheetIndex:(unsigned *)index;	// 0x34b7a4d1
- (void)setFormula:(id)formula;	// 0x34b640fd
// converted property setter: - (void)setFormulaClass:(Class)aClass;	// 0x34b611a9
// converted property setter: - (void)setFormulaHelper:(id)helper;	// 0x34b611b9
// converted property setter: - (void)setTableData:(id)data;	// 0x34bb1f4d
- (id)stringToTokens:(id)tokens;	// 0x34b611f5
// converted property getter: - (id)tableData;	// 0x34bb1f3d
@end
