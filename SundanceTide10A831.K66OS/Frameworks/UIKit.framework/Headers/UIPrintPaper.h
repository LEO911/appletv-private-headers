/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIPrintPaper : NSObject {
	int _paperOrientation;	// 4 = 0x4
	id _internal;	// 8 = 0x8
}
@property(readonly, assign) CGSize paperSize;	// G=0x31f3e705; 
@property(readonly, assign) CGRect printableRect;	// G=0x31f3e76d; 
+ (id)_defaultPKPaperForOuptutType:(int)ouptutType;	// 0x31f3e239
+ (id)_defaultPaperForOutputType:(int)outputType;	// 0x31f3e589
+ (id)_defaultPaperListForOutputType:(int)outputType;	// 0x31f3e3bd
+ (id)_paperListForPrinter:(id)printer withDuplexMode:(int)duplexMode;	// 0x31f3e109
+ (id)_readyPaperListForPrinter:(id)printer withDuplexMode:(int)duplexMode;	// 0x31f3de25
+ (id)_readyPaperListForPrinter:(id)printer withDuplexMode:(int)duplexMode forContentType:(int)contentType;	// 0x31f3df1d
+ (id)bestPaperForPageSize:(CGSize)pageSize withPapersFromArray:(id)array;	// 0x31f3d5b9
- (id)_initWithPrintKitPaper:(id)printKitPaper;	// 0x31f3e5e5
- (id)_localizedName;	// 0x31f3e9fd
- (int)_paperOrientation;	// 0x31f3ea2d
- (id)_pkPaper;	// 0x31f3e9a1
- (CGRect)_printableRectForDuplex:(BOOL)duplex;	// 0x31f3e87d
- (void)_setPaperOrientation:(int)orientation;	// 0x31f3ea1d
- (void)_updatePKPaper:(id)paper;	// 0x31f3e639
- (void)dealloc;	// 0x31f3e67d
- (id)description;	// 0x31f3e9b1
- (BOOL)isEqual:(id)equal;	// 0x31f3e6c9
// declared property getter: - (CGSize)paperSize;	// 0x31f3e705
- (CGRect)printRect;	// 0x31f3ea3d
// declared property getter: - (CGRect)printableRect;	// 0x31f3e76d
@end

