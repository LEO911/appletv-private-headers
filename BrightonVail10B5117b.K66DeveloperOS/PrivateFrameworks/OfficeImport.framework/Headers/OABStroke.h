/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface OABStroke : NSObject {
}
+ (int)readCapStyle:(int)style;	// 0x349f8585
+ (int)readCompoundType:(int)type;	// 0x349f8609
+ (int)readLineEndLength:(int)length;	// 0x349f8345
+ (int)readLineEndType:(int)type;	// 0x349f832d
+ (int)readLineEndWidth:(int)width;	// 0x349f8339
+ (id)readLineEndWithType:(int)type width:(int)width length:(int)length;	// 0x34c196b5
+ (int)readPresetDashStyle:(int)style;	// 0x349f813d
+ (id)readStrokeFromShapeBaseManager:(id)shapeBaseManager colorPalette:(id)palette;	// 0x349f70b5
+ (int)writeCapStyle:(int)style;	// 0x34c19c01
+ (int)writeCompoundType:(int)type;	// 0x34c19b91
+ (int)writeLineEndLength:(int)length;	// 0x34c19bf5
+ (int)writeLineEndType:(int)type;	// 0x34c19bdd
+ (int)writeLineEndWidth:(int)width;	// 0x34c19be9
+ (int)writePresetDashStyle:(int)style;	// 0x34c19b9d
+ (void)writePresetDashStyleForCustomDash:(id)customDash toStroke:(EshStroke *)stroke state:(id)state;	// 0x34c19c0d
+ (void)writeStroke:(id)stroke toStroke:(EshStroke *)stroke2 state:(id)state;	// 0x34c19755
@end

