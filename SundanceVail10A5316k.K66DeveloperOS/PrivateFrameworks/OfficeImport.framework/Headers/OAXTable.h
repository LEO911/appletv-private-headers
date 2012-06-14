/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXTable : NSObject {
}
+ (void)cacheTableStylesInPart:(id)part cache:(id)cache;	// 0x311389a5
+ (id)readCellBorderStyle:(xmlNode *)style drawingState:(id)state;	// 0x3113e2f9
+ (void)readCellFromXmlNode:(xmlNode *)xmlNode toCell:(id)cell drawingState:(id)state;	// 0x31194e79
+ (id)readCellPropertiesFromXmlNode:(xmlNode *)xmlNode drawingState:(id)state;	// 0x311950a9
+ (id)readCellStyle:(xmlNode *)style drawingState:(id)state;	// 0x3113e22d
+ (id)readDefaultTableStyleWithDrawingState:(id)drawingState;	// 0x3113d14d
+ (id)readFromXmlNode:(xmlNode *)xmlNode drawingState:(id)state;	// 0x3119452d
+ (void)readGridFromXmlNode:(xmlNode *)xmlNode toGrid:(id)grid;	// 0x31194a21
+ (int)readOnOffFlag:(id)flag;	// 0x3113f0b9
+ (id)readPartStyle:(xmlNode *)style drawingState:(id)state;	// 0x3113e14d
+ (void)readPropertiesFromXmlNode:(xmlNode *)xmlNode toProperties:(id)properties drawingState:(id)state;	// 0x31194659
+ (void)readRowFromXmlNode:(xmlNode *)xmlNode toRow:(id)row drawingState:(id)state;	// 0x31194ca9
+ (void)readRowsFromTableXmlNode:(xmlNode *)tableXmlNode toTable:(id)table drawingState:(id)state;	// 0x31194b4d
+ (id)readTableStyle:(xmlNode *)style drawingState:(id)state;	// 0x3113dd15
+ (id)readTextStyle:(xmlNode *)style drawingState:(id)state;	// 0x3113e91d
+ (id)readThemableEffectsFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x311b3901
+ (id)readThemableFillFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x3113e775
+ (id)readThemableStrokeFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x3113e4c9
@end
