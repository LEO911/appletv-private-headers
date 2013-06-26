/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDDifferentialStyle, EDCollection;

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {
	EDCollection *mDifferentialStyles;	// 4 = 0x4
	int mType;	// 8 = 0x8
	unsigned mBandSize;	// 12 = 0xc
	EDDifferentialStyle *mDifferentialStyle;	// 16 = 0x10
}
@property(assign) unsigned bandSize;	// G=0x349b8725; S=0x34a30661; converted property
@property(retain) id differentialStyle;	// G=0x349b9359; S=0x3499bbf5; converted property
@property(assign) int type;	// G=0x34a30651; S=0x3499bb95; converted property
+ (id)tableStyleElementWithResources:(id)resources;	// 0x349c393d
- (id)initWithResources:(id)resources;	// 0x3499b7b5
// converted property getter: - (unsigned)bandSize;	// 0x349b8725
- (id)copyWithZone:(NSZone *)zone;	// 0x34a305f9
- (void)dealloc;	// 0x349a44a1
// converted property getter: - (id)differentialStyle;	// 0x349b9359
- (int)key;	// 0x3499bc39
// converted property setter: - (void)setBandSize:(unsigned)size;	// 0x34a30661
// converted property setter: - (void)setDifferentialStyle:(id)style;	// 0x3499bbf5
- (void)setDifferentialStyleWithIndex:(unsigned)index;	// 0x3499bbb9
// converted property setter: - (void)setType:(int)type;	// 0x3499bb95
// converted property getter: - (int)type;	// 0x34a30651
@end
