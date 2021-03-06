/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import "CoreThemeDefinition-Structs.h"
#import "TDElementAttributes.h"
#import <CoreData/NSManagedObject.h>

@class TDThemeDrawingLayer, TDThemeIdiom, TDThemeState, TDThemePresentationState, TDThemeValue, TDThemeSize, TDThemeDirection, TDThemePart, TDThemeElement;

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes> {
	unsigned _dimension1;	// 48 = 0x30
	unsigned _dimension2;	// 52 = 0x34
	unsigned _scaleFactor;	// 56 = 0x38
	unsigned _subtype;	// 60 = 0x3c
	unsigned _nameIdentifier;	// 64 = 0x40
	renditionkeytoken _stackScratchKey[16];	// 68 = 0x44
	renditionkeytoken *_scratchKey;	// 132 = 0x84
}
@property(assign) unsigned dimension1;	// G=0x3072ba01; S=0x3072b9b5; converted property
@property(assign) unsigned dimension2;	// G=0x3072ba99; S=0x3072ba4d; converted property
@property(retain, nonatomic) TDThemeDirection *direction;	// @dynamic
@property(retain, nonatomic) TDThemeElement *element;	// @dynamic
@property(retain, nonatomic) TDThemeIdiom *idiom;	// @dynamic
@property(retain, nonatomic) TDThemeDrawingLayer *layer;	// @dynamic
@property(assign) unsigned nameIdentifier;	// G=0x3072bc61; S=0x3072bc15; converted property
@property(retain, nonatomic) TDThemePart *part;	// @dynamic
@property(retain, nonatomic) TDThemePresentationState *presentationState;	// @dynamic
@property(assign) unsigned scaleFactor;	// G=0x3072bb31; S=0x3072bae5; converted property
@property(retain) id scaleFactorString;	// G=0x3072bd41; S=0x3072bd81; converted property
@property(retain, nonatomic) TDThemeSize *size;	// @dynamic
@property(retain, nonatomic) TDThemeState *state;	// @dynamic
@property(assign) unsigned subtype;	// G=0x3072bbc9; S=0x3072bb7d; converted property
@property(retain, nonatomic) TDThemeValue *value;	// @dynamic
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3072bcad
- (int)attributeCount;	// 0x3072bf7d
- (void)copyAttributesInto:(id)into;	// 0x3072c6f5
- (id)copyDataFromAttributes;	// 0x3072d405
- (id)copyWithZone:(NSZone *)zone;	// 0x3072b9a5
- (id)dataFromAttributes;	// 0x3072c915
- (void)dealloc;	// 0x3072b961
- (id)debugDescription;	// 0x3072bdb1
// converted property getter: - (unsigned)dimension1;	// 0x3072ba01
// converted property getter: - (unsigned)dimension2;	// 0x3072ba99
- (void)getKey:(renditionkeytoken *)key;	// 0x3072c1d9
- (const renditionkeytoken *)key;	// 0x3072c3d1
- (id)keyDescription;	// 0x3072c435
- (const renditionkeyfmt *)keyFormat;	// 0x3072bf79
// converted property getter: - (unsigned)nameIdentifier;	// 0x3072bc61
// converted property getter: - (unsigned)scaleFactor;	// 0x3072bb31
// converted property getter: - (id)scaleFactorString;	// 0x3072bd41
- (void)setAttributesFromCopyData:(id)copyData;	// 0x3072d8f9
- (void)setAttributesFromData:(id)data;	// 0x3072ce05
- (void)setAttributesFromRenditionKey:(const renditionkeytoken *)renditionKey withDocument:(id)document;	// 0x3072bf95
// converted property setter: - (void)setDimension1:(unsigned)a1;	// 0x3072b9b5
// converted property setter: - (void)setDimension2:(unsigned)a2;	// 0x3072ba4d
// converted property setter: - (void)setNameIdentifier:(unsigned)identifier;	// 0x3072bc15
// converted property setter: - (void)setScaleFactor:(unsigned)factor;	// 0x3072bae5
// converted property setter: - (void)setScaleFactorString:(id)string;	// 0x3072bd81
// converted property setter: - (void)setSubtype:(unsigned)subtype;	// 0x3072bb7d
// converted property getter: - (unsigned)subtype;	// 0x3072bbc9
@end

