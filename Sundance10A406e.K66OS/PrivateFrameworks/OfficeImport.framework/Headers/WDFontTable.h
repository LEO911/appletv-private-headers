/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class TSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {
	TSUNoCopyDictionary *mFontTable;	// 4 = 0x4
	NSMutableArray *mFontsInOrderOfInsertion;	// 8 = 0x8
}
- (id)init;	// 0x34f2ebc1
- (void)clear;	// 0x34f740b1
- (int)count;	// 0x35107b21
- (id)createFontWithName:(id)name;	// 0x34f2ed75
- (void)dealloc;	// 0x34f5f6d1
- (id)fontWithName:(id)name;	// 0x34f2f62d
- (id)fontWithName:(id)name create:(BOOL)create;	// 0x34f2ed29
- (id)fonts;	// 0x35107b41
@end

