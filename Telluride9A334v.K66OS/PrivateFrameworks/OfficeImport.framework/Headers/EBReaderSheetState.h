/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDSheet, EBReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderSheetState : NSObject {
@private
	EBReaderState *mReaderState;	// 4 = 0x4
	EDSheet *mEDSheet;	// 8 = 0x8
	CFDictionaryRef mSharedFormulas;	// 12 = 0xc
	unsigned mChartIndex;	// 16 = 0x10
}
- (id)initWithReaderState:(id)readerState;	// 0x355c822d
- (void)dealloc;	// 0x355d82a1
- (id)edSheet;	// 0x355cc085
- (unsigned)nextChartIndex;	// 0x3564050d
- (id)readerState;	// 0x355c9371
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x355e695d
- (id)resources;	// 0x355ce255
- (void)setEDSheet:(id)sheet;	// 0x355c9391
- (void)setSharedFormulaIndex:(unsigned)index forRowCol:(int)rowCol;	// 0x3574c419
- (unsigned)sharedFormulaIndexForRowCol:(int)rowCol;	// 0x3574c42d
- (id)workbook;	// 0x3564c98d
- (XlBinaryReader *)xlReader;	// 0x355c95d9
@end
