/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDWorkbook, EDResources, CPTracing;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EBState : NSObject {
@private
	XlLinkTable *mXlLinkTable;	// 4 = 0x4
	XlNameTable *mXlNameTable;	// 8 = 0x8
	ChVector<OcText> *mSheetNames;	// 12 = 0xc
	XlFormulaProcessor *mXlFormulaProcessor;	// 16 = 0x10
	EDWorkbook *mWorkbook;	// 20 = 0x14
	EDResources *mResources;	// 24 = 0x18
	id<OCCancelDelegate> mCancelDelegate;	// 28 = 0x1c
	CPTracing *mTracing;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x311d0425; @synthesize=mCancelDelegate
@property(retain) id resources;	// G=0x3109889d; S=0x31096611; converted property
@property(retain) id workbook;	// G=0x310a3fc1; S=0x31096601; converted property
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x310947a1
// declared property getter: - (id)cancelDelegate;	// 0x311d0425
- (void)dealloc;	// 0x310b8e7d
- (BOOL)isCancelled;	// 0x310a668d
// converted property getter: - (id)resources;	// 0x3109889d
// converted property setter: - (void)setResources:(id)resources;	// 0x31096611
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x31096601
- (ChVector<OcText> *)sheetNames;	// 0x3120f521
- (id)tracing;	// 0x310a7ef5
// converted property getter: - (id)workbook;	// 0x310a3fc1
- (XlFormulaProcessor *)xlFormulaProcessor;	// 0x310a1cad
- (XlLinkTable *)xlLinkTable;	// 0x310a1519
- (XlNameTable *)xlNameTable;	// 0x310a18dd
@end

