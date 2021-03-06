/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OABShapeBaseManager.h"
#import "OABPropertiesManager.h"


@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
	EshShape *mShape;	// 20 = 0x14
}
- (id)initWithShape:(EshShape *)shape;	// 0x33b91c31
- (id)initWithShape:(EshShape *)shape masterShape:(EshShape *)shape2;	// 0x3397639d
- (BOOL)hidden;	// 0x339bc599
- (BOOL)isFillOK;	// 0x339d2399
- (BOOL)isFilled;	// 0x3397641d
- (BOOL)isShadowOK;	// 0x33afb751
- (BOOL)isShadowed;	// 0x339ba39d
- (BOOL)isStrokeOK;	// 0x339d1f6d
- (BOOL)isStroked;	// 0x339ba2f9
- (BOOL)isTextPath;	// 0x339ba219
- (BOOL)textPathBold;	// 0x33a1cdd1
- (id)textPathFontFamily;	// 0x33a1cc9d
- (long)textPathFontSize;	// 0x33a1cd59
- (BOOL)textPathItalic;	// 0x33a1ce49
- (BOOL)textPathSmallcaps;	// 0x33a1cec1
- (BOOL)textPathStrikethrough;	// 0x33b91c95
- (int)textPathTextAlignment;	// 0x33a1c74d
- (BOOL)textPathUnderline;	// 0x33b91c45
- (id)textPathUnicodeString;	// 0x33a1c7d9
@end

