/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHParagraphStyle.h"


@interface GQHTextBox : GQHParagraphStyle {
}
+ (void)createExternalWrapSandbagStyles:(id)styles;	// 0x32d08189
+ (int)handleLayoutStorage:(id)storage state:(id)state;	// 0x32d07859
+ (int)handleShapeText:(id)text boundsRect:(CGRect)rect floating:(BOOL)floating state:(id)state;	// 0x32d07145
+ (void)mapLayout:(id)layout style:(id)style state:(id)state;	// 0x32d07a8d
+ (void)mapScaledImageFill:(id)fill style:(id)style size:(CGSize)size;	// 0x32d07fe1
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state;	// 0x32d07089
+ (const char *)name;	// 0x32d07a81
+ (int)outputInnerSandbagsForFrame:(CGRect)frame drawable:(id)drawable state:(id)state;	// 0x32d087cd
+ (int)outputInnerSandbagsForShape:(id)shape layoutStyle:(id)style state:(id)state;	// 0x32d08e1d
+ (void)outputSandbag:(id)sandbag state:(id)state;	// 0x32d08cb5
+ (int)outputWrapSandbagsForFrame:(CGRect)frame columnCount:(int)count drawable:(id)drawable state:(id)state;	// 0x32d08221
+ (BOOL)outputWrapSandbagsForFrame:(CGRect)frame columnCount:(int)count drawable:(id)drawable state:(id)state isPageFrame:(BOOL)frame5;	// 0x32d08261
+ (int)outputWrapSandbagsForShape:(id)shape layoutStyle:(id)style state:(id)state;	// 0x32d08ed5
+ (BOOL)styleNeedsImageFillMapping:(id)mapping;	// 0x32d07f75
@end

