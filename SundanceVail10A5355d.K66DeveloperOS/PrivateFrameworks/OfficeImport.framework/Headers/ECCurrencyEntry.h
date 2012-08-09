/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ECCurrencyEntry : NSObject {
	NSString *mLassoCurrencyCode;	// 4 = 0x4
	NSString *mXlLangId;	// 8 = 0x8
	NSString *mXlCurrencySymbol;	// 12 = 0xc
	bool mAppliesToExport;	// 16 = 0x10
	int mXlAccountingFormat;	// 20 = 0x14
}
+ (id)currencyWithLassoCode:(id)lassoCode langId:(int)anId xlSymbol:(id)symbol;	// 0x31da7679
+ (id)currencyWithLassoCode:(id)lassoCode langId:(int)anId xlSymbol:(id)symbol accountingFormat:(int)format;	// 0x31da76a9
+ (id)currencyWithLassoCode:(id)lassoCode langId:(int)anId xlSymbol:(id)symbol isExport:(bool)export;	// 0x31da76d9
+ (id)currencyWithLassoCode:(id)lassoCode langId:(int)anId xlSymbol:(id)symbol isExport:(bool)export accountingFormat:(int)format;	// 0x31da7705
- (id)initWithLassoCode:(id)lassoCode langId:(int)anId xlSymbol:(id)symbol isExport:(bool)export accountingFormat:(int)format;	// 0x31da7591
- (void)dealloc;	// 0x31da7769
@end
