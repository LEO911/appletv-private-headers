/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface OAXColor : NSObject {
}
+ (id)presetColorEnumMap;	// 0x31823df5
+ (id)readColorFromNode:(xmlNode *)node;	// 0x316cf125
+ (id)readColorFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x316cf0d5
+ (id)readHslColorFromXmlNode:(xmlNode *)xmlNode;	// 0x318f7f71
+ (id)readPresetColorFromAttribute:(id)attribute;	// 0x31823cfd
+ (id)readPresetColorFromXmlNode:(xmlNode *)xmlNode;	// 0x31836ee5
+ (id)readSRgbColorFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute;	// 0x316d1359
+ (id)readScRgbColorFromXmlNode:(xmlNode *)xmlNode;	// 0x31845f2d
+ (id)readSchemeColorFromXmlNode:(xmlNode *)xmlNode;	// 0x316cf2b1
+ (id)readSystemColorFromAttribute:(id)attribute;	// 0x3180cd5d
+ (id)readSystemColorFromXmlNode:(xmlNode *)xmlNode;	// 0x3180cd1d
+ (id)schemeColorEnumMap;	// 0x316cf479
+ (id)systemColorEnumMap;	// 0x3180ce0d
@end
