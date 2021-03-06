/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXBaseTypes : NSObject {
}
+ (float)readOptionalAngleFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x34f44be9
+ (float)readOptionalFractionFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x34f36821
+ (float)readOptionalLengthFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x34feed09
+ (long)readOptionalLongFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x34f36859
+ (CGPoint)readPoint2DFromXmlNode:(xmlNode *)xmlNode;	// 0x34f44b11
+ (id)readPoint3DFromXmlNode:(xmlNode *)xmlNode;	// 0x350afb51
+ (int)readRectAlignmentFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x34f36329
+ (id)readRelativeRectFromXmlNode:(xmlNode *)xmlNode;	// 0x34f36719
+ (float)readRequiredAngleFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x34fba371
+ (float)readRequiredFractionFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x34f352e9
+ (float)readRequiredLengthFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x34f44b61
+ (long)readRequiredLongFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x34f35321
+ (id)readRotation3DFromXmlNode:(xmlNode *)xmlNode;	// 0x34fba2c9
+ (CGSize)readSize2DFromXmlNode:(xmlNode *)xmlNode;	// 0x34f44b99
+ (id)readVector3DFromXmlNode:(xmlNode *)xmlNode;	// 0x350afaa9
+ (id)rectAlignmentEnumMap;	// 0x34fb4829
@end

