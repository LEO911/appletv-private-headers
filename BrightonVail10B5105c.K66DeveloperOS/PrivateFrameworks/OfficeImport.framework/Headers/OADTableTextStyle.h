/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject {
	OADFontReference *mFontReference;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
	int mBold;	// 12 = 0xc
	int mItalic;	// 16 = 0x10
}
@property(assign) int bold;	// G=0x37a38531; S=0x379e0a85; converted property
@property(retain) id color;	// G=0x37a38521; S=0x379e081d; converted property
@property(retain) id fontReference;	// G=0x37af7d31; S=0x379e0479; converted property
@property(assign) int italic;	// G=0x37af7d41; S=0x37af7d51; converted property
+ (int)defaultBold;	// 0x37af7e2d
+ (id)defaultColor;	// 0x37af7d61
+ (id)defaultFontReference;	// 0x37af7da9
+ (int)defaultItalic;	// 0x37af7e31
+ (id)defaultStyle;	// 0x37af7e35
- (id)init;	// 0x379e042d
- (void)applyOverridesFrom:(id)from;	// 0x37af7ff1
// converted property getter: - (int)bold;	// 0x37a38531
// converted property getter: - (id)color;	// 0x37a38521
- (void)dealloc;	// 0x379e7d59
// converted property getter: - (id)fontReference;	// 0x37af7d31
// converted property getter: - (int)italic;	// 0x37af7d41
// converted property setter: - (void)setBold:(int)bold;	// 0x379e0a85
// converted property setter: - (void)setColor:(id)color;	// 0x379e081d
// converted property setter: - (void)setFontReference:(id)reference;	// 0x379e0479
// converted property setter: - (void)setItalic:(int)italic;	// 0x37af7d51
- (id)shallowCopy;	// 0x37af7f21
@end

