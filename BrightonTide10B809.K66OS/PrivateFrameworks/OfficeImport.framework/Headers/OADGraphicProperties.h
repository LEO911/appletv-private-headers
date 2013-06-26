/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"
#import "OADProperties3DParent.h"

@class OADStroke, OADScene3D, NSArray, OADShape3D, OADFill;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
	OADFill *mFill;	// 28 = 0x1c
	NSArray *mEffects;	// 32 = 0x20
	OADScene3D *mScene3D;	// 36 = 0x24
	OADShape3D *mShape3D;	// 40 = 0x28
	OADStroke *mStroke;	// 44 = 0x2c
	unsigned mHasIsBehindText : 1;	// 48 = 0x30
	unsigned mIsBehindText : 1;	// 48 = 0x30
}
@property(retain) id effects;	// G=0x3486deb1; S=0x3481ae8d; converted property
@property(retain) id fill;	// G=0x3486de15; S=0x3481ae51; converted property
@property(assign) BOOL isBehindText;	// G=0x349a60c5; S=0x3481b965; converted property
@property(retain) id scene3D;	// G=0x34a4f0b5; S=0x3481b7dd; converted property
@property(retain) id shape3D;	// G=0x34a4f0e5; S=0x3481b929; converted property
@property(retain) id stroke;	// G=0x3486df7d; S=0x3481b6fd; converted property
- (id)initWithDefaults;	// 0x3481a9fd
- (void)dealloc;	// 0x3481f6b1
// converted property getter: - (id)effects;	// 0x3486deb1
// converted property getter: - (id)fill;	// 0x3486de15
- (BOOL)hasEffects;	// 0x3486de7d
- (BOOL)hasFill;	// 0x3486dde1
- (BOOL)hasIsBehindText;	// 0x3486e52d
- (BOOL)hasScene3D;	// 0x3486dee1
- (BOOL)hasShape3D;	// 0x3486df15
- (BOOL)hasStroke;	// 0x3486df49
- (unsigned)hash;	// 0x34a4f115
// converted property getter: - (BOOL)isBehindText;	// 0x349a60c5
- (BOOL)isEqual:(id)equal;	// 0x34a4f229
- (void)removeUnnecessaryOverrides;	// 0x3486da51
// converted property getter: - (id)scene3D;	// 0x34a4f0b5
// converted property setter: - (void)setEffects:(id)effects;	// 0x3481ae8d
// converted property setter: - (void)setFill:(id)fill;	// 0x3481ae51
// converted property setter: - (void)setIsBehindText:(BOOL)text;	// 0x3481b965
- (void)setParent:(id)parent;	// 0x3481b99d
// converted property setter: - (void)setScene3D:(id)d;	// 0x3481b7dd
// converted property setter: - (void)setShape3D:(id)d;	// 0x3481b929
// converted property setter: - (void)setStroke:(id)stroke;	// 0x3481b6fd
// converted property getter: - (id)shape3D;	// 0x34a4f0e5
// converted property getter: - (id)stroke;	// 0x3486df7d
@end
