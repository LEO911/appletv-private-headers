/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXFill : NSObject {
}
+ (id)pathGradientFillTypeEnumMap;	// 0x348dd6c1
+ (id)presetPatternFillTypeEnumMap;	// 0x349cb3d9
+ (id)readBlipRefFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state forBullet:(BOOL)bullet;	// 0x348eab35
+ (id)readFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x348dbce1
+ (id)readGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x348dbf79
+ (void)readGradientFillFromXmlNode:(xmlNode *)xmlNode toGradientFill:(id)gradientFill;	// 0x348dc135
+ (id)readGroupFillFromXmlNode:(xmlNode *)xmlNode;	// 0x34a56e6d
+ (id)readImageFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x348ea919
+ (id)readLinearGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x348dbfc9
+ (id)readNullFillFromXmlNode:(xmlNode *)xmlNode;	// 0x348ea709
+ (id)readPathGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x348dd3c9
+ (id)readPresetPatternFillFromXmlNode:(xmlNode *)xmlNode;	// 0x349cb24d
+ (id)readSolidFillFromXmlNode:(xmlNode *)xmlNode;	// 0x348dbdc9
+ (void)readStretch:(xmlNode *)stretch stretch:(id)stretch2;	// 0x348eab2d
+ (void)readTile:(xmlNode *)tile tile:(id)tile2;	// 0x34995b61
+ (id)tileFlipModeEnumMap;	// 0x349908a1
@end
