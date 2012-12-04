/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColorPalette.h"
#import "EDCollection.h"


@interface EDColorsCollection : EDCollection <OADColorPalette> {
	unsigned mDefaultColorsCount;	// 8 = 0x8
}
+ (bool)isSystemColorId:(unsigned)anId;	// 0x3793ae85
+ (int)oadSchemeColorIdFromThemeIndex:(int)themeIndex;	// 0x379ada75
+ (int)systemColorIdFromIndex:(unsigned)index;	// 0x3793ae99
+ (unsigned)xlColorIndexFromCPSystemColorIDEnum:(int)cpsystemColorIDEnum;	// 0x37acc7a5
- (id)initWithDefaultSetup:(bool)defaultSetup;	// 0x37937921
- (void)addColors:(const unsigned *)colors count:(unsigned long)count defaultColors:(const unsigned *)colors3 defaultCount:(unsigned)count4;	// 0x37940009
- (void)addDefaultPalette;	// 0x37acc7d1
- (unsigned)addOrEquivalentColorExcludingDefaults:(id)defaults;	// 0x37a147c1
- (void)addPalette:(const unsigned *)palette paletteSize:(unsigned long)size paletteX:(const unsigned *)x paletteXSize:(unsigned)size4;	// 0x3793feed
- (id)colorWithIndex:(unsigned)index;	// 0x37947f61
- (unsigned)defaultColorsCount;	// 0x37acc795
- (const unsigned *)defaultPalette;	// 0x3793fffd
- (void)setupDefaults;	// 0x3793797d
@end
