/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXBorders : NSObject {
}
+ (id)edBorderFromXmlElement:(xmlNode *)xmlElement diagonalType:(int)type state:(id)state;	// 0x328d78c9
+ (int)edBorderStyleFromXmlBorderStyleString:(id)xmlBorderStyleString;	// 0x328d79e9
+ (id)edBordersFromXmlBordersElement:(xmlNode *)xmlBordersElement state:(id)state;	// 0x328d7709
+ (int)edDiagStyleFromXmlElement:(xmlNode *)xmlElement;	// 0x328d7b75
@end
