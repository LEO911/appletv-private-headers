/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADStroke;

@interface OADTableCellBorderStyle : NSObject {
	OADStroke *mLeftStroke;	// 4 = 0x4
	OADStroke *mRightStroke;	// 8 = 0x8
	OADStroke *mTopStroke;	// 12 = 0xc
	OADStroke *mBottomStroke;	// 16 = 0x10
	OADStroke *mHorzInsideStroke;	// 20 = 0x14
	OADStroke *mVertInsideStroke;	// 24 = 0x18
	OADStroke *mTopLeftToBottomRightStroke;	// 28 = 0x1c
	OADStroke *mBottomLeftToTopRightStroke;	// 32 = 0x20
}
@property(retain) id bottomLeftToTopRightStroke;	// G=0x34c2e61d; S=0x34c2e62d; converted property
@property(retain) id bottomStroke;	// G=0x34b6f305; S=0x34b16fe9; converted property
@property(retain) id horzInsideStroke;	// G=0x34b6f315; S=0x34b17025; converted property
@property(retain) id leftStroke;	// G=0x34b6f335; S=0x34b16f35; converted property
@property(retain) id rightStroke;	// G=0x34b6f355; S=0x34b16f71; converted property
@property(retain) id topLeftToBottomRightStroke;	// G=0x34c2e5d1; S=0x34c2e5e1; converted property
@property(retain) id topStroke;	// G=0x34b6f2e5; S=0x34b16fad; converted property
@property(retain) id vertInsideStroke;	// G=0x34b6f365; S=0x34b17061; converted property
+ (id)defaultAxisParallelStroke;	// 0x34c2e669
+ (id)defaultObliqueStroke;	// 0x34c2e6c5
+ (id)defaultStyle;	// 0x34c2e6e1
- (void)applyOverridesFrom:(id)from;	// 0x34c2e9b9
// converted property getter: - (id)bottomLeftToTopRightStroke;	// 0x34c2e61d
// converted property getter: - (id)bottomStroke;	// 0x34b6f305
- (void)dealloc;	// 0x34b1ee21
// converted property getter: - (id)horzInsideStroke;	// 0x34b6f315
// converted property getter: - (id)leftStroke;	// 0x34b6f335
// converted property getter: - (id)rightStroke;	// 0x34b6f355
// converted property setter: - (void)setBottomLeftToTopRightStroke:(id)topRightStroke;	// 0x34c2e62d
// converted property setter: - (void)setBottomStroke:(id)stroke;	// 0x34b16fe9
// converted property setter: - (void)setHorzInsideStroke:(id)stroke;	// 0x34b17025
// converted property setter: - (void)setLeftStroke:(id)stroke;	// 0x34b16f35
// converted property setter: - (void)setRightStroke:(id)stroke;	// 0x34b16f71
// converted property setter: - (void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;	// 0x34c2e5e1
// converted property setter: - (void)setTopStroke:(id)stroke;	// 0x34b16fad
// converted property setter: - (void)setVertInsideStroke:(id)stroke;	// 0x34b17061
- (id)shallowCopy;	// 0x34c2e851
- (id)stroke:(int)stroke;	// 0x34c2e539
// converted property getter: - (id)topLeftToBottomRightStroke;	// 0x34c2e5d1
// converted property getter: - (id)topStroke;	// 0x34b6f2e5
// converted property getter: - (id)vertInsideStroke;	// 0x34b6f365
@end

