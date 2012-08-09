/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class ODDFillColorList;

@interface ODDColorTransformStyleLabel : NSObject {
	ODDFillColorList *mFillColors;	// 4 = 0x4
	ODDFillColorList *mLineColors;	// 8 = 0x8
	ODDFillColorList *mEffectColors;	// 12 = 0xc
	ODDFillColorList *mTextLineColors;	// 16 = 0x10
	ODDFillColorList *mTextFillColors;	// 20 = 0x14
	ODDFillColorList *mTextEffectColors;	// 24 = 0x18
}
@property(retain) id effectColors;	// G=0x31ce7aa1; S=0x31ce1b75; converted property
@property(retain) id fillColors;	// G=0x31ce7995; S=0x31ce1afd; converted property
@property(retain) id lineColors;	// G=0x31ce7a81; S=0x31ce1b39; converted property
@property(retain) id textEffectColors;	// G=0x31dc756d; S=0x31ce1c29; converted property
@property(retain) id textFillColors;	// G=0x31ce7ab1; S=0x31ce1bed; converted property
@property(retain) id textLineColors;	// G=0x31dc755d; S=0x31ce1bb1; converted property
- (void)applyToShapeStyle:(id)shapeStyle index:(unsigned)index count:(unsigned)count state:(id)state;	// 0x31ce7841
- (void)dealloc;	// 0x31ce991d
// converted property getter: - (id)effectColors;	// 0x31ce7aa1
// converted property getter: - (id)fillColors;	// 0x31ce7995
// converted property getter: - (id)lineColors;	// 0x31ce7a81
// converted property setter: - (void)setEffectColors:(id)colors;	// 0x31ce1b75
// converted property setter: - (void)setFillColors:(id)colors;	// 0x31ce1afd
// converted property setter: - (void)setLineColors:(id)colors;	// 0x31ce1b39
// converted property setter: - (void)setTextEffectColors:(id)colors;	// 0x31ce1c29
// converted property setter: - (void)setTextFillColors:(id)colors;	// 0x31ce1bed
// converted property setter: - (void)setTextLineColors:(id)colors;	// 0x31ce1bb1
// converted property getter: - (id)textEffectColors;	// 0x31dc756d
// converted property getter: - (id)textFillColors;	// 0x31ce7ab1
// converted property getter: - (id)textLineColors;	// 0x31dc755d
@end
