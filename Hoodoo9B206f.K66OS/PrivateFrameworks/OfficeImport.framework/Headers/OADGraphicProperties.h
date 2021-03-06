/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties3DParent.h"
#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class OADScene3D, OADStroke, OADFill, NSArray, OADShape3D;

__attribute__((visibility("hidden")))
@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
@private
	OADFill *mFill;	// 28 = 0x1c
	NSArray *mEffects;	// 32 = 0x20
	OADScene3D *mScene3D;	// 36 = 0x24
	OADShape3D *mShape3D;	// 40 = 0x28
	OADStroke *mStroke;	// 44 = 0x2c
	unsigned mHasIsBehindText : 1;	// 48 = 0x30
	unsigned mIsBehindText : 1;	// 48 = 0x30
}
@property(retain) id effects;	// G=0x343fc845; S=0x343f14fd; converted property
@property(retain) id fill;	// G=0x34376b75; S=0x343eea75; converted property
@property(assign) BOOL isBehindText;	// G=0x344bdafd; S=0x34432431; converted property
@property(retain) id scene3D;	// G=0x346172a9; S=0x344322a1; converted property
@property(retain) id shape3D;	// G=0x34617279; S=0x344323f1; converted property
@property(retain) id stroke;	// G=0x343774e9; S=0x343f10b9; converted property
- (id)initWithDefaults;	// 0x34431c8d
- (void)dealloc;	// 0x34400789
// converted property getter: - (id)effects;	// 0x343fc845
// converted property getter: - (id)fill;	// 0x34376b75
- (BOOL)hasEffects;	// 0x343fc80d
- (BOOL)hasFill;	// 0x34376ba5
- (BOOL)hasIsBehindText;	// 0x343fd1c9
- (BOOL)hasScene3D;	// 0x343fc875
- (BOOL)hasShape3D;	// 0x343fc8ad
- (BOOL)hasStroke;	// 0x34377519
- (unsigned)hash;	// 0x34617145
// converted property getter: - (BOOL)isBehindText;	// 0x344bdafd
- (BOOL)isEqual:(id)equal;	// 0x34616dd1
- (void)removeUnnecessaryOverrides;	// 0x343fc409
// converted property getter: - (id)scene3D;	// 0x346172a9
// converted property setter: - (void)setEffects:(id)effects;	// 0x343f14fd
// converted property setter: - (void)setFill:(id)fill;	// 0x343eea75
// converted property setter: - (void)setIsBehindText:(BOOL)text;	// 0x34432431
- (void)setParent:(id)parent;	// 0x3437e3bd
// converted property setter: - (void)setScene3D:(id)d;	// 0x344322a1
// converted property setter: - (void)setShape3D:(id)d;	// 0x344323f1
// converted property setter: - (void)setStroke:(id)stroke;	// 0x343f10b9
// converted property getter: - (id)shape3D;	// 0x34617279
// converted property getter: - (id)stroke;	// 0x343774e9
@end

