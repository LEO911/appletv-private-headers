/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface WXCharacterProperties : NSObject {
}
+ (void)applyDeletionInsertionProperties:(id)properties state:(id)state;	// 0x3181a3e9
+ (void)initialize;	// 0x318117e1
+ (BOOL)readBooleanCharacterMultipleProperty:(xmlNode *)property propertyName:(const char *)name attributeName:(const char *)name3 outValue:(int *)value;	// 0x31812e65
+ (BOOL)readBooleanCharacterProperty:(xmlNode *)property propertyName:(const char *)name attributeName:(const char *)name3 outValue:(int *)value;	// 0x31812921
+ (void)readFrom:(xmlNode *)from to:(id)to state:(id)state;	// 0x3181190d
+ (void)readReflection:(id)reflection fromXmlNode:(xmlNode *)xmlNode;	// 0x31953779
+ (void)readShadowForTarget:(id)target fromXmlNode:(xmlNode *)xmlNode;	// 0x31953231
@end

