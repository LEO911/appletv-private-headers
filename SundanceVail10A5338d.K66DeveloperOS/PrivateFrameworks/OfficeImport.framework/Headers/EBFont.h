/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBFont : NSObject {
}
+ (int)convertEDScriptEnumToXl:(int)xl;	// 0x33b5d7f9
+ (int)convertEDUnderlineEnumToXl:(int)xl;	// 0x33b5d805
+ (int)convertXlScriptEnumToED:(int)ed;	// 0x339ea79d
+ (int)convertXlUnderlineEnumToED:(int)ed;	// 0x339ea7d1
+ (id)edFontFromXlDXfFont:(XlDXfFont *)xlDXfFont edResources:(id)resources;	// 0x33b5d6b5
+ (id)edFontFromXlFont:(XlFont *)xlFont edResources:(id)resources;	// 0x339e9fa5
@end

